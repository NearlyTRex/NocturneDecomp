// Name: crt_math.c_floor_FUN_005feb90
// Address: 005feb90
// Address Range: [[005feb90, 005febd4]]
// Convention: __softfp_double
// Signature: double __softfp_double crt_math_c_floor_FUN_005feb90(double input_value)

#include "nocturne.h"

double __softfp_double crt_math_c_floor_FUN_005feb90(double input_value)

{
  double dVar1;
  double local_18 [2];
  
  dVar1 = crt_math_c_modf_FUN_00602102(input_value,local_18);
  if (dVar1 < 0.0) {
    local_18[0] = local_18[0] + -1;
  }
  return local_18[0];
}
