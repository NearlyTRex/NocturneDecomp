// Name: core_bugs.cpp_FUN_004279d0
// Address: 004279d0
// Address Range: [[004279d0, 004279ee]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_004279d0(void)

#include "nocturne.h"

void core_bugs_cpp_FUN_004279d0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008 * *in_stack_00000004;
  in_stack_00000004[1] = *in_stack_00000008 * in_stack_00000004[1];
  in_stack_00000004[2] = *in_stack_00000008 * in_stack_00000004[2];
  return;
}
