#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/WinDef.h"
#include "system/crtdefs.h"
#include "system/time.h"
#include "system/winnt.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x10010000
// =============================================================================

void __cdecl crt_time_c__tzset_FUN_10010050(void);
int __cdecl crt_time_c__isindst_FUN_10010330(tm *tb);
int __cdecl crt_time_c__isindst_lk_FUN_10010360(tm *tb);
time_t __cdecl crt_time_c_cvtdate_FUN_100105c0(int trantype,int datetype,int year,int month,int week,int weekday,int date,int hour,int min,int sec,int msec);
wint_t __cdecl crt_ctype_c_towupper_FUN_10010750(wint_t c);
wint_t __cdecl crt_ctype_c__towupper_FUN_100107d0(wint_t c);
int __cdecl crt_ctype_c_iswctype_FUN_10010870(wint_t c,wctype_t mask);
int __cdecl crt_ctype_c_is_wctype_FUN_100108f0(wint_t c,wctype_t mask);
size_t __cdecl crt_stdlib_c_wcstombs_FUN_10010910(char *mbstr,wchar_t *wcstr,size_t count);
size_t __cdecl crt_stdlib_c__wcstombs_lk_FUN_10010970(char *mbstr,wchar_t *wcstr,size_t count);
size_t __cdecl crt_string_c__wcsnlen_FUN_10010be0(wchar_t *str,size_t max);
char * __cdecl crt_env_c_getenv_FUN_10010c20(char *name);
char * __cdecl crt_env_c_getenv_FUN_10010c50(char *name);
int __cdecl crt_env_c___env_compare_FUN_10010cf0(char *s1,char *s2,int len);
int __cdecl crt_env_c__build_ansi_environ_FUN_10010d30(void);
int __cdecl crt_locale_c___crtCompareStringA_v2_FUN_10010dc0(LCID lcid,DWORD flags,LPCSTR str1,int cch1,LPCSTR str2,int cch2,UINT code_page);
int __cdecl crt_string_c_wcsnlen_v3_FUN_10011000(wchar_t *str,int max);
int __cdecl crt_locale_c___crtCompareStringA_FUN_10011040(LCID lcid,DWORD flags,LPCSTR str1,int cch1,LPCSTR str2,int cch2,int code_page);
int __cdecl crt_string_c_strncnt_FUN_10011330(char *str,int count);
int __cdecl crt_env_c___crtsetenv_FUN_10011360(char *option,int primary);
int __cdecl crt_env_c_findenv_FUN_100115b0(char *name,int len);
char ** __cdecl crt_env_c_copy_environ_FUN_10011610(char **oldenviron);
void * __cdecl crt_heap_c_realloc_FUN_10011680(void *ptr,size_t size);
uchar * __cdecl crt_string_c__mbschr_FUN_100116f0(uchar *str,uint c);
char * __cdecl crt_string_c__strdup_FUN_100117b0(char *s);
char * __cdecl crt_string_c_strchr_FUN_100117f0(char *s,int c);
size_t __cdecl crt_string_c_strlen_FUN_100118b0(char *s);
char * __cdecl crt_string_c_strcpy_FUN_10011930(char *dst,char *src);

