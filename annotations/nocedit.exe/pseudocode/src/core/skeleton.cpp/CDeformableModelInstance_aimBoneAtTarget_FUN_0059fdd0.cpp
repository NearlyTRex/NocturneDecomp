// Name: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
// Address: 0059fdd0
// Address Range: [[0059fdd0, 0059ff14]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0 (CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight, int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0059fdd0
          (CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CVector3f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CDeformableModel_MotionBlendWeightFunc *in_stack_00000018;
  float afStackY_1888 [1521];
  CQuaternion4f *quat2_in;
  CQuaternion4f *quat2_in_00;
  CQuaternion4f local_ac;
  CQuaternion4f local_9c;
  CQuaternion4f local_8c;
  CQuaternion4f local_7c;
  CQuaternion4f local_6c;
  CQuaternion4f local_5c;
  CQuaternion4f local_4c;
  CQuaternion4f local_3c;
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar4 = 0;
  if (blend_weight <= (float)0.001) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (this_ptr,&local_14,bone_index);
  local_2c.x = target_position->x - pCVar1->x;
  local_2c.y = target_position->y - pCVar1->y;
  local_2c.z = target_position->z - pCVar1->z;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_20,&local_2c);
  core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_20.x,&local_3c);
  quat2_in_00 = &local_ac;
  local_ac.w = local_3c.w;
  puVar3 = (uint *)((int)&local_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&local_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_ac + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_3c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_20.y,&local_6c);
  quat2_in = &local_8c;
  local_8c.w = local_6c.w;
  puVar3 = (uint *)((int)&local_8c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&local_6c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_8c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_6c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640((CQuaternion4f *)blend_callback,quat2_in,&local_5c)
  ;
  local_7c.w = local_5c.w;
  puVar3 = (uint *)((int)&local_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&local_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_7c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_5c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_7c,quat2_in_00,&local_4c);
  local_9c.w = local_4c.w;
  puVar3 = (uint *)((int)&local_9c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_9c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_4c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
            (this_ptr,&local_9c,blend_weight,bone_index,in_stack_00000018);
  return;
}
