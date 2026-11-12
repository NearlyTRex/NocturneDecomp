// Name: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_004342c0
// Address: 004342c0
// Address Range: [[004342c0, 00434312]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_004342c0(CCharacter *this_ptr,float blend_weight,int blend_mode)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_004342c0(CCharacter *this_ptr,float blend_weight,int blend_mode)

{
  core_skeleton_cpp_FUN_00568100
            (&this_ptr->model,this_ptr->layer_actions[this_ptr->layer_action_count].motion_index,
             (float)this_ptr->layer_actions[this_ptr->layer_action_count].frame_count *
             this_ptr->layer_action_t,blend_weight,blend_mode,core_skeleton_cpp_FUN_00567360);
  return;
}
