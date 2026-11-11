// Name: core_spirindi.cpp_CSpiritIndian_renderBackground_FUN_0059a730
// Address: 0059a730
// Address Range: [[0059a730, 0059a759]]
// Convention: __cdecl
// Signature: void __cdecl core_spirindi_cpp_CSpiritIndian_renderBackground_FUN_0059a730(CSpiritIndian *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_spirindi_cpp_CSpiritIndian_renderBackground_FUN_0059a730(CSpiritIndian *this_ptr,int layer_flag)

{
  if (this_ptr->pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).base.render_active = 1;
    }
    core_npc_cpp_CNPC_renderBackground_FUN_00509530(&this_ptr->base,layer_flag);
  }
  return;
}
