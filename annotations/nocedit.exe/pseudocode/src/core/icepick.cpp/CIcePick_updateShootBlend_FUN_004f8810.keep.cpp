// Name: core_icepick.cpp_CIcePick_updateShootBlend_FUN_004f8810
// Address: 004f8810
// MANUAL RECONSTRUCTION
// Address Range: [[004f8810, 004f8967] [00604936, 0060495a]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_updateShootBlend_FUN_004f8810(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_updateShootBlend_FUN_004f8810(CIcePick *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_02;
  float fVar2;
  CMotionList *this_ptr_01;
  int target_motion_index;
  CQuaternion4f local_30;
  CQuaternion4f local_20;
  float fVar1;
  int iVar5;
  char *motion_name;
  
  if (this_ptr->is_armed != 0) {
    if (this_ptr->guns_drawn == 0) {
      fVar1 = this_ptr->shoot_blend_weight - delta_time * (float)2;
      this_ptr->shoot_blend_weight = fVar1;
      if (fVar1 < 0.0) {
        this_ptr->shoot_blend_weight = 0.0;
      }
    }
    else {
      fVar2 = delta_time * (float)2 + this_ptr->shoot_blend_weight;
      this_ptr->shoot_blend_weight = fVar2;
      if (1.0 < fVar2) {
        this_ptr->shoot_blend_weight = 1.0;
      }
    }
    iVar5 = 1;
    motion_name = "shoot";
    this_ptr_02 = &(this_ptr->base).base.model;
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&this_ptr_02->motion_controller);
    target_motion_index =
         core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_01,motion_name,iVar5);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr_02,target_motion_index,0.0,this_ptr->shoot_blend_weight,
               g_IcePickIndices[0x10],core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    fVar2 = (this_ptr->base).player_input.look_up_down_speed * (float)3.1415926535000001 *
            (float)2 * delta_time + this_ptr->aim_pitch;
    this_ptr->aim_pitch = fVar2;
    if ((float)0.78539816337500001 < fVar2) {
      this_ptr->aim_pitch = 0.7853982;
    }
    if (this_ptr->aim_pitch < (float)-0.78539816337500001) {
      this_ptr->aim_pitch = -0.7853982;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(this_ptr->aim_pitch,&local_30);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (&(this_ptr->base).base.model,&local_20,this_ptr->shoot_blend_weight,
               g_IcePickIndices[0x10],core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  }
  return;
}
