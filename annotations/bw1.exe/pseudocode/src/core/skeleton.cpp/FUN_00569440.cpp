// Name: core_skeleton.cpp_FUN_00569440
// Address: 00569440
// Address Range: [[00569440, 005695d1]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00569440(CDeformableModelInstance *param_1,float *param_2,float param_3,int param_4,undefined4 param_5,CDeformableModel_MotionBlendWeightFunc *param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeleton_cpp_FUN_00569440(CDeformableModelInstance *param_1,float *param_2,float param_3,int param_4,uint param_5,CDeformableModel_MotionBlendWeightFunc *param_6)

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
  uint auStack_7c [7];
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
  
  bVar2 = 0;
  if (param_3 <= (float)_DAT_005f2529) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(param_1);
  core_skeleton_cpp_FUN_00569040(param_1,param_4);
  fStack_20 = fStack_2c;
  auStack_7c[(uint)bVar2 * -2 + 0x18] = auStack_7c[(uint)bVar2 * -2 + 0x15];
  auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x19] =
       auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x16];
  fStack_14 = *param_2 - fStack_20;
  fStack_10 = param_2[1] - fStack_1c;
  fStack_c = param_2[2] - fStack_18;
  afStack_44[0] = *param_2 - fStack_20;
  auStack_7c[(uint)bVar2 * -2 + 0xf] = auStack_7c[(uint)bVar2 * -2 + 0x1b];
  auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x10] =
       auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x1c];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(auStack_7c + 0xe);
  uStack_50 = uStack_38;
  auStack_7c[(uint)bVar2 * -2 + 0xc] = auStack_7c[(uint)bVar2 * -2 + 0x12];
  auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd] =
       auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x13];
  core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(uStack_50);
  uStack_c0 = uStack_80;
  *(uint *)((int)&stack0xffffff44 + (uint)bVar2 * 0xfffffffe * 4) =
       auStack_7c[(uint)bVar2 * -2];
  *(uint *)(&stack0xffffff48 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  *(uint *)
   ((int)(&stack0xffffff48 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       (auStack_7c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(uStack_4c,&stack0xffffff40);
  auStack_60[0] = auStack_7c[3];
  auStack_7c[(uint)bVar2 * -2 + 8] = auStack_7c[(uint)bVar2 * -2 + 4];
  auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 9] =
       auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
  (auStack_7c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 9)[(uint)bVar2 * -2 + 1] =
       (auStack_7c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(param_5,auStack_7c + 7);
  uStack_d0 = uStack_a0;
  *(uint *)((int)&stack0xffffff34 + (uint)bVar2 * 0xfffffffe * 4) =
       auStack_7c[(uint)bVar2 * -2 + -8];
  *(uint *)(&stack0xffffff38 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       auStack_7c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -7];
  *(uint *)
   ((int)(&stack0xffffff38 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       (auStack_7c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + -7)[(uint)bVar2 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xffffff30);
  CStack_90.w = fStack_b0;
  puVar1 = (uint *)((int)&CStack_90 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  *(uint *)((int)&CStack_90 + (uint)bVar2 * -8 + 4) =
       *(uint *)(&stack0xffffff54 + (uint)bVar2 * -8);
  *puVar1 = *(uint *)(&stack0xffffff58 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff58 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (param_1,&CStack_90,param_3,param_4,param_6);
  return;
}
