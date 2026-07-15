#pragma once

// Function prototypes for crt/stdlib.cpp
// Generated from Ghidra function signatures

// Original: crt_stdlib.c_parse_cmdline_FUN_10007ce0
// Address: 10007ce0
void __cdecl parse::cmdline(char *cmdstart,char **argv,char *args,int *pnumargs,int *pnumchars);

// Original: crt_stdlib.c__set_error_mode_FUN_10008580
// Address: 10008580
int __cdecl ::set_error_mode(int mode);

// Original: crt_stdlib.c__atodbl_v2_FUN_1000cf00
// Address: 1000cf00
int __cdecl ::atodbl_v2(_CRT_DOUBLE *result,char *str);

// Original: crt_stdlib.c__itoa_FUN_1000f8b0
// Address: 1000f8b0
char * __cdecl ::itoa(int val,char *buf,int radix);

// Original: crt_stdlib.c_xtoa_FUN_1000f8f0
// Address: 1000f8f0
void __cdecl xtoa(ulong val,char *buf,uint radix,int neg);

// Original: crt_stdlib.c__ltoa_FUN_1000f950
// Address: 1000f950
char * __cdecl ::ltoa(long val,char *buf,int radix);

// Original: crt_stdlib.c__ultoa_FUN_1000f980
// Address: 1000f980
char * __cdecl ::ultoa(ulong val,char *buf,int radix);

// Original: crt_stdlib.c_wcstol_FUN_1000fc10
// Address: 1000fc10
long __cdecl wcstol(wchar_t *nptr,wchar_t **endptr,int base);

// Original: crt_stdlib.c_wcstoxl_FUN_1000fc30
// Address: 1000fc30
ulong __cdecl wcstoxl(wchar_t *nptr,wchar_t **endptr,int base,int flags);

// Original: crt_stdlib.c_wcstoul_FUN_1000fe40
// Address: 1000fe40
ulong __cdecl wcstoul(wchar_t *nptr,wchar_t **endptr,int base);

// Original: crt_stdlib.c_atol_FUN_1000fe60
// Address: 1000fe60
long __cdecl atol(char *str);

// Original: crt_stdlib.c_atoi_FUN_1000ff10
// Address: 1000ff10
int __cdecl atoi(char *str);

// Original: crt_stdlib.c_wcstombs_FUN_10010910
// Address: 10010910
size_t __cdecl wcstombs(char *mbstr,wchar_t *wcstr,size_t count);

// Original: crt_stdlib.c__wcstombs_lk_FUN_10010970
// Address: 10010970
size_t __cdecl ::wcstombs_lk(char *mbstr,wchar_t *wcstr,size_t count);
