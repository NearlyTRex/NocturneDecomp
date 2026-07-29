// Name: crt_math.c_ceil_FUN_00567121
// Address: 00567121
// Address Range: [[00567121, 00567151]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_ceil_FUN_00567121(double value)

#include "nocturne.h"

double __crtmath ceil(double value)

{
  double dVar1;
  
  dVar1 = floor(-value);
  return -dVar1;
}
