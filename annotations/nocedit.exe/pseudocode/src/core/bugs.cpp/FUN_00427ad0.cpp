// Name: core_bugs.cpp_FUN_00427ad0
// Address: 00427ad0
// Address Range: [[00427ad0, 00427afc]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427ad0()

#include "nocturne.h"

void core_bugs_cpp_FUN_00427ad0(void)

{
  float *in_stack_00000004;
  int *in_stack_00000008;
  
  *in_stack_00000004 = (float)*in_stack_00000008 * 0.00390625f;
  in_stack_00000004[1] = (float)in_stack_00000008[1] * 0.00390625f;
  in_stack_00000004[2] = (float)in_stack_00000008[2] * 0.00390625f;
  return;
}
