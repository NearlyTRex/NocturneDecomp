// Name: core_skeleton.cpp_FUN_0054dfd0
// Address: 0054dfd0
// Address Range: [[0054dfd0, 0054e161]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0054dfd0(CDeformableModelInstance *param_1,float *param_2,float param_3,int param_4,undefined4 param_5,CDeformableModel_MotionBlendWeightFunc *param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeleton_cpp_FUN_0054dfd0(CDeformableModelInstance *param_1,float *param_2,float param_3,int param_4,uint param_5,CDeformableModel_MotionBlendWeightFunc *param_6)

{
  byte bVar1;
  uint auStackY_18ac [1520];
  uint uStack_d0;
  uint uStack_c0;
  uint uStack_b0;
  uint uStack_a0;
  uint uStack_90;
  uint auStack_8c [7];
  uint uStack_70;
  uint auStack_60 [4];
  uint uStack_50;
  uint uStack_4c;
  float afStack_44 [3];
  uint uStack_38;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar1 = 0;
  if (param_3 <= (float)_DAT_005d202c) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(param_1);
  core_skeleton_cpp_FUN_0054dbd0(param_1,param_4);
  fStack_20 = fStack_2c;
  auStack_8c[(uint)bVar1 * -2 + 0x1c] = auStack_8c[(uint)bVar1 * -2 + 0x19];
  auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x1d] =
       auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x1a];
  fStack_14 = *param_2 - fStack_20;
  fStack_10 = param_2[1] - fStack_1c;
  fStack_c = param_2[2] - fStack_18;
  afStack_44[0] = *param_2 - fStack_20;
  auStack_8c[(uint)bVar1 * -2 + 0x13] = auStack_8c[(uint)bVar1 * -2 + 0x1f];
  auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x14] =
       auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x20];
  core_vecdir_cpp_FUN_00576250(auStack_8c + 0x12);
  uStack_50 = uStack_38;
  auStack_8c[(uint)bVar1 * -2 + 0x10] = auStack_8c[(uint)bVar1 * -2 + 0x16];
  auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x11] =
       auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x17];
  core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(uStack_50);
  uStack_c0 = auStack_8c[3];
  *(uint *)((int)&stack0xffffff44 + (uint)bVar1 * 0xfffffffe * 4) =
       auStack_8c[(uint)bVar1 * -2 + 4];
  *(uint *)(&stack0xffffff48 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 5];
  *(uint *)
   ((int)(&stack0xffffff48 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
       (auStack_8c + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 5)[(uint)bVar1 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_00585d10(uStack_4c,&stack0xffffff40);
  auStack_60[0] = uStack_70;
  auStack_8c[(uint)bVar1 * -2 + 0xc] = auStack_8c[(uint)bVar1 * -2 + 8];
  auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xd] =
       auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 9];
  (auStack_8c + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xd)[(uint)bVar1 * -2 + 1] =
       (auStack_8c + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 9)[(uint)bVar1 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00585990(param_5,auStack_8c + 0xb);
  uStack_d0 = uStack_a0;
  *(uint *)((int)&stack0xffffff34 + (uint)bVar1 * 0xfffffffe * 4) =
       auStack_8c[(uint)bVar1 * -2 + -4];
  *(uint *)(&stack0xffffff38 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -3];
  *(uint *)
   ((int)(&stack0xffffff38 + (uint)bVar1 * -8 + (uint)bVar1 * -8) + ((uint)bVar1 * -2 + 1) * 4) =
       (auStack_8c + (uint)bVar1 * -2 + (uint)bVar1 * -2 + -3)[(uint)bVar1 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_00585990(&stack0xffffff30);
  uStack_90 = uStack_b0;
  auStack_8c[(uint)bVar1 * -2] = auStack_8c[(uint)bVar1 * -2 + -8];
  auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       auStack_8c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -7];
  (auStack_8c + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       (auStack_8c + (uint)bVar1 * -2 + (uint)bVar1 * -2 + -7)[(uint)bVar1 * -2 + 1];
  core_skeleton_cpp_FUN_0054d8f0(param_1,(CQuaternion4f *)&uStack_90,param_3,param_4,param_6);
  return;
}
