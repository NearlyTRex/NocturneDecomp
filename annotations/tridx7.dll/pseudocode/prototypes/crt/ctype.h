#pragma once

// Function prototypes for crt/ctype.cpp
// Generated from Ghidra function signatures

// Original: crt_ctype.c__isctype_FUN_10009ac0
// Address: 10009ac0
int __cdecl ::isctype(int c,int type);

// Original: crt_ctype.c__tolower_FUN_10009b70
// Address: 10009b70
int __cdecl ::tolower(int c);

// Original: crt_ctype.c__tolower_lk_FUN_10009be0
// Address: 10009be0
uint __cdecl ::tolower_lk(uint c);

// Original: crt_ctype.c_towupper_FUN_10010750
// Address: 10010750
wint_t __cdecl towupper(wint_t c);

// Original: crt_ctype.c__towupper_FUN_100107d0
// Address: 100107d0
wint_t __cdecl ::towupper(wint_t c);

// Original: crt_ctype.c_iswctype_FUN_10010870
// Address: 10010870
int __cdecl iswctype(wint_t c,wctype_t mask);

// Original: crt_ctype.c_is_wctype_FUN_100108f0
// Address: 100108f0
int __cdecl is::wctype(wint_t c,wctype_t mask);
