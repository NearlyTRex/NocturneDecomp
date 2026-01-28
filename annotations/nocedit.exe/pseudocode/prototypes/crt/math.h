#pragma once

// Function prototypes for crt/math.cpp
// Generated from Ghidra function signatures

// Original: crt_math.c_round_FUN_005fe6b0
// Address: 005fe6b0
double __fpureg_safe round(double value);

// Original: crt_math.c_floor_FUN_005feb90
// Address: 005feb90
double __softfp_double floor(double input_value);

// Original: crt_math.c_pow_FUN_005ffd76
// Address: 005ffd76
float10 __fpustack pow(float10 base,float10 exp);

// Original: crt_math.c_integer_power_FUN_005ffeb2
// Address: 005ffeb2
float10 __fpureg integer::power(float10 base,ushort exponent);

// Original: crt_math.c_ldexp_FUN_00600002
// Address: 00600002
double __cdecl ldexp(double x,int exp);

// Original: crt_math.c_acos_FUN_00600162
// Address: 00600162
double __fpustack acos(double x);

// Original: crt_math.c_ceil_FUN_006001b2
// Address: 006001b2
double __softfp_double ceil(double value);

// Original: crt_math.c_asin_FUN_00600b94
// Address: 00600b94
float10 __fpustack asin(float10 sine_value);

// Original: crt_math.c_atan2_FUN_006013b1
// Address: 006013b1
float10 __fpustack atan2(float10 y,float10 x);

// Original: crt_math.c_modf_FUN_00602102
// Address: 00602102
double __softfp_double modf(double value,double *integer_part);

// Original: crt_math.c_set_domain_error_errno_FUN_006027a0
// Address: 006027a0
void __cdecl set::domain_error_errno(void);

// Original: crt_math.c_set_range_error_errno_FUN_006027ac
// Address: 006027ac
void __cdecl set::range_error_errno(void);

// Original: crt_math.c_math_domain_error_FUN_00606832
// Address: 00606832
double __cdecl math::domain_error(double x,double y,uchar error_type);

// Original: crt_math.c_exp_FUN_006068e2
// Address: 006068e2
float10 __fpureg exp(float10 x);

// Original: crt_math.c_fdiv_FUN_00606960
// Address: 00606960
float10 __fpustack_safe fdiv(float10 dividend,float10 divisor);

// Original: crt_math.c_function_dispatch_FUN_00606a77
// Address: 00606a77
void function::dispatch(int function_index);

// Original: crt_math.c_generate_nan_FUN_00606a81
// Address: 00606a81
float10 generate::nan(void);

// Original: crt_math.c_fatal_math_error_FUN_00606a87
// Address: 00606a87
void fatal::math_error(void);

// Original: crt_math.c_generate_nan_FUN_00606a8c
// Address: 00606a8c
float10 generate::nan(void);

// Original: crt_math.c_fatal_math_error_FUN_00606a92
// Address: 00606a92
void fatal::math_error(void);

// Original: crt_math.c_generate_nan_FUN_00606a97
// Address: 00606a97
float10 generate::nan(void);

// Original: crt_math.c_generate_nan_FUN_00606a9d
// Address: 00606a9d
float10 generate::nan(void);

// Original: crt_math.c_generate_nan_FUN_00606aa3
// Address: 00606aa3
float10 generate::nan(void);

// Original: crt_math.c_generate_nan_FUN_00606aa9
// Address: 00606aa9
float10 generate::nan(void);

// Original: crt_math.c_dispatch_divide_FUN_00606aaf
// Address: 00606aaf
float10 dispatch::divide(void);

// Original: crt_math.c_FUN_00606acb
// Address: 00606acb
void FUN_00606acb(void);

// Original: crt_math.c_FUN_00606ad0
// Address: 00606ad0
void FUN_00606ad0(void);

// Original: crt_math.c_FUN_00606ae6
// Address: 00606ae6
unkbyte10 FUN_00606ae6(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606aeb
// Address: 00606aeb
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606b07
// Address: 00606b07
void FUN_00606b07(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606b17
// Address: 00606b17
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606b2b
// Address: 00606b2b
void FUN_00606b2b(void);

// Original: crt_math.c_FUN_00606b3b
// Address: 00606b3b
float10 FUN_00606b3b(void);

// Original: crt_math.c_FUN_00606b5b
// Address: 00606b5b
float10 FUN_00606b5b(void);

// Original: crt_math.c_FUN_00606b60
// Address: 00606b60
float10 FUN_00606b60(void);

// Original: crt_math.c_FUN_00606b7a
// Address: 00606b7a
unkbyte10 FUN_00606b7a(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606b7f
// Address: 00606b7f
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606b9f
// Address: 00606b9f
void FUN_00606b9f(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606bb3
// Address: 00606bb3
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606bcb
// Address: 00606bcb
void FUN_00606bcb(void);

// Original: crt_math.c_FUN_00606bdf
// Address: 00606bdf
float10 FUN_00606bdf(void);

// Original: crt_math.c_FUN_00606bff
// Address: 00606bff
float10 FUN_00606bff(void);

// Original: crt_math.c_FUN_00606c04
// Address: 00606c04
float10 FUN_00606c04(void);

// Original: crt_math.c_FUN_00606c1e
// Address: 00606c1e
unkbyte10 FUN_00606c1e(void);

// Original: crt_math.c_FUN_00606c23
// Address: 00606c23
unkbyte10 FUN_00606c23(void);

// Original: crt_math.c_FUN_00606c43
// Address: 00606c43
void FUN_00606c43(void);

// Original: crt_math.c_FUN_00606c57
// Address: 00606c57
unkbyte10 FUN_00606c57(void);

// Original: crt_math.c_FUN_00606c6f
// Address: 00606c6f
void FUN_00606c6f(void);

// Original: crt_math.c_FUN_00606c83
// Address: 00606c83
float10 FUN_00606c83(void);

// Original: crt_math.c_FUN_00606ca3
// Address: 00606ca3
float10 FUN_00606ca3(void);

// Original: crt_math.c_FUN_00606ca8
// Address: 00606ca8
float10 FUN_00606ca8(void);

// Original: crt_math.c_FUN_00606cc2
// Address: 00606cc2
unkbyte10 FUN_00606cc2(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606cc7
// Address: 00606cc7
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606ce7
// Address: 00606ce7
void FUN_00606ce7(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606cfb
// Address: 00606cfb
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606d13
// Address: 00606d13
void FUN_00606d13(void);

// Original: crt_math.c_FUN_00606d27
// Address: 00606d27
float10 FUN_00606d27(void);

// Original: crt_math.c_FUN_00606d47
// Address: 00606d47
float10 FUN_00606d47(void);

// Original: crt_math.c_FUN_00606d4c
// Address: 00606d4c
float10 FUN_00606d4c(void);

// Original: crt_math.c_FUN_00606d66
// Address: 00606d66
unkbyte10 FUN_00606d66(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606d6b
// Address: 00606d6b
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606d8b
// Address: 00606d8b
void FUN_00606d8b(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606d9f
// Address: 00606d9f
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606db7
// Address: 00606db7
void FUN_00606db7(void);

// Original: crt_math.c_FUN_00606dcb
// Address: 00606dcb
float10 FUN_00606dcb(void);

// Original: crt_math.c_FUN_00606deb
// Address: 00606deb
float10 FUN_00606deb(void);

// Original: crt_math.c_FUN_00606df0
// Address: 00606df0
float10 FUN_00606df0(void);

// Original: crt_math.c_FUN_00606e0a
// Address: 00606e0a
unkbyte10 FUN_00606e0a(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606e0f
// Address: 00606e0f
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606e2f
// Address: 00606e2f
void FUN_00606e2f(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606e43
// Address: 00606e43
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606e5b
// Address: 00606e5b
void FUN_00606e5b(void);

// Original: crt_math.c_FUN_00606e6f
// Address: 00606e6f
float10 FUN_00606e6f(void);

// Original: crt_math.c_FUN_00606e8f
// Address: 00606e8f
float10 FUN_00606e8f(void);

// Original: crt_math.c_FUN_00606e94
// Address: 00606e94
float10 FUN_00606e94(void);

// Original: crt_math.c_FUN_00606eae
// Address: 00606eae
unkbyte10 FUN_00606eae(void);

// Original: crt_math.c_FUN_00606eb3
// Address: 00606eb3
unkbyte10 FUN_00606eb3(void);

// Original: crt_math.c_FUN_00606ed3
// Address: 00606ed3
void FUN_00606ed3(void);

// Original: crt_math.c_fdiv_thunk_FUN_00606ee7
// Address: 00606ee7
float10 __fpu_thunk fdiv::thunk(void);

// Original: crt_math.c_FUN_00606eff
// Address: 00606eff
void FUN_00606eff(void);

// Original: crt_math.c_pentiumFdivpWorkaround_FUN_00606f13
// Address: 00606f13
float10 __fpustack_safe pentiumFdivpWorkaround(float10 dividend,float10 divisor);

// Original: crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
// Address: 00606f98
float10 __fpustack pentiumFdivBugWorkaroundDouble(float10 param0,double param1);

// Original: crt_math.c_sqrt_FUN_0060710c
// Address: 0060710c
double __fpureg sqrt(double value);

// Original: crt_math.c_doubleToFloat_FUN_0060b26c
// Address: 0060b26c
float doubleToFloat(double val);

// Original: crt_math.c_multiply64_FUN_0060b2b8
// Address: 0060b2b8
ulonglong multiply64(ulonglong a,ulonglong b);

// Original: crt_math.c_set_math_errno_FUN_0060befa
// Address: 0060befa
double __cdecl set::math_errno(int errorFlags,double *valuePtr);

// Original: crt_math.c_process_math_error_FUN_0060bf2d
// Address: 0060bf2d
double __cdecl process::math_error(int errorFlags,double *value1,double *value2);

// Original: crt_math.c_handle_math_error_FUN_0060c02b
// Address: 0060c02b
double __mathinternal handle::math_error(void);

// Original: crt_math.c_atan2_FUN_0060c440
// Address: 0060c440
float10 __fpustack atan2(float10 y,float10 x);

// Original: crt_math.c_atan2_epilogue_FUN_0060c5a0
// Address: 0060c5a0
float10 atan2::epilogue(void);

// Original: crt_math.c_atan2_negate_epilogue_FUN_0060c5ab
// Address: 0060c5ab
float10 atan2::negate_epilogue(void);

// Original: crt_math.c_atan2_pi_minus_epilogue_FUN_0060c5b8
// Address: 0060c5b8
float10 atan2::pi_minus_epilogue(void);

// Original: crt_math.c_atan2_minus_pi_epilogue_FUN_0060c5cb
// Address: 0060c5cb
float10 atan2::minus_pi_epilogue(void);

// Original: crt_math.c_atan2_pi_half_minus_epilogue_FUN_0060c5e0
// Address: 0060c5e0
float10 atan2::pi_half_minus_epilogue(void);

// Original: crt_math.c_atan2_minus_pi_half_epilogue_FUN_0060c5f3
// Address: 0060c5f3
float10 atan2::minus_pi_half_epilogue(void);

// Original: crt_math.c_atan2_pi_half_plus_epilogue_FUN_0060c608
// Address: 0060c608
float10 atan2::pi_half_plus_epilogue(void);

// Original: crt_math.c_atan2_minus_pi_half_minus_epilogue_FUN_0060c61b
// Address: 0060c61b
float10 atan2::minus_pi_half_minus_epilogue(void);

// Original: crt_math.c_udivmod64_FUN_0060d3ed
// Address: 0060d3ed
ulonglong udivmod64(ulonglong dividend,ulonglong divisor);

// Original: crt_math.c_dadd_FUN_0060defc
// Address: 0060defc
double dadd(double a,double b);

// Original: crt_math.c_dmul_FUN_0060e0b9
// Address: 0060e0b9
double dmul(double a,double b);

// Original: crt_math.c_print_error_message_FUN_0060e298
// Address: 0060e298
void __cdecl print::error_message(int errorType,char *errorData);

// Original: crt_math.c_report_math_error_FUN_0060e2e5
// Address: 0060e2e5
double __cdecl report::math_error(MathErrorContext *errorCtx);
