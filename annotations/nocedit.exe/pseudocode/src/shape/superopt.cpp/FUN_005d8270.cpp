// Name: shape_superopt.cpp_FUN_005d8270
// Address: 005d8270
// Address Range: [[005d8270, 005d82ac]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d8270()

#include "nocturne.h"

double * shape_superopt_cpp_FUN_005d8270(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  double *in_stack_0000000c;
  
  *in_stack_00000008 =
       in_stack_00000004[1] * in_stack_0000000c[2] - in_stack_00000004[2] * in_stack_0000000c[1];
  in_stack_00000008[1] =
       in_stack_00000004[2] * *in_stack_0000000c - *in_stack_00000004 * in_stack_0000000c[2];
  in_stack_00000008[2] =
       *in_stack_00000004 * in_stack_0000000c[1] - in_stack_00000004[1] * *in_stack_0000000c;
  return in_stack_00000008;
}
