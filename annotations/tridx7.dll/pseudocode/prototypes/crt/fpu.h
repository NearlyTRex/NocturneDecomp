#pragma once

// Function prototypes for crt/fpu.cpp
// Generated from Ghidra function signatures

// Original: crt_fpu.c__fpmath_FUN_10005580
// Address: 10005580
void __cdecl ::fpmath(int flag);

// Original: crt_fpu.c__install_fp_handlers_FUN_100055b0
// Address: 100055b0
void __cdecl ::install_fp_handlers(void);

// Original: crt_fpu.c__setdefaultprecision_FUN_10006d30
// Address: 10006d30
void __cdecl ::setdefaultprecision(void);

// Original: crt_fpu.c__ms_p5_mp_test_fdiv_FUN_10006da0
// Address: 10006da0
int __cdecl ::ms_p5_mp_test_fdiv(void);

// Original: crt_fpu.c__control87_FUN_10009890
// Address: 10009890
uint __cdecl ::control87(uint new_value,uint mask);

// Original: crt_fpu.c__controlfp_FUN_100098d0
// Address: 100098d0
uint __cdecl ::controlfp(uint new_value,uint mask);

// Original: crt_fpu.c__fpreset_FUN_100098f0
// Address: 100098f0
void __cdecl ::fpreset(void);

// Original: crt_fpu.c__abstract_cw_FUN_10009930
// Address: 10009930
uint __cdecl ::abstract_cw(ushort control_word);

// Original: crt_fpu.c__hw_cw_FUN_100099e0
// Address: 100099e0
uint __cdecl ::hw_cw(uint control_word);

// Original: crt_fpu.c__statusfp_FUN_10009a70
// Address: 10009a70
uint __cdecl ::statusfp(void);

// Original: crt_fpu.c__fptrap_FUN_10009ab0
// Address: 10009ab0
void __cdecl ::fptrap(void);
