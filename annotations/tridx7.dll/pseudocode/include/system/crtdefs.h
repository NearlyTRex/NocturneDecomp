#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// CRTDEFS - System Header
// =============================================================================

// Typedef: _locale_t
// pointer to localeinfo_struct
typedef struct localeinfo_struct* _locale_t;

// Typedef: errno_t
// Signed Integer (compiler-specific size)
typedef int errno_t;

// Structure: lconv
#pragma pack(push, 8)
typedef struct lconv {
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t* _W_decimal_point;
    wchar_t* _W_thousands_sep;
    wchar_t* _W_int_curr_symbol;
    wchar_t* _W_currency_symbol;
    wchar_t* _W_mon_decimal_point;
    wchar_t* _W_mon_thousands_sep;
    wchar_t* _W_positive_sign;
    wchar_t* _W_negative_sign;
} __attribute__((aligned(4))) lconv;
#pragma pack(pop)

// Structure: localerefcount
#pragma pack(push, 8)
typedef struct localerefcount {
    char* locale;
    wchar_t* wlocale;
    int* refcount;
    int* wrefcount;
} __attribute__((aligned(4))) localerefcount;
#pragma pack(pop)

// Typedef: locrefcount
typedef localerefcount locrefcount;

// Typedef: pthreadlocinfo
// pointer to threadlocaleinfostruct
typedef struct threadlocaleinfostruct* pthreadlocinfo;

// Typedef: pthreadmbcinfo
// pointer to threadmbcinfostruct
typedef struct threadmbcinfostruct* pthreadmbcinfo;

// Typedef: size_t
// Unsigned Integer (compiler-specific size)
typedef uint size_t;

// Structure: threadlocaleinfostruct
#pragma pack(push, 8)
typedef struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int* lconv_intl_refcount;
    int* lconv_num_refcount;
    int* lconv_mon_refcount;
    struct lconv* lconv;
    int* ctype1_refcount;
    ushort* ctype1;
    ushort* pctype;
    uchar* pclmap;
    uchar* pcumap;
    struct __lc_time_data* lc_time_curr;
    wchar_t* locale_name[6];
} __attribute__((aligned(4))) threadlocaleinfostruct;
#pragma pack(pop)

// Structure: threadmbcinfostruct
#pragma pack(push, 8)
typedef struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t* mblocalename;
} __attribute__((aligned(4))) threadmbcinfostruct;
#pragma pack(pop)

// Structure: localeinfo_struct
#pragma pack(push, 8)
typedef struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} __attribute__((aligned(4))) localeinfo_struct;
#pragma pack(pop)

// Typedef: time_t
// Signed Long Integer (compiler-specific size)
typedef long time_t;

// Typedef: wctype_t
// Unsigned Short Integer (compiler-specific size)
typedef ushort wctype_t;

// Typedef: wint_t
// Unsigned Short Integer (compiler-specific size)
typedef ushort wint_t;

