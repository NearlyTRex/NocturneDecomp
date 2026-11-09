// Name: crt_math.c_floor_FUN_005a3600
// Address: 005a3600
// Address Range: [[005a3600, 005a3644]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_floor_FUN_005a3600(double input_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __crtmath floor(double input_value)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = modf(input_value,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + _DAT_005da6b0;
  }
  return local_18[0];
}
