// Name: core_cloth.cpp_CCloth_orientBoneToChild_FUN_004363e0
// Address: 004363e0
// Address Range: [[004363e0, 0043657f]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_004363e0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_004363e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  byte local_94 [48];
  uint local_64 [12];
  byte local_34 [12];
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar8 = 0;
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_3);
  iVar4 = param_1 + 0x37b50 + param_2 * 0xac;
  local_1c = iVar1;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(iVar1,iVar4,1);
  *(uint *)(iVar4 + 0x44) = 0;
  local_18 = -1;
  *(uint *)(iVar4 + 0x40) = uVar2;
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x28558)) {
    pfVar5 = (float *)(param_3 + 0x58);
    do {
      if ((*(int *)(iVar4 + 0x40) == *(int *)(iVar1 + 0x2857c)) &&
         (local_14 = SQRT(pfVar5[2] * pfVar5[2] + *pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1]),
         *(float *)(iVar4 + 0x44) < local_14)) {
        *(float *)(iVar4 + 0x44) = local_14;
        local_18 = iVar3;
      }
      iVar1 = iVar1 + 0x24;
      iVar3 = iVar3 + 1;
      pfVar5 = pfVar5 + 3;
    } while (iVar3 < *(int *)(local_1c + 0x28558));
  }
  if (local_18 < 0) {
    _DAT_01cc4800 = "..\\core\\cloth.cpp";
    _DAT_01cc4804 = 0x2bf;
    FUN_004c8440("Can't orient bone with no children!");
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
            (local_34,local_18 * 0xc + param_3 + 0x58);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(iVar4 + 0x48,&local_28,local_34);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(local_94,iVar4 + 0x1c,iVar4 + 0x28);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(iVar4 + 0x48,local_94);
  puVar6 = local_64;
  puVar7 = (uint *)(iVar4 + 0x48);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  *(float *)(iVar4 + 0x38) = 1.0 / *(float *)(iVar4 + 0x14);
  *(float *)(iVar4 + 0x3c) = 1.0 / *(float *)(iVar4 + 0x18);
  if (*(float *)(iVar4 + 0x34) <= 0.0) {
    return;
  }
  *(uint *)(iVar4 + 0x44) = *(uint *)(iVar4 + 0x34);
  return;
}
