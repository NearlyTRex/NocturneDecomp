// Name: crt_math.c_ceil_FUN_005bae37
// Address: 005bae37
// Address Range: [[005bae37, 005bae67]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_ceil_FUN_005bae37(double value)

#include "nocturne.h"

double __crtmath ceil(double value)

{
  double dVar1;
  
  dVar1 = floor(-value);
  return -dVar1;
}
