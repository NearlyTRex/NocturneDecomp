// Name: crt_math.c_ceil_FUN_006001b2
// Address: 006001b2
// Address Range: [[006001b2, 006001e2]]
// Convention: __softfp_double
// Signature: double __softfp_double crt_math_c_ceil_FUN_006001b2(double value)

#include "nocturne.h"

double __softfp_double ceil(double value)

{
  double dVar1;
  
  dVar1 = floor(-value);
  return -dVar1;
}
