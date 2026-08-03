// Name: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650
// Address: 0051d650
// Address Range: [[0051d650, 0051d794]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CVector3f *pCVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1888 [1521];
  CQuaternion4f *quat2_in;
  CQuaternion4f *quat2_in_00;
  CQuaternion4f CStack_ac;
  CQuaternion4f CStack_9c;
  CQuaternion4f CStack_8c;
  CQuaternion4f CStack_7c;
  CQuaternion4f CStack_6c;
  CQuaternion4f CStack_5c;
  CQuaternion4f CStack_4c;
  CQuaternion4f CStack_3c;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  bVar4 = 0;
  if (blend_weight <= (float)0.001) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (this_ptr,&CStack_14,bone_index);
  CStack_2c.x = target_position->x - pCVar1->x;
  CStack_2c.y = target_position->y - pCVar1->y;
  CStack_2c.z = target_position->z - pCVar1->z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&CStack_20,&CStack_2c);
  core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(CStack_20.x,&CStack_3c);
  quat2_in_00 = &CStack_ac;
  CStack_ac.w = CStack_3c.w;
  puVar3 = (uint *)((int)&CStack_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&CStack_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_3c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(CStack_20.y,&CStack_6c);
  quat2_in = &CStack_8c;
  CStack_8c.w = CStack_6c.w;
  puVar3 = (uint *)((int)&CStack_8c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&CStack_6c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&CStack_8c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_6c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(base_orientation,quat2_in,&CStack_5c);
  CStack_7c.w = CStack_5c.w;
  puVar3 = (uint *)((int)&CStack_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&CStack_7c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(&CStack_7c,quat2_in_00,&CStack_4c);
  CStack_9c.w = CStack_4c.w;
  puVar3 = (uint *)((int)&CStack_9c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&CStack_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&CStack_9c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_4c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (this_ptr,&CStack_9c,blend_weight,bone_index,blend_callback);
  return;
}
