// Name: core_bugs.cpp_subtractVector_FUN_00423bb0
// Address: 00423bb0
// Address Range: [[00423bb0, 00423bd0]]
// Convention: unknown
// Signature: void core_bugs_cpp_subtractVector_FUN_00423bb0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_bugs_cpp_subtractVector_FUN_00423bb0(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000004 - *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000004[1] - in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000004[2] - in_stack_00000008[2];
  return;
}
