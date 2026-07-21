// Name: core_cloth.cpp_CCloth_setup_FUN_004359e0
// Address: 004359e0
// Address Range: [[004359e0, 004363d8]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_setup_FUN_004359e0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_setup_FUN_004359e0(int param_1,uint *param_2,uint *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  float *pfVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  float *pfVar17;
  float *pfVar18;
  uint *puVar19;
  int *piVar20;
  byte *pbVar21;
  byte *pbVar22;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  byte local_d8 [12];
  float local_cc;
  float local_c8;
  float local_c4;
  byte local_c0 [12];
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int local_80;
  float *local_7c;
  int local_78;
  int local_74;
  float local_70;
  float *local_6c;
  int local_68;
  int local_64;
  float local_60;
  float *local_5c;
  int local_58;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float *local_1c;
  int local_18;
  float local_14;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    iVar11 = 0;
    do {
      *(int *)(*(int *)(param_1 + 0x3aafc) + iVar11) = iVar6;
      iVar6 = iVar6 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  for (local_28 = 0; local_28 < *(int *)(param_1 + 0x104) + -1; local_28 = local_28 + 1) {
    iVar6 = local_28 + 1;
    if (iVar6 < *(int *)(param_1 + 0x104)) {
      local_88 = local_28 * 4;
      iVar11 = iVar6 * 4;
      do {
        piVar12 = (int *)(local_88 + *(int *)(param_1 + 0x3aafc));
        iVar2 = *piVar12;
        iVar3 = *(int *)(iVar11 + *(int *)(param_1 + 0x3aafc));
        local_78 = iVar2 * 0xc + *(int *)(param_1 + 0x10c);
        if (*(int *)(local_78 + 4) < *(int *)(iVar3 * 0xc + *(int *)(param_1 + 0x10c) + 4)) {
          *piVar12 = iVar3;
          *(int *)(iVar11 + *(int *)(param_1 + 0x3aafc)) = iVar2;
        }
        local_8c = iVar3 * 0xc;
        puVar13 = (uint *)(iVar2 * 0xc + *(int *)(param_1 + 0x10c));
        if ((puVar13[1] == *(uint *)(*(int *)(param_1 + 0x10c) + local_8c + 4)) &&
           (uVar4 = *puVar13, uVar14 = (int)uVar4 >> 0x1f,
           uVar5 = *(uint *)(*(int *)(param_1 + 0x10c) + local_8c), uVar15 = (int)uVar5 >> 0x1f,
           (int)((uVar5 ^ uVar15) - uVar15) < (int)((uVar4 ^ uVar14) - uVar14))) {
          *(int *)(*(int *)(param_1 + 0x3aafc) + local_88) = iVar3;
          *(int *)(iVar11 + *(int *)(param_1 + 0x3aafc)) = iVar2;
        }
        iVar6 = iVar6 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x104));
    }
  }
  if ((uint *)(param_1 + 0x3ab08) != param_2) {
    *(uint *)(param_1 + 0x3ab08) = *param_2;
    *(uint *)(param_1 + 0x3ab0c) = param_2[1];
    *(uint *)(param_1 + 0x3ab10) = param_2[2];
  }
  if ((uint *)(param_1 + 0x3ab14) != param_3) {
    *(uint *)(param_1 + 0x3ab14) = *param_3;
    *(uint *)(param_1 + 0x3ab18) = param_3[1];
    *(uint *)(param_1 + 0x3ab1c) = param_3[2];
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    puVar10 = (uint *)(param_1 + 0x458);
    puVar16 = (uint *)(param_1 + 0x3a4);
    puVar7 = (uint *)(param_1 + 0x3b0);
    do {
      puVar19 = (uint *)(iVar6 * 0x11c + param_1 + 0x398);
      if (puVar19 != puVar10) {
        *puVar19 = *puVar10;
        puVar19[1] = puVar10[1];
        puVar19[2] = puVar10[2];
      }
      puVar16[2] = 0;
      puVar16[1] = puVar16[2];
      *puVar16 = puVar16[1];
      puVar7[2] = 0;
      puVar10 = puVar10 + 0x47;
      puVar7[5] = 0;
      iVar6 = iVar6 + 1;
      puVar7[1] = puVar7[2];
      puVar7[4] = puVar7[5];
      *puVar7 = puVar7[1];
      puVar7[3] = puVar7[5];
      puVar16 = puVar16 + 0x47;
      puVar7 = puVar7 + 0x47;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(param_1);
  iVar11 = 0;
  iVar6 = param_1;
  if (0 < *(int *)(param_1 + 0x39ce8)) {
    do {
      *(uint *)(*(int *)(iVar6 + 0x39cec) * 0x11c + param_1 + 0x40c) = 1;
      iVar11 = iVar11 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar11 < *(int *)(param_1 + 0x39ce8));
  }
  if (param_4 != 0) {
    piVar12 = (int *)core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_4);
    local_84 = piVar12;
    core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(piVar12);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x104)) {
      pfVar17 = (float *)(param_1 + 0x398);
      iVar11 = 0;
      pfVar9 = (float *)(param_1 + 0x458);
      do {
        local_e4 = *pfVar9 + (float)piVar12[0x700];
        local_e0 = pfVar9[1] + (float)piVar12[0x701];
        local_dc = pfVar9[2] + (float)piVar12[0x702];
        if (pfVar17 != &local_e4) {
          *pfVar17 = local_e4;
          pfVar17[1] = local_e0;
          pfVar17[2] = local_dc;
        }
        piVar20 = (int *)(*(int *)(param_1 + 0x10c) + iVar11);
        pfVar9 = pfVar9 + 0x47;
        *piVar20 = (int)ROUND(*pfVar17 * _DAT_0059b360);
        piVar20[1] = (int)ROUND(pfVar17[1] * _DAT_0059b360);
        piVar20[2] = (int)ROUND(pfVar17[2] * _DAT_0059b360);
        iVar6 = iVar6 + 1;
        pfVar17 = pfVar17 + 0x47;
        iVar11 = iVar11 + 0xc;
      } while (iVar6 < *(int *)(param_1 + 0x104));
    }
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(param_4);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(param_4);
    local_2c = 0;
    if (0 < *(int *)(param_1 + 0x39ce8)) {
      local_74 = param_4 + 0xe80;
      local_80 = param_1 + 0x398;
      local_48 = param_1;
      do {
        local_1c = (float *)(local_80 + *(int *)(local_48 + 0x39cec) * 0x11c);
        local_14 = 1e+30;
        local_20 = 0;
        if (0 < local_84[0xb]) {
          local_4c = 0;
          do {
            local_cc = 0.0;
            local_c8 = 0.0;
            pfVar18 = (float *)(local_4c + local_84[0x10]);
            local_c4 = 0.0;
            pfVar17 = pfVar18 + 4;
            pfVar9 = pfVar18;
            local_7c = pfVar18;
            for (iVar6 = 0; pfVar9 = pfVar9 + 1, iVar6 < (int)(uint)*(byte *)local_7c;
                iVar6 = iVar6 + 1) {
              pfVar8 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                          (local_c0,pfVar17,
                                           (uint)*(byte *)((int)pfVar18 + 1) * 0x30 + local_74);
              local_a8 = *pfVar8 * *pfVar9;
              local_a4 = pfVar8[1] * *pfVar9;
              local_a0 = pfVar8[2] * *pfVar9;
              pfVar18 = (float *)((int)pfVar18 + 1);
              pfVar17 = pfVar17 + 3;
              local_cc = local_cc + local_a8;
              local_c8 = local_c8 + local_a4;
              local_c4 = local_c4 + local_a0;
            }
            local_9c = *local_1c - local_cc;
            local_98 = local_1c[1] - local_c8;
            local_94 = local_1c[2] - local_c4;
            local_70 = local_94 * local_94 + local_9c * local_9c + local_98 * local_98;
            if (local_70 < local_14) {
              local_18 = local_20;
              local_14 = local_70;
            }
            local_4c = local_4c + 0x34;
            local_20 = local_20 + 1;
          } while (local_20 < local_84[0xb]);
        }
        pbVar21 = (byte *)(local_18 * 0x34 + local_84[0x10]);
        bVar1 = *pbVar21;
        iVar6 = 0;
        local_1c[0x37] = (float)(uint)bVar1;
        if ((float)(uint)bVar1 != 0.0) {
          pfVar9 = local_1c + 0x3b;
          pfVar17 = (float *)(pbVar21 + 0x10);
          pbVar22 = pbVar21;
          pfVar18 = local_1c;
          do {
            pfVar18[0x38] = (float)(uint)pbVar21[1];
            if (pfVar9 != pfVar17) {
              *pfVar9 = *pfVar17;
              pfVar9[1] = pfVar17[1];
              pfVar9[2] = pfVar17[2];
            }
            pfVar8 = (float *)(pbVar22 + 4);
            pfVar9 = pfVar9 + 3;
            pfVar17 = pfVar17 + 3;
            pbVar21 = pbVar21 + 1;
            pbVar22 = pbVar22 + 4;
            iVar6 = iVar6 + 1;
            pfVar18[0x44] = *pfVar8;
            pfVar18 = pfVar18 + 1;
          } while (iVar6 < (int)local_1c[0x37]);
        }
        local_48 = local_48 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < *(int *)(param_1 + 0x39ce8));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x37b4c)) {
      do {
        core_cloth_cpp_CCloth_orientBoneToChild_FUN_004363e0(param_1,iVar6,param_4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x37b4c));
    }
    local_90 = 0;
    if (0 < *(int *)(param_1 + 0x39ce8)) {
      local_58 = param_4 + 0xe80;
      local_68 = param_1 + 0x398;
      local_38 = 0;
      local_34 = param_1;
      do {
        local_30 = 0;
        local_6c = (float *)(local_68 + *(int *)(local_34 + 0x39cec) * 0x11c);
        local_40 = 0;
        local_3c = local_38 + param_1;
        while (local_30 < *local_84) {
          local_60 = 1e+30;
          local_44 = 0;
          local_50 = local_40;
          for (local_24 = 0; local_24 < *(int *)((int)local_84 + local_50 + 0x2c);
              local_24 = local_24 + 1) {
            pfVar18 = (float *)(local_44 + *(int *)((int)local_84 + local_50 + 0x40));
            local_f0 = 0.0;
            local_ec = 0.0;
            pfVar17 = pfVar18 + 4;
            local_e8 = 0.0;
            pfVar9 = pfVar18;
            local_5c = pfVar18;
            for (iVar6 = 0; pfVar9 = pfVar9 + 1, iVar6 < (int)(uint)*(byte *)local_5c;
                iVar6 = iVar6 + 1) {
              pfVar8 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                          (local_d8,pfVar17,
                                           (uint)*(byte *)((int)pfVar18 + 1) * 0x30 + local_58);
              pfVar18 = (float *)((int)pfVar18 + 1);
              pfVar17 = pfVar17 + 3;
              local_f0 = local_f0 + *pfVar8 * *pfVar9;
              local_ec = local_ec + pfVar8[1] * *pfVar9;
              local_e8 = local_e8 + pfVar8[2] * *pfVar9;
            }
            local_b4 = *local_6c - local_f0;
            local_b0 = local_6c[1] - local_ec;
            local_ac = local_6c[2] - local_e8;
            local_54 = local_ac * local_ac + local_b4 * local_b4 + local_b0 * local_b0;
            if (local_54 < local_60) {
              local_64 = local_24;
              local_60 = local_54;
            }
            local_44 = local_44 + 0x34;
          }
          local_40 = local_40 + 4;
          local_30 = local_30 + 1;
          *(int *)(local_3c + 0x39e7c) = local_64;
          local_3c = local_3c + 400;
        }
        local_38 = local_38 + 4;
        local_34 = local_34 + 4;
        local_90 = local_90 + 1;
      } while (local_90 < *(int *)(param_1 + 0x39ce8));
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(param_4);
  }
  iVar11 = 0;
  iVar6 = param_1;
  if (0 < *(int *)(param_1 + 0x104)) {
    do {
      *(uint *)(iVar6 + 0x470) = 0xffffffff;
      iVar11 = iVar11 + 1;
      iVar6 = iVar6 + 0x11c;
    } while (iVar11 < *(int *)(param_1 + 0x104));
  }
  *(uint *)(param_1 + 0x3ab2c) = 0;
  *(uint *)(param_1 + 0x3ab28) = *(uint *)(param_1 + 0x3ab2c);
  *(uint *)(param_1 + 0x3ab24) = *(uint *)(param_1 + 0x3ab28);
  return;
}
