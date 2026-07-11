// Name: FUN_00518510
// Address: 00518510
// Address Range: [[00518510, 00518eb8]]
// Convention: unknown
// Signature: void FUN_00518510(int param_1,int param_2,byte *param_3,int *param_4,uint param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00518510(int param_1,int param_2,byte *param_3,int *param_4,uint param_5,int param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint extraout_EDX;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_130;
  byte local_12c [4];
  uint local_128;
  uint local_114;
  uint local_108;
  uint local_fc;
  float local_d0;
  byte *local_cc;
  int local_c8;
  byte *local_c4;
  int local_c0;
  int local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int *local_9c;
  int *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_84 = FUN_00461090(DAT_005ae704);
  local_80 = *(int *)(param_2 * 8 + param_1 + 8);
  if (local_80 != 0) {
    param_5 = param_5 & 0xfffffffe;
  }
  FUN_00460fb0(DAT_005ae704,1);
  local_b0 = 0;
  local_bc = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_ac = param_1 + param_2 * 4;
    local_c8 = param_2 * 4 + param_1;
    local_94 = param_1 + 0xc0;
    local_b8 = param_4;
    local_c4 = param_3;
    local_a8 = local_ac;
    local_a0 = local_ac;
    local_90 = local_ac;
    do {
      iVar11 = local_b0 + *(int *)(local_c8 + 0xc24);
      if ((*local_c4 & 1) != 0) {
        if ((local_84 == 0) && (local_80 != 0)) {
          FUN_00461050(DAT_005ae704,1);
          if (local_b0 < iVar11) {
            local_44 = local_b0 * 0x12;
            local_8c = iVar11 * 0x12;
            do {
              puVar10 = (ushort *)(*(int *)(local_a8 + 0x7c) + local_44);
              iVar9 = *DAT_005ae704;
              piVar8 = (int *)((uint)*puVar10 * 0x30 + iVar9);
              piVar7 = (int *)(iVar9 + (uint)puVar10[1] * 0x30);
              piVar6 = (int *)(iVar9 + (uint)puVar10[2] * 0x30);
              local_30 = *piVar8 * _DAT_01cc5118 + piVar8[1] * _DAT_01cc5124 +
                         piVar8[2] * _DAT_01cc5130;
              local_2c = *piVar8 * _DAT_01cc511c + piVar8[1] * _DAT_01cc5128 +
                         piVar8[2] * _DAT_01cc5134;
              local_28 = piVar8[2] * _DAT_01cc5138 +
                         *piVar8 * _DAT_01cc5120 + piVar8[1] * _DAT_01cc512c;
              local_24 = piVar7[2] * _DAT_01cc5130 +
                         *piVar7 * _DAT_01cc5118 + _DAT_01cc5124 * piVar7[1];
              local_20 = piVar7[1] * _DAT_01cc5128 + *piVar7 * _DAT_01cc511c +
                         piVar7[2] * _DAT_01cc5134;
              local_1c = piVar7[2] * _DAT_01cc5138 +
                         *piVar7 * _DAT_01cc5120 + piVar7[1] * _DAT_01cc512c;
              local_18 = piVar6[2] * _DAT_01cc5130 +
                         *piVar6 * _DAT_01cc5118 + piVar6[1] * _DAT_01cc5124;
              local_78 = (float)local_28;
              local_54 = (float)local_24;
              local_50 = local_54 - (float)local_30;
              local_60 = (float)local_20;
              local_58 = local_60 - (float)local_2c;
              local_5c = (float)local_1c;
              local_7c = (float)local_18;
              local_14 = piVar6[1] * _DAT_01cc512c + *piVar6 * _DAT_01cc5120 +
                         piVar6[2] * _DAT_01cc5138;
              local_74 = (float)(piVar6[1] * _DAT_01cc5128 + *piVar6 * _DAT_01cc511c +
                                piVar6[2] * _DAT_01cc5134);
              local_70 = (float)local_14;
              local_d0 = local_70 - local_5c;
              fVar2 = local_58 * local_d0 - (local_74 - local_60) * (local_5c - local_78);
              fVar3 = (local_7c - local_54) * (local_5c - local_78) - local_50 * local_d0;
              fVar5 = local_50 * (local_74 - local_60) - (local_7c - local_54) * local_58;
              fVar4 = fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3;
              if (fVar4 <= 0.0) {
                local_130 = 127.0;
              }
              else {
                local_130 = (float)_DAT_0059168b / SQRT(fVar4);
              }
              fVar12 = (float10)local_130;
              local_34 = (float)((float10)fVar2 * fVar12);
              local_3c = (float)((float10)fVar3 * fVar12);
              local_38 = (float)((float10)fVar5 * fVar12);
              fVar13 = (float10)_DAT_00591683;
              fVar12 = (float10)fVar5 * fVar12 + fVar13;
              fVar14 = (float10)local_3c + fVar13;
              fVar13 = (float10)local_34 + fVar13;
              FUN_00563a30();
              FUN_00563a30();
              local_2c = (int)ROUND(fVar12);
              local_30 = (int)ROUND(fVar14);
              FUN_00563a30(local_2c);
              local_30 = (int)ROUND(fVar13);
              FUN_00460f20(DAT_005ae704,local_30,extraout_EDX);
              local_128 = 3;
              local_114 = (uint)*puVar10;
              local_108 = (uint)puVar10[1];
              local_fc = (uint)puVar10[2];
              FUN_0045eee0(DAT_005ae704,local_12c);
              local_44 = local_44 + 0x12;
            } while (local_44 < local_8c);
          }
        }
        else if ((*(int *)(param_1 + 0xbc) == 1) ||
                (((local_84 != 0 || (param_6 != 0)) || (local_80 != 0)))) {
          if (((local_84 == 0) && (param_6 == 0)) && (local_80 == 0)) {
            FUN_00461eb0(DAT_005ae704,*local_b8 * 0x240 + local_94);
          }
          FUN_0050ded0(0x01E57284,local_b0 * 0x12 + *(int *)(local_90 + 0x7c),iVar11 - local_b0,
                       param_5);
        }
        else {
          local_68 = -1;
          local_40 = local_b0;
          if (local_b0 < iVar11) {
            local_98 = local_b8;
            do {
              iVar9 = local_40 + 1;
              iVar1 = *(int *)(*(int *)(local_ac + 0x90) + local_40 * 4);
              if (iVar9 < iVar11) {
                piVar7 = (int *)(iVar9 * 4 + *(int *)(local_a0 + 0x90));
                do {
                  if (iVar1 != *piVar7) break;
                  iVar9 = iVar9 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar9 < iVar11);
              }
              if (iVar1 != local_68) {
                FUN_00461eb0(DAT_005ae704,*local_98 * 0x240 + local_94 + iVar1 * 0x48);
                local_68 = iVar1;
              }
              FUN_0050ded0(0x01E57284,local_40 * 0x12 + *(int *)(local_90 + 0x7c),iVar9 - local_40
                           ,param_5);
              local_40 = iVar9;
            } while (iVar9 < iVar11);
          }
        }
      }
      local_c4 = local_c4 + 4;
      local_c8 = local_c8 + 0x60;
      local_b8 = local_b8 + 1;
      local_bc = local_bc + 1;
      local_b0 = iVar11;
    } while (local_bc < *(int *)(param_1 + 0xc00));
  }
  local_b4 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_a4 = param_1 + 0xc0;
    iVar11 = param_1 + param_2 * 4;
    local_c0 = param_2 * 4 + param_1;
    local_cc = param_3;
    do {
      local_88 = local_b0 + *(int *)(local_c0 + 0xc38);
      local_64 = -1;
      if (((*local_cc & 1) != 0) && (local_b0 < local_88)) {
        local_9c = param_4 + local_b4;
        local_48 = local_b0 * 0x12;
        local_4c = local_b0 * 4;
        iVar9 = local_b0;
        do {
          local_6c = local_48 + *(int *)(iVar11 + 0x7c);
          if ((param_3[*(int *)(*(int *)(iVar11 + 0xa4) + (iVar9 - *(int *)(iVar11 + 0x54)) * 4) * 4
                      ] & 1) == 0) {
            if ((((local_84 == 0) && (param_6 == 0)) && (local_80 == 0)) &&
               (iVar1 = *(int *)(*(int *)(iVar11 + 0x90) + local_4c), iVar1 != local_64)) {
              FUN_00461eb0(DAT_005ae704,*local_9c * 0x240 + local_a4 + iVar1 * 0x48);
              local_64 = iVar1;
            }
            FUN_0050ded0(0x01E57284,local_6c,1,param_5);
          }
          iVar9 = iVar9 + 1;
          local_48 = local_48 + 0x12;
          local_4c = local_4c + 4;
        } while (iVar9 < local_88);
      }
      local_b0 = local_88;
      local_cc = local_cc + 4;
      local_c0 = local_c0 + 0x60;
      local_b4 = local_b4 + 1;
    } while (local_b4 < *(int *)(param_1 + 0xc00));
  }
  FUN_00460fb0(DAT_005ae704,0);
  FUN_00461050(DAT_005ae704,1);
  return;
}
