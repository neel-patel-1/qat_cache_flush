/* ====================================================================
 *
 *
 *   BSD LICENSE
 *
 *   Copyright(c) 2020-2022 Intel Corporation.
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
 * @file qat_sw_request.h
 *
 * This file provides the data structure for buffering mulibuff requests
 *
 *****************************************************************************/

#ifndef QAT_SW_REQUEST_H
# define QAT_SW_REQUEST_H

# include <stdio.h>
# include <stdint.h>
# include <openssl/async.h>
# include <openssl/bn.h>
# include <openssl/rsa.h>
# include <openssl/kdf.h>
# include <openssl/evp.h>
/* Crypto_mb includes */
#include "crypto_mb/sm3.h"

#define X25519_KEYLEN 32
#define MAX_KEYLEN  57

# pragma pack(push, 1)
typedef struct _sm3_context{
    int     msg_buff_idx;
    unsigned long long msg_len;
    unsigned char msg_buffer[SM3_MSG_BLOCK_SIZE];
    unsigned int msg_hash[SM3_SIZE_IN_WORDS];
} SM3_CTX_mb;
# pragma pack(pop)

typedef struct {
    unsigned char pubkey[MAX_KEYLEN];
    unsigned char *privkey;
} MB_ECX_KEY;

typedef struct _rsa_priv_op_data {
    struct _rsa_priv_op_data *next;
    struct _rsa_priv_op_data *prev;
    int type;
    int flen;
    const unsigned char * from;
    unsigned char padded_buf[512];
    unsigned char *to;
    unsigned char lenstra_to[512];
    const BIGNUM *d;
    const BIGNUM *e;
    const BIGNUM *n;
    const BIGNUM *p;
    const BIGNUM *q;
    const BIGNUM *dmp1;
    const BIGNUM *dmq1;
    const BIGNUM *iqmp;
    RSA *rsa;
    int padding;
    ASYNC_JOB *job;
    int *sts;
    int disable_lenstra_check;
} rsa_priv_op_data;

typedef struct _rsa_pub_op_data {
    struct _rsa_pub_op_data *next;
    struct _rsa_pub_op_data *prev;
    int type;
    int flen;
    const unsigned char *from;
    unsigned char padded_buf[512];
    unsigned char *to;
    const BIGNUM *e;
    const BIGNUM *n;
    RSA *rsa;
    int padding;
    ASYNC_JOB *job;
    int *sts;
} rsa_pub_op_data;

typedef struct _x25519_keygen_op_data {
    struct _x25519_keygen_op_data *next;
    struct _x25519_keygen_op_data *prev;
    EVP_PKEY *pkey;
    const unsigned char *privkey;
    unsigned char *pubkey;
    MB_ECX_KEY *key;
    ASYNC_JOB *job;
    int *sts;
} x25519_keygen_op_data;

typedef struct _x25519_derive_op_data {
    struct _x25519_derive_op_data *next;
    struct _x25519_derive_op_data *prev;
    unsigned char *key;
    const unsigned char *privkey;
    const unsigned char *pubkey;
    ASYNC_JOB *job;
    int *sts;
} x25519_derive_op_data;

typedef struct _ecdsa_sm2_sign_op_data {
    struct _ecdsa_sm2_sign_op_data *next;
    struct _ecdsa_sm2_sign_op_data *prev;
    unsigned char *sign_r;
    unsigned char *sign_s;
    const unsigned char *digest;
    const BIGNUM *eph_key;
    const BIGNUM *priv_key;
    const BIGNUM *x;
    const BIGNUM *y;
    const BIGNUM *z;
    unsigned char *id;
    int id_len;
    int dig_len;
    int id_set;
    ASYNC_JOB *job;
    int *sts;
} ecdsa_sm2_sign_op_data;

typedef struct _ecdsa_sm2_verify_op_data {
    struct _ecdsa_sm2_verify_op_data *next;
    struct _ecdsa_sm2_verify_op_data *prev;
    unsigned char *sign_r;
    unsigned char *sign_s;
    const unsigned char *digest;
    int dig_len;
    BIGNUM *x;
    BIGNUM *y;
    BIGNUM *z;
    const BIGNUM *priv_key;
    EC_GROUP *gen_group;
    unsigned char *id;
    int id_len;
    int id_set;
    ECDSA_SIG *s;
    ASYNC_JOB *job;
    int *sts;
} ecdsa_sm2_verify_op_data;

typedef struct _ecdsa_sign_op_data {
    struct _ecdsa_sign_op_data *next;
    struct _ecdsa_sign_op_data *prev;
    unsigned char *sign_r;
    unsigned char *sign_s;
    const unsigned char *digest;
    const BIGNUM *eph_key;
    const BIGNUM *priv_key;
    ASYNC_JOB *job;
    int *sts;
} ecdsa_sign_op_data;

typedef struct _ecdsa_sign_setup_op_data {
    struct _ecdsa_sign_setup_op_data *next;
    struct _ecdsa_sign_setup_op_data *prev;
    BIGNUM *k_inv;
    BIGNUM *sig_rp;
    const BIGNUM *eph_key;
    ASYNC_JOB *job;
    int *sts;
} ecdsa_sign_setup_op_data;

typedef struct _ecdsa_sign_sig_op_data {
    struct _ecdsa_sign_sig_op_data *next;
    struct _ecdsa_sign_sig_op_data *prev;
    unsigned char *sign_r;
    unsigned char *sign_s;
    const unsigned char *digest;
    const BIGNUM *sig_rp;
    const BIGNUM *k_inv;
    const BIGNUM *priv_key;
    ASYNC_JOB *job;
    int *sts;
} ecdsa_sign_sig_op_data;

typedef struct _ecdh_keygen_op_data {
    struct _ecdh_keygen_op_data *next;
    struct _ecdh_keygen_op_data *prev;
    BIGNUM *x;
    BIGNUM *y;
    BIGNUM *z;
    const BIGNUM *priv_key;
    ASYNC_JOB *job;
    int *sts;
} ecdh_keygen_op_data;

typedef struct _ecdh_compute_op_data {
    struct _ecdh_compute_op_data *next;
    struct _ecdh_compute_op_data *prev;
    unsigned char *shared_key;
    const BIGNUM *priv_key;
    const BIGNUM *x;
    const BIGNUM *y;
    const BIGNUM *z;
    ASYNC_JOB *job;
    int *sts;
} ecdh_compute_op_data;

typedef struct _sm3_init_op_data {
    struct _sm3_init_op_data *next;
    struct _sm3_init_op_data *prev;
    SM3_CTX_mb *state;
    ASYNC_JOB *job;
    int *sts;
} sm3_init_op_data;

typedef struct _sm3_update_op_data {
    struct _sm3_update_op_data *next;
    struct _sm3_update_op_data *prev;
    SM3_CTX_mb *state;
    const unsigned char *sm3_data;
    int sm3_len;
    ASYNC_JOB *job;
    int *sts;
} sm3_update_op_data;

typedef struct _sm3_final_op_data {
    struct _sm3_final_op_data *next;
    struct _sm3_final_op_data *prev;
    SM3_CTX_mb *state;
    unsigned char *sm3_hash;
    ASYNC_JOB *job;
    int *sts;
} sm3_final_op_data;

#endif /* QAT_SW_REQUEST_H */
