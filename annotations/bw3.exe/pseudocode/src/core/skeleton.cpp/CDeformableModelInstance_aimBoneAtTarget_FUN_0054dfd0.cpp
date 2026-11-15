// Name: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0054dfd0
// Address: 0054dfd0
// Address Range: [[0054dfd0, 0054e161]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0054dfd0(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0054dfd0(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_18ac [1520];
  CQuaternion4f *quat2_in;
  CQuaternion4f CStack_d0;
  CQuaternion4f CStack_c0;
  CQuaternion4f CStack_b0;
  CQuaternion4f CStack_a0;
  CQuaternion4f CStack_90;
  CQuaternion4f CStack_80;
  float fStack_70;
  float afStack_6c [3];
  CQuaternion4f CStack_60;
  float fStack_50;
  float afStack_4c [5];
  float fStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [4];
  float fStack_c;
  
  bVar4 = 0;
  if (blend_weight <= (float)_DAT_005d202c) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
            (this_ptr,bone_index,&CStack_2c);
  fStack_20 = CStack_2c.x;
  afStack_1c[(uint)bVar4 * -2] = *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + 4);
  afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  afStack_1c[2] = target_position->x - fStack_20;
  afStack_1c[3] = target_position->y - afStack_1c[0];
  fStack_c = target_position->z - afStack_1c[1];
  afStack_4c[2] = afStack_1c[2];
  afStack_4c[(uint)bVar4 * -2 + 3] = afStack_1c[(uint)bVar4 * -2 + 3];
  afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_4c + 2);
  fStack_50 = fStack_38;
  afStack_4c[(uint)bVar4 * -2] = afStack_4c[(uint)bVar4 * -2 + 6];
  afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(fStack_50,&CStack_80);
  CStack_c0.w = CStack_80.w;
  puVar2 = (uint *)((int)&CStack_c0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar1 = (uint *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&CStack_c0 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
  quat2_in = &CStack_c0;
  core_xform_cpp_quaternionFromAngleY_FUN_00585d10(afStack_4c[0]);
  CStack_60.w = fStack_70;
  pfVar3 = (float *)((int)&CStack_60 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(float *)((int)&CStack_60 + (uint)bVar4 * -8 + 4) = afStack_6c[(uint)bVar4 * -2];
  *pfVar3 = afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  pfVar3[(uint)bVar4 * -2 + 1] =
       (afStack_6c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00585990(base_orientation,&CStack_60,&CStack_a0);
  CStack_d0.w = CStack_a0.w;
  puVar2 = (uint *)((int)&CStack_d0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar1 = (uint *)((int)&CStack_a0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&CStack_d0 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_a0 + (uint)bVar4 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00585990(&CStack_d0,quat2_in,&CStack_b0);
  CStack_90.w = CStack_b0.w;
  puVar2 = (uint *)((int)&CStack_90 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar1 = (uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&CStack_90 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
            (this_ptr,&CStack_90,blend_weight,bone_index,blend_callback);
  return;
}
