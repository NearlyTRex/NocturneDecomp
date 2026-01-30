// Name: core_bugs.cpp_FUN_00427b80
// Address: 00427b80
// Address Range: [[00427b80, 00427b94]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00427b80(void)

#include "nocturne.h"

void __cdecl core_bugs_cpp_FUN_00427b80(void)

{
  uint uVar1;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  
  uVar1 = *in_stack_00000004;
  *in_stack_00000004 = *in_stack_00000008;
  *in_stack_00000008 = uVar1;
  return;
}
