// Name: shape_superopt.cpp_FUN_005d86d0
// Address: 005d86d0
// Address Range: [[005d86d0, 005d8706]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_FUN_005d86d0(void)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_FUN_005d86d0(void)

{
  double *in_stack_00000004;
  double *in_stack_00000008;
  int local_20;
  
  local_20 = SUB84(SQRT((in_stack_00000008[2] - in_stack_00000004[2]) *
                        (in_stack_00000008[2] - in_stack_00000004[2]) +
                        (in_stack_00000008[1] - in_stack_00000004[1]) *
                        (in_stack_00000008[1] - in_stack_00000004[1]) +
                        (*in_stack_00000008 - *in_stack_00000004) *
                        (*in_stack_00000008 - *in_stack_00000004)),0);
  return local_20;
}
