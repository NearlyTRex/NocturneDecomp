// Name: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
// Address: 0059fdd0
// MANUAL RECONSTRUCTION
// Address Range: [[0059fdd0, 0059ff14] [00605015, 00605061] [0060f345, 0060f38e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CVector3f *pCVar1;
  CQuaternion4f local_ac;
  CQuaternion4f local_9c;
  CQuaternion4f local_8c;
  CQuaternion4f local_7c;
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;

  if (blend_weight <= (float)0.001) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (this_ptr,&local_14,bone_index);
  local_2c.x = target_position->x - pCVar1->x;
  local_2c.y = target_position->y - pCVar1->y;
  local_2c.z = target_position->z - pCVar1->z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_20,&local_2c);
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_20.x,&local_ac);
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_20.y,&local_8c);
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(base_orientation,&local_8c,&local_7c);
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_7c,&local_ac,&local_9c);
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (this_ptr,&local_9c,blend_weight,bone_index,blend_callback);
  return;
}
