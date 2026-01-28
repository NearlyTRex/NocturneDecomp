// Name: shape_superopt.cpp_FUN_005d86d0
// Address: 005d86d0
// Address Range: [[005d86d0, 005d8706]]
// Convention: unknown
// Signature: double shape_superopt_cpp_FUN_005d86d0(void)

#include "nocturne.h"

double shape_superopt_cpp_FUN_005d86d0(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  
  return SQRT((in_stack_00000008[2] - in_stack_00000004[2]) *
              (in_stack_00000008[2] - in_stack_00000004[2]) +
              (in_stack_00000008[1] - in_stack_00000004[1]) *
              (in_stack_00000008[1] - in_stack_00000004[1]) +
              (*in_stack_00000008 - *in_stack_00000004) * (*in_stack_00000008 - *in_stack_00000004))
  ;
}
