// Name: core_npc.cpp_CNPC_renderBackground_FUN_00544b70
// Address: 00544b70
// Address Range: [[00544b70, 00544b99]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_00544b70(CNPC *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_00544b70(CNPC *this_ptr,int layer_flag)

{
  if (this_ptr->pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).render_active = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390(&this_ptr->base,layer_flag);
  }
  return;
}
