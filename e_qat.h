/* ====================================================================
 *
 *
 *   BSD LICENSE
 *
 *   Copyright(c) 2016-2017 Intel Corporation.
 *   All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in
 *       the documentation and/or other materials provided with the
 *       distribution.
 *     * Neither the name of Intel Corporation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 * ====================================================================
 */

/*****************************************************************************
 * @file e_qat.h
 *
 * This file provides and interface for an OpenSSL QAT engine implemenation
 *
 *****************************************************************************/

#ifndef E_QAT_H
# define E_QAT_H

# include <openssl/engine.h>
# include <sys/types.h>
# include <unistd.h>
# include <string.h>

# include "cpa.h"
# include "cpa_types.h"

# include "qat_aux.h"

# define QAT_RETRY_BACKOFF_MODULO_DIVISOR 8
# define QAT_INFINITE_MAX_NUM_RETRIES -1

# ifndef ERR_R_RETRY
#  define ERR_R_RETRY 57
# endif

#define likely(x)   __builtin_expect (!!(x), 1)
#define unlikely(x) __builtin_expect (!!(x), 0)

#define XSTR(x) #x
#define STR(x) XSTR(x)

/* Macro used to handle errors in qat_engine_ctrl() */
#define BREAK_IF(cond, mesg) \
    if (unlikely(cond)) { retVal = 0; WARN(mesg); break; }

#define QAT_QMEMFREE_BUFF(b) \
            do { \
                if (b != NULL) { \
                    qaeCryptoMemFree(b); \
                    b = NULL; \
                } \
            } while(0)

#define QAT_CLEANSE_FREE_BUFF(b,len) \
            do { \
                if (b != NULL) { \
                    OPENSSL_cleanse(b, len); \
                    OPENSSL_free(b); \
                    b = NULL; \
                } \
            } while(0)

#define QAT_CLEANSE_QMEMFREE_BUFF(b,len) \
            do { \
                if (b != NULL) { \
                    OPENSSL_cleanse(b, len); \
                    qaeCryptoMemFree(b); \
                    b = NULL; \
                } \
            } while(0)

#define QAT_CLEANSE_FLATBUFF(b) \
            OPENSSL_cleanse((b).pData, (b).dataLenInBytes)

#define QAT_QMEM_FREE_FLATBUFF(b) \
            qaeCryptoMemFree((b).pData)

#define QAT_CLEANSE_QMEMFREE_FLATBUFF(b) \
            do { \
                QAT_CLEANSE_FLATBUFF(b); \
                QAT_QMEM_FREE_FLATBUFF(b); \
            } while(0)

#define QAT_CHK_CLNSE_QMFREE_FLATBUFF(b) \
            do { \
                if ((b).pData != NULL) \
                    QAT_CLEANSE_QMEMFREE_FLATBUFF(b); \
            } while(0)

#define QAT_CHK_QMFREE_FLATBUFF(b) \
            do { \
                if ((b).pData != NULL) \
                    QAT_QMEM_FREE_FLATBUFF(b); \
            } while(0)

#define MAX_CRYPTO_INSTANCES 64

/* Behavior of qat_engine_finish_int */
#define QAT_RETAIN_GLOBALS 0
#define QAT_RESET_GLOBALS 1

/*
 * The default interval in nanoseconds used for the internal polling thread
 */
#define QAT_POLL_PERIOD_IN_NS 10000

/*
 * The number of retries of the nanosleep if it gets interrupted during
 * waiting between polling.
 */
#define QAT_CRYPTO_NUM_POLLING_RETRIES (5)

/*
 * The number of seconds to wait for a response back after submitting a
 * request before raising an error.
 */
#define QAT_CRYPTO_RESPONSE_TIMEOUT (5)

/*
 * The default timeout in milliseconds used for epoll_wait when event driven
 * polling mode is enabled.
 */
#define QAT_EPOLL_TIMEOUT_IN_MS 1000

/*
 * Max Length (bytes) of error string in human readable format
 */
#define QAT_MAX_ERROR_STRING 256

#define qat_atomic_inc(qat_int) \
    (__sync_add_and_fetch(&(qat_int), 1))
#define qat_atomic_dec(qat_int) \
    (__sync_sub_and_fetch(&(qat_int), 1))
#define qat_atomic_dec_if_polling(qat_int)   \
    if (qat_use_signals())                   \
        (__sync_sub_and_fetch(&(qat_int), 1))

/* Qat engine id declaration */
extern const char *engine_qat_id;
extern const char *engine_qat_name;

extern char *ICPConfigSectionName_libcrypto;

extern CpaInstanceHandle *qat_instance_handles;
extern Cpa16U qat_num_instances;
extern  pthread_key_t qatInstanceForThread;
extern pthread_t polling_thread;
extern int keep_polling;
extern int enable_external_polling;
extern int enable_inline_polling;
extern int enable_event_driven_polling;
extern int enable_instance_for_thread;
extern int qatPerformOpRetries;
extern int curr_inst;
extern pthread_mutex_t qat_instance_mutex;
extern pthread_mutex_t qat_engine_mutex;

extern unsigned int engine_inited;
extern unsigned int instance_started[MAX_CRYPTO_INSTANCES];
extern useconds_t qat_poll_interval;
extern int qat_epoll_timeout;
extern int qat_max_retry_count;
extern int num_requests_in_flight;
extern sigset_t set;
extern pthread_t timer_poll_func_thread;
extern int cleared_to_start;


/******************************************************************************
 * function:
 *         qat_use_signals(void)
 *
 * description:
 *   This function indicates whether pthread signals are being used for thread
 *   synchronisation.  If so, then a non-zero value is returned, else zero is
 *   returned.
 *
 ******************************************************************************/
int qat_use_signals(void);


/******************************************************************************
 * function:
 *         get_next_inst(void)
 *
 * description:
 *   Return the next instance handle to use for an operation.
 *
 ******************************************************************************/
CpaInstanceHandle get_next_inst(void);

/******************************************************************************
 * function:
 *         qat_engine_init(ENGINE *e)
 *
 * @param e [IN] - OpenSSL engine pointer
 *
 * description:
 *   Qat engine init function, associated with Crypto memory setup
 *   and cpaStartInstance setups.
 ******************************************************************************/
int qat_engine_init(ENGINE *e);

/******************************************************************************
 * function:
 *         qat_engine_finish(ENGINE *e)
 *
 * @param e [IN] - OpenSSL engine pointer
 *
 * description:
 *   Qat engine finish function with standard signature.
 *   This is a wrapper for qat_engine_finish_int that always resets all the
 *   global variables used to store the engine configuration.
 ******************************************************************************/
int qat_engine_finish(ENGINE *e);

/******************************************************************************
 * function:
 *         qat_engine_finish_int(ENGINE *e, int reset_globals)
 *
 * @param e [IN] - OpenSSL engine pointer
 * @param reset_globals [IN] - Whether reset the global configuration variables
 *
 * description:
 *   Internal Qat engine finish function.
 *   The value of reset_globals should be either QAT_RESET_GLOBALS or
 *   QAT_RETAIN_GLOBALS
 ******************************************************************************/
int qat_engine_finish_int(ENGINE *e, int reset_globals);

#endif   /* E_QAT_H */
