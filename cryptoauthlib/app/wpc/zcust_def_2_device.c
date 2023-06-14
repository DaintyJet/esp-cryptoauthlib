#include "atcacert/atcacert_def.h"
#include "zcust_def_1_signer.h"

const uint8_t g_template_2_device[316] = {
    0x30, 0x82, 0x01, 0x38, 0x30, 0x81, 0xde, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x08, 0x55, 0x3a,
    0x49, 0x4e, 0x6c, 0x8c, 0x47, 0xc6, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04,
    0x03, 0x02, 0x30, 0x12, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x07, 0x30,
    0x30, 0x34, 0x45, 0x2d, 0x31, 0x41, 0x30, 0x22, 0x18, 0x0f, 0x32, 0x30, 0x32, 0x31, 0x31, 0x32,
    0x32, 0x34, 0x30, 0x36, 0x30, 0x30, 0x30, 0x30, 0x5a, 0x18, 0x0f, 0x39, 0x39, 0x39, 0x39, 0x31,
    0x32, 0x33, 0x31, 0x32, 0x33, 0x35, 0x39, 0x35, 0x39, 0x5a, 0x30, 0x11, 0x31, 0x0f, 0x30, 0x0d,
    0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x06, 0x30, 0x31, 0x31, 0x34, 0x33, 0x30, 0x30, 0x59, 0x30,
    0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce,
    0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0x63, 0x91, 0xf3, 0x5a, 0x89, 0x09, 0x8c, 0x21,
    0x0b, 0x4a, 0x5f, 0xee, 0xa8, 0x0f, 0x78, 0xff, 0xd4, 0x4c, 0x24, 0x14, 0x08, 0x86, 0xe4, 0x91,
    0xa6, 0xcd, 0xe9, 0xf0, 0x11, 0x55, 0xab, 0x11, 0x76, 0xaf, 0xa5, 0xba, 0x0f, 0x99, 0x88, 0xd7,
    0x4b, 0x81, 0x2d, 0x6f, 0x03, 0xce, 0xb6, 0x40, 0xba, 0x51, 0x68, 0xff, 0xdc, 0x05, 0x8b, 0xd2,
    0x60, 0x67, 0x00, 0xce, 0xb0, 0x03, 0xaa, 0x69, 0xa3, 0x1b, 0x30, 0x19, 0x30, 0x17, 0x06, 0x05,
    0x67, 0x81, 0x14, 0x01, 0x02, 0x01, 0x01, 0xff, 0x04, 0x0b, 0x04, 0x09, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x30, 0x30, 0x30, 0x30, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03,
    0x02, 0x03, 0x49, 0x00, 0x30, 0x46, 0x02, 0x21, 0x00, 0xb7, 0xa3, 0xab, 0x33, 0x5d, 0x4d, 0x70,
    0xd4, 0x79, 0x5d, 0x03, 0x48, 0x73, 0xda, 0x5d, 0x7f, 0x45, 0x35, 0x19, 0x18, 0xf1, 0xd6, 0x1f,
    0x6d, 0xae, 0xd8, 0xc4, 0x36, 0x63, 0x38, 0xd7, 0xef, 0x02, 0x21, 0x00, 0x9d, 0x10, 0xf3, 0xf8,
    0x99, 0x67, 0xc8, 0x3d, 0xd2, 0x7e, 0x99, 0xc7, 0x60, 0x0f, 0xa9, 0xbe, 0x84, 0xcf, 0x9a, 0x15,
    0xa4, 0xdc, 0x5d, 0xc6, 0x2c, 0x1c, 0x5e, 0x6b, 0xbb, 0xd8, 0x14, 0x70,
};

const atcacert_cert_element_t g_cert_elements_2_device[2] = {
    {
        .id = "issuer",
        .device_loc ={
            .zone      = DEVZONE_DATA,
            .slot      = 5,
            .is_genkey = 0,
            .offset    = 25,
            .count     = 7
        },
        .cert_loc ={
            .offset = 47,
            .count  = 7
        },
        .transforms ={
            TF_NONE,
            TF_NONE
        }
    },
    {
        .id = "RSID",
        .device_loc ={
            .zone      = DEVZONE_DATA,
            .slot      = 5,
            .is_genkey = 0,
            .offset    = 1,
            .count     = 9
        },
        .cert_loc ={
            .offset = 220,
            .count  = 9
        },
        .transforms ={
            TF_NONE,
            TF_NONE
        }
    }
};

const atcacert_def_t g_cert_def_2_device = {
    .type                = CERTTYPE_X509,
    .template_id         = 2,
    .chain_id            = 3,
    .private_key_slot    = 0,
    .sn_source           = SNSRC_PUB_KEY_HASH,
    .cert_sn_dev_loc     = {
        .zone            = DEVZONE_NONE,
        .slot            = 0,
        .is_genkey       = 0,
        .offset          = 0,
        .count           = 0
    },
    .issue_date_format   = DATEFMT_RFC5280_GEN,
    .expire_date_format  = DATEFMT_RFC5280_GEN,
    .tbs_cert_loc        = {
        .offset          = 4,
        .count           = 225
    },
    .expire_years        = 0,
    .public_key_dev_loc  = {
        .zone            = DEVZONE_DATA,
        .slot            = 0,
        .is_genkey       = 1,
        .offset          = 0,
        .count           = 64
    },
    .comp_cert_dev_loc   = {
        .zone            = DEVZONE_DATA,
        .slot            = 13,
        .is_genkey       = 0,
        .offset          = 0,
        .count           = 72
    },
    .std_cert_elements   = {
        {   // STDCERT_PUBLIC_KEY
            .offset      = 136,
            .count       = 64
        },
        {   // STDCERT_SIGNATURE
            .offset      = 241,
            .count       = 64
        },
        {   // STDCERT_ISSUE_DATE
            .offset      = 58,
            .count       = 15
        },
        {   // STDCERT_EXPIRE_DATE
            .offset      = 0,
            .count       = 0
        },
        {   // STDCERT_SIGNER_ID
            .offset      = 0,
            .count       = 0
        },
        {   // STDCERT_CERT_SN
            .offset      = 14,
            .count       = 8
        },
        {   // STDCERT_AUTH_KEY_ID
            .offset      = 0,
            .count       = 0
        },
        {   // STDCERT_SUBJ_KEY_ID
            .offset      = 0,
            .count       = 0
        },
    },
    .cert_elements       = g_cert_elements_2_device,
    .cert_elements_count = sizeof(g_cert_elements_2_device) / sizeof(g_cert_elements_2_device[0]),
    .cert_template       = g_template_2_device,
    .cert_template_size  = sizeof(g_template_2_device),
    .ca_cert_def         = &g_cert_def_1_signer
};
