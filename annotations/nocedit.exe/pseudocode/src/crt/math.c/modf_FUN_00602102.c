// Name: crt_math.c_modf_FUN_00602102
// Address: 00602102
// Address Range: [[00602102, 00602121]]
// Convention: __watcallStack
// Signature: double crt_math.c_modf_FUN_00602102(double value, double * integer_part)

#include "nocturne.h"

double __watcallStack crt_math_c_modf_FUN_00602102(double value,double *integer_part)

{
  uint in_EAX;
  uint in_EDX;
  float10 in_ST0;
  float10 fVar1;
  double *in_stack_00000010;
  
  fVar1 = (float10)value;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  *in_stack_00000010 = (double)fVar1;
  return (double)in_ST0;
}
