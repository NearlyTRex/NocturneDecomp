// Name: core_bugs.cpp_FUN_004254b0
// Address: 004254b0
// Address Range: [[004254b0, 004254ee]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_FUN_004254b0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004254b0(uint param_1, uint param_2)
    */

int __cdecl core_bugs_cpp_FUN_004254b0(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  *in_stack_00000008 = *(uint *)(in_stack_00000004 + 0x199cc);
  in_stack_00000008[1] = *(uint *)(in_stack_00000004 + 0x199d0);
  in_stack_00000008[2] = *(uint *)(in_stack_00000004 + 0x199d4);
  in_stack_00000008[3] = *(uint *)(in_stack_00000004 + 0x199d8);
  in_stack_00000008[4] = *(uint *)(in_stack_00000004 + 0x199dc);
  in_stack_00000008[5] = *(uint *)(in_stack_00000004 + 0x199e0);
  return (int)in_stack_00000008;
}
