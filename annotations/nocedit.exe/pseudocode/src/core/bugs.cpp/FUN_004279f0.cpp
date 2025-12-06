// Name: core_bugs.cpp_FUN_004279f0
// Address: 004279f0
// Address Range: [[004279f0, 00427a10]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004279f0()

#include "nocturne.h"

void core_bugs_cpp_FUN_004279f0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000004 - *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000004[1] - in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000004[2] - in_stack_00000008[2];
  return;
}
