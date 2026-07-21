// Name: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20
// Address: 0051ad20
// Address Range: [[0051ad20, 0051b278]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(int param_1)

{
  float *pfVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  ushort *puVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  float local_230 [100];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0xc00) < 2) {
    *(uint *)(param_1 + 0xc60) = 0;
    iVar12 = param_1;
    do {
      iVar3 = iVar12 + 4;
      *(uint *)(iVar12 + 0x26fc) = 0;
      iVar12 = iVar3;
    } while (iVar3 != param_1 + 400);
  }
  else {
    core_skeleton_cpp_CDeformableModel_captureTextures_FUN_005180a0(param_1);
    iVar3 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(param_1);
    local_24 = *(int *)(iVar3 + 0x28558);
    iVar3 = FUN_0056497c(0x22b4);
    local_20 = 0;
    if (iVar3 != 0) {
      local_20 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(iVar3);
    }
    if (local_20 == 0) {
      _DAT_01cc4800 = "..\\core\\skeleton.cpp";
      _DAT_01cc4804 = 0x7d3;
      FUN_004c8440("CDeformableModel::computePartDominantBones - out of memory!");
    }
    iVar3 = local_20;
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(local_20,param_1);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(iVar3);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(iVar3);
    iVar3 = core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(iVar3,0);
    local_34 = 0;
    if (0 < *(int *)(param_1 + 0xc00)) {
      local_2c = param_1;
      iVar12 = 0;
      do {
        local_30 = *(int *)(local_2c + 0xc24) + iVar12;
        if (0 < local_24) {
          iVar3 = local_24 * 4;
          iVar11 = 0;
          do {
            iVar4 = iVar11 + 4;
            *(uint *)((int)local_230 + iVar11) = 0;
            iVar11 = iVar4;
          } while (iVar4 < iVar3);
        }
        if (iVar12 < local_30) {
          local_1c = iVar12 * 0x12;
          local_28 = local_30 * 0x12;
          do {
            puVar9 = (ushort *)(*(int *)(param_1 + 0x7c) + local_1c);
            piVar5 = (int *)((uint)*puVar9 * 0xc + *(int *)(local_20 + 0x2234));
            local_4c = (float)*piVar5 * _DAT_005a1eb0;
            local_48 = (float)piVar5[1] * _DAT_005a1eb0;
            local_44 = (float)piVar5[2] * _DAT_005a1eb0;
            piVar6 = (int *)(*(int *)(local_20 + 0x2234) + (uint)puVar9[1] * 0xc);
            local_70 = (float)*piVar6 * _DAT_005a1eb0;
            local_6c = (float)piVar6[1] * _DAT_005a1eb0;
            local_68 = (float)piVar6[2] * _DAT_005a1eb0;
            piVar6 = (int *)(*(int *)(local_20 + 0x2234) + (uint)puVar9[2] * 0xc);
            local_40 = (float)*piVar6 * _DAT_005a1eb0;
            local_3c = (float)piVar6[1] * _DAT_005a1eb0;
            local_38 = (float)piVar6[2] * _DAT_005a1eb0;
            local_58 = (float)*piVar6 * _DAT_005a1eb0 - local_70;
            local_54 = (float)piVar6[1] * _DAT_005a1eb0 - local_6c;
            local_50 = (float)piVar6[2] * _DAT_005a1eb0 - local_68;
            if (&local_a0 != &local_58) {
              local_a0 = local_58;
              local_9c = local_54;
              local_98 = local_50;
            }
            local_7c = local_70 - (float)*piVar5 * _DAT_005a1eb0;
            local_78 = local_6c - (float)piVar5[1] * _DAT_005a1eb0;
            local_74 = local_68 - (float)piVar5[2] * _DAT_005a1eb0;
            if (&local_88 != &local_7c) {
              local_88 = local_7c;
              local_84 = local_78;
              local_80 = local_74;
            }
            local_94 = local_9c * local_80 - local_98 * local_84;
            local_90 = local_98 * local_88 - local_a0 * local_80;
            local_8c = local_a0 * local_84 - local_9c * local_88;
            if (&local_64 != &local_94) {
              local_64 = local_94;
              local_60 = local_90;
              local_5c = local_8c;
            }
            local_18 = puVar9 + 3;
            local_14 = SQRT(local_5c * local_5c + local_64 * local_64 + local_60 * local_60);
            do {
              pbVar13 = (byte *)((uint)*puVar9 * 0x34 + *(int *)(param_1 + 0x40));
              pbVar7 = pbVar13;
              pbVar10 = pbVar13;
              for (iVar3 = 0; iVar3 < (int)(uint)*pbVar13; iVar3 = iVar3 + 1) {
                pfVar1 = (float *)(pbVar7 + 4);
                pbVar2 = pbVar10 + 1;
                pbVar7 = pbVar7 + 4;
                pbVar10 = pbVar10 + 1;
                local_230[*pbVar2] = *pfVar1 * local_14 + local_230[*pbVar2];
              }
              puVar9 = puVar9 + 1;
            } while (puVar9 != local_18);
            local_1c = local_1c + 0x12;
          } while (local_1c < local_28);
        }
        iVar12 = 1;
        iVar3 = 0;
        if (1 < local_24) {
          iVar11 = 4;
          do {
            if (local_230[iVar3] < *(float *)((int)local_230 + iVar11)) {
              iVar3 = iVar12;
            }
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar12 < local_24);
        }
        *(int *)(local_2c + 0xc60) = iVar3;
        iVar3 = local_34 + 1;
        local_2c = local_2c + 0x60;
        local_34 = iVar3;
        iVar12 = local_30;
      } while (iVar3 < *(int *)(param_1 + 0xc00));
    }
    if (local_20 != 0) {
      iVar3 = (*(code *)**(uint **)(local_20 + 0x50))(local_20,2);
    }
    iVar11 = 0;
    iVar12 = param_1;
    if (0 < local_24) {
      do {
        uVar8 = core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0
                          (param_1,iVar11);
        iVar11 = iVar11 + 1;
        *(uint *)(iVar12 + 0x26fc) = uVar8;
        iVar12 = iVar12 + 4;
      } while (iVar11 < local_24);
      return local_24;
    }
  }
  return iVar3;
}
