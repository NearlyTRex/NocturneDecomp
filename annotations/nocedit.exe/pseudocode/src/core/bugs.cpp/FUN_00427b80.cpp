// Name: core_bugs.cpp_FUN_00427b80
// Address: 00427b80
// Address Range: [[00427b80, 00427b94]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427b80()

#include "nocturne.h"

void core_bugs_cpp_FUN_00427b80(void)

{
  uint uVar1;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  
  uVar1 = *in_stack_00000004;
  *in_stack_00000004 = *in_stack_00000008;
  *in_stack_00000008 = uVar1;
  return;
}
