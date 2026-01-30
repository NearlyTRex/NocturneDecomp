// Name: core_melee.cpp_FUN_0050ebe0
// Address: 0050ebe0
// Address Range: [[0050ebe0, 0050ec0e]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_FUN_0050ebe0(void)

#include "nocturne.h"

/* Signature: byte actors_weapon_melee.cpp_FUN_0050ebe0(uint param_1, uint
   param_2, uint param_3) */

void __cdecl core_melee_cpp_FUN_0050ebe0(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  *(uint *)(in_stack_00000004 + 0x598) = 0x3f800000;
  *(uint *)(in_stack_00000004 + 0x58c) = in_stack_0000000c;
  *(uint *)(in_stack_00000004 + 0x594) = *(uint *)(in_stack_00000004 + 0x598);
  *(uint *)(in_stack_00000004 + 0x590) = in_stack_00000008;
  return;
}
