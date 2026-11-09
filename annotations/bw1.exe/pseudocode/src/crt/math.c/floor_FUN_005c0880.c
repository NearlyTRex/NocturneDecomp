// Name: crt_math.c_floor_FUN_005c0880
// Address: 005c0880
// Address Range: [[005c0880, 005c08c4]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_floor_FUN_005c0880(double input_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __crtmath floor(double input_value)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = modf(input_value,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + _DAT_005fa9f4;
  }
  return local_18[0];
}
