#pragma once

// Function prototypes for crt/math.cpp
// Generated from Ghidra function signatures

// Original: crt_math.c_round_FUN_005fe6b0
// Address: 005fe6b0
double round(double value);

// Original: crt_math.c_floor_FUN_005feb90
// Address: 005feb90
double floor(double input_value);

// Original: crt_math.c_pow_FUN_005ffd76
// Address: 005ffd76
float10 pow(float10 x, float10 y);

// Original: crt_math.c_integer_power_FUN_005ffeb2
// Address: 005ffeb2
float10 integer::power(float10 base, ushort exponent);

// Original: crt_math.c_acos_FUN_00600162
// Address: 00600162
double acos(double x);

// Original: crt_math.c_ceil_FUN_006001b2
// Address: 006001b2
double ceil(double value);

// Original: crt_math.c_asin_FUN_00600b94
// Address: 00600b94
float10 asin(float10 sine_value);

// Original: crt_math.c_atan2_FUN_006013b1
// Address: 006013b1
float10 atan2(float10 y, float10 x);

// Original: crt_math.c_modf_FUN_00602102
// Address: 00602102
double modf(double value, double * integer_part);

// Original: crt_math.c_set_domain_error_errno_FUN_006027a0
// Address: 006027a0
void set::domain_error_errno(void);

// Original: crt_math.c_set_range_error_errno_FUN_006027ac
// Address: 006027ac
void set::range_error_errno(void);

// Original: crt_math.c_exp_FUN_006068e2
// Address: 006068e2
float10 exp(float10 x);

// Original: crt_math.c_ieee754_divide_FUN_00606960
// Address: 00606960
float10 ieee754::divide(float10 dividend, float10 divisor);

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

// Original: crt_math.c_pentiumFdivpWorkaround_FUN_00606f13
// Address: 00606f13
float10 pentiumFdivpWorkaround(float10 dividend, float10 divisor);

// Original: crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
// Address: 00606f98
float10 pentiumFdivBugWorkaroundDouble(float10 param0, double param1);

// Original: crt_math.c_sqrt_FUN_0060710c
// Address: 0060710c
float10 sqrt(float10 value_to_sqrt, float10 original_value);

// Original: crt_math.c_double_to_float_FUN_0060b26c
// Address: 0060b26c
float double::to_float(uint double_low, uint double_high);

// Original: crt_math.c_mul64_FUN_0060b2b8
// Address: 0060b2b8
ulonglong mul64(uint low1, uint high1, uint low2, uint high2);

// Original: crt_math.c_set_math_errno_FUN_0060befa
// Address: 0060befa
double set::math_errno(int errorFlags, double * valuePtr);

// Original: crt_math.c_process_math_error_FUN_0060bf2d
// Address: 0060bf2d
double process::math_error(int errorFlags, double * value1, double * value2);

// Original: crt_math.c_handle_math_error_FUN_0060c02b
// Address: 0060c02b
double handle::math_error(void);

// Original: crt_math.c_atan2_FUN_0060c440
// Address: 0060c440
float10 atan2(float10 y, float10 x);

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

// Original: crt_math.c_UDivMod64_FUN_0060d3ed
// Address: 0060d3ed
void UDivMod64(ulonglong dividend, ulonglong divisor);

// Original: crt_math.c_print_error_message_FUN_0060e298
// Address: 0060e298
void print::error_message(int errorType, char * errorData);

// Original: crt_math.c_report_math_error_FUN_0060e2e5
// Address: 0060e2e5
double report::math_error(MathErrorContext * errorCtx);
