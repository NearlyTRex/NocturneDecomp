// Name: core_npc.cpp_CNPC_renderBackground_FUN_00531ae0
// Address: 00531ae0
// Address Range: [[00531ae0, 00531b09]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_00531ae0(CNPC *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_00531ae0(CNPC *this_ptr,int layer_flag)

{
  if (*(int *)&this_ptr->field_0x1fab0 != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).render_active = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042f320(&this_ptr->base,layer_flag);
  }
  return;
}
