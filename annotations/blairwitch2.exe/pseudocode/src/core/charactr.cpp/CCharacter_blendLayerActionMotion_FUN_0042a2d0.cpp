// Name: core_charactr.cpp_CCharacter_blendLayerActionMotion_FUN_0042a2d0
// Address: 0042a2d0
// Address Range: [[0042a2d0, 0042a322]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042a2d0(CCharacter *this_ptr,float blend_weight,int blend_mode)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_blendLayerActionMotion_FUN_0042a2d0(CCharacter *this_ptr,float blend_weight,int blend_mode)

{
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
            (&this_ptr->model,this_ptr->layer_actions[this_ptr->layer_action_count].motion_index,
             (float)this_ptr->layer_actions[this_ptr->layer_action_count].frame_count *
             this_ptr->layer_action_t,blend_weight,blend_mode,
             core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
  return;
}
