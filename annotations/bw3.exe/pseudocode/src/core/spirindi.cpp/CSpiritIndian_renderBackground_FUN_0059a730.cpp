// Name: core_spirindi.cpp_CSpiritIndian_renderBackground_FUN_0059a730
// Address: 0059a730
// Address Range: [[0059a730, 0059a759]]
// Convention: __cdecl
// Signature: void __cdecl core_spirindi_cpp_CSpiritIndian_renderBackground_FUN_0059a730(CSpiritIndian *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_spirindi_cpp_CSpiritIndian_renderBackground_FUN_0059a730(CSpiritIndian *this_ptr,int layer_flag)

{
  if (*(int *)&this_ptr->field_0x34164 != 0) {
    if (layer_flag != 0) {
      *(uint *)&this_ptr->field_0x24fc = 1;
    }
    core_npc_cpp_CNPC_renderBackground_FUN_00509530((CNPC *)this_ptr,layer_flag);
  }
  return;
}
