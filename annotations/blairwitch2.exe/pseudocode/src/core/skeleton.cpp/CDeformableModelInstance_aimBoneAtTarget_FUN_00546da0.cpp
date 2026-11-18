// Name: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_00546da0
// Address: 00546da0
// Address Range: [[00546da0, 00546f31]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_00546da0(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_00546da0(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_18ac [1520];
  CQuaternion4f *quat2_in;
  CQuaternion4f CStack_d0;
  CQuaternion4f CStack_c0;
  CQuaternion4f CStack_b0;
  CQuaternion4f CStack_a0;
  CQuaternion4f CStack_90;
  CQuaternion4f CStack_80;
  CQuaternion4f CStack_70;
  CQuaternion4f CStack_60;
  float fStack_50;
  float afStack_4c [2];
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [4];
  float fStack_c;
  
  bVar3 = 0;
  if (blend_weight <= (float)0.001) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
            (this_ptr,bone_index,&CStack_2c);
  fStack_20 = CStack_2c.x;
  afStack_1c[(uint)bVar3 * -2] = *(float *)((int)&CStack_2c + (uint)bVar3 * -8 + 4);
  afStack_1c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)((int)&CStack_2c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  afStack_1c[2] = target_position->x - fStack_20;
  afStack_1c[3] = target_position->y - afStack_1c[0];
  fStack_c = target_position->z - afStack_1c[1];
  CStack_44.x = afStack_1c[2];
  *(float *)((int)&CStack_44 + (uint)bVar3 * -8 + 4) = afStack_1c[(uint)bVar3 * -2 + 3];
  *(float *)((int)&CStack_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_1c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_44,&CStack_38);
  fStack_50 = CStack_38.x;
  afStack_4c[(uint)bVar3 * -2] = *(float *)((int)&CStack_38 + (uint)bVar3 * -8 + 4);
  afStack_4c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)((int)&CStack_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_50,&CStack_80);
  CStack_c0.w = CStack_80.w;
  puVar2 = (uint *)((int)&CStack_c0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  puVar1 = (uint *)((int)&CStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&CStack_c0 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_80 + (uint)bVar3 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
  quat2_in = &CStack_c0;
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(afStack_4c[0],&CStack_70);
  CStack_60.w = CStack_70.w;
  puVar2 = (uint *)((int)&CStack_60 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  puVar1 = (uint *)((int)&CStack_70 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&CStack_60 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_70 + (uint)bVar3 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(base_orientation,&CStack_60,&CStack_a0);
  CStack_d0.w = CStack_a0.w;
  puVar2 = (uint *)((int)&CStack_d0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  puVar1 = (uint *)((int)&CStack_a0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&CStack_d0 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_a0 + (uint)bVar3 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_d0,quat2_in,&CStack_b0);
  CStack_90.w = CStack_b0.w;
  puVar2 = (uint *)((int)&CStack_90 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  puVar1 = (uint *)((int)&CStack_b0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&CStack_90 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_b0 + (uint)bVar3 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (this_ptr,&CStack_90,blend_weight,bone_index,blend_callback);
  return;
}
