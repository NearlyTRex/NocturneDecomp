// Name: crt_math.c_ceil_FUN_005c31f7
// Address: 005c31f7
// Address Range: [[005c31f7, 005c3227]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_ceil_FUN_005c31f7(double value)

#include "nocturne.h"

double __crtmath ceil(double value)

{
  double dVar1;
  
  dVar1 = floor(-value);
  return -dVar1;
}
