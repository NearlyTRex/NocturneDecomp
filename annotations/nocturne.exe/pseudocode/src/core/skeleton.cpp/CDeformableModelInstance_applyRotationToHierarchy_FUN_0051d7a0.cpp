// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
// Address: 0051d7a0
// Address Range: [[0051d7a0, 0051d96d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0(int param_1,undefined4 param_2,float param_3,int param_4,code *param_5)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0(int param_1,uint param_2,float param_3,int param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1860 [1497];
  float fStack_e8;
  uint local_e4 [12];
  uint local_b4 [12];
  uint uStack_84;
  uint auStack_80 [7];
  uint uStack_64;
  uint auStack_60 [3];
  uint local_54;
  uint auStack_50 [7];
  byte local_34 [12];
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  float fStack_18;
  
  bVar5 = 0;
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  iVar2 = 0;
  local_24 = iVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_0055d220(param_2,&local_28,local_34);
  if (0 < *(int *)(iVar1 + 0x28558)) {
    local_1c = param_1 + 0x6b0;
    local_20 = param_1;
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(local_24,iVar2,param_4);
      if (-1 < iVar1) {
        fStack_18 = (float)(*param_5)(iVar2,param_4,param_3,iVar1,param_1);
        fStack_e8 = fStack_18 * local_28;
        if ((float)_DAT_00591bcb < ABS(fStack_e8)) {
          FUN_0055d560(fStack_e8,local_34);
          uStack_64 = auStack_50[3];
          *(uint *)((int)auStack_60 + (uint)bVar5 * 0xfffffff8) =
               *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + 4) * 4);
          *(uint *)((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4);
          ((uint *)((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
          [(uint)bVar5 * -2 + 1] =
               ((uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4))
               [(uint)bVar5 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_0055d130(local_1c,&uStack_64);
          puVar3 = (uint *)(local_20 + 0x6b4 + (uint)bVar5 * -8);
          *(uint *)(local_20 + 0x6b0) = uStack_84;
          puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
          *puVar3 = *(uint *)((int)auStack_80 + (uint)bVar5 * 0xfffffff8);
          *puVar4 = *(uint *)
                     ((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
          puVar4[(uint)bVar5 * -2 + 1] =
               ((uint *)((int)auStack_60 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
               [(uint)bVar5 * -2 + 1];
        }
      }
      local_20 = local_20 + 0x10;
      iVar2 = iVar2 + 1;
      local_1c = local_1c + 0x10;
    } while (iVar2 < *(int *)(local_24 + 0x28558));
  }
  if (-1 < param_4) {
    return;
  }
  FUN_0055d560(local_28 * param_3,local_34);
  local_54 = auStack_80[3];
  *(uint *)((int)auStack_50 + (uint)bVar5 * 0xfffffff8) =
       *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + -8) * 4);
  *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
       *(uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
  ((uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
  [(uint)bVar5 * -2 + 1] =
       ((uint *)((int)auStack_50 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
       [(uint)bVar5 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_0055ced0(&local_54);
  puVar3 = local_b4;
  puVar4 = local_e4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_0055a910(param_1 + 0x6a4,local_e4);
  return;
}
