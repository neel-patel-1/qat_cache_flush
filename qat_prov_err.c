/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2023 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include "qat_prov_err.h"

#ifndef OPENSSL_NO_ERR

static ERR_STRING_DATA QAT_str_reasons[] = {
    {ERR_PACK(0, 0, QAT_R_AAD_INVALID_PTR), "aad invalid ptr"},
    {ERR_PACK(0, 0, QAT_R_AAD_LEN_INVALID), "aad len invalid"},
    {ERR_PACK(0, 0, QAT_R_AAD_MALLOC_FAILURE), "aad malloc failure"},
    {ERR_PACK(0, 0, QAT_R_ADD_M2_FAILURE), "add m2 failure"},
    {ERR_PACK(0, 0, QAT_R_ADJUST_DELTA_M1_M2_FAILURE),
    "adjust delta m1 m2 failure"},
    {ERR_PACK(0, 0, QAT_R_ALGO_TYPE_SUPPORTED), "algo type supported"},
    {ERR_PACK(0, 0, QAT_R_ALGO_TYPE_UNSUPPORTED), "algo type unsupported"},
    {ERR_PACK(0, 0, QAT_R_ALLOC_E_CHECK_FAILURE), "alloc e check failure"},
    {ERR_PACK(0, 0, QAT_R_ALLOC_MULTIBUFF_RSA_METH_FAILURE),
    "alloc multibuff rsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_ALLOC_QAT_DSA_METH_FAILURE),
    "alloc qat dsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_ALLOC_QAT_RSA_METH_FAILURE),
    "alloc qat rsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_ALLOC_QAT_X25519_METH_FAILURE),
    "alloc qat x25519 meth failure"},
    {ERR_PACK(0, 0, QAT_R_ALLOC_QAT_X448_METH_FAILURE),
    "alloc qat x448 meth failure"},
    {ERR_PACK(0, 0, QAT_R_ALLOC_TAG_FAILURE), "alloc tag failure"},
    {ERR_PACK(0, 0, QAT_R_BAD_INPUT_PARAMS), "bad input params"},
    {ERR_PACK(0, 0, QAT_R_BN_LIB_FAILURE), "bn lib failure"},
    {ERR_PACK(0, 0, QAT_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_PACK(0, 0, QAT_R_BUF_CONV_FAIL), "buf conv fail"},
    {ERR_PACK(0, 0, QAT_R_CAPABILITY_FAILURE), "capability failure"},
    {ERR_PACK(0, 0, QAT_R_CBC_OPERATION_FAILED), "cbc operation failed"},
    {ERR_PACK(0, 0, QAT_R_CHACHAPOLY_CTX_NULL), "chachapoly ctx null"},
    {ERR_PACK(0, 0, QAT_R_CIPHER_DATA_NULL), "cipher data null"},
    {ERR_PACK(0, 0, QAT_R_CIPHER_OPERATION_FAILED), "cipher operation failed"},
    {ERR_PACK(0, 0, QAT_R_CLOSE_READFD_FAILURE), "close readfd failure"},
    {ERR_PACK(0, 0, QAT_R_COMPUTE_FAILURE), "compute failure"},
    {ERR_PACK(0, 0, QAT_R_COMPUTE_H_MULTIPLY_Q_FAILURE),
    "compute h multiply q failure"},
    {ERR_PACK(0, 0, QAT_R_CP_BUF_MALLOC_FAILURE), "cp buf malloc failure"},
    {ERR_PACK(0, 0, QAT_R_CQ_BUF_MALLOC_FAILURE), "cq buf malloc failure"},
    {ERR_PACK(0, 0, QAT_R_CREATE_FREELIST_QUEUE_FAILURE),
    "create freelist queue failure"},
    {ERR_PACK(0, 0, QAT_R_CTX_MALLOC_FAILURE), "ctx malloc failure"},
    {ERR_PACK(0, 0, QAT_R_CTX_NULL), "ctx null"},
    {ERR_PACK(0, 0, QAT_R_CURVE_COORDINATE_PARAMS_CONVERT_TO_FB_FAILURE),
    "curve coordinate params convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_CURVE_DOES_NOT_SUPPORT_SIGNING),
    "curve does not support signing"},
    {ERR_PACK(0, 0, QAT_R_C_MODULO_P_FAILURE), "c modulo p failure"},
    {ERR_PACK(0, 0, QAT_R_C_MODULO_Q_FAILURE), "c modulo q failure"},
    {ERR_PACK(0, 0, QAT_R_C_P_Q_CP_CQ_MALLOC_FAILURE),
    "c p q cp cq malloc failure"},
    {ERR_PACK(0, 0, QAT_R_DEC_OP_DATA_MALLOC_FAILURE),
    "dec op data malloc failure"},
    {ERR_PACK(0, 0, QAT_R_DERIVE_FAILURE), "derive failure"},
    {ERR_PACK(0, 0, QAT_R_DGSTLEN_INVALID), "dgstlen invalid"},
    {ERR_PACK(0, 0, QAT_R_DGST_BN_CONV_FAILURE), "dgst bn conv failure"},
    {ERR_PACK(0, 0, QAT_R_DH_NULL), "dh null"},
    {ERR_PACK(0, 0, QAT_R_DINIT_OPERATION_FAILED), "dinit operation failed"},
    {ERR_PACK(0, 0, QAT_R_DLEN_INVALID), "dlen invalid"},
    {ERR_PACK(0, 0, QAT_R_DSA_DGST_NULL), "dsa dgst null"},
    {ERR_PACK(0, 0, QAT_R_DSA_DGST_SIG_NULL), "dsa dgst sig null"},
    {ERR_PACK(0, 0, QAT_R_ECDH_GET_AFFINE_COORD_FAILED),
    "ecdh get affine coord failed"},
    {ERR_PACK(0, 0, QAT_R_ECDH_GROUP_NULL), "ecdh group null"},
    {ERR_PACK(0, 0, QAT_R_ECDH_PRIVATE_KEY_NULL), "ecdh private key null"},
    {ERR_PACK(0, 0, QAT_R_ECDH_PRIV_KEY_PUB_KEY_NULL),
    "ecdh priv key pub key null"},
    {ERR_PACK(0, 0, QAT_R_ECDH_SET_AFFINE_COORD_FAILED),
    "ecdh set affine coord failed"},
    {ERR_PACK(0, 0, QAT_R_ECDH_UNKNOWN_FIELD_TYPE), "ecdh unknown field type"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_MALLOC_FAILURE), "ecdsa malloc failure"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_SIGN_FAILURE), "ecdsa sign failure"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_SIGN_NULL), "ecdsa sign null"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_SIGN_SETUP_FAILURE),
    "ecdsa sign setup failure"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_SIG_MALLOC_FAILURE),
    "ecdsa sig malloc failure"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_SIG_SET_R_S_FAILURE),
    "ecdsa sig set r s failure"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_VERIFY_FAILURE), "ecdsa verify failure"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_VERIFY_NULL), "ecdsa verify null"},
    {ERR_PACK(0, 0, QAT_R_ECKEY_GROUP_PUBKEY_SIG_NULL),
    "eckey group pubkey sig null"},
    {ERR_PACK(0, 0, QAT_R_EC_KEY_GROUP_PRIV_KEY_NULL),
    "ec key group priv key null"},
    {ERR_PACK(0, 0, QAT_R_EC_LIB), "ec lib"},
    {ERR_PACK(0, 0, QAT_R_EC_POINT_RETRIEVE_FAILURE),
    "ec point retrieve failure"},
    {ERR_PACK(0, 0, QAT_R_EINIT_OPERATION_FAILED), "einit operation failed"},
    {ERR_PACK(0, 0, QAT_R_ENC_OP_DATA_MALLOC_FAILURE),
    "enc op data malloc failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_CTRL_CMD_FAILURE), "engine ctrl cmd failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_INIT_FAILURE), "engine init failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_NULL), "engine null"},
    {ERR_PACK(0, 0, QAT_R_EPOLL_CREATE_FAILURE), "epoll create failure"},
    {ERR_PACK(0, 0, QAT_R_EPOLL_CTL_FAILURE), "epoll ctl failure"},
    {ERR_PACK(0, 0, QAT_R_EVENTS_MALLOC_FAILURE), "events malloc failure"},
    {ERR_PACK(0, 0, QAT_R_EVP_LIB), "evp lib"},
    {ERR_PACK(0, 0, QAT_R_FAILED_TO_GET_PARAMETER), "failed to get parameter"},
    {ERR_PACK(0, 0, QAT_R_FAILED_TO_SET_PARAMETER), "failed to set parameter"},
    {ERR_PACK(0, 0, QAT_R_FALLBACK_INIT_FAILURE), "fallback init failure"},
    {ERR_PACK(0, 0, QAT_R_FALLBACK_POINTER_NULL), "fallback pointer null"},
    {ERR_PACK(0, 0, QAT_R_FIELD_SIZE_INVALID), "field size invalid"},
    {ERR_PACK(0, 0, QAT_R_FREE_DH_METH_FAILURE), "free dh meth failure"},
    {ERR_PACK(0, 0, QAT_R_FREE_MULTIBUFF_RSA_METH_FAILURE),
    "free multibuff rsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_FREE_QAT_DSA_METH_FAILURE),
    "free qat dsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_FREE_QAT_RSA_METH_FAILURE),
    "free qat rsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_GCM_TAG_VERIFY_FAILURE), "gcm tag verify failure"},
    {ERR_PACK(0, 0, QAT_R_GET_COFACTOR_FAILURE), "get cofactor failure"},
    {ERR_PACK(0, 0, QAT_R_GET_FILE_DESCRIPTOR_FAILURE),
    "get file descriptor failure"},
    {ERR_PACK(0, 0, QAT_R_GET_GROUP_FAILURE), "get group failure"},
    {ERR_PACK(0, 0, QAT_R_GET_INSTANCE_FAILURE), "get instance failure"},
    {ERR_PACK(0, 0, QAT_R_GET_INSTANCE_INFO_FAILURE),
    "get instance info failure"},
    {ERR_PACK(0, 0, QAT_R_GET_NUM_INSTANCE_FAILURE),
    "get num instance failure"},
    {ERR_PACK(0, 0, QAT_R_GET_ORDER_FAILURE), "get order failure"},
    {ERR_PACK(0, 0, QAT_R_GET_PQG_FAILURE), "get pqg failure"},
    {ERR_PACK(0, 0, QAT_R_GET_PRIV_KEY_FAILURE), "get priv key failure"},
    {ERR_PACK(0, 0, QAT_R_GROUP_NULL), "group null"},
    {ERR_PACK(0, 0, QAT_R_GROUP_PRIV_KEY_PUB_KEY_NULL),
    "group priv key pub key null"},
    {ERR_PACK(0, 0, QAT_R_GROUP_PUB_KEY_NULL), "group pub key null"},
    {ERR_PACK(0, 0, QAT_R_H_CONVERT_TO_FB_FAILURE), "h convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_ICP_SAL_USERSTART_FAIL), "icp sal userstart fail"},
    {ERR_PACK(0, 0, QAT_R_ID_TOO_LARGE), "id too large"},
    {ERR_PACK(0, 0, QAT_R_INITIALIZE_CTX_FAILURE), "initialize ctx failure"},
    {ERR_PACK(0, 0, QAT_R_INIT_FAILURE), "init failure"},
    {ERR_PACK(0, 0, QAT_R_INPUT_DATA_MALLOC_FAILURE),
    "input data malloc failure"},
    {ERR_PACK(0, 0, QAT_R_INPUT_PARAM_INVALID), "input param invalid"},
    {ERR_PACK(0, 0, QAT_R_INSTANCE_HANDLE_MALLOC_FAILURE),
    "instance handle malloc failure"},
    {ERR_PACK(0, 0, QAT_R_INSTANCE_UNAVAILABLE), "instance unavailable"},
    {ERR_PACK(0, 0, QAT_R_INTERNAL_ERROR), "internal error"},
    {ERR_PACK(0, 0, QAT_R_INVALID_AAD), "invalid aad"},
    {ERR_PACK(0, 0, QAT_R_INVALID_ATTACHED_TAG), "invalid attached tag"},
    {ERR_PACK(0, 0, QAT_R_INVALID_CTRL_TYPE), "invalid ctrl type"},
    {ERR_PACK(0, 0, QAT_R_INVALID_CURVE), "invalid curve"},
    {ERR_PACK(0, 0, QAT_R_INVALID_DATA), "invalid data"},
    {ERR_PACK(0, 0, QAT_R_INVALID_HASH_DATA), "invalid hash data"},
    {ERR_PACK(0, 0, QAT_R_INVALID_INPUT), "invalid input"},
    {ERR_PACK(0, 0, QAT_R_INVALID_INPUT_LENGTH), "invalid input length"},
    {ERR_PACK(0, 0, QAT_R_INVALID_INPUT_PARAMETER), "invalid input parameter"},
    {ERR_PACK(0, 0, QAT_R_INVALID_IVLEN), "invalid ivlen"},
    {ERR_PACK(0, 0, QAT_R_INVALID_IV_LENGTH), "invalid iv length"},
    {ERR_PACK(0, 0, QAT_R_INVALID_KEY_LENGTH), "invalid key length"},
    {ERR_PACK(0, 0, QAT_R_INVALID_L), "invalid l"},
    {ERR_PACK(0, 0, QAT_R_INVALID_LEN), "invalid len"},
    {ERR_PACK(0, 0, QAT_R_INVALID_PEER_KEY), "invalid peer key"},
    {ERR_PACK(0, 0, QAT_R_INVALID_PRIVATE_KEY), "invalid private key"},
    {ERR_PACK(0, 0, QAT_R_INVALID_PTR), "invalid ptr"},
    {ERR_PACK(0, 0, QAT_R_INVALID_PTR_IV), "invalid ptr iv"},
    {ERR_PACK(0, 0, QAT_R_INVALID_PUB_KEY), "invalid pub key"},
    {ERR_PACK(0, 0, QAT_R_INVALID_QCTX_MEMORY), "invalid qctx memory"},
    {ERR_PACK(0, 0, QAT_R_INVALID_TAG), "invalid tag"},
    {ERR_PACK(0, 0, QAT_R_INVALID_TAG_LEN), "invalid tag len"},
    {ERR_PACK(0, 0, QAT_R_INVALID_TYPE), "invalid type"},
    {ERR_PACK(0, 0, QAT_R_IN_KINV_CONVERT_TO_FB_FAILURE),
    "in kinv convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_IN_R_CONVERT_TO_FB_FAILURE),
    "in r convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_IPSEC_MGR_NULL), "ipsec mgr null"},
    {ERR_PACK(0, 0, QAT_R_IV_ALLOC_FAILURE), "iv alloc failure"},
    {ERR_PACK(0, 0, QAT_R_IV_GEN_INVALID), "iv gen invalid"},
    {ERR_PACK(0, 0, QAT_R_IV_INVALID), "iv invalid"},
    {ERR_PACK(0, 0, QAT_R_IV_LEN_NOT_SUPPORTED), "iv len not supported"},
    {ERR_PACK(0, 0, QAT_R_IV_MALLOC_FAILURE), "iv malloc failure"},
    {ERR_PACK(0, 0, QAT_R_IV_NOTSET), "iv notset"},
    {ERR_PACK(0, 0, QAT_R_IV_NULL_PTR_INVALID), "iv null ptr invalid"},
    {ERR_PACK(0, 0, QAT_R_IV_NVALID), "iv nvalid"},
    {ERR_PACK(0, 0, QAT_R_KEYGEN_FAILURE), "keygen failure"},
    {ERR_PACK(0, 0, QAT_R_KEYS_NOT_SET), "keys not set"},
    {ERR_PACK(0, 0, QAT_R_KEY_IV_NOT_SET), "key iv not set"},
    {ERR_PACK(0, 0, QAT_R_KEY_MALLOC_FAILURE), "key malloc failure"},
    {ERR_PACK(0, 0, QAT_R_KEY_NOTSET), "key notset"},
    {ERR_PACK(0, 0, QAT_R_KEY_NULL), "key null"},
    {ERR_PACK(0, 0, QAT_R_K_ALLOCATE_FAILURE), "k allocate failure"},
    {ERR_PACK(0, 0, QAT_R_K_CONVERT_TO_FB_FAILURE), "k convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_K_E_ORDER_MALLOC_FAILURE),
    "k e order malloc failure"},
    {ERR_PACK(0, 0, QAT_R_K_ORDER_CONVERT_TO_FB_FAILURE),
    "k order convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_K_RAND_GENERATE_FAILURE), "k rand generate failure"},
    {ERR_PACK(0, 0, QAT_R_M1_DEDUCT_M2_FAILURE), "m1 deduct m2 failure"},
    {ERR_PACK(0, 0, QAT_R_M1_M2_P_Q_QINV_TMP_MALLOC_FAILURE),
    "m1 m2 p q qinv tmp malloc failure"},
    {ERR_PACK(0, 0, QAT_R_MALLOC_FAILURE), "malloc failure"},
    {ERR_PACK(0, 0, QAT_R_MAX_RETRIES_EXCEEDED), "max retries exceeded"},
    {ERR_PACK(0, 0, QAT_R_MB_FREE_EC_METHOD_FAILURE),
    "mb free ec method failure"},
    {ERR_PACK(0, 0, QAT_R_MB_GET_EC_METHOD_MALLOC_FAILURE),
    "mb get ec method malloc failure"},
    {ERR_PACK(0, 0, QAT_R_MODULO_P_FAILURE), "modulo p failure"},
    {ERR_PACK(0, 0, QAT_R_MOD_GET_NEXT_INST_FAIL), "mod get next inst fail"},
    {ERR_PACK(0, 0, QAT_R_MOD_LN_MOD_EXP_FAIL), "mod ln mod exp fail"},
    {ERR_PACK(0, 0, QAT_R_MOD_SETUP_ASYNC_EVENT_FAIL),
    "mod setup async event fail"},
    {ERR_PACK(0, 0, QAT_R_MSGLEN_NOTSET), "msglen notset"},
    {ERR_PACK(0, 0, QAT_R_MULTIPLY_QINV_FAILURE), "multiply qinv failure"},
    {ERR_PACK(0, 0, QAT_R_NID_NOT_SUPPORTED), "nid not supported"},
    {ERR_PACK(0, 0, QAT_R_NO_PARAMETERS_SET), "no parameters set"},
    {ERR_PACK(0, 0, QAT_R_N_E_CONVERT_TO_FB_FAILURE),
    "n e convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_N_E_NULL), "n e null"},
    {ERR_PACK(0, 0, QAT_R_OP1_BASE_PDATA_MALLOC_FAILURE),
    "op1 base pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OP2_BASE_PDATA_MALLOC_FAILURE),
    "op2 base pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_A_PDATA_MALLOC_FAILURE),
    "opdata a pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_DATA_MALLOC_FAILURE),
    "opdata data malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_D_MALLOC_FAILURE), "opdata d malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_E_MALLOC_FAILURE), "opdata e malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_K_MALLOC_FAILURE), "opdata k malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_MALLOC_FAILURE), "opdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_PDATA_MALLOC_FAILURE),
    "opdata pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_ZPDATA_MALLOC_FAILURE),
    "opdata zpdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDCRT_NULL), "opdcrt null"},
    {ERR_PACK(0, 0, QAT_R_OPDONE_NULL), "opdone null"},
    {ERR_PACK(0, 0, QAT_R_OPDPIPE_NULL), "opdpipe null"},
    {ERR_PACK(0, 0, QAT_R_ORDER_MALLOC_FAILURE), "order malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUT1_PDATA_MALLOC_FAILURE),
    "out1 pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUT2_PDATA_MALLOC_FAILURE),
    "out2 pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUTPUT_BUFFER_TOO_SMALL), "output buffer too small"},
    {ERR_PACK(0, 0, QAT_R_OUTPUT_BUF_MALLOC_FAILURE),
    "output buf malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUTPUT_BUF_PDATA_MALLOC_FAILURE),
    "output buf pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUTX_MALLOC_FAILURE), "outx malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUTX_OUTY_LEN_NULL), "outx outy len null"},
    {ERR_PACK(0, 0, QAT_R_OUTY_MALLOC_FAILURE), "outy malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PADDING_UNKNOWN), "padding unknown"},
    {ERR_PACK(0, 0, QAT_R_POLLING_THREAD_CREATE_FAILURE),
    "polling thread create failure"},
    {ERR_PACK(0, 0, QAT_R_POLLING_THREAD_SEM_INIT_FAILURE),
    "polling thread sem init failure"},
    {ERR_PACK(0, 0, QAT_R_POLLING_THREAD_SIGMASK_FAILURE),
    "polling thread sigmask failure"},
    {ERR_PACK(0, 0, QAT_R_POLL_INSTANCE_FAILURE), "poll instance failure"},
    {ERR_PACK(0, 0, QAT_R_POPDATA_A_PDATA_MALLOC_FAILURE),
    "popdata a pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_POPDATA_MALLOC_FAILURE), "popdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_POPDATA_PCURVE_MALLOC_FAILURE),
    "popdata pcurve malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PPV_MALLOC_FAILURE), "ppv malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PPV_PDATA_MALLOC_FAILURE),
    "ppv pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTR_MALLOC_FAILURE), "presultr malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTR_PDATA_MALLOC_FAILURE),
    "presultr pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTS_MALLOC_FAILURE), "presults malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTS_PDATA_MALLOC_FAILURE),
    "presults pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTX_MALLOC_FAILURE), "presultx malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTX_PDATA_MALLOC_FAILURE),
    "presultx pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTY_LENGTH_CHECK_FAILURE),
    "presulty length check failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTY_MALLOC_FAILURE), "presulty malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTY_PDATA_MALLOC_FAILURE),
    "presulty pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_DUPLICATE_FAILURE),
    "priv key duplicate failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_K_E_D_CONVERT_TO_FB_FAILURE),
    "priv key k e d convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_MALLOC_FAILURE), "priv key malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_M_XG_YG_A_B_P_CONVERT_TO_FB_FAILURE),
    "priv key m xg yg a b p convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_NULL), "priv key null"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_RAND_GENERATE_FAILURE),
    "priv key rand generate failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_XG_YG_A_B_P_CONVERT_TO_FB_FAILURE),
    "priv key xg yg a b p convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_XP_YP_A_B_P_CONVERT_TO_FB_FAILURE),
    "priv key xp yp a b p convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_PTHREAD_CREATE_FAILURE), "pthread create failure"},
    {ERR_PACK(0, 0, QAT_R_PTHREAD_GETAFFINITY_FAILURE),
    "pthread getaffinity failure"},
    {ERR_PACK(0, 0, QAT_R_PTHREAD_JOIN_FAILURE), "pthread join failure"},
    {ERR_PACK(0, 0, QAT_R_PTHREAD_SETAFFINITY_FAILURE),
    "pthread setaffinity failure"},
    {ERR_PACK(0, 0, QAT_R_PUB_KEY_DUPLICATE_FAILURE),
    "pub key duplicate failure"},
    {ERR_PACK(0, 0, QAT_R_PUB_KEY_MALLOC_FAILURE), "pub key malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PUB_KEY_NULL), "pub key null"},
    {ERR_PACK(0, 0, QAT_R_P_A_B_XG_YG_MALLOC_FAILURE),
    "p a b xg yg malloc failure"},
    {ERR_PACK(0, 0, QAT_R_P_A_B_XG_YG_M_K_R_ORDER_MALLOC_FAILURE),
    "p a b xg yg m k r order malloc failure"},
    {ERR_PACK(0, 0, QAT_R_P_A_B_XG_YG_XP_YP_M_ORDER_FAILURE),
    "p a b xg yg xp yp m order failure"},
    {ERR_PACK(0, 0, QAT_R_P_A_B_XP_YP_FAILURE), "p a b xp yp failure"},
    {ERR_PACK(0, 0, QAT_R_P_A_B_XP_YP_MALLOC_FAILURE),
    "p a b xp yp malloc failure"},
    {ERR_PACK(0, 0, QAT_R_P_G_PRIV_KEY_CONVERT_TO_FB_FAILURE),
    "p g priv key convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_P_PUB_PRIV_KEY_CONVERT_TO_FB_FAILURE),
    "p pub priv key convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_P_Q_DMP_DMQ_CONVERT_TO_FB_FAILURE),
    "p q dmp dmq convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_P_Q_DMP_DMQ_IQMP_NULL), "p q dmp dmq iqmp null"},
    {ERR_PACK(0, 0, QAT_R_P_Q_G_NULL), "p q g null"},
    {ERR_PACK(0, 0, QAT_R_P_Q_G_X_K_CONVERT_TO_FB_FAILURE),
    "p q g x k convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_P_Q_G_Y_Z_R_S_CONVERT_TO_FB_FAILURE),
    "p q g y z r s convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_ALLOC_DH_METH_FAILURE),
    "qat alloc dh meth failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_CREATE_ENGINE_FAILURE),
    "qat create engine failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_ECDSA_DO_SIGN_FAIL), "qat ecdsa do sign fail"},
    {ERR_PACK(0, 0, QAT_R_QAT_FREE_EC_METHOD_FAILURE),
    "qat free ec method failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_GET_EC_METHOD_MALLOC_FAILURE),
    "qat get ec method malloc failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_SET_DH_METH_FAILURE), "qat set dh meth failure"},
    {ERR_PACK(0, 0, QAT_R_QCTX_CTX_NULL), "qctx ctx null"},
    {ERR_PACK(0, 0, QAT_R_QCTX_NULL), "qctx null"},
    {ERR_PACK(0, 0, QAT_R_RAND_BYTES_FAILURE), "rand bytes failure"},
    {ERR_PACK(0, 0, QAT_R_RAND_FAILURE), "rand failure"},
    {ERR_PACK(0, 0, QAT_R_RAND_GENERATE_FAILURE), "rand generate failure"},
    {ERR_PACK(0, 0, QAT_R_RESULT_PDATA_ALLOC_FAIL), "result pdata alloc fail"},
    {ERR_PACK(0, 0, QAT_R_RETRIEVE_EC_POINT_FAILURE),
    "retrieve ec point failure"},
    {ERR_PACK(0, 0, QAT_R_RETRIEVE_ORDER_FAILURE), "retrieve order failure"},
    {ERR_PACK(0, 0, QAT_R_RSA_FROM_TO_NULL), "rsa from to null"},
    {ERR_PACK(0, 0, QAT_R_RSA_OUTPUT_BUF_PDATA_MALLOC_FAILURE),
    "rsa output buf pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_R_Q_COMPARE_FAILURE), "r q compare failure"},
    {ERR_PACK(0, 0, QAT_R_SECRET_KEY_MALLOC_FAILURE),
    "secret key malloc failure"},
    {ERR_PACK(0, 0, QAT_R_SECRET_KEY_PDATA_MALLOC_FAILURE),
    "secret key pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_SEM_POST_FAILURE), "sem post failure"},
    {ERR_PACK(0, 0, QAT_R_SETUP_ASYNC_EVENT_FAILURE),
    "setup async event failure"},
    {ERR_PACK(0, 0, QAT_R_SET_ADDRESS_TRANSLATION_FAILURE),
    "set address translation failure"},
    {ERR_PACK(0, 0, QAT_R_SET_FILE_DESCRIPTOR_NONBLOCKING_FAILURE),
    "set file descriptor nonblocking failure"},
    {ERR_PACK(0, 0, QAT_R_SET_INSTANCE_FAILURE), "set instance failure"},
    {ERR_PACK(0, 0, QAT_R_SET_MULTIBUFF_RSA_METH_FAILURE),
    "set multibuff rsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_SET_NOTIFICATION_CALLBACK_FAILURE),
    "set notification callback failure"},
    {ERR_PACK(0, 0, QAT_R_SET_POLLING_THREAD_AFFINITY_FAILURE),
    "set polling thread affinity failure"},
    {ERR_PACK(0, 0, QAT_R_SET_PRIV_KEY_FAILURE), "set priv key failure"},
    {ERR_PACK(0, 0, QAT_R_SET_QAT_DSA_METH_FAILURE),
    "set qat dsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_SET_QAT_RSA_METH_FAILURE),
    "set qat rsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_SET_TAG_INVALID_OP), "set tag invalid op"},
    {ERR_PACK(0, 0, QAT_R_SHA3_CTX_NULL), "sha3 ctx null"},
    {ERR_PACK(0, 0, QAT_R_SIG_GET_R_S_FAILURE), "sig get r s failure"},
    {ERR_PACK(0, 0, QAT_R_SIG_MALLOC_FAILURE), "sig malloc failure"},
    {ERR_PACK(0, 0, QAT_R_SM2_BAD_SIGNATURE), "sm2 bad signature"},
    {ERR_PACK(0, 0, QAT_R_SM2_ID_TOO_LARGE), "sm2 id too large"},
    {ERR_PACK(0, 0, QAT_R_SM2_INVALID_DIGEST), "sm2 invalid digest"},
    {ERR_PACK(0, 0, QAT_R_SM2_SIGN_NULL), "sm2 sign null"},
    {ERR_PACK(0, 0, QAT_R_SM2_SIG_GEN_MALLOC_FAILURE),
    "sm2 sig gen malloc failure"},
    {ERR_PACK(0, 0, QAT_R_SM2_SIG_MALLOC_FAILURE), "sm2 sig malloc failure"},
    {ERR_PACK(0, 0, QAT_R_SM2_SIG_SET_R_S_FAILURE), "sm2 sig set r s failure"},
    {ERR_PACK(0, 0, QAT_R_SM2_VERIFY_NULL), "sm2 verify null"},
    {ERR_PACK(0, 0, QAT_R_SM3_CTX_NULL), "sm3 ctx null"},
    {ERR_PACK(0, 0, QAT_R_SM3_FINAL_FAILURE), "sm3 final failure"},
    {ERR_PACK(0, 0, QAT_R_SM3_INIT_FAILURE), "sm3 init failure"},
    {ERR_PACK(0, 0, QAT_R_SM3_UPDATE_FAILURE), "sm3 update failure"},
    {ERR_PACK(0, 0, QAT_R_SM4_CCM_DECRYPT_FAILURE), "sm4 ccm decrypt failure"},
    {ERR_PACK(0, 0, QAT_R_SM4_GCM_DECRYPT_FAILURE), "sm4 gcm decrypt failure"},
    {ERR_PACK(0, 0, QAT_R_SM4_GCM_ENCRYPT_FAILURE), "sm4 gcm encrypt failure"},
    {ERR_PACK(0, 0, QAT_R_SM4_GET_INSTANCE_FAILED), "sm4 get instance failed"},
    {ERR_PACK(0, 0, QAT_R_SM4_GET_SESSIONCTX_SIZE_FAILED),
    "sm4 get sessionctx size failed"},
    {ERR_PACK(0, 0, QAT_R_SM4_MALLOC_FAILED), "sm4 malloc failed"},
    {ERR_PACK(0, 0, QAT_R_SM4_NO_QAT_INSTANCE_AVAILABLE),
    "sm4 no qat instance available"},
    {ERR_PACK(0, 0, QAT_R_SM4_NULL_CKEY), "sm4 null ckey"},
    {ERR_PACK(0, 0, QAT_R_SM4_NULL_CTX), "sm4 null ctx"},
    {ERR_PACK(0, 0, QAT_R_SM4_NULL_CTX_OR_KEY), "sm4 null ctx or key"},
    {ERR_PACK(0, 0, QAT_R_SM4_NULL_POINTER), "sm4 null pointer"},
    {ERR_PACK(0, 0, QAT_R_SM4_NULL_QCTX), "sm4 null qctx"},
    {ERR_PACK(0, 0, QAT_R_SM4_QAT_CONTEXT_NOT_INITIALISED),
    "sm4 qat context not initialised"},
    {ERR_PACK(0, 0, QAT_R_SM4_QAT_INITSESSION_FAILED),
    "sm4 qat initsession failed"},
    {ERR_PACK(0, 0, QAT_R_SM4_QAT_SUBMIT_REQUEST_FAILED),
    "sm4 qat submit request failed"},
    {ERR_PACK(0, 0, QAT_R_SM4_REMOVE_SESSION_FAILED),
    "sm4 remove session failed"},
    {ERR_PACK(0, 0, QAT_R_SM4_SETUP_META_DATA_FAILED),
    "sm4 setup meta data failed"},
    {ERR_PACK(0, 0, QAT_R_SM4_SET_METHODS_FAILED), "sm4 set methods failed"},
    {ERR_PACK(0, 0, QAT_R_SSD_MALLOC_FAILURE), "ssd malloc failure"},
    {ERR_PACK(0, 0, QAT_R_SSD_NULL), "ssd null"},
    {ERR_PACK(0, 0, QAT_R_START_INSTANCE_FAILURE), "start instance failure"},
    {ERR_PACK(0, 0, QAT_R_STOP_INSTANCE_FAILURE), "stop instance failure"},
    {ERR_PACK(0, 0, QAT_R_SW_GET_COMPUTE_KEY_PFUNC_NULL),
    "sw get compute key pfunc null"},
    {ERR_PACK(0, 0, QAT_R_SW_GET_KEYGEN_PFUNC_NULL),
    "sw get keygen pfunc null"},
    {ERR_PACK(0, 0, QAT_R_SW_GET_SIGN_PFUNC_NULL), "sw get sign pfunc null"},
    {ERR_PACK(0, 0, QAT_R_SW_GET_SIGN_SETUP_PFUNC_NULL),
    "sw get sign setup pfunc null"},
    {ERR_PACK(0, 0, QAT_R_SW_GET_SIGN_SIG_PFUNC_NULL),
    "sw get sign sig pfunc null"},
    {ERR_PACK(0, 0, QAT_R_SW_GET_VERIFY_PFUNC_NULL),
    "sw get verify pfunc null"},
    {ERR_PACK(0, 0, QAT_R_SW_GET_VERIFY_SIG_PFUNC_NULL),
    "sw get verify sig pfunc null"},
    {ERR_PACK(0, 0, QAT_R_SW_METHOD_NULL), "sw method null"},
    {ERR_PACK(0, 0, QAT_R_S_NULL), "s null"},
    {ERR_PACK(0, 0, QAT_R_S_Q_COMPARE_FAILURE), "s q compare failure"},
    {ERR_PACK(0, 0, QAT_R_TAG_NOTSET), "tag notset"},
    {ERR_PACK(0, 0, QAT_R_TAG_NOT_NEEDED), "tag not needed"},
    {ERR_PACK(0, 0, QAT_R_UNKNOWN_PADDING), "unknown padding"},
    {ERR_PACK(0, 0, QAT_R_UNKNOWN_PADDING_TYPE), "unknown padding type"},
    {ERR_PACK(0, 0, QAT_R_WAKE_PAUSE_JOB_FAILURE), "wake pause job failure"},
    {ERR_PACK(0, 0, QAT_R_X_Y_E_MALLOC_FAILURE), "x y e malloc failure"},
    {ERR_PACK(0, 0, QAT_R_X_Y_TX_TY_BN_MALLOC_FAILURE),
    "x y tx ty bn malloc failure"},
    {ERR_PACK(0, 0, QAT_R_X_Y_Z_MALLOC_FAILURE), "x y z malloc failure"},
    {ERR_PACK(0, 0, QAT_R_ZALLOC_FAILURE), "zalloc failure"},
    {ERR_PACK(0, 0, QAT_R_Z_ALLOCATE_FAILURE), "z allocate failure"},
    {0, NULL}
};

#endif

static int lib_code = 0;
static int error_loaded = 0;

int ERR_load_QAT_strings(void)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();

    if (!error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(lib_code, QAT_str_reasons);
#endif
        error_loaded = 1;
    }
    return 1;
}

void ERR_unload_QAT_strings(void)
{
    if (error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(lib_code, QAT_str_reasons);
#endif
        error_loaded = 0;
    }
}

void ERR_QAT_error(int function, int reason, const char *file, int line)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();
    ERR_raise(lib_code, reason);
    ERR_set_debug(file, line, NULL);
}
