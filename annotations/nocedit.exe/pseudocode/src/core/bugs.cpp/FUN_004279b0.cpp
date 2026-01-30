// Name: core_bugs.cpp_FUN_004279b0
// Address: 004279b0
// Address Range: [[004279b0, 004279c8]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_004279b0(void)

#include "nocturne.h"

void __cdecl core_bugs_cpp_FUN_004279b0(void)

{
  uint *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  *in_stack_00000004 = in_stack_00000008;
  in_stack_00000004[1] = in_stack_0000000c;
  in_stack_00000004[2] = in_stack_00000010;
  return;
}
