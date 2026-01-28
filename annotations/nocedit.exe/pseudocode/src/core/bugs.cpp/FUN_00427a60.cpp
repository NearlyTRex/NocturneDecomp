// Name: core_bugs.cpp_FUN_00427a60
// Address: 00427a60
// Address Range: [[00427a60, 00427ac6]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00427a60(void)

#include "nocturne.h"

void core_bugs_cpp_FUN_00427a60(void)

{
  float fVar1;
  float *in_stack_00000004;
  
  fVar1 = SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
               *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1]
              );
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    *in_stack_00000004 = *in_stack_00000004 * fVar1;
    in_stack_00000004[1] = in_stack_00000004[1] * fVar1;
    in_stack_00000004[2] = in_stack_00000004[2] * fVar1;
    return;
  }
  in_stack_00000004[2] = 0.0;
  in_stack_00000004[1] = in_stack_00000004[2];
  *in_stack_00000004 = in_stack_00000004[1];
  return;
}
