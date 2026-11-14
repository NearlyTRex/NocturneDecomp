// Name: core_asgaya.cpp_CAsgaya_renderBackground_FUN_005a1730
// Address: 005a1730
// Address Range: [[005a1730, 005a1759]]
// Convention: __cdecl
// Signature: void __cdecl core_asgaya_cpp_CAsgaya_renderBackground_FUN_005a1730(CAsgaya *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_asgaya_cpp_CAsgaya_renderBackground_FUN_005a1730(CAsgaya *this_ptr,int layer_flag)

{
  if (this_ptr->pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).base.render_active = 1;
    }
    core_npc_cpp_CNPC_renderBackground_FUN_00509530(&this_ptr->base,layer_flag);
  }
  return;
}
