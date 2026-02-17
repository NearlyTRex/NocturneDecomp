// Name: crt_math.c_modf_FUN_00602102
// Address: 00602102
// Address Range: [[00602102, 00602121]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_modf_FUN_00602102(double value,double *integer_part)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

double __crtmath modf(double value,double *integer_part)

{
  *integer_part = ROUND(value);
  return value - ROUND(value);
}
