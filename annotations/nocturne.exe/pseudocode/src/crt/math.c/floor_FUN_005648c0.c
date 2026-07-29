// Name: crt_math.c_floor_FUN_005648c0
// Address: 005648c0
// Address Range: [[005648c0, 00564904]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_floor_FUN_005648c0(double input_value)

#include "nocturne.h"

double __crtmath floor(double input_value)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = modf(input_value,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + -1;
  }
  return local_18[0];
}
