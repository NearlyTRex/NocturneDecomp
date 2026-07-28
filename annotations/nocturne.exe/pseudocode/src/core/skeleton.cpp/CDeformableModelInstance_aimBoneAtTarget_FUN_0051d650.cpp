// Name: core_skeleton.cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650
// Address: 0051d650
// Address Range: [[0051d650, 0051d794]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650(CDeformableModelInstance *param_1,float *param_2,float param_3,int param_4,undefined4 param_5,CDeformableModel_MotionBlendWeightFunc *param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_skeleton_cpp_CDeformableModelInstance_aimBoneAtTarget_FUN_0051d650(CDeformableModelInstance *param_1,float *param_2,float param_3,int param_4,uint param_5,CDeformableModel_MotionBlendWeightFunc *param_6)

{
  CVector3f *pCVar1;
  byte bVar2;
  float afStackY_1888 [1521];
  uint *puVar3;
  float *pfVar4;
  float fStack_ac;
  CQuaternion4f CStack_9c;
  uint uStack_8c;
  uint auStack_88 [7];
  uint uStack_6c;
  uint uStack_5c;
  float fStack_4c;
  CQuaternion4f CStack_3c;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  CVector3f CStack_14;
  
  bVar2 = 0;
  if (param_3 <= (float)0.001) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (param_1,&CStack_14,param_4);
  fStack_2c = *param_2 - pCVar1->x;
  fStack_28 = param_2[1] - pCVar1->y;
  fStack_24 = param_2[2] - pCVar1->z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&fStack_20,&fStack_2c);
  core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(fStack_20,&CStack_3c);
  pfVar4 = &stack0xffffff54;
  fStack_ac = CStack_3c.w;
  puVar3 = (uint *)((int)&CStack_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  *(uint *)((int)&stack0xffffff58 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + 4);
  auStack_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -7] = *puVar3;
  (auStack_88 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + -7)[(uint)bVar2 * -2 + 1] =
       puVar3[(uint)bVar2 * -2 + 1];
  core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(uStack_1c,pfVar4);
  puVar3 = &uStack_8c;
  uStack_8c = uStack_6c;
  auStack_88[(uint)bVar2 * -2] = auStack_88[(uint)bVar2 * -2 + 8];
  auStack_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       auStack_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 9];
  (auStack_88 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (auStack_88 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 9)[(uint)bVar2 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(param_5,puVar3);
  auStack_88[3] = uStack_5c;
  auStack_88[(uint)bVar2 * -2 + 4] = auStack_88[(uint)bVar2 * -2 + 0xc];
  auStack_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5] =
       auStack_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd];
  (auStack_88 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1] =
       (auStack_88 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd)[(uint)bVar2 * -2 + 1];
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(auStack_88 + 3);
  CStack_9c.w = fStack_4c;
  puVar3 = (uint *)((int)&CStack_9c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  *(uint *)((int)&CStack_9c + (uint)bVar2 * -8 + 4) = auStack_88[(uint)bVar2 * -2 + 0x10];
  *puVar3 = auStack_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x11];
  puVar3[(uint)bVar2 * -2 + 1] =
       (auStack_88 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x11)[(uint)bVar2 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (param_1,&CStack_9c,param_3,param_4,param_6);
  return;
}
