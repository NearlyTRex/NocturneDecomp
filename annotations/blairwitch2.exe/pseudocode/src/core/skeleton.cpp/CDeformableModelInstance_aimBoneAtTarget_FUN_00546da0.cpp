// Name: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_00546da0
// Address: 00546da0
// Address Range: [[00546da0, 00546f31]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_00546da0(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_00546da0(CDeformableModelInstance *this_ptr,CVector3f *target_position,float blend_weight,int bone_index,CQuaternion4f *base_orientation,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  uint *puVar1;
  byte bVar2;
  float afStackY_18ac [1520];
  uint uStack_d0;
  uint uStack_c0;
  float fStack_b0;
  uint uStack_a0;
  CQuaternion4f CStack_90;
  uint uStack_80;
  float afStack_7c [7];
  float afStack_60 [4];
  uint uStack_50;
  uint uStack_4c;
  float afStack_44 [3];
  uint uStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [4];
  float fStack_c;
  
  bVar2 = 0;
  if (blend_weight <= (float)_DAT_005e732f) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
            (this_ptr,bone_index,&CStack_2c);
  fStack_20 = CStack_2c.x;
  afStack_1c[(uint)bVar2 * -2] = *(float *)((int)&CStack_2c + (uint)bVar2 * -8 + 4);
  afStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&CStack_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  afStack_1c[2] = target_position->x - fStack_20;
  afStack_1c[3] = target_position->y - afStack_1c[0];
  fStack_c = target_position->z - afStack_1c[1];
  afStack_44[0] = afStack_1c[2];
  afStack_7c[(uint)bVar2 * -2 + 0xf] = afStack_1c[(uint)bVar2 * -2 + 3];
  afStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x10] =
       afStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_7c + 0xe);
  uStack_50 = uStack_38;
  afStack_7c[(uint)bVar2 * -2 + 0xc] = afStack_7c[(uint)bVar2 * -2 + 0x12];
  afStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd] =
       afStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x13];
  core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(uStack_50);
  uStack_c0 = uStack_80;
  *(float *)((int)&stack0xffffff44 + (uint)bVar2 * 0xfffffffe * 4) = afStack_7c[(uint)bVar2 * -2];
  *(float *)(&stack0xffffff48 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       afStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  *(float *)((int)(&stack0xffffff48 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
            ((uint)bVar2 * -2 + 1) * 4) =
       (afStack_7c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(uStack_4c,&stack0xffffff40);
  afStack_60[0] = afStack_7c[3];
  afStack_7c[(uint)bVar2 * -2 + 8] = afStack_7c[(uint)bVar2 * -2 + 4];
  afStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 9] =
       afStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
  (afStack_7c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 9)[(uint)bVar2 * -2 + 1] =
       (afStack_7c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(base_orientation,afStack_7c + 7);
  uStack_d0 = uStack_a0;
  *(float *)((int)&stack0xffffff34 + (uint)bVar2 * 0xfffffffe * 4) =
       afStack_7c[(uint)bVar2 * -2 + -8];
  *(float *)(&stack0xffffff38 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       afStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -7];
  *(float *)((int)(&stack0xffffff38 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
            ((uint)bVar2 * -2 + 1) * 4) =
       (afStack_7c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + -7)[(uint)bVar2 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00593c60(&stack0xffffff30);
  CStack_90.w = fStack_b0;
  puVar1 = (uint *)((int)&CStack_90 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  *(uint *)((int)&CStack_90 + (uint)bVar2 * -8 + 4) =
       *(uint *)(&stack0xffffff54 + (uint)bVar2 * -8);
  *puVar1 = *(uint *)(&stack0xffffff58 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff58 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
            (this_ptr,&CStack_90,blend_weight,bone_index,blend_callback);
  return;
}
