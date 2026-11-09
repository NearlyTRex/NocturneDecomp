// Name: crt_math.c_floor_FUN_005b84d0
// Address: 005b84d0
// Address Range: [[005b84d0, 005b8514]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_floor_FUN_005b84d0(double input_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __crtmath floor(double input_value)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = modf(input_value,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + _DAT_005f184c;
  }
  return local_18[0];
}
