// Name: core_npc.cpp_CNPC_renderBackground_FUN_005108d0
// Address: 005108d0
// Address Range: [[005108d0, 005108f9]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_005108d0(CNPC *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_005108d0(CNPC *this_ptr,int layer_flag)

{
  if (*(int *)&this_ptr->field_0x24340 != 0) {
    if (layer_flag != 0) {
      *(uint *)&(this_ptr->base).field_0x2568 = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_00425a00(&this_ptr->base,layer_flag);
  }
  return;
}
