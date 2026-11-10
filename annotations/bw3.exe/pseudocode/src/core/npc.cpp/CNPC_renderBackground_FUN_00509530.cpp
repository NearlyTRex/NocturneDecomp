// Name: core_npc.cpp_CNPC_renderBackground_FUN_00509530
// Address: 00509530
// Address Range: [[00509530, 00509559]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_00509530(CNPC *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_00509530(CNPC *this_ptr,int layer_flag)

{
  if (*(int *)&this_ptr->field_0x206ac != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).render_active = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042e300(&this_ptr->base,layer_flag);
  }
  return;
}
