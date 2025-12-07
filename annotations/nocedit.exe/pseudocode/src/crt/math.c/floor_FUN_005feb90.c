// Name: crt_math.c_floor_FUN_005feb90
// Address: 005feb90
// Address Range: [[005feb90, 005febd4]]
// Convention: __fpureg_safe
// Signature: double crt_math.c_floor_FUN_005feb90(double input_value)

#include "nocturne.h"

double __fpureg_safe crt_math_c_floor_FUN_005feb90(double input_value)

{
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  uint in_stack_00000004;
  uint in_stack_00000008;
  double local_18 [2];
  
  fVar1 = (float10)input_value;
  crt_math_c_modf_FUN_00602102((double)CONCAT44 /* combine 2-byte values */(in_stack_00000008,in_stack_00000004),local_18);
  return (double)fVar1;
}
