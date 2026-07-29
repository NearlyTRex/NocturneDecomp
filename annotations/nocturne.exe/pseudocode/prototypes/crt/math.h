#pragma once

// Function prototypes for crt/math.cpp
// Generated from Ghidra function signatures

// Original: crt_math.c_round_FUN_00563a30
// Address: 00563a30
double __fpureg_safe round(double value);

// Original: crt_math.c_floor_FUN_005648c0
// Address: 005648c0
double __crtmath floor(double input_value);

// Original: crt_math.c_pow_FUN_00565ad6
// Address: 00565ad6
float10 __fpustack_safe pow(float10 base,float10 exp);

// Original: crt_math.c_asin_FUN_00565c76
// Address: 00565c76
float10 __fpustack_safe asin(float10 sine_value);

// Original: crt_math.c_acos_FUN_00565ca4
// Address: 00565ca4
double __fpustack_safe acos(double x);

// Original: crt_math.c_atan2_FUN_00566c81
// Address: 00566c81
float10 __fpureg atan2(float10 y,float10 x);

// Original: crt_math.c_modf_FUN_00566fb6
// Address: 00566fb6
double __crtmath modf(double value,double *integer_part);

// Original: crt_math.c_ceil_FUN_00567121
// Address: 00567121
double __crtmath ceil(double value);

// Original: crt_math.c_set_domain_error_errno_FUN_00568e90
// Address: 00568e90
void __cdecl set::domain_error_errno(void);

// Original: crt_math.c_set_range_error_errno_FUN_00568e9c
// Address: 00568e9c
void __cdecl set::range_error_errno(void);

// Original: crt_math.c_math_domain_error_FUN_0056bd22
// Address: 0056bd22
double __cdecl math::domain_error(double x,double y,uchar error_type);

// Original: crt_math.c_exp_FUN_0056bdd2
// Address: 0056bdd2
float10 __fpureg_safe exp(float10 x);

// Original: crt_math.c_fdiv_FUN_0056be50
// Address: 0056be50
float10 __fpustack_safe fdiv(float10 dividend,float10 divisor);

// Original: crt_math.c_function_dispatch_FUN_0056bf67
// Address: 0056bf67
float10 __watcallRegister function::dispatch(int function_index);

// Original: crt_math.c_dispatch_divide_FUN_0056bf9f
// Address: 0056bf9f
float10 * __watcallRegister dispatch::divide(float10 *__return_storage_ptr__);

// Original: crt_math.c_fdiv_thunk_FUN_0056c007
// Address: 0056c007
void fdiv::thunk(void);

// Original: crt_math.c_fdiv_thunk_FUN_0056c0a3
// Address: 0056c0a3
void fdiv::thunk(void);

// Original: crt_math.c_fdiv_thunk_FUN_0056c1eb
// Address: 0056c1eb
void fdiv::thunk(void);

// Original: crt_math.c_fdiv_thunk_FUN_0056c28f
// Address: 0056c28f
void fdiv::thunk(void);

// Original: crt_math.c_fdiv_thunk_FUN_0056c333
// Address: 0056c333
void fdiv::thunk(void);

// Original: crt_math.c_fdiv_thunk_FUN_0056c3d7
// Address: 0056c3d7
void fdiv::thunk(void);

// Original: crt_math.c_pentiumFdivpWorkaround_FUN_0056c403
// Address: 0056c403
void pentiumFdivpWorkaround(void);

// Original: crt_math.c_sqrt_FUN_0056c5a8
// Address: 0056c5a8
double __fpureg_safe sqrt(double value);

// Original: crt_math.c_atan2_FUN_0056dc98
// Address: 0056dc98
float10 __fpustack atan2(float10 y,float10 x);

// Original: crt_math.c_doubleToFloat_FUN_0056f100
// Address: 0056f100
float __watcallRegister doubleToFloat(double val);

// Original: crt_math.c_multiply64_FUN_0056f14c
// Address: 0056f14c
ulonglong __watcallRegister multiply64(ulonglong a,ulonglong b);

// Original: crt_math.c_set_math_errno_FUN_005706aa
// Address: 005706aa
double __cdecl set::math_errno(int errorFlags,double *valuePtr);

// Original: crt_math.c_process_math_error_FUN_005706dd
// Address: 005706dd
double __cdecl process::math_error(int errorFlags,double *value1,double *value2);

// Original: crt_math.c_handle_math_error_FUN_005707db
// Address: 005707db
double __mathinternal handle::math_error(void);

// Original: crt_math.c_udivmod64_FUN_00571a9d
// Address: 00571a9d
ulonglong __watcallRegister udivmod64(ulonglong dividend,ulonglong divisor);

// Original: crt_math.c_print_error_message_FUN_005729e8
// Address: 005729e8
void __cdecl print::error_message(int errorType,char *errorData);

// Original: crt_math.c_report_math_error_FUN_00572a35
// Address: 00572a35
double __cdecl report::math_error(MathErrorContext *errorCtx);
