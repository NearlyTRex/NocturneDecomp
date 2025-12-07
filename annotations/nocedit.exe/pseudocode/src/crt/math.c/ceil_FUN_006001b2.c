// Name: crt_math.c_ceil_FUN_006001b2
// Address: 006001b2
// Address Range: [[006001b2, 006001e2]]
// Convention: __fpureg_safe
// Signature: double crt_math.c_ceil_FUN_006001b2(double value)

#include "nocturne.h"

double __fpureg_safe crt_math_c_ceil_FUN_006001b2(double value)

{
  double dVar1;
  
  dVar1 = crt_math_c_floor_FUN_005feb90(value);
  return dVar1;
}
