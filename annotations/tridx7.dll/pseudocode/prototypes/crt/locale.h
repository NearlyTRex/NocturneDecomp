#pragma once

// Function prototypes for crt/locale.cpp
// Generated from Ghidra function signatures

// Original: crt_locale.c__setmbcp_FUN_10007eb0
// Address: 10007eb0
int __cdecl ::setmbcp(int code_page);

// Original: crt_locale.c_getSystemCP_FUN_100080e0
// Address: 100080e0
uint __cdecl getSystemCP(void);

// Original: crt_locale.c__CPtoLCID_FUN_10008130
// Address: 10008130
int __cdecl ::CPtoLCID(int codepage);

// Original: crt_locale.c_setSBCS_FUN_10008190
// Address: 10008190
void __cdecl setSBCS(void);

// Original: crt_locale.c__initmbctable_FUN_100081d0
// Address: 100081d0
void __cdecl ::initmbctable(void);

// Original: crt_locale.c__wctomb_FUN_100091e0
// Address: 100091e0
int __cdecl ::wctomb(char *mb_ch,wchar_t w_ch);

// Original: crt_locale.c__wctomb_lk_FUN_10009240
// Address: 10009240
int __cdecl ::wctomb_lk(LPSTR mbchar,WCHAR wchar);

// Original: crt_locale.c_setlocale_FUN_1000ac10
// Address: 1000ac10
char * __cdecl setlocale(int category,char *locale);

// Original: crt_locale.c_setlocale_set_cat_FUN_1000aee0
// Address: 1000aee0
char * __cdecl setlocale::set_cat(int category,char *locale);

// Original: crt_locale.c_setlocale_get_all_FUN_1000b060
// Address: 1000b060
char * __cdecl setlocale::get_all(void);

// Original: crt_locale.c__expandlocale_FUN_1000b150
// Address: 1000b150
int __cdecl ::expandlocale(char *locale,char *cat,LC_ID *lc_id,UINT *code_page);

// Original: crt_locale.c__lc_lctostr_FUN_1000b330
// Address: 1000b330
void __cdecl ::lc_lctostr(char *dst,int count,...);

// Original: crt_locale.c__lc_strtolc_FUN_1000b380
// Address: 1000b380
int __cdecl ::lc_strtolc(char *lc,char *locale);

// Original: crt_locale.c__setlocale_catcopy_FUN_1000b480
// Address: 1000b480
void __cdecl ::setlocale_catcopy(char *dst,char *lc);

// Original: crt_locale.c___crtGetStringTypeW_FUN_1000be00
// Address: 1000be00
BOOL __cdecl ::_crtGetStringTypeW(DWORD info_type,LPCWSTR src,int cch_src,LPWORD char_type,UINT code_page,LCID lcid);

// Original: crt_locale.c__crtGetStringTypeA_FUN_1000bfc0
// Address: 1000bfc0
BOOL __cdecl ::crtGetStringTypeA(_locale_t plocinfo,DWORD dw_info_type,LPCSTR lp_src_str,int cch_src,LPWORD lp_char_type,int code_page,BOOL b_error);

// Original: crt_locale.c___crtLCMapStringA_v2_FUN_1000c0f0
// Address: 1000c0f0
int __cdecl ::_crtLCMapStringA_v2(LCID lcid,DWORD map_flags,LPCSTR src,int cch_src,LPSTR dest,int cch_dest,UINT code_page,BOOL error);

// Original: crt_locale.c___crtLCMapStringA_FUN_1000c340
// Address: 1000c340
int __cdecl ::_crtLCMapStringA(LCID lcid,DWORD map_flags,LPCSTR src,int cch_src,LPWSTR dest,int cch_dest,UINT code_page);

// Original: crt_locale.c__fix_grouping_FUN_1000dc80
// Address: 1000dc80
void __cdecl ::fix_grouping(char *grouping);

// Original: crt_locale.c___get_lc_monetary_FUN_1000ddc0
// Address: 1000ddc0
uint __cdecl ::_get_lc_monetary(lconv *lc);

// Original: crt_locale.c__fix_grouping_FUN_1000df10
// Address: 1000df10
void __cdecl ::fix_grouping(char *grouping);

// Original: crt_locale.c___free_lconv_mon_FUN_1000df60
// Address: 1000df60
void __cdecl ::_free_lconv_mon(lconv *lc);

// Original: crt_locale.c___get_qualified_locale_FUN_1000e350
// Address: 1000e350
int __cdecl ::_get_qualified_locale(char *locale,void *id,void *out);

// Original: crt_locale.c_GetLcidFromLanguage_FUN_1000e650
// Address: 1000e650
uint __cdecl GetLcidFromLanguage(char *lang);

// Original: crt_locale.c_GetLcidFromCountry_FUN_1000e6b0
// Address: 1000e6b0
uint __cdecl GetLcidFromCountry(char *country);

// Original: crt_locale.c_GetLcidFromCountry_FUN_1000e710
// Address: 1000e710
int __cdecl GetLcidFromCountry(ushort ctry);

// Original: crt_locale.c_GetLcidFromDefault_FUN_1000e760
// Address: 1000e760
int __cdecl GetLcidFromDefault(ushort langid);

// Original: crt_locale.c_GetLcidFromLangCountry_FUN_1000e780
// Address: 1000e780
int __cdecl GetLcidFromLangCountry(ushort *plang,ushort *pctry);

// Original: crt_locale.c___getlocaleinfo_FUN_1000f6e0
// Address: 1000f6e0
int __cdecl ::_getlocaleinfo(int type,LCID lcid,LCTYPE lc_type,void *out);

// Original: crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0
// Address: 1000f9a0
int __cdecl ::_crtGetLocaleInfoW(LCID lcid,LCTYPE lc_type,LPWSTR dest,int cch,UINT code_page);

// Original: crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0
// Address: 1000fad0
int __cdecl ::_crtGetLocaleInfoA(LCID lcid,LCTYPE lc_type,LPSTR dest,int cch,UINT code_page);

// Original: crt_locale.c___crtCompareStringA_v2_FUN_10010dc0
// Address: 10010dc0
int __cdecl ::_crtCompareStringA_v2(LCID lcid,DWORD flags,LPCSTR str1,int cch1,LPCSTR str2,int cch2,UINT code_page);

// Original: crt_locale.c___crtCompareStringA_FUN_10011040
// Address: 10011040
int __cdecl ::_crtCompareStringA(LCID lcid,DWORD flags,LPCSTR str1,int cch1,LPCSTR str2,int cch2,int code_page);
