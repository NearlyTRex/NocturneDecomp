// Name: core_stranger.cpp_CStranger_extractTurnPose_FUN_005bf720
// Address: 005bf720
// Address Range: [[005bf720, 005bf7fe] [0060e416, 0060e437]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_extractTurnPose_FUN_005bf720(CStranger *this_ptr,SPose *out_pose)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_stranger_cpp_CStranger_extractTurnPose_FUN_005bf720(CStranger *this_ptr,SPose *out_pose)

{
  CVector3f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  SPose SStack_1ad8;
  CQuaternion4f local_3c;
  CQuaternion4f local_2c;
  CVector3f local_1c;
  int bone_index;
  float blend_weight;
  byte *blend_callback;
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(this_ptr_00,&SStack_1ad8)
  ;
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
            (this_ptr_00,this_ptr->turn_motion_index,
             this_ptr->turn_blend_weight * (float)40,-1);
  pCVar1 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                     (&local_1c,
                      (this_ptr->base).base.model.bone_transform.pose_data.bone_rotations +
                      g_StrangerIndices[0]);
  blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
  bone_index = -1;
  blend_weight = 1.0;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-pCVar1->y,&local_2c);
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_00,&local_3c,blend_weight,bone_index,
             (CDeformableModel_MotionBlendWeightFunc *)blend_callback);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(this_ptr_00,out_pose);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(this_ptr_00,&SStack_1ad8)
  ;
  return;
}
