// Name: core_npc.cpp_CNPC_FUN_00544b70
// Address: 00544b70
// Address Range: [[00544b70, 00544b99]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_FUN_00544b70(CNPC *this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_FUN_00544b70(CNPC *this_ptr)

{
  int in_stack_00000008;
  
  if (this_ptr->pool_me != 0) {
    if (in_stack_00000008 != 0) {
      (this_ptr->base).unk1[0] = '\x01';
      (this_ptr->base).unk1[1] = '\0';
      (this_ptr->base).unk1[2] = '\0';
      (this_ptr->base).unk1[3] = '\0';
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390(&this_ptr->base,in_stack_00000008);
  }
  return;
}
