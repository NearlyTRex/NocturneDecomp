// Name: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042a700
// Address: 0042a700
// Address Range: [[0042a700, 0042a752]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042a700(CCharacter *this_ptr,float blend_weight,int blend_mode)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042a700(CCharacter *this_ptr,float blend_weight,int blend_mode)

{
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (&this_ptr->model,this_ptr->layer_actions[this_ptr->layer_action_count].motion_index,
             (float)this_ptr->layer_actions[this_ptr->layer_action_count].frame_count *
             this_ptr->layer_action_t,blend_weight,blend_mode,
             core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
  return;
}
