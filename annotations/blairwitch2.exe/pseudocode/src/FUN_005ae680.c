// Name: FUN_005ae680
// Address: 005ae680
// Address Range: [[005ae680, 005af1f5]]
// Convention: unknown
// Signature: void FUN_005ae680(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ae680(int param_1,uint *param_2,uint *param_3,int param_4)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  float *pfVar16;
  float *pfVar17;
  uint *puVar18;
  float *pfVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte bVar22;
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
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_a8;
  int local_a4;
  int *local_a0;
  float *local_9c;
  float *local_98;
  float local_94;
  int local_90;
  float *local_8c;
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float *local_78;
  int local_74;
  int local_70;
  float local_6c;
  float *local_68;
  int local_64;
  int local_60;
  float local_5c;
  int local_58;
  int local_54;
  float *local_50;
  float *local_4c;
  int local_48;
  int local_44;
  float *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar22 = 0;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    iVar11 = 0;
    do {
      *(int *)(*(int *)(param_1 + 0x3aafc) + iVar11) = iVar7;
      iVar7 = iVar7 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x104));
  }
  for (local_20 = 0; local_20 < *(int *)(param_1 + 0x104) + -1; local_20 = local_20 + 1) {
    iVar7 = local_20 + 1;
    if (iVar7 < *(int *)(param_1 + 0x104)) {
      local_80 = local_20 * 4;
      iVar11 = iVar7 * 4;
      do {
        piVar12 = (int *)(local_80 + *(int *)(param_1 + 0x3aafc));
        iVar3 = *piVar12;
        iVar4 = *(int *)(iVar11 + *(int *)(param_1 + 0x3aafc));
        local_a4 = iVar3 * 0xc + *(int *)(param_1 + 0x10c);
        if (*(int *)(local_a4 + 4) < *(int *)(iVar4 * 0xc + *(int *)(param_1 + 0x10c) + 4)) {
          *piVar12 = iVar4;
          *(int *)(iVar11 + *(int *)(param_1 + 0x3aafc)) = iVar3;
        }
        local_60 = iVar4 * 0xc;
        puVar8 = (uint *)(iVar3 * 0xc + *(int *)(param_1 + 0x10c));
        if ((puVar8[1] == *(uint *)(*(int *)(param_1 + 0x10c) + local_60 + 4)) &&
           (uVar5 = *puVar8, uVar13 = (int)uVar5 >> 0x1f,
           uVar6 = *(uint *)(*(int *)(param_1 + 0x10c) + local_60), uVar14 = (int)uVar6 >> 0x1f,
           (int)((uVar6 ^ uVar14) - uVar14) < (int)((uVar5 ^ uVar13) - uVar13))) {
          *(int *)(*(int *)(param_1 + 0x3aafc) + local_80) = iVar4;
          *(int *)(iVar11 + *(int *)(param_1 + 0x3aafc)) = iVar3;
        }
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar7 < *(int *)(param_1 + 0x104));
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
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    puVar10 = (uint *)(param_1 + 0x458);
    puVar15 = (uint *)(param_1 + 0x3a4);
    puVar9 = (uint *)(param_1 + 0x3b0);
    do {
      puVar18 = (uint *)(iVar7 * 0x11c + param_1 + 0x398);
      if (puVar18 != puVar10) {
        *puVar18 = *puVar10;
        puVar18[1] = puVar10[1];
        puVar18[2] = puVar10[2];
      }
      puVar15[2] = 0;
      puVar15[1] = puVar15[2];
      *puVar15 = puVar15[1];
      puVar9[2] = 0;
      puVar10 = puVar10 + 0x47;
      puVar9[5] = 0;
      iVar7 = iVar7 + 1;
      puVar9[1] = puVar9[2];
      puVar9[4] = puVar9[5];
      *puVar9 = puVar9[1];
      puVar9[3] = puVar9[5];
      puVar15 = puVar15 + 0x47;
      puVar9 = puVar9 + 0x47;
    } while (iVar7 < *(int *)(param_1 + 0x104));
  }
  FUN_005ae420(param_1);
  iVar11 = 0;
  iVar7 = param_1;
  if (0 < *(int *)(param_1 + 0x39ce8)) {
    do {
      *(uint *)(*(int *)(iVar7 + 0x39cec) * 0x11c + param_1 + 0x40c) = 1;
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar11 < *(int *)(param_1 + 0x39ce8));
  }
  if (param_4 != 0) {
    piVar12 = (int *)FUN_00547810(param_4);
    local_a0 = piVar12;
    FUN_005415d0(piVar12);
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x104)) {
      pfVar16 = (float *)(param_1 + 0x398);
      local_9c = (float *)(piVar12 + 0x700);
      pfVar17 = (float *)(param_1 + 0x458);
      local_54 = 0;
      do {
        local_f0 = *pfVar17 + *local_9c;
        local_ec = pfVar17[1] + local_9c[1];
        local_e8 = pfVar17[2] + local_9c[2];
        local_cc = *pfVar17 + *local_9c;
        *(uint *)((int)&stack0xffffff38 + (uint)bVar22 * -8) =
             *(uint *)((int)&stack0xffffff14 + (uint)bVar22 * -8);
        *(uint *)((int)&stack0xffffff3c + (uint)bVar22 * -8 + (uint)bVar22 * -8) =
             *(uint *)((int)&stack0xffffff18 + (uint)bVar22 * -8 + (uint)bVar22 * -8);
        if (pfVar16 != &stack0xffffff34) {
          *pfVar16 = local_cc;
          pfVar16[1] = local_c8;
          pfVar16[2] = local_c4;
        }
        pfVar17 = pfVar17 + 0x47;
        piVar12 = (int *)(*(int *)(param_1 + 0x10c) + local_54);
        iVar7 = iVar7 + 1;
        *piVar12 = (int)ROUND(*pfVar16 * _DAT_006011a0);
        piVar12[1] = (int)ROUND(pfVar16[1] * _DAT_006011a0);
        piVar12[2] = (int)ROUND(pfVar16[2] * _DAT_006011a0);
        pfVar16 = pfVar16 + 0x47;
        local_54 = local_54 + 0xc;
      } while (iVar7 < *(int *)(param_1 + 0x104));
    }
    FUN_00544e60(param_4);
    FUN_00546ae0(param_4);
    local_24 = 0;
    if (0 < *(int *)(param_1 + 0x39ce8)) {
      local_88 = param_4 + 0xe80;
      local_90 = param_1 + 0x398;
      local_44 = param_1;
      do {
        local_94 = 1e+30;
        local_18 = 0;
        local_98 = (float *)(local_90 + *(int *)(local_44 + 0x39cec) * 0x11c);
        if (0 < local_a0[0xb]) {
          local_48 = 0;
          do {
            local_12c = 0.0;
            local_128 = 0.0;
            pfVar16 = (float *)(local_48 + local_a0[0x10]);
            local_124 = 0.0;
            local_8c = pfVar16;
            local_50 = pfVar16 + 4;
            local_4c = pfVar16;
            for (iVar7 = 0; pfVar16 = pfVar16 + 1, iVar7 < (int)(uint)*(byte *)local_8c;
                iVar7 = iVar7 + 1) {
              FUN_00591530(local_50,(uint)*(byte *)((int)local_4c + 1) * 0x30 + local_88);
              local_c0 = local_144;
              *(uint *)((int)&stack0xffffff44 + (uint)bVar22 * -8) =
                   *(uint *)(&stack0xfffffec0 + (uint)bVar22 * -8);
              *(uint *)((int)&stack0xffffff48 + (uint)bVar22 * -8 + (uint)bVar22 * -8) =
                   *(uint *)(&stack0xfffffec4 + (uint)bVar22 * -8 + (uint)bVar22 * -8);
              local_168 = local_c0 * *pfVar16;
              local_164 = local_bc * *pfVar16;
              local_160 = local_b8 * *pfVar16;
              local_120 = local_c0 * *pfVar16;
              *(uint *)((int)&stack0xfffffee4 + (uint)bVar22 * -8) =
                   *(uint *)((int)&stack0xfffffe9c + (uint)bVar22 * -8);
              *(uint *)((int)&stack0xfffffee8 + (uint)bVar22 * -8 + (uint)bVar22 * -8) =
                   *(uint *)((int)&stack0xfffffea0 + (uint)bVar22 * -8 + (uint)bVar22 * -8);
              local_12c = local_12c + local_120;
              local_128 = local_128 + local_11c;
              local_124 = local_124 + local_118;
              local_50 = local_50 + 3;
              local_4c = (float *)((int)local_4c + 1);
            }
            local_b4 = *local_98 - local_12c;
            local_b0 = local_98[1] - local_128;
            local_ac = local_98[2] - local_124;
            local_fc = *local_98 - local_12c;
            *(uint *)((int)&stack0xffffff08 + (uint)bVar22 * -8) =
                 *(uint *)((int)&stack0xffffff50 + (uint)bVar22 * -8);
            *(uint *)((int)&stack0xffffff0c + (uint)bVar22 * -8 + (uint)bVar22 * -8) =
                 *(uint *)((int)&stack0xffffff54 + (uint)bVar22 * -8 + (uint)bVar22 * -8);
            local_7c = local_f4 * local_f4 + local_fc * local_fc + local_f8 * local_f8;
            if (local_7c < local_94) {
              local_94 = local_7c;
              local_84 = local_18;
            }
            local_18 = local_18 + 1;
            local_48 = local_48 + 0x34;
          } while (local_18 < local_a0[0xb]);
        }
        pbVar20 = (byte *)(local_84 * 0x34 + local_a0[0x10]);
        bVar2 = *pbVar20;
        iVar7 = 0;
        local_98[0x37] = (float)(uint)bVar2;
        if ((float)(uint)bVar2 != 0.0) {
          pfVar17 = local_98 + 0x3b;
          pfVar16 = (float *)(pbVar20 + 0x10);
          pfVar19 = local_98;
          pbVar21 = pbVar20;
          do {
            pfVar19[0x38] = (float)(uint)pbVar20[1];
            if (pfVar17 != pfVar16) {
              *pfVar17 = *pfVar16;
              pfVar17[1] = pfVar16[1];
              pfVar17[2] = pfVar16[2];
            }
            pfVar1 = (float *)(pbVar21 + 4);
            pfVar17 = pfVar17 + 3;
            pfVar16 = pfVar16 + 3;
            pbVar20 = pbVar20 + 1;
            pbVar21 = pbVar21 + 4;
            iVar7 = iVar7 + 1;
            pfVar19[0x44] = *pfVar1;
            pfVar19 = pfVar19 + 1;
          } while (iVar7 < (int)local_98[0x37]);
        }
        local_24 = local_24 + 1;
        local_44 = local_44 + 4;
      } while (local_24 < *(int *)(param_1 + 0x39ce8));
    }
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x37b4c)) {
      do {
        FUN_005af200(param_1,iVar7,param_4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x37b4c));
    }
    local_a8 = 0;
    if (0 < *(int *)(param_1 + 0x39ce8)) {
      local_64 = param_4 + 0xe80;
      local_74 = param_1 + 0x398;
      local_30 = 0;
      local_2c = param_1;
      do {
        local_78 = (float *)(local_74 + *(int *)(local_2c + 0x39cec) * 0x11c);
        local_38 = 0;
        local_34 = local_30 + param_1;
        for (local_28 = 0; local_28 < *local_a0; local_28 = local_28 + 1) {
          local_6c = 1e+30;
          local_58 = local_38;
          local_3c = 0;
          for (local_1c = 0; local_1c < *(int *)((int)local_a0 + local_58 + 0x2c);
              local_1c = local_1c + 1) {
            local_15c = 0.0;
            pfVar17 = (float *)(local_3c + *(int *)((int)local_a0 + local_58 + 0x40));
            local_158 = 0.0;
            local_68 = pfVar17;
            local_154 = 0.0;
            local_40 = pfVar17 + 4;
            pfVar16 = pfVar17;
            for (local_14 = 0; pfVar16 = pfVar16 + 1, local_14 < (int)(uint)*(byte *)local_68;
                local_14 = local_14 + 1) {
              FUN_00591530(local_40,(uint)*(byte *)((int)pfVar17 + 1) * 0x30 + local_64);
              local_114 = local_d8;
              *(uint *)((int)&stack0xfffffef0 + (uint)bVar22 * -8) =
                   *(uint *)(&stack0xffffff2c + (uint)bVar22 * -8);
              *(uint *)((int)&stack0xfffffef4 + (uint)bVar22 * -8 + (uint)bVar22 * -8) =
                   *(uint *)(&stack0xffffff30 + (uint)bVar22 * -8 + (uint)bVar22 * -8);
              local_e4 = local_114 * *pfVar16;
              local_e0 = local_110 * *pfVar16;
              pfVar17 = (float *)((int)pfVar17 + 1);
              local_dc = local_10c * *pfVar16;
              local_108 = local_114 * *pfVar16;
              *(uint *)((int)&stack0xfffffefc + (uint)bVar22 * -8) =
                   *(uint *)((int)&stack0xffffff20 + (uint)bVar22 * -8);
              *(uint *)((int)&stack0xffffff00 + (uint)bVar22 * -8 + (uint)bVar22 * -8) =
                   *(uint *)((int)&stack0xffffff24 + (uint)bVar22 * -8 + (uint)bVar22 * -8);
              local_15c = local_15c + local_108;
              local_158 = local_158 + local_104;
              local_154 = local_154 + local_100;
              local_40 = local_40 + 3;
            }
            local_150 = *local_78 - local_15c;
            local_14c = local_78[1] - local_158;
            local_148 = local_78[2] - local_154;
            local_138 = *local_78 - local_15c;
            *(uint *)((int)&stack0xfffffecc + (uint)bVar22 * -8) =
                 *(uint *)((int)&stack0xfffffeb4 + (uint)bVar22 * -8);
            *(uint *)((int)&stack0xfffffed0 + (uint)bVar22 * -8 + (uint)bVar22 * -8) =
                 *(uint *)((int)&stack0xfffffeb8 + (uint)bVar22 * -8 + (uint)bVar22 * -8);
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
      } while (local_a8 < *(int *)(param_1 + 0x39ce8));
    }
    FUN_00544ee0(param_4);
  }
  iVar11 = 0;
  iVar7 = param_1;
  if (0 < *(int *)(param_1 + 0x104)) {
    do {
      *(uint *)(iVar7 + 0x470) = 0xffffffff;
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + 0x11c;
    } while (iVar11 < *(int *)(param_1 + 0x104));
  }
  *(uint *)(param_1 + 0x3ab2c) = 0;
  *(uint *)(param_1 + 0x3ab28) = *(uint *)(param_1 + 0x3ab2c);
  *(uint *)(param_1 + 0x3ab24) = *(uint *)(param_1 + 0x3ab28);
  return;
}
