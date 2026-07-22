// Name: FUN_005396d0
// Address: 005396d0
// Address Range: [[005396d0, 005397ae]]
// Convention: unknown
// Signature: void FUN_005396d0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005396d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte auStack_1ad8 [704];
  uint auStack_1818 [1535];
  byte local_1c [12];
  float local_10;
  
  bVar3 = 0;
  iVar1 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(iVar1,auStack_1ad8);
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
            (iVar1,*(uint *)(param_1 + 0x1faec),
             *(float *)(param_1 + 0x1fabc) * (float)_DAT_005958b7,0xffffffff);
  iVar2 = core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0
                    (local_1c,_DAT_02dc9f50 * 0x10 + param_1 + 0x800);
  local_10 = -*(float *)(iVar2 + 4);
  core_xform_cpp_FUN_0055d4e0(local_10,0x3f800000,0xffffffff,&LAB_0051b650);
  auStack_1818[0x5f7] = auStack_1818[0x5fb];
  auStack_1818[(uint)bVar3 * -2 + 0x5f8] = auStack_1818[(uint)bVar3 * -2 + 0x5fc];
  auStack_1818[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9] =
       auStack_1818[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5fd];
  (auStack_1818 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9)[(uint)bVar3 * -2 + 1] =
       (auStack_1818 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5fd)[(uint)bVar3 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
            (iVar1,auStack_1818 + 0x5f7);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(iVar1,param_2);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60(iVar1,auStack_1ad8);
  return;
}
