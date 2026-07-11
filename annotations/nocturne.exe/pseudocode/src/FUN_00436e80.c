// Name: FUN_00436e80
// Address: 00436e80
// Address Range: [[00436e80, 00437a59]]
// Convention: unknown
// Signature: void FUN_00436e80(int param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436e80(int param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6)

{
  float *pfVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  float *pfVar10;
  float local_1e0;
  byte local_1d8 [8];
  float local_1d0;
  float local_1c4;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  uint local_138;
  float local_134;
  uint local_130;
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
  float local_d4;
  float local_d0;
  byte local_cc [12];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  byte local_a8 [12];
  byte local_9c [12];
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  uint local_80;
  float local_7c;
  float local_78;
  int local_74;
  int local_6c;
  float local_68;
  int local_64;
  float *local_5c;
  int local_58;
  float *local_54;
  int local_50;
  uint *local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  int local_38;
  int local_34;
  float *local_30;
  int local_2c;
  float *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  if ((float)_DAT_0057ae25 <= param_5) {
    param_5 = -9999.0;
  }
  if (param_4 < (float)_DAT_0057ae2d) {
    param_4 = 0.01;
  }
  *(float *)(param_1 + 0x3ab00) = 1.0 / param_4;
  *(float *)(param_1 + 0x3ab04) = param_5 - param_2[1];
  if (param_6 != 0) {
    local_40 = 0;
    if (0 < *(int *)(param_1 + 0x39ce8)) {
      local_38 = param_6 + 0xe80;
      local_1c = param_1 + 0x398;
      local_48 = param_1;
      do {
        pfVar5 = (float *)(*(int *)(local_48 + 0x39cec) * 0x11c + local_1c);
        pfVar5[2] = 0.0;
        local_2c = 0;
        pfVar5[1] = pfVar5[2];
        *pfVar5 = pfVar5[1];
        if (0 < (int)pfVar5[0x37]) {
          pfVar10 = pfVar5 + 0x44;
          local_28 = pfVar5 + 0x3b;
          local_30 = pfVar5;
          do {
            pfVar1 = (float *)FUN_0055a8b0(local_9c,local_28,(int)local_30[0x38] * 0x30 + local_38);
            local_174 = *pfVar1 * *pfVar10;
            local_170 = pfVar1[1] * *pfVar10;
            local_16c = pfVar1[2] * *pfVar10;
            pfVar10 = pfVar10 + 1;
            local_28 = local_28 + 3;
            local_30 = local_30 + 1;
            local_2c = local_2c + 1;
            *pfVar5 = *pfVar5 + local_174;
            pfVar5[1] = pfVar5[1] + local_170;
            pfVar5[2] = pfVar5[2] + local_16c;
          } while (local_2c < (int)pfVar5[0x37]);
        }
        local_48 = local_48 + 4;
        local_40 = local_40 + 1;
      } while (local_40 < *(int *)(param_1 + 0x39ce8));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x37b4c)) {
      do {
        FUN_00436580(param_1,iVar6,param_6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x37b4c));
    }
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    local_24 = param_1 + 0x37b50;
    local_20 = param_1 + 0x398;
    local_84 = param_1;
    do {
      local_64 = iVar6 * 0x11c;
      if (*(int *)(local_84 + 0x470) != -1) {
        iVar7 = local_24 + *(int *)(local_84 + 0x470) * 0xac;
        local_160 = *(uint *)(iVar7 + 0x44);
        local_168 = 0;
        local_164 = 0;
        local_80 = local_160;
        pfVar5 = (float *)FUN_0044da40(iVar7 + 0x78,local_cc,&local_168);
        local_18c = *(float *)(iVar7 + 0xa0) + *pfVar5;
        local_188 = *(float *)(iVar7 + 0xa4) + pfVar5[1];
        local_184 = *(float *)(iVar7 + 0xa8) + pfVar5[2];
        pfVar5 = (float *)(local_20 + local_64);
        if (pfVar5 != &local_18c) {
          *pfVar5 = local_18c;
          pfVar5[1] = local_188;
          pfVar5[2] = local_184;
        }
      }
      iVar6 = iVar6 + 1;
      local_84 = local_84 + 0x11c;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  FUN_0044d7a0(local_1d8,param_3);
  local_114 = local_1d0;
  local_110 = local_1c4;
  local_10c = local_1b8;
  local_90 = *(float *)(0x01E57284 + 0x15a878);
  local_8c = *(float *)(0x01E57284 + 0x15a87c);
  local_88 = *(float *)(0x01E57284 + 0x15a880);
  fVar2 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  if (fVar2 <= 0.0) {
    local_8c = 0.0;
    local_90 = 0.0;
    local_88 = 0.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    local_90 = local_90 * fVar2;
    local_8c = local_8c * fVar2;
    local_88 = local_88 * fVar2;
  }
  local_18 = local_88 * local_1b8 + local_90 * local_1d0 + local_8c * local_1c4;
  local_1e0 = local_18;
  if (0.0 < local_18) {
    local_1e0 = 0.0;
  }
  local_d0 = local_1e0 * (float)_DAT_0057ae35;
  local_d8 = *(float *)(0x01E57284 + 0x15a878) * local_d0;
  local_d4 = *(float *)(0x01E57284 + 0x15a87c) * local_d0;
  local_d0 = *(float *)(0x01E57284 + 0x15a880) * local_d0;
  pfVar5 = (float *)FUN_0044daa0(local_1d8,local_a8,&local_d8);
  local_198 = *pfVar5 + *(float *)(param_1 + 0x3ab24);
  local_194 = pfVar5[1] + *(float *)(param_1 + 0x3ab28);
  local_190 = pfVar5[2] + *(float *)(param_1 + 0x3ab2c);
  *(uint *)(param_1 + 0x3ab2c) = 0;
  pfVar5 = (float *)(param_1 + 0x3ab08);
  *(uint *)(param_1 + 0x3ab28) = *(uint *)(param_1 + 0x3ab2c);
  *(float *)(param_1 + 0x3ab24) = *(float *)(param_1 + 0x3ab28);
  local_150 = *param_2 - *pfVar5;
  local_14c = param_2[1] - *(float *)(param_1 + 0x3ab0c);
  local_148 = param_2[2] - *(float *)(param_1 + 0x3ab10);
  if (pfVar5 != param_2) {
    *pfVar5 = *param_2;
    *(float *)(param_1 + 0x3ab0c) = param_2[1];
    *(float *)(param_1 + 0x3ab10) = param_2[2];
  }
  FUN_0044daa0(local_1d8,&local_15c,&local_150);
  local_100 = 1.0 / param_4;
  local_b4 = local_15c * local_100;
  local_b0 = local_158 * local_100;
  local_180 = local_b4 - local_198;
  local_ac = local_154 * local_100;
  local_108 = local_180 * local_100;
  local_17c = local_b0 - local_194;
  local_178 = local_ac - local_190;
  local_104 = local_17c * local_100;
  local_100 = local_178 * local_100;
  pfVar5 = (float *)(param_1 + 0x3ab14);
  local_e4 = *param_3 - *pfVar5;
  local_e0 = param_3[1] - *(float *)(param_1 + 0x3ab18);
  local_dc = param_3[2] - *(float *)(param_1 + 0x3ab1c);
  if (pfVar5 != param_3) {
    *pfVar5 = *param_3;
    *(float *)(param_1 + 0x3ab18) = param_3[1];
    *(float *)(param_1 + 0x3ab1c) = param_3[2];
  }
  fVar2 = (float)FUN_0040df00(local_e0);
  local_78 = fVar2 * (1.0 / param_4) * (1.0 / param_4);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    local_6c = param_1 + 0x398;
    local_4c = (uint *)(param_1 + 0x464);
    puVar3 = (uint *)(param_1 + 0x3a4);
    iVar7 = param_1;
    do {
      puVar3[2] = 0;
      puVar3[1] = puVar3[2];
      *puVar3 = puVar3[2];
      *(uint *)(iVar7 + 0x450) = 0;
      puVar8 = (uint *)(iVar6 * 0x11c + local_6c);
      *(uint *)(iVar7 + 0x454) = 0;
      if (puVar8 != local_4c) {
        puVar3[0x30] = *puVar8;
        puVar3[0x31] = puVar8[1];
        puVar3[0x32] = puVar8[2];
      }
      iVar7 = iVar7 + 0x11c;
      puVar3 = puVar3 + 0x47;
      iVar6 = iVar6 + 1;
      local_4c = local_4c + 0x47;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  local_134 = -*(float *)(param_1 + 0x37b18);
  local_138 = 0;
  local_130 = 0;
  local_14 = local_134;
  FUN_0044daa0(local_1d8,&local_144,&local_138);
  local_3c = *(float *)(param_1 + 0x37b18) / *(float *)(param_1 + 0x37b1c);
  local_44 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    local_5c = (float *)(param_1 + 0x37b20);
    local_68 = local_78 * local_3c;
    local_54 = (float *)(param_1 + 0x37b30);
    local_58 = 0;
    local_74 = param_1 + 0x398;
    do {
      pfVar5 = (float *)(*(int *)(*(int *)(param_1 + 0x3aafc) + local_58) * 0x11c + local_74);
      fVar2 = pfVar5[0x1d];
      if (fVar2 == 0.0) {
        pfVar5[9] = *local_5c * pfVar5[9];
        pfVar5[10] = *local_5c * pfVar5[10];
        pfVar5[0xb] = *local_5c * pfVar5[0xb];
        local_c0 = local_108 * local_3c;
        local_bc = local_104 * local_3c;
        local_b8 = local_100 * local_3c;
        local_1b0 = local_c0 * *local_54;
        local_1ac = local_bc * *local_54;
        local_1a8 = local_b8 * *local_54;
        pfVar10 = pfVar5 + 3;
        *pfVar10 = *pfVar10 - local_1b0;
        pfVar5[4] = pfVar5[4] - local_1ac;
        pfVar5[5] = pfVar5[5] - local_1a8;
        *pfVar10 = *pfVar10 + local_144;
        pfVar5[4] = pfVar5[4] + local_140;
        pfVar5[5] = pfVar5[5] + local_13c;
        local_1a0 = local_68 * *(float *)(param_1 + 0x37b34);
        local_124 = 1.0 / local_3c;
        local_f0 = pfVar5[1] * 0.0 - pfVar5[2] * local_1a0;
        local_ec = pfVar5[2] * 0.0 - *pfVar5 * 0.0;
        local_e8 = *pfVar5 * local_1a0 - pfVar5[1] * 0.0;
        *pfVar10 = *pfVar10 + local_f0;
        pfVar5[4] = pfVar5[4] + local_ec;
        local_12c = *pfVar10 * local_124;
        pfVar5[5] = pfVar5[5] + local_e8;
        local_128 = pfVar5[4] * local_124;
        local_124 = local_124 * pfVar5[5];
        if (pfVar5 + 6 != &local_12c) {
          pfVar5[6] = local_12c;
          pfVar5[7] = local_128;
          pfVar5[8] = local_124;
        }
        local_fc = pfVar5[6] * param_4;
        local_f8 = pfVar5[7] * param_4;
        local_f4 = pfVar5[8] * param_4;
        pfVar10 = pfVar5 + 9;
        *pfVar10 = *pfVar10 + local_fc;
        pfVar5[10] = pfVar5[10] + local_f8;
        local_120 = *pfVar10 * param_4;
        pfVar5[0xb] = pfVar5[0xb] + local_f4;
        local_11c = pfVar5[10] * param_4;
        local_118 = param_4 * pfVar5[0xb];
        *pfVar5 = *pfVar5 + local_120;
        pfVar5[1] = pfVar5[1] + local_11c;
        pfVar5[2] = pfVar5[2] + local_118;
        local_1a4 = fVar2;
        local_19c = fVar2;
        local_7c = local_1a0;
        FUN_004366f0(param_1,pfVar5);
      }
      local_58 = local_58 + 4;
      local_44 = local_44 + 1;
    } while (local_44 < *(int *)(param_1 + 0x104));
  }
  local_34 = param_1 + 0x398;
  local_50 = 0;
  do {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x104)) {
      iVar7 = 0;
      do {
        iVar4 = *(int *)(iVar7 + *(int *)(param_1 + 0x3aafc)) * 0x11c + local_34;
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_004366f0(param_1,iVar4);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x104));
    }
    local_50 = local_50 + 1;
  } while (local_50 < 5);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    pfVar5 = (float *)(param_1 + 0x37b2c);
    pfVar10 = (float *)(param_1 + 0x37b28);
    iVar7 = 0;
    do {
      iVar4 = param_1 + 0x398 + *(int *)(iVar7 + *(int *)(param_1 + 0x3aafc)) * 0x11c;
      if (*(int *)(iVar4 + 0xb8) != 0) {
        *(float *)(iVar4 + 0x24) = *pfVar10 * *(float *)(iVar4 + 0x24);
        *(float *)(iVar4 + 0x28) = *pfVar10 * *(float *)(iVar4 + 0x28);
        *(float *)(iVar4 + 0x2c) = *pfVar10 * *(float *)(iVar4 + 0x2c);
      }
      if (*(int *)(iVar4 + 0xbc) != 0) {
        *(float *)(iVar4 + 0x24) = *pfVar5 * *(float *)(iVar4 + 0x24);
        *(float *)(iVar4 + 0x28) = *pfVar5 * *(float *)(iVar4 + 0x28);
        *(float *)(iVar4 + 0x2c) = *pfVar5 * *(float *)(iVar4 + 0x2c);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    pfVar5 = (float *)(param_1 + 0x398);
    iVar7 = 0;
    do {
      piVar9 = (int *)(*(int *)(param_1 + 0x10c) + iVar7);
      iVar6 = iVar6 + 1;
      *piVar9 = (int)ROUND(*pfVar5 * _DAT_0059b360);
      piVar9[1] = (int)ROUND(pfVar5[1] * _DAT_0059b360);
      piVar9[2] = (int)ROUND(pfVar5[2] * _DAT_0059b360);
      pfVar5 = pfVar5 + 0x47;
      iVar7 = iVar7 + 0xc;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  return;
}
