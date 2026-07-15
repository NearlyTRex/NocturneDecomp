#pragma once

// Function prototypes for crt/math.cpp
// Generated from Ghidra function signatures

// Original: crt_math.c__ms_p5_test_fdiv_FUN_10006d50
// Address: 10006d50
int __cdecl ::ms_p5_test_fdiv(void);

// Original: crt_math.c__aulldiv_FUN_100092e0
// Address: 100092e0
double __cdecl ::aulldiv(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi);

// Original: crt_math.c__aullrem_FUN_10009350
// Address: 10009350
double __cdecl ::aullrem(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi);

// Original: crt_math.c__ZeroTail_FUN_10009cd0
// Address: 10009cd0
int __cdecl ::ZeroTail(int man,int bit);

// Original: crt_math.c__IncMan_FUN_10009d40
// Address: 10009d40
void __cdecl ::IncMan(int man,int bit);

// Original: crt_math.c__RoundMan_FUN_10009db0
// Address: 10009db0
int __cdecl ::RoundMan(int man,int bit);

// Original: crt_math.c__CopyMan_FUN_10009e60
// Address: 10009e60
void __cdecl ::CopyMan(int *dst,int *src);

// Original: crt_math.c__FillZeroMan_FUN_10009e80
// Address: 10009e80
void __cdecl ::FillZeroMan(int *man);

// Original: crt_math.c__IsZeroMan_FUN_10009e90
// Address: 10009e90
int __cdecl ::IsZeroMan(int *man);

// Original: crt_math.c__ShrMan_FUN_10009eb0
// Address: 10009eb0
void __cdecl ::ShrMan(uint *man,int count);

// Original: crt_math.c__ld12cvt_FUN_10009f60
// Address: 10009f60
int __cdecl ::ld12cvt(ushort *ld,uint *result,int *prec);

// Original: crt_math.c___ld12tod_FUN_1000a130
// Address: 1000a130
INTRNCVT_STATUS __cdecl ::_ld12tod(_LDBL12 *ifp,_CRT_DOUBLE *d);

// Original: crt_math.c___ld12tof_FUN_1000a150
// Address: 1000a150
INTRNCVT_STATUS __cdecl ::_ld12tof(_LDBL12 *ifp,_CRT_FLOAT *f);

// Original: crt_math.c___ld12told_FUN_1000a170
// Address: 1000a170
INTRNCVT_STATUS __cdecl ::_ld12told(_LDBL12 *ifp,_LDOUBLE *ld);

// Original: crt_math.c__atodbl_FUN_1000a200
// Address: 1000a200
int __cdecl ::atodbl(_CRT_DOUBLE *result,char *str);

// Original: crt_math.c__atoldbl_FUN_1000a240
// Address: 1000a240
int __cdecl ::atoldbl(_LDOUBLE *result,char *str);

// Original: crt_math.c__atoflt_FUN_1000a280
// Address: 1000a280
int __cdecl ::atoflt(_CRT_FLOAT *result,char *str);

// Original: crt_math.c__dtold_FUN_1000a3e0
// Address: 1000a3e0
void __cdecl ::dtold(uint *dst,uint *src);

// Original: crt_math.c__addl_FUN_1000c5a0
// Address: 1000c5a0
uint __cdecl ::addl(uint a,uint b,uint *result);

// Original: crt_math.c__add_12_FUN_1000c5d0
// Address: 1000c5d0
void __cdecl ::add_12(uint *a,uint *b);

// Original: crt_math.c__shl_12_FUN_1000c640
// Address: 1000c640
void __cdecl ::shl_12(uint *p);

// Original: crt_math.c__shr_12_FUN_1000c680
// Address: 1000c680
void __cdecl ::shr_12(uint *p);

// Original: crt_math.c__mtold12_FUN_1000c6c0
// Address: 1000c6c0
void __cdecl ::mtold12(char *manptr,int cnt,uint *ld12);

// Original: crt_math.c__strgtold12_FUN_1000c7b0
// Address: 1000c7b0
uint __cdecl ::strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,int implicit_e);

// Original: crt_math.c___multtwelve_FUN_1000e8f0
// Address: 1000e8f0
void __cdecl ::_multtwelve(_LDBL12 *a,_LDBL12 *b);

// Original: crt_math.c__multtenpow12_FUN_1000eba0
// Address: 1000eba0
void __cdecl ::multtenpow12(_LDBL12 *ld12,uint pow,int flag);
