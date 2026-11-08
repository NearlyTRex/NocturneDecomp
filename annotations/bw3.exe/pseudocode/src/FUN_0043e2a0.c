// Name: FUN_0043e2a0
// Address: 0043e2a0
// Address Range: [[0043e2a0, 0043f105]]
// Convention: unknown
// Signature: int FUN_0043e2a0(int param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043e2a0(int param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  byte bVar13;
  float afStackY_129c [1004];
  float local_2e0;
  byte local_2dc [8];
  float local_2d4;
  float local_2c8;
  float local_2bc;
  float local_2b4;
  float local_2b0 [4];
  float local_2a0;
  float local_29c [3];
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  uint local_1f8;
  float local_1f4;
  float local_1f0 [4];
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_164;
  float local_158 [3];
  float local_14c;
  float local_148 [5];
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
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8 [5];
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  float local_8c;
  float local_84;
  int local_80;
  int local_7c;
  int local_74;
  float *local_70;
  float local_6c;
  int local_64;
  float local_5c;
  float local_58;
  float local_54;
  float *local_50;
  float *local_4c;
  float *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float *local_2c;
  float local_28;
  int local_24;
  int local_20;
  float local_18;
  
  bVar13 = 0;
  local_a4 = 0;
  if ((float)_DAT_005b9128 <= param_5) {
    param_5 = -9999.0;
  }
  if (param_4 < (float)_DAT_005b9130) {
    param_4 = 0.01;
  }
  *(float *)(param_1 + 0x3ab00) = 1.0 / param_4;
  *(float *)(param_1 + 0x3ab04) = param_5 - param_2[1];
  if (param_6 != 0) {
    local_94 = 0;
    if (0 < *(int *)(param_1 + 0x39ce8)) {
      local_a0 = param_6 + 0xe80;
      local_20 = param_1 + 0x398;
      local_44 = param_1;
      do {
        pfVar8 = (float *)(*(int *)(local_44 + 0x39cec) * 0x11c + local_20);
        pfVar8[2] = 0.0;
        local_7c = 0;
        pfVar8[1] = pfVar8[2];
        *pfVar8 = pfVar8[1];
        if (0 < (int)pfVar8[0x37]) {
          local_48 = pfVar8 + 0x44;
          local_50 = pfVar8 + 0x3b;
          local_4c = pfVar8;
          do {
            FUN_00583260(local_50,(int)local_4c[0x38] * 0x30 + local_a0);
            local_248 = local_194;
            local_2b0[(uint)bVar13 * -2 + 0x1b] = local_1f0[(uint)bVar13 * -2 + 0x18];
            local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
                 local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
            fVar4 = *local_48;
            local_ec = local_248 * fVar4;
            local_e8 = local_244 * *local_48;
            fVar3 = *local_48;
            iVar6 = local_7c + 1;
            local_48 = local_48 + 1;
            local_e4 = local_240 * fVar3;
            local_bc = local_248 * fVar4;
            local_b8[(uint)bVar13 * -2] = local_148[(uint)bVar13 * -2 + 0x18];
            local_b8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
            local_50 = local_50 + 3;
            local_4c = local_4c + 1;
            *pfVar8 = *pfVar8 + local_bc;
            pfVar8[1] = pfVar8[1] + local_b8[0];
            pfVar8[2] = pfVar8[2] + local_b8[1];
            local_7c = iVar6;
          } while (iVar6 < (int)pfVar8[0x37]);
        }
        local_44 = local_44 + 4;
        local_94 = local_94 + 1;
      } while (local_94 < *(int *)(param_1 + 0x39ce8));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x37b4c)) {
      do {
        FUN_0043d830(param_1,iVar6,param_6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x37b4c));
    }
    iVar6 = FUN_004fc070(param_6);
    if (*(int *)(iVar6 + 0x24) == 0) {
      local_a4 = 1;
    }
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    local_80 = param_1 + 0x37b50;
    local_90 = param_1 + 0x398;
    local_40 = param_1;
    do {
      local_9c = iVar6 * 0x11c;
      if (*(int *)(local_40 + 0x470) != -1) {
        local_98 = local_80 + *(int *)(local_40 + 0x470) * 0xac;
        local_158[2] = *(float *)(local_98 + 0x44);
        local_158[0] = 0.0;
        local_158[1] = 0.0;
        FUN_0045b800(local_98 + 0x78,local_1f0 + 0x26);
        iVar7 = local_98;
        local_2b0[2] = local_218;
        local_2b0[(uint)bVar13 * -2 + 3] = local_2b0[(uint)bVar13 * -2 + 0x27];
        local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28];
        local_1f0[2] = *(float *)(iVar7 + 0xa0) + local_2b0[2];
        local_1f0[3] = *(float *)(iVar7 + 0xa4) + local_2b0[3];
        local_1e0 = *(float *)(iVar7 + 0xa8) + local_2a0;
        pfVar8 = (float *)(local_90 + local_9c);
        local_26c = local_1f0[2];
        local_2b0[(uint)bVar13 * -2 + 0x12] = local_1f0[(uint)bVar13 * -2 + 3];
        local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
             local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        if (pfVar8 != local_2b0 + 0x11) {
          *pfVar8 = local_26c;
          pfVar8[1] = local_268;
          pfVar8[2] = local_264;
        }
      }
      iVar6 = iVar6 + 1;
      local_40 = local_40 + 0x11c;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  FUN_0045b550(local_2dc,param_3);
  pfVar8 = (float *)(0x01ED78C8 + 0x15ac74 + (uint)bVar13 * -8);
  local_e0 = *(float *)(0x01ED78C8 + 0x15ac70);
  local_148[(uint)bVar13 * -2 + 0x1b] = *pfVar8;
  local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] = pfVar8[(uint)bVar13 * -2 + 1];
  local_c8 = local_2d4;
  local_c4 = local_2c8;
  local_c0 = local_2bc;
  local_8c = SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
  if (local_8c <= 0.0) {
    local_dc = 0.0;
    local_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    fVar4 = 1.0 / local_8c;
    local_e0 = local_e0 * fVar4;
    local_dc = local_dc * fVar4;
    local_d8 = local_d8 * fVar4;
  }
  local_2e0 = local_d8 * local_2bc + local_e0 * local_2d4 + local_dc * local_2c8;
  local_84 = local_2e0;
  if (0.0 < local_2e0) {
    local_2e0 = 0.0;
  }
  local_2e0 = local_2e0 * (float)_DAT_005b9138;
  local_23c = *(float *)(0x01ED78C8 + 0x15ac70) * local_2e0;
  local_238 = *(float *)(0x01ED78C8 + 0x15ac74) * local_2e0;
  pfVar8 = local_b8 + 2;
  local_234 = *(float *)(0x01ED78C8 + 0x15ac78) * local_2e0;
  local_b8[2] = local_23c;
  local_b8[(uint)bVar13 * -2 + 3] = local_2b0[(uint)bVar13 * -2 + 0x1e];
  local_b8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
       local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
  FUN_0045b870(local_2dc,pfVar8);
  local_284 = local_164;
  local_2b0[(uint)bVar13 * -2 + 0xc] = local_1f0[(uint)bVar13 * -2 + 0x24];
  local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
       local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25];
  local_110 = local_284 + *(float *)(param_1 + 0x3ab24);
  local_10c = local_280 + *(float *)(param_1 + 0x3ab28);
  local_108 = local_27c + *(float *)(param_1 + 0x3ab2c);
  local_188 = local_110;
  local_1f0[(uint)bVar13 * -2 + 0x1b] = local_148[(uint)bVar13 * -2 + 0xf];
  local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
       local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
  pfVar8 = (float *)(param_1 + 0x3ab08);
  *(uint *)(param_1 + 0x3ab2c) = 0;
  *(uint *)(param_1 + 0x3ab28) = *(uint *)(param_1 + 0x3ab2c);
  *(uint *)(param_1 + 0x3ab24) = *(uint *)(param_1 + 0x3ab28);
  local_1dc = *param_2 - *pfVar8;
  local_1d8 = param_2[1] - *(float *)(param_1 + 0x3ab0c);
  local_1d4 = param_2[2] - *(float *)(param_1 + 0x3ab10);
  local_29c[0] = *param_2 - *pfVar8;
  local_2b0[(uint)bVar13 * -2 + 6] = local_1f0[(uint)bVar13 * -2 + 6];
  local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
       local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
  if (pfVar8 != param_2) {
    *pfVar8 = *param_2;
    *(float *)(param_1 + 0x3ab0c) = param_2[1];
    *(float *)(param_1 + 0x3ab10) = param_2[2];
  }
  FUN_0045b870(local_2dc,local_2b0 + 5);
  local_278 = local_f8;
  local_2b0[(uint)bVar13 * -2 + 0xf] = local_148[(uint)bVar13 * -2 + 0x15];
  local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
       local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
  fVar4 = 1.0 / param_4;
  local_1a0 = local_278 * fVar4;
  local_19c = local_274 * fVar4;
  local_198 = local_270 * fVar4;
  local_20c = local_278 * fVar4;
  local_2b0[(uint)bVar13 * -2 + 0x2a] = local_1f0[(uint)bVar13 * -2 + 0x15];
  local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b] =
       local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
  local_290 = local_20c - local_188;
  local_28c = local_208 - local_184;
  local_288 = local_204 - local_180;
  local_230 = local_20c - local_188;
  local_2b0[(uint)bVar13 * -2 + 0x21] = local_2b0[(uint)bVar13 * -2 + 9];
  local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22] =
       local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
  local_11c = local_230 * fVar4;
  local_118 = local_22c * fVar4;
  local_114 = local_228 * fVar4;
  local_128 = local_230 * fVar4;
  local_148[(uint)bVar13 * -2 + 9] = local_148[(uint)bVar13 * -2 + 0xc];
  local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
       local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
  local_17c = *param_3 - *(float *)(param_1 + 0x3ab14);
  local_178 = param_3[1] - *(float *)(param_1 + 0x3ab18);
  local_174 = param_3[2] - *(float *)(param_1 + 0x3ab1c);
  local_148[2] = local_17c;
  local_148[(uint)bVar13 * -2 + 3] = local_1f0[(uint)bVar13 * -2 + 0x1e];
  local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
       local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
  if ((float *)(param_1 + 0x3ab14) != param_3) {
    *(float *)(param_1 + 0x3ab14) = *param_3;
    *(float *)(param_1 + 0x3ab18) = param_3[1];
    *(float *)(param_1 + 0x3ab1c) = param_3[2];
  }
  fVar4 = (float)FUN_0040cfa0(local_148[3]);
  local_30 = fVar4 * (1.0 / param_4) * (1.0 / param_4);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    local_34 = param_1 + 0x398;
    puVar9 = (uint *)(param_1 + 0x464);
    puVar12 = (uint *)(param_1 + 0x3a4);
    iVar7 = param_1;
    do {
      puVar12[2] = 0;
      puVar12[1] = puVar12[2];
      *puVar12 = puVar12[2];
      *(uint *)(iVar7 + 0x450) = 0;
      puVar5 = (uint *)(iVar6 * 0x11c + local_34);
      *(uint *)(iVar7 + 0x454) = 0;
      if (puVar9 != puVar5) {
        puVar12[0x30] = *puVar5;
        puVar12[0x31] = puVar5[1];
        puVar12[0x32] = puVar5[2];
      }
      puVar9 = puVar9 + 0x47;
      iVar7 = iVar7 + 0x11c;
      iVar6 = iVar6 + 1;
      puVar12 = puVar12 + 0x47;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  local_1fc = -*(float *)(param_1 + 0x37b1c);
  local_200 = 0.0;
  local_1f8 = 0;
  local_18 = local_1fc;
  FUN_0045b870(local_2dc,local_2b0 + 0x2c);
  local_254 = local_170;
  local_2b0[(uint)bVar13 * -2 + 0x18] = local_1f0[(uint)bVar13 * -2 + 0x21];
  local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
       local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
  local_28 = *(float *)(param_1 + 0x37b1c) / *(float *)(param_1 + 0x37b20);
  local_38 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    local_3c = 0;
    local_70 = (float *)(param_1 + 0x37b24);
    local_5c = local_128 * local_28;
    local_58 = local_124 * local_28;
    local_2c = (float *)(param_1 + 0x37b34);
    local_54 = local_120 * local_28;
    local_6c = local_30 * local_28;
    local_74 = param_1 + 0x398;
    do {
      pfVar8 = (float *)(*(int *)(*(int *)(param_1 + 0x3aafc) + local_3c) * 0x11c + local_74);
      if (pfVar8[0x1d] == 0.0) {
        pfVar2 = pfVar8 + 9;
        *pfVar2 = *local_70 * *pfVar2;
        pfVar8[10] = *local_70 * pfVar8[10];
        pfVar8[0xb] = *local_70 * pfVar8[0xb];
        local_134 = local_5c;
        local_130 = local_58;
        local_12c = local_54;
        local_1ac = local_5c;
        local_1f0[(uint)bVar13 * -2 + 0x12] = local_148[(uint)bVar13 * -2 + 6];
        local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
             local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        local_104 = local_1ac * *local_2c;
        local_100 = local_1a8 * *local_2c;
        local_fc = local_1a4 * *local_2c;
        pfVar1 = pfVar8 + 3;
        local_d4 = local_1ac * *local_2c;
        local_148[(uint)bVar13 * -2 + 0x1e] = local_148[(uint)bVar13 * -2 + 0x12];
        local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
             local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
        *pfVar1 = *pfVar1 - local_d4;
        pfVar8[4] = pfVar8[4] - local_d0;
        pfVar8[5] = pfVar8[5] - local_cc;
        *pfVar1 = *pfVar1 + local_254;
        pfVar8[4] = pfVar8[4] + local_250;
        pfVar8[5] = pfVar8[5] + local_24c;
        fVar4 = local_6c * *(float *)(param_1 + 0x37b38);
        local_14c = pfVar8[1] * 0.0 - pfVar8[2] * fVar4;
        local_148[0] = pfVar8[2] * 0.0 - *pfVar8 * 0.0;
        local_148[1] = *pfVar8 * fVar4 - pfVar8[1] * 0.0;
        local_260 = local_14c;
        local_2b0[(uint)bVar13 * -2 + 0x15] = local_148[(uint)bVar13 * -2];
        local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
             local_148[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        *pfVar1 = *pfVar1 + local_260;
        pfVar8[4] = pfVar8[4] + local_25c;
        pfVar8[5] = pfVar8[5] + local_258;
        if ((local_a4 == 0) ||
           (_DAT_005b9140 <=
            SQRT(pfVar8[0xb] * pfVar8[0xb] + *pfVar2 * *pfVar2 + pfVar8[10] * pfVar8[10]))) {
          fVar4 = 1.0 / local_28;
          local_224 = pfVar8[3] * fVar4;
          local_220 = pfVar8[4] * fVar4;
          local_21c = fVar4 * pfVar8[5];
          local_2b4 = pfVar8[3] * fVar4;
          local_2b0[(uint)bVar13 * -2] = local_2b0[(uint)bVar13 * -2 + 0x24];
          local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25];
          if (pfVar8 + 6 != &local_2b4) {
            pfVar8[6] = local_2b4;
            pfVar8[7] = local_2b0[0];
            pfVar8[8] = local_2b0[1];
          }
          local_1f4 = pfVar8[6] * param_4;
          local_1f0[0] = pfVar8[7] * param_4;
          pfVar2 = pfVar8 + 9;
          local_1f0[1] = pfVar8[8] * param_4;
          local_1d0 = pfVar8[6] * param_4;
          local_1f0[(uint)bVar13 * -2 + 9] = local_1f0[(uint)bVar13 * -2];
          local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
               local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          *pfVar2 = *pfVar2 + local_1d0;
          pfVar8[10] = pfVar8[10] + local_1cc;
          pfVar8[0xb] = pfVar8[0xb] + local_1c8;
          local_1b8 = *pfVar2 * param_4;
          local_1b4 = pfVar8[10] * param_4;
          local_1b0 = param_4 * pfVar8[0xb];
          local_1c4 = *pfVar2 * param_4;
          local_1f0[(uint)bVar13 * -2 + 0xc] = local_1f0[(uint)bVar13 * -2 + 0xf];
          local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
               local_1f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
          *pfVar8 = *pfVar8 + local_1c4;
          pfVar8[1] = pfVar8[1] + local_1c0;
          pfVar8[2] = pfVar8[2] + local_1bc;
        }
        FUN_0043d9b0(param_1,pfVar8);
      }
      local_38 = local_38 + 1;
      local_3c = local_3c + 4;
    } while (local_38 < *(int *)(param_1 + 0x104));
  }
  local_24 = 0;
  local_64 = param_1 + 0x398;
  do {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x104)) {
      iVar7 = 0;
      do {
        iVar10 = *(int *)(iVar7 + *(int *)(param_1 + 0x3aafc)) * 0x11c + local_64;
        if ((*(int *)(iVar10 + 0x74) == 0) &&
           ((local_a4 == 0 ||
            (_DAT_005b9140 <=
             SQRT(*(float *)(iVar10 + 0x2c) * *(float *)(iVar10 + 0x2c) +
                  *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                  *(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28)))))) {
          FUN_0043d9b0(param_1,iVar10);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x104));
    }
    local_24 = local_24 + 1;
  } while (local_24 < 5);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    pfVar8 = (float *)(param_1 + 0x37b30);
    pfVar2 = (float *)(param_1 + 0x37b2c);
    iVar7 = 0;
    do {
      iVar10 = param_1 + 0x398 + *(int *)(iVar7 + *(int *)(param_1 + 0x3aafc)) * 0x11c;
      if (*(int *)(iVar10 + 0xb8) != 0) {
        *(float *)(iVar10 + 0x24) = *pfVar2 * *(float *)(iVar10 + 0x24);
        *(float *)(iVar10 + 0x28) = *pfVar2 * *(float *)(iVar10 + 0x28);
        *(float *)(iVar10 + 0x2c) = *pfVar2 * *(float *)(iVar10 + 0x2c);
      }
      if (*(int *)(iVar10 + 0xbc) != 0) {
        *(float *)(iVar10 + 0x24) = *pfVar8 * *(float *)(iVar10 + 0x24);
        *(float *)(iVar10 + 0x28) = *pfVar8 * *(float *)(iVar10 + 0x28);
        *(float *)(iVar10 + 0x2c) = *pfVar8 * *(float *)(iVar10 + 0x2c);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    pfVar8 = (float *)(param_1 + 0x398);
    iVar7 = 0;
    do {
      piVar11 = (int *)(*(int *)(param_1 + 0x10c) + iVar7);
      *piVar11 = (int)ROUND(*pfVar8 * _DAT_005dd3b0);
      piVar11[1] = (int)ROUND(pfVar8[1] * _DAT_005dd3b0);
      piVar11[2] = (int)ROUND(pfVar8[2] * _DAT_005dd3b0);
      iVar6 = iVar6 + 1;
      pfVar8 = pfVar8 + 0x47;
      iVar7 = iVar7 + 0xc;
    } while (iVar6 < *(int *)(param_1 + 0x104));
  }
  return param_1;
}
