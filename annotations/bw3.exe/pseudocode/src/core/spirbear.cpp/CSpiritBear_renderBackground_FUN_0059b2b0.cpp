// Name: core_spirbear.cpp_CSpiritBear_renderBackground_FUN_0059b2b0
// Address: 0059b2b0
// Address Range: [[0059b2b0, 0059b2d9]]
// Convention: __cdecl
// Signature: void __cdecl core_spirbear_cpp_CSpiritBear_renderBackground_FUN_0059b2b0(CSpiritBear *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_spirbear_cpp_CSpiritBear_renderBackground_FUN_0059b2b0(CSpiritBear *this_ptr,int layer_flag)

{
  if (this_ptr->pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).base.render_active = 1;
    }
    core_npc_cpp_CNPC_renderBackground_FUN_00509530(&this_ptr->base,layer_flag);
  }
  return;
}
