// Name: crt_math.c_ceil_FUN_005a6067
// Address: 005a6067
// Address Range: [[005a6067, 005a6097]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_ceil_FUN_005a6067(double value)

#include "nocturne.h"

double __crtmath ceil(double value)

{
  double dVar1;
  
  dVar1 = floor(-value);
  return -dVar1;
}
