// Name: shape_superopt.cpp_FUN_005d81c0
// Address: 005d81c0
// Address Range: [[005d81c0, 005d81fa]]
// Convention: unknown
// Signature: void shape_superopt_cpp_FUN_005d81c0(void)

#include "nocturne.h"

void shape_superopt_cpp_FUN_005d81c0(void)

{
  double dVar1;
  double *in_stack_00000004;
  
  dVar1 = 1.0 / SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
                     *in_stack_00000004 * *in_stack_00000004 +
                     in_stack_00000004[1] * in_stack_00000004[1]);
  *in_stack_00000004 = *in_stack_00000004 * dVar1;
  in_stack_00000004[1] = in_stack_00000004[1] * dVar1;
  in_stack_00000004[2] = in_stack_00000004[2] * dVar1;
  return;
}
