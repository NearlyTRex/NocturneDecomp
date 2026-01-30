// Name: core_hiram.cpp_FUN_004f4530
// Address: 004f4530
// Address Range: [[004f4530, 004f454b]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_FUN_004f4530(void)

#include "nocturne.h"

/* Signature: byte actors_npc_hiram.cpp_FUN_004f4530(uint param_1) */

void __cdecl core_hiram_cpp_FUN_004f4530(void)

{
  CNPC *in_stack_00000004;
  
  core_npc_cpp_CNPC_FUN_00544870(in_stack_00000004);
  (in_stack_00000004->base).unk2[0x24] = '\0';
  (in_stack_00000004->base).unk2[0x25] = '\0';
  (in_stack_00000004->base).unk2[0x26] = '\0';
  (in_stack_00000004->base).unk2[0x27] = '\0';
  return;
}
