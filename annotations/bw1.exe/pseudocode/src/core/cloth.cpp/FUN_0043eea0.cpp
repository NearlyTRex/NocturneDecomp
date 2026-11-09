// Name: core_cloth.cpp_FUN_0043eea0
// Address: 0043eea0
// Address Range: [[0043eea0, 0043fa15]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043eea0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_FUN_0043eea0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  CCloth *pCVar7;
  CDeformableModel *this_ptr_00;
  CCloth *pCVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  CCloth *pCVar13;
  float *pfVar14;
  float *pfVar15;
  CCloth *pCVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte bVar19;
  float afStackY_1150 [1015];
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_cc;
  float local_c8 [4];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_a8;
  int local_a4;
  CDeformableModel *local_a0;
  float *local_9c;
  CCloth *local_98;
  float local_94;
  CCloth *local_90;
  float *local_8c;
  byte *local_88;
  int local_84;
  int local_80;
  float local_7c;
  CCloth *local_78;
  CCloth *local_74;
  int local_70;
  float local_6c;
  float *local_68;
  byte *local_64;
  int local_60;
  float local_5c;
  int local_58;
  int local_54;
  float *local_50;
  float *local_4c;
  int local_48;
  CCloth *local_44;
  float *local_40;
  int local_3c;
  int local_38;
  CCloth *local_34;
  int local_30;
  CCloth *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar19 = 0;
  iVar5 = 0;
  if (0 < *(int *)(this_ptr + 0x104)) {
    iVar9 = 0;
    do {
      *(int *)(*(int *)(this_ptr + 0x3aafc) + iVar9) = iVar5;
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar5 < *(int *)(this_ptr + 0x104));
  }
  for (local_20 = 0; local_20 < *(int *)(this_ptr + 0x104) + -1; local_20 = local_20 + 1) {
    iVar5 = local_20 + 1;
    if (iVar5 < *(int *)(this_ptr + 0x104)) {
      local_80 = local_20 * 4;
      iVar9 = iVar5 * 4;
      do {
        piVar10 = (int *)(local_80 + *(int *)(this_ptr + 0x3aafc));
        iVar2 = *piVar10;
        iVar3 = *(int *)(iVar9 + *(int *)(this_ptr + 0x3aafc));
        local_a4 = iVar2 * 0xc + *(int *)(this_ptr + 0x10c);
        if (*(int *)(local_a4 + 4) < *(int *)(iVar3 * 0xc + *(int *)(this_ptr + 0x10c) + 4)) {
          *piVar10 = iVar3;
          *(int *)(iVar9 + *(int *)(this_ptr + 0x3aafc)) = iVar2;
        }
        local_60 = iVar3 * 0xc;
        puVar6 = (uint *)(iVar2 * 0xc + *(int *)(this_ptr + 0x10c));
        if ((puVar6[1] == *(uint *)(*(int *)(this_ptr + 0x10c) + local_60 + 4)) &&
           (uVar4 = *puVar6, uVar11 = (int)uVar4 >> 0x1f,
           uVar12 = (int)*(uint *)(*(int *)(this_ptr + 0x10c) + local_60) >> 0x1f,
           (int)((*(uint *)(*(int *)(this_ptr + 0x10c) + local_60) ^ uVar12) - uVar12) <
           (int)((uVar4 ^ uVar11) - uVar11))) {
          *(int *)(*(int *)(this_ptr + 0x3aafc) + local_80) = iVar3;
          *(int *)(iVar9 + *(int *)(this_ptr + 0x3aafc)) = iVar2;
        }
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar5 < *(int *)(this_ptr + 0x104));
    }
  }
  if ((CVector3f *)(this_ptr + 0x3ab08) != position) {
    *(uint *)(this_ptr + 0x3ab08) = *(uint *)position;
    *(uint *)(this_ptr + 0x3ab0c) = *(uint *)&position->field_0x4;
    *(uint *)(this_ptr + 0x3ab10) = *(uint *)&position->field_0x8;
  }
  if ((CVector3f *)(this_ptr + 0x3ab14) != euler) {
    *(uint *)(this_ptr + 0x3ab14) = *(uint *)euler;
    *(uint *)(this_ptr + 0x3ab18) = *(uint *)&euler->field_0x4;
    *(uint *)(this_ptr + 0x3ab1c) = *(uint *)&euler->field_0x8;
  }
  iVar5 = 0;
  if (0 < *(int *)(this_ptr + 0x104)) {
    pCVar8 = this_ptr + 0x458;
    pCVar13 = this_ptr + 0x3a4;
    pCVar7 = this_ptr + 0x3b0;
    do {
      pCVar16 = this_ptr + iVar5 * 0x11c + 0x398;
      if (pCVar16 != pCVar8) {
        *(uint *)pCVar16 = *(uint *)pCVar8;
        *(uint *)(pCVar16 + 4) = *(uint *)(pCVar8 + 4);
        *(uint *)(pCVar16 + 8) = *(uint *)(pCVar8 + 8);
      }
      *(uint *)(pCVar13 + 8) = 0;
      *(uint *)(pCVar13 + 4) = *(uint *)(pCVar13 + 8);
      *(uint *)pCVar13 = *(uint *)(pCVar13 + 4);
      *(uint *)(pCVar7 + 8) = 0;
      pCVar8 = pCVar8 + 0x11c;
      *(uint *)(pCVar7 + 0x14) = 0;
      iVar5 = iVar5 + 1;
      *(uint *)(pCVar7 + 4) = *(uint *)(pCVar7 + 8);
      *(uint *)(pCVar7 + 0x10) = *(uint *)(pCVar7 + 0x14);
      *(uint *)pCVar7 = *(uint *)(pCVar7 + 4);
      *(uint *)(pCVar7 + 0xc) = *(uint *)(pCVar7 + 0x14);
      pCVar13 = pCVar13 + 0x11c;
      pCVar7 = pCVar7 + 0x11c;
    } while (iVar5 < *(int *)(this_ptr + 0x104));
  }
  core_cloth_cpp_FUN_0043ec40(this_ptr);
  iVar5 = 0;
  pCVar13 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x39ce8)) {
    do {
      *(uint *)(this_ptr + *(int *)(pCVar13 + 0x39cec) * 0x11c + 0x40c) = 1;
      iVar5 = iVar5 + 1;
      pCVar13 = pCVar13 + 4;
    } while (iVar5 < *(int *)(this_ptr + 0x39ce8));
  }
  if (model_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(model_ptr);
    local_a0 = this_ptr_00;
    core_skeleton_cpp_FUN_00563c40(this_ptr_00);
    iVar5 = 0;
    if (0 < *(int *)(this_ptr + 0x104)) {
      pCVar13 = this_ptr + 0x398;
      local_9c = (float *)&this_ptr_00->field_0x2740;
      pCVar8 = this_ptr + 0x458;
      local_54 = 0;
      do {
        local_f0 = *(float *)pCVar8 + *local_9c;
        local_ec = *(float *)(pCVar8 + 4) + local_9c[1];
        local_e8 = *(float *)(pCVar8 + 8) + local_9c[2];
        local_cc = *(float *)pCVar8 + *local_9c;
        local_c8[(uint)bVar19 * -2] = *(float *)((int)&stack0xffffff14 + (uint)bVar19 * -8);
        local_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             *(float *)((int)&stack0xffffff18 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
        if (pCVar13 != (CCloth *)&local_cc) {
          *(float *)pCVar13 = local_cc;
          *(float *)(pCVar13 + 4) = local_c8[0];
          *(float *)(pCVar13 + 8) = local_c8[1];
        }
        pCVar8 = pCVar8 + 0x11c;
        piVar10 = (int *)(*(int *)(this_ptr + 0x10c) + local_54);
        iVar5 = iVar5 + 1;
        *piVar10 = (int)ROUND(*(float *)pCVar13 * _DAT_005fd8d0);
        piVar10[1] = (int)ROUND(*(float *)(pCVar13 + 4) * _DAT_005fd8d0);
        piVar10[2] = (int)ROUND(*(float *)(pCVar13 + 8) * _DAT_005fd8d0);
        pCVar13 = pCVar13 + 0x11c;
        local_54 = local_54 + 0xc;
      } while (iVar5 < *(int *)(this_ptr + 0x104));
    }
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(model_ptr);
    core_skeleton_cpp_FUN_00569180(model_ptr);
    local_24 = 0;
    if (0 < *(int *)(this_ptr + 0x39ce8)) {
      local_88 = &model_ptr->field_0xe80;
      local_90 = this_ptr + 0x398;
      local_44 = this_ptr;
      do {
        local_94 = 1e+30;
        local_18 = 0;
        local_98 = local_90 + *(int *)(local_44 + 0x39cec) * 0x11c;
        if (0 < *(int *)&local_a0->field_0x2c) {
          local_48 = 0;
          do {
            local_12c = 0.0;
            local_128 = 0.0;
            pfVar14 = (float *)(local_48 + *(int *)&local_a0->field_0x40);
            local_124 = 0.0;
            local_8c = pfVar14;
            local_50 = pfVar14 + 4;
            local_4c = pfVar14;
            for (iVar5 = 0; pfVar14 = pfVar14 + 1, iVar5 < (int)(uint)*(byte *)local_8c;
                iVar5 = iVar5 + 1) {
              core_xform_cpp_FUN_005b5080
                        (local_50,local_88 + (uint)*(byte *)((int)local_4c + 1) * 0x30);
              local_c8[2] = local_144;
              local_c8[(uint)bVar19 * -2 + 3] = *(float *)(&stack0xfffffec0 + (uint)bVar19 * -8);
              local_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
                   *(float *)(&stack0xfffffec4 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
              local_168 = local_c8[2] * *pfVar14;
              local_164 = local_c8[3] * *pfVar14;
              local_160 = local_b8 * *pfVar14;
              local_120 = local_c8[2] * *pfVar14;
              *(uint *)((int)&stack0xfffffee4 + (uint)bVar19 * -8) =
                   *(uint *)((int)&stack0xfffffe9c + (uint)bVar19 * -8);
              *(uint *)((int)&stack0xfffffee8 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                   *(uint *)((int)&stack0xfffffea0 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
              local_12c = local_12c + local_120;
              local_128 = local_128 + local_11c;
              local_124 = local_124 + local_118;
              local_50 = local_50 + 3;
              local_4c = (float *)((int)local_4c + 1);
            }
            local_b4 = *(float *)local_98 - local_12c;
            local_b0 = *(float *)(local_98 + 4) - local_128;
            local_ac = *(float *)(local_98 + 8) - local_124;
            local_fc = *(float *)local_98 - local_12c;
            *(float *)((int)&stack0xffffff08 + (uint)bVar19 * -8) = local_c8[(uint)bVar19 * -2 + 6];
            *(float *)((int)&stack0xffffff0c + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                 local_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7];
            local_7c = local_f4 * local_f4 + local_fc * local_fc + local_f8 * local_f8;
            if (local_7c < local_94) {
              local_94 = local_7c;
              local_84 = local_18;
            }
            local_18 = local_18 + 1;
            local_48 = local_48 + 0x34;
          } while (local_18 < *(int *)&local_a0->field_0x2c);
        }
        pbVar17 = (byte *)(local_84 * 0x34 + *(int *)&local_a0->field_0x40);
        bVar1 = *pbVar17;
        iVar5 = 0;
        *(uint *)(local_98 + 0xdc) = (uint)bVar1;
        if ((float)(uint)bVar1 != 0.0) {
          pCVar8 = local_98 + 0xec;
          pCVar13 = (CCloth *)(pbVar17 + 0x10);
          pCVar7 = local_98;
          pbVar18 = pbVar17;
          do {
            *(uint *)(pCVar7 + 0xe0) = (uint)pbVar17[1];
            if (pCVar8 != pCVar13) {
              *(float *)pCVar8 = *(float *)pCVar13;
              *(float *)(pCVar8 + 4) = *(float *)(pCVar13 + 4);
              *(float *)(pCVar8 + 8) = *(float *)(pCVar13 + 8);
            }
            pfVar14 = (float *)(pbVar18 + 4);
            pCVar8 = pCVar8 + 0xc;
            pCVar13 = pCVar13 + 0xc;
            pbVar17 = pbVar17 + 1;
            pbVar18 = pbVar18 + 4;
            iVar5 = iVar5 + 1;
            *(float *)(pCVar7 + 0x110) = *pfVar14;
            pCVar7 = pCVar7 + 4;
          } while (iVar5 < (int)*(float *)(local_98 + 0xdc));
        }
        local_24 = local_24 + 1;
        local_44 = local_44 + 4;
      } while (local_24 < *(int *)(this_ptr + 0x39ce8));
    }
    iVar5 = 0;
    if (0 < *(int *)(this_ptr + 0x37b4c)) {
      do {
        core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043fa20(this_ptr,iVar5,model_ptr);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this_ptr + 0x37b4c));
    }
    local_a8 = 0;
    if (0 < *(int *)(this_ptr + 0x39ce8)) {
      local_64 = &model_ptr->field_0xe80;
      local_74 = this_ptr + 0x398;
      local_30 = 0;
      local_2c = this_ptr;
      do {
        local_78 = local_74 + *(int *)(local_2c + 0x39cec) * 0x11c;
        local_38 = 0;
        local_34 = this_ptr + local_30;
        for (local_28 = 0; local_28 < *(int *)local_a0; local_28 = local_28 + 1) {
          local_6c = 1e+30;
          local_58 = local_38;
          local_3c = 0;
          for (local_1c = 0; local_1c < *(int *)(&local_a0->field_0x2c + local_58);
              local_1c = local_1c + 1) {
            local_15c = 0.0;
            pfVar15 = (float *)(local_3c + *(int *)(&local_a0->field_0x40 + local_58));
            local_158 = 0.0;
            local_68 = pfVar15;
            local_154 = 0.0;
            local_40 = pfVar15 + 4;
            pfVar14 = pfVar15;
            for (local_14 = 0; pfVar14 = pfVar14 + 1, local_14 < (int)(uint)*(byte *)local_68;
                local_14 = local_14 + 1) {
              core_xform_cpp_FUN_005b5080
                        (local_40,local_64 + (uint)*(byte *)((int)pfVar15 + 1) * 0x30);
              local_114 = local_d8;
              *(uint *)((int)&stack0xfffffef0 + (uint)bVar19 * -8) =
                   *(uint *)(&stack0xffffff2c + (uint)bVar19 * -8);
              *(uint *)((int)&stack0xfffffef4 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                   *(uint *)(&stack0xffffff30 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
              local_e4 = local_114 * *pfVar14;
              local_e0 = local_110 * *pfVar14;
              pfVar15 = (float *)((int)pfVar15 + 1);
              local_dc = local_10c * *pfVar14;
              local_108 = local_114 * *pfVar14;
              *(uint *)((int)&stack0xfffffefc + (uint)bVar19 * -8) =
                   *(uint *)((int)&stack0xffffff20 + (uint)bVar19 * -8);
              *(uint *)((int)&stack0xffffff00 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                   *(uint *)((int)&stack0xffffff24 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
              local_15c = local_15c + local_108;
              local_158 = local_158 + local_104;
              local_154 = local_154 + local_100;
              local_40 = local_40 + 3;
            }
            local_150 = *(float *)local_78 - local_15c;
            local_14c = *(float *)(local_78 + 4) - local_158;
            local_148 = *(float *)(local_78 + 8) - local_154;
            local_138 = *(float *)local_78 - local_15c;
            *(uint *)((int)&stack0xfffffecc + (uint)bVar19 * -8) =
                 *(uint *)((int)&stack0xfffffeb4 + (uint)bVar19 * -8);
            *(uint *)((int)&stack0xfffffed0 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                 *(uint *)((int)&stack0xfffffeb8 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
            local_5c = local_130 * local_130 + local_138 * local_138 + local_134 * local_134;
            if (local_5c < local_6c) {
              local_6c = local_5c;
              local_70 = local_1c;
            }
            local_3c = local_3c + 0x34;
          }
          *(int *)(local_34 + 0x39e7c) = local_70;
          local_38 = local_38 + 4;
          local_34 = local_34 + 400;
        }
        local_a8 = local_a8 + 1;
        local_2c = local_2c + 4;
        local_30 = local_30 + 4;
      } while (local_a8 < *(int *)(this_ptr + 0x39ce8));
    }
    core_skeleton_cpp_FUN_00567580(model_ptr);
  }
  iVar5 = 0;
  pCVar13 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x104)) {
    do {
      *(uint *)(pCVar13 + 0x470) = 0xffffffff;
      iVar5 = iVar5 + 1;
      pCVar13 = pCVar13 + 0x11c;
    } while (iVar5 < *(int *)(this_ptr + 0x104));
  }
  *(uint *)(this_ptr + 0x3ab2c) = 0;
  *(uint *)(this_ptr + 0x3ab28) = *(uint *)(this_ptr + 0x3ab2c);
  *(uint *)(this_ptr + 0x3ab24) = *(uint *)(this_ptr + 0x3ab28);
  return;
}
