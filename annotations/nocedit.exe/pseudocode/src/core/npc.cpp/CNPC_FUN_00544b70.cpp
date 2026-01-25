// Name: core_npc.cpp_CNPC_FUN_00544b70
// Address: 00544b70
// Address Range: [[00544b70, 00544b99]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_FUN_00544b70(CNPC * this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_FUN_00544b70(CNPC *this_ptr)

{
  int in_stack_00000008;
  
  if (this_ptr->pool_me != 0) {
    if (in_stack_00000008 != 0) {
      (this_ptr->base_character).field2_0x240c[0] = '\x01';
      (this_ptr->base_character).field2_0x240c[1] = '\0';
      (this_ptr->base_character).field2_0x240c[2] = '\0';
      (this_ptr->base_character).field2_0x240c[3] = '\0';
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390
              (&this_ptr->base_character,in_stack_00000008);
  }
  return;
}
