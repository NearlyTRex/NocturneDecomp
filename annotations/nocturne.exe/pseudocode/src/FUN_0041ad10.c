// Name: FUN_0041ad10
// Address: 0041ad10
// Address Range: [[0041ad10, 0041c846]]
// Convention: unknown
// Signature: void FUN_0041ad10(float *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ad10(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte *puVar11;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  int local_3d0 [8];
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  uint local_320;
  float local_31c;
  uint local_318;
  float local_308;
  float local_304;
  float local_300;
  byte local_2fc [12];
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  byte local_2cc [12];
  byte local_2c0 [12];
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  byte local_284 [12];
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
  float local_224;
  float local_220;
  float local_21c;
  float local_218 [3];
  byte local_20c [12];
  float local_200;
  float local_1fc;
  float local_1f8;
  byte local_1f4 [12];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  byte local_1c4 [24];
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  byte local_188 [12];
  float local_17c;
  float local_178;
  float local_174;
  byte local_170 [24];
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
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
  byte local_f8 [12];
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
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
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
  float *local_6c;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float *local_50;
  float local_4c;
  float local_48;
  float *local_44;
  float *local_40;
  int local_3c;
  float *local_38;
  int local_34;
  float local_30;
  float local_2c;
  float *local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar10 = 0;
  if (param_1[0x95] != 0.0) {
    if (&local_110 != param_1) {
      local_110 = *param_1;
      local_10c = param_1[1];
      local_108 = param_1[2];
    }
    if (&local_344 != param_1) {
      local_344 = *param_1;
      local_340 = param_1[1];
      local_33c = param_1[2];
    }
    local_10c = local_10c + 1.0;
    local_340 = local_340 + _DAT_005796ad;
    local_18 = (float)FUN_00467a00(&DAT_01fba938,&local_110,&local_344,local_1f4,0);
    if ((local_18 <= 0.0) || (1.0 <= local_18)) {
      param_1[0x96] = -9999.0;
    }
    else {
      param_1[0x96] = (local_340 - local_10c) * local_18 + local_10c;
    }
    pfVar6 = param_1 + 0x30;
    pfVar7 = param_1 + 0x33;
    do {
      if (pfVar7 != pfVar6) {
        *pfVar7 = *pfVar6;
        pfVar7[1] = pfVar6[1];
        pfVar7[2] = pfVar6[2];
      }
      pfVar6 = pfVar6 + 0xd;
      pfVar7 = pfVar7 + 0xd;
    } while (pfVar6 != param_1 + 0x98);
    local_318 = 0;
    local_320 = 0;
    local_31c = -param_1[0x25] * (float)_DAT_005796b5;
    pfVar5 = (float *)FUN_0044daa0(param_1 + 6,local_2fc,&local_320);
    pfVar6 = param_1 + 0x19;
    *pfVar6 = *pfVar5 + *pfVar6;
    param_1[0x1a] = pfVar5[1] + param_1[0x1a];
    pfVar7 = param_1 + 0x25;
    param_1[0x1b] = pfVar5[2] + param_1[0x1b];
    local_2e4 = *pfVar6 / *pfVar7;
    local_2e0 = param_1[0x1a] / *pfVar7;
    local_2dc = param_1[0x1b] / *pfVar7;
    if (param_1 + 0x16 != &local_2e4) {
      param_1[0x16] = local_2e4;
      param_1[0x17] = local_2e0;
      param_1[0x18] = local_2dc;
    }
    param_1[0x1f] = param_1[0x22] / param_1[0x26];
    param_1[0x20] = param_1[0x23] / param_1[0x27];
    param_1[0x21] = param_1[0x24] / param_1[0x28];
    param_1[0x1b] = 0.0;
    param_1[0x1a] = param_1[0x1b];
    param_1[0x19] = param_1[0x1a];
    param_1[0x24] = 0.0;
    param_1[0x23] = param_1[0x24];
    param_1[0x22] = param_1[0x23];
    pfVar6 = (float *)FUN_0044da40(param_1 + 6,local_2c0,param_1 + 0x16);
    local_29c = *pfVar6 * param_2;
    local_298 = pfVar6[1] * param_2;
    local_294 = param_2 * pfVar6[2];
    pfVar6 = param_1 + 0x10;
    *pfVar6 = *pfVar6 + local_29c;
    param_1[0x11] = param_1[0x11] + local_298;
    param_1[0x12] = param_1[0x12] + local_294;
    pfVar6 = (float *)FUN_0044daa0(param_1 + 6,local_284,pfVar6);
    if (param_1 + 0x13 != pfVar6) {
      param_1[0x13] = *pfVar6;
      param_1[0x14] = pfVar6[1];
      param_1[0x15] = pfVar6[2];
    }
    local_32c = param_1[0x1f] * param_2;
    local_328 = param_1[0x20] * param_2;
    local_324 = param_2 * param_1[0x21];
    pfVar6 = param_1 + 0x1c;
    fVar1 = param_1[0x1d];
    *pfVar6 = *pfVar6 + local_32c;
    param_1[0x1d] = fVar1 + local_328;
    fVar2 = param_1[0x1e];
    param_1[0x1e] = fVar2 + local_324;
    fVar1 = SQRT((fVar2 + local_324) * param_1[0x1e] +
                 *pfVar6 * *pfVar6 + (fVar1 + local_328) * param_1[0x1d]);
    if ((float)_DAT_005796bd < fVar1) {
      local_60 = (float)_DAT_005796bd / fVar1;
      *pfVar6 = *pfVar6 * local_60;
      param_1[0x1d] = param_1[0x1d] * local_60;
      param_1[0x1e] = param_1[0x1e] * local_60;
    }
    local_248 = param_1[0x10] * param_2;
    local_244 = param_1[0x11] * param_2;
    local_240 = param_1[0x12] * param_2;
    *param_1 = *param_1 + local_248;
    param_1[1] = param_1[1] + local_244;
    param_1[2] = param_1[2] + local_240;
    local_17c = param_1[0x1c] * param_2;
    local_178 = param_1[0x1d] * param_2;
    local_174 = param_1[0x1e] * param_2;
    FUN_0044d7a0(&local_420,&local_17c);
    local_3f8 = param_1[8] * local_408 + param_1[6] * local_420 + param_1[7] * local_414;
    local_3f4 = param_1[8] * local_404 + param_1[7] * local_410 + param_1[6] * local_41c;
    local_3f0 = param_1[8] * local_400 + param_1[7] * local_40c + param_1[6] * local_418;
    local_3ec = param_1[0xb] * local_408 + param_1[9] * local_420 + param_1[10] * local_414;
    local_3e8 = param_1[0xb] * local_404 + param_1[10] * local_410 + param_1[9] * local_41c;
    local_3e4 = param_1[0xb] * local_400 + param_1[10] * local_40c + param_1[9] * local_418;
    local_3e0 = param_1[0xe] * local_408 + param_1[0xc] * local_420 + param_1[0xd] * local_414;
    local_3dc = param_1[0xe] * local_404 + param_1[0xd] * local_410 + param_1[0xc] * local_41c;
    local_3d8 = param_1[0xe] * local_400 + param_1[0xd] * local_40c + param_1[0xc] * local_418;
    pfVar6 = &local_3f8;
    pfVar7 = param_1 + 6;
    for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
      pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
    }
    pfVar6 = (float *)FUN_0044dbd0(param_1 + 6,local_170);
    if (param_1 + 3 != pfVar6) {
      param_1[3] = *pfVar6;
      param_1[4] = pfVar6[1];
      param_1[5] = pfVar6[2];
    }
    iVar8 = 0;
    if (0 < (int)param_1[0x2c]) {
      local_40 = param_1 + 0x2d;
      local_44 = param_1 + 6;
      pfVar6 = param_1 + 0x30;
      do {
        pfVar7 = (float *)FUN_0044da40(local_44,local_20c,local_40 + iVar8 * 0xd);
        local_e0 = *param_1 + *pfVar7;
        fVar1 = param_1[1];
        fVar2 = pfVar7[1];
        local_dc = fVar1 + fVar2;
        fVar3 = param_1[2];
        fVar4 = pfVar7[2];
        local_d8 = fVar3 + fVar4;
        if (pfVar6 != &local_e0) {
          *pfVar6 = *param_1 + *pfVar7;
          pfVar6[1] = fVar1 + fVar2;
          pfVar6[2] = fVar3 + fVar4;
        }
        iVar8 = iVar8 + 1;
        pfVar6 = pfVar6 + 0xd;
      } while (iVar8 < (int)param_1[0x2c]);
    }
    local_20 = 0;
    local_50 = param_1 + 0x2d;
    local_1c = 0;
    local_6c = param_1 + 0x33;
    pfVar6 = param_1 + 0x30;
    pfVar7 = param_1;
    pfVar5 = param_1 + 0x2d;
    if (0 < (int)param_1[0x2c]) {
      do {
        local_28 = pfVar5;
        if (param_1[0x96] <= pfVar7[0x31]) {
          local_80 = *pfVar6 - *local_6c;
          local_7c = pfVar6[1] - local_6c[1];
          local_78 = pfVar6[2] - local_6c[2];
          if ((float)_DAT_005796ed <
              SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c)) {
            local_18 = (float)FUN_00467a00(&DAT_01fba938,local_6c,pfVar6,local_28 + 10,0);
            pfVar7[0x36] = local_18;
            if ((0.0 < pfVar7[0x36]) && (pfVar7[0x36] < 1.0)) {
              local_3d0[local_1c] = local_20;
              local_1c = local_1c + 1;
            }
          }
        }
        else {
          if (pfVar6 != local_6c) {
            *local_6c = *pfVar6;
            local_6c[1] = pfVar6[1];
            local_6c[2] = pfVar6[2];
          }
          pfVar7[0x34] = param_1[0x96] + (float)_DAT_005796f5;
          fVar1 = param_1[0x96];
          pfVar7[0x37] = 0.0;
          pfVar7[0x38] = 1.0;
          pfVar7[0x39] = 0.0;
          pfVar7[0x36] = (fVar1 - pfVar7[0x34]) / (pfVar7[0x31] - pfVar7[0x34]);
          local_3d0[local_1c] = local_20;
          local_1c = local_1c + 1;
        }
        pfVar6 = pfVar6 + 0xd;
        local_20 = local_20 + 1;
        local_6c = local_6c + 0xd;
        local_28 = local_28 + 0xd;
        pfVar7 = pfVar7 + 0xd;
        pfVar5 = local_28;
      } while (local_20 < (int)param_1[0x2c]);
    }
    iVar8 = local_3d0[0];
    if (local_1c == 1) {
      local_1dc = local_50[local_3d0[0] * 0xd + 3] - local_50[local_3d0[0] * 0xd + 6];
      local_1d8 = local_50[local_3d0[0] * 0xd + 4] - local_50[local_3d0[0] * 0xd + 7];
      local_1d4 = local_50[local_3d0[0] * 0xd + 5] - local_50[local_3d0[0] * 0xd + 8];
      local_5c = (1.0 - param_1[local_3d0[0] * 0xd + 0x36]) * (float)_DAT_005796c5;
      local_1a0 = local_1dc * local_5c;
      local_19c = local_1d8 * local_5c;
      local_198 = local_1d4 * local_5c;
      *param_1 = *param_1 - local_1a0;
      param_1[1] = param_1[1] - local_19c;
      param_1[2] = param_1[2] - local_198;
      FUN_0044daa0(param_1 + 6,&local_194,local_50 + local_3d0[0] * 0xd + 10);
      pfVar6 = param_1 + 0x13;
      local_374 = *pfVar6;
      local_370 = param_1[0x14];
      local_36c = param_1[0x15];
      local_48 = (local_18c * param_1[0x15] + local_194 * *pfVar6 + local_190 * param_1[0x14]) *
                 _DAT_005796cd;
      local_104 = local_194 * local_48;
      local_100 = local_190 * local_48;
      local_fc = local_18c * local_48;
      local_1e8 = local_104 - *pfVar6;
      local_1e4 = local_100 - param_1[0x14];
      local_1e0 = local_fc - param_1[0x15];
      if (&local_140 != &local_1e8) {
        local_140 = local_1e8;
        local_13c = local_1e4;
        local_138 = local_1e0;
      }
      local_140 = local_140 * _DAT_005796d1 * _DAT_005796d5;
      local_13c = local_13c * _DAT_005796d1 * _DAT_005796d5;
      local_138 = local_138 * _DAT_005796d1 * _DAT_005796d5;
      pfVar6 = param_1 + 0x25;
      local_bc = local_140 - param_1[0x13];
      local_b8 = local_13c - param_1[0x14];
      local_b4 = local_138 - param_1[0x15];
      local_14c = local_bc * *pfVar6;
      local_148 = local_b8 * *pfVar6;
      local_144 = local_b4 * *pfVar6;
      local_300 = 1.0 / param_2;
      local_308 = local_14c * local_300;
      local_304 = local_148 * local_300;
      local_300 = local_144 * local_300;
      param_1[0x19] = param_1[0x19] + local_308;
      param_1[0x1a] = param_1[0x1a] + local_304;
      param_1[0x1b] = param_1[0x1b] + local_300;
      param_1[0x1e] = 0.0;
      param_1[0x1d] = param_1[0x1e];
      param_1[0x1c] = param_1[0x1d];
      pfVar6 = param_1 + iVar8 * 0xd + 0x2d;
      local_11c = pfVar6[1] * local_300 - pfVar6[2] * local_304;
      local_118 = pfVar6[2] * local_308 - *pfVar6 * local_300;
      local_b0 = local_11c * _DAT_005796d9;
      local_114 = *pfVar6 * local_304 - pfVar6[1] * local_308;
      local_ac = local_118 * _DAT_005796d9;
      local_a8 = local_114 * _DAT_005796d9;
      param_1[0x22] = param_1[0x22] + local_b0;
      param_1[0x23] = param_1[0x23] + local_ac;
      param_1[0x24] = param_1[0x24] + local_a8;
      local_38c = *pfVar6;
      local_388 = pfVar6[1];
      local_384 = pfVar6[2];
      local_8c = 0.0;
      local_84 = 0.0;
      local_88 = param_1[0x25] * (float)_DAT_005796b5;
      pfVar6 = (float *)FUN_0044daa0(param_1 + 6,local_188,&local_8c);
      if (&local_8c != pfVar6) {
        local_8c = *pfVar6;
        local_88 = pfVar6[1];
        local_84 = pfVar6[2];
      }
      local_350 = local_388 * local_84 - local_384 * local_88;
      local_34c = local_384 * local_8c - local_38c * local_84;
      local_348 = local_38c * local_88 - local_388 * local_8c;
      param_1[0x22] = param_1[0x22] + local_350;
      param_1[0x23] = param_1[0x23] + local_34c;
      param_1[0x24] = param_1[0x24] + local_348;
    }
    if (local_1c == 2) {
      local_23c = param_1[local_3d0[0] * 0xd + 0x30] - param_1[local_3d0[0] * 0xd + 0x33];
      local_238 = param_1[local_3d0[0] * 0xd + 0x31] - param_1[local_3d0[0] * 0xd + 0x34];
      local_234 = param_1[local_3d0[0] * 0xd + 0x32] - param_1[local_3d0[0] * 0xd + 0x35];
      local_4c = (1.0 - param_1[local_3d0[0] * 0xd + 0x36]) * (float)_DAT_005796dd;
      local_1ac = local_23c * local_4c;
      local_68 = local_3d0[1];
      local_1a8 = local_238 * local_4c;
      local_1a4 = local_234 * local_4c;
      local_26c = param_1[local_3d0[1] * 0xd + 0x30] - param_1[local_3d0[1] * 0xd + 0x33];
      local_268 = param_1[local_3d0[1] * 0xd + 0x31] - param_1[local_3d0[1] * 0xd + 0x34];
      local_264 = param_1[local_3d0[1] * 0xd + 0x32] - param_1[local_3d0[1] * 0xd + 0x35];
      local_64 = (1.0 - param_1[local_3d0[1] * 0xd + 0x36]) * (float)_DAT_005796dd;
      local_a0 = local_268 * local_64;
      local_a4 = local_26c * local_64;
      local_9c = local_264 * local_64;
      if (SQRT(local_1a4 * local_1a4 + local_1ac * local_1ac + local_1a8 * local_1a8) <=
          SQRT(local_9c * local_9c + local_a4 * local_a4 + local_a0 * local_a0)) {
        *param_1 = *param_1 + local_a4;
        puVar11 = local_f8;
        param_1[1] = param_1[1] + local_a0;
        fVar1 = param_1[2] + local_9c;
      }
      else {
        *param_1 = *param_1 + local_1ac;
        puVar11 = local_1c4;
        param_1[1] = param_1[1] + local_1a8;
        fVar1 = param_1[2] + local_1a4;
        local_3d0[1] = local_3d0[0];
      }
      param_1[2] = fVar1;
      pfVar6 = (float *)FUN_0044daa0(param_1 + 6,puVar11,param_1 + local_3d0[1] * 0xd + 0x37);
      if (&local_338 != pfVar6) {
        local_338 = *pfVar6;
        local_334 = pfVar6[1];
        local_330 = pfVar6[2];
      }
      pfVar6 = param_1 + 0x13;
      local_368 = *pfVar6;
      local_364 = param_1[0x14];
      local_360 = param_1[0x15];
      local_58 = (local_330 * param_1[0x15] + local_338 * *pfVar6 + local_334 * param_1[0x14]) *
                 _DAT_005796cd;
      local_2d8 = local_338 * local_58;
      local_2d4 = local_334 * local_58;
      local_2d0 = local_330 * local_58;
      local_d4 = local_2d8 - *pfVar6;
      local_d0 = local_2d4 - param_1[0x14];
      local_cc = local_2d0 - param_1[0x15];
      if (&local_1d0 != &local_d4) {
        local_1d0 = local_d4;
        local_1cc = local_d0;
        local_1c8 = local_cc;
      }
      local_1d0 = local_1d0 * _DAT_005796d1 * _DAT_005796e5;
      local_1cc = local_1cc * _DAT_005796d1 * _DAT_005796e5;
      local_1c8 = local_1c8 * _DAT_005796d1 * _DAT_005796e5;
      pfVar6 = param_1 + 0x25;
      local_260 = local_1d0 - param_1[0x13];
      local_25c = local_1cc - param_1[0x14];
      local_258 = local_1c8 - param_1[0x15];
      local_c8 = local_260 * *pfVar6;
      local_c4 = local_25c * *pfVar6;
      local_c0 = local_258 * *pfVar6;
      local_12c = 1.0 / param_2;
      local_134 = local_c8 * local_12c;
      local_130 = local_c4 * local_12c;
      local_12c = local_c0 * local_12c;
      param_1[0x19] = param_1[0x19] + local_134;
      param_1[0x1a] = param_1[0x1a] + local_130;
      param_1[0x1b] = param_1[0x1b] + local_12c;
      param_1[0x1e] = 0.0;
      param_1[0x1d] = param_1[0x1e];
      param_1[0x1c] = param_1[0x1d];
      pfVar7 = param_1 + local_3d0[0] * 0xd + 0x2d;
      local_200 = pfVar7[1] * local_12c - pfVar7[2] * local_130;
      local_1fc = pfVar7[2] * local_134 - *pfVar7 * local_12c;
      local_3a4 = local_200 * _DAT_005796d9;
      local_3a0 = local_1fc * _DAT_005796d9;
      local_1f8 = *pfVar7 * local_130 - pfVar7[1] * local_134;
      local_39c = local_1f8 * _DAT_005796d9;
      pfVar6 = param_1 + 0x22;
      *pfVar6 = *pfVar6 + local_3a4;
      param_1[0x23] = param_1[0x23] + local_3a0;
      pfVar5 = param_1 + local_68 * 0xd + 0x2d;
      param_1[0x24] = param_1[0x24] + local_39c;
      local_35c = pfVar5[1] * local_12c - pfVar5[2] * local_130;
      local_358 = pfVar5[2] * local_134 - *pfVar5 * local_12c;
      local_354 = *pfVar5 * local_130 - pfVar5[1] * local_134;
      local_3b0 = local_35c * _DAT_005796d9;
      local_3ac = local_358 * _DAT_005796d9;
      local_3a8 = local_354 * _DAT_005796d9;
      *pfVar6 = *pfVar6 + local_3b0;
      param_1[0x23] = param_1[0x23] + local_3ac;
      param_1[0x24] = param_1[0x24] + local_3a8;
      local_290 = *pfVar7;
      local_28c = pfVar7[1];
      local_288 = pfVar7[2];
      local_ec = *pfVar5;
      local_e8 = pfVar5[1];
      local_e4 = pfVar5[2];
      local_2f0 = 0.0;
      local_2e8 = 0.0;
      local_2ec = param_1[0x25] * (float)_DAT_005796b5;
      pfVar6 = (float *)FUN_0044daa0(param_1 + 6,local_2cc,&local_2f0);
      local_24c = _DAT_005796d5;
      if (&local_2f0 != pfVar6) {
        local_2f0 = *pfVar6;
        local_2ec = pfVar6[1];
        local_2e8 = pfVar6[2];
      }
      local_98 = local_2f0 * _DAT_005796d5;
      local_94 = local_2ec * _DAT_005796d5;
      local_90 = local_2e8 * _DAT_005796d5;
      pfVar6 = param_1 + 0x22;
      local_128 = local_28c * local_90 - local_288 * local_94;
      local_124 = local_288 * local_98 - local_290 * local_90;
      local_120 = local_290 * local_94 - local_28c * local_98;
      *pfVar6 = *pfVar6 + local_128;
      param_1[0x23] = param_1[0x23] + local_124;
      param_1[0x24] = param_1[0x24] + local_120;
      local_254 = local_2f0 * local_24c;
      local_250 = local_2ec * local_24c;
      local_24c = local_2e8 * local_24c;
      local_224 = local_e8 * local_24c - local_e4 * local_250;
      local_220 = local_e4 * local_254 - local_ec * local_24c;
      local_21c = local_ec * local_250 - local_e8 * local_254;
      *pfVar6 = *pfVar6 + local_224;
      param_1[0x23] = param_1[0x23] + local_220;
      param_1[0x24] = param_1[0x24] + local_21c;
    }
    if (2 < local_1c) {
      local_38 = param_1 + 0x2d;
      iVar8 = 0;
      local_3c = 0;
      local_34 = local_1c * 4;
      local_30 = 0.0;
      if (0 < local_34) {
        do {
          iVar9 = *(int *)((int)local_3d0 + iVar8);
          local_18 = (float)(iVar9 * 0x34);
          local_398 = local_38[iVar9 * 0xd + 3] - local_38[iVar9 * 0xd + 6];
          local_394 = local_38[iVar9 * 0xd + 4] - local_38[iVar9 * 0xd + 7];
          local_390 = local_38[iVar9 * 0xd + 5] - local_38[iVar9 * 0xd + 8];
          local_24 = (1.0 - param_1[iVar9 * 0xd + 0x36]) * (float)_DAT_005796dd;
          local_154 = (local_38[iVar9 * 0xd + 4] - local_38[iVar9 * 0xd + 7]) * local_24;
          local_158 = (local_38[iVar9 * 0xd + 3] - local_38[iVar9 * 0xd + 6]) * local_24;
          local_150 = (local_38[iVar9 * 0xd + 5] - local_38[iVar9 * 0xd + 8]) * local_24;
          local_2c = SQRT(local_150 * local_150 + local_158 * local_158 + local_154 * local_154);
          if (local_30 < local_2c) {
            local_3c = iVar9;
            local_30 = local_2c;
            if (&local_380 != &local_158) {
              local_380 = local_158;
              local_37c = local_154;
              local_378 = local_150;
            }
          }
          iVar8 = iVar8 + 4;
        } while (iVar8 < local_34);
      }
      *param_1 = *param_1 + local_380;
      param_1[1] = param_1[1] + local_37c;
      pfVar6 = param_1 + 0x13;
      param_1[2] = param_1[2] + local_378;
      local_2b4 = *pfVar6;
      local_2b0 = param_1[0x14];
      local_2ac = param_1[0x15];
      FUN_0044daa0(param_1 + 6,&local_278,local_38 + local_3c * 0xd + 10);
      fVar1 = (local_270 * param_1[0x15] + local_278 * *pfVar6 + local_274 * param_1[0x14]) *
              _DAT_005796cd;
      if (&local_2a8 != local_218) {
        local_2a8 = local_278 * fVar1 - *pfVar6;
        local_2a4 = local_274 * fVar1 - param_1[0x14];
        local_2a0 = local_270 * fVar1 - param_1[0x15];
      }
      fVar2 = local_2a4 * _DAT_005796d1 * _DAT_005796e9;
      fVar1 = local_2a0 * _DAT_005796d1 * _DAT_005796e9;
      pfVar6 = param_1 + 0x25;
      param_2 = 1.0 / param_2;
      param_1[0x19] =
           param_1[0x19] +
           (local_2a8 * _DAT_005796d1 * _DAT_005796e9 - param_1[0x13]) * *pfVar6 * param_2;
      param_1[0x1a] = param_1[0x1a] + (fVar2 - param_1[0x14]) * *pfVar6 * param_2;
      param_1[0x1b] = param_1[0x1b] + (fVar1 - param_1[0x15]) * *pfVar6 * param_2;
      param_1[0x1e] = 0.0;
      param_1[0x1d] = param_1[0x1e];
      param_1[0x1c] = param_1[0x1d];
    }
    if ((0 < local_1c) &&
       (SQRT(param_1[0x15] * param_1[0x15] +
             param_1[0x13] * param_1[0x13] + param_1[0x14] * param_1[0x14]) < 1.0)) {
      iVar8 = 0;
      iVar9 = 0;
      pfVar6 = param_1;
      if (0 < (int)param_1[0x2c]) {
        do {
          if (ABS(pfVar6[0x31] - param_1[0x96]) < (float)_DAT_005796fd) {
            iVar9 = iVar9 + 1;
          }
          iVar8 = iVar8 + 1;
          pfVar6 = pfVar6 + 0xd;
        } while (iVar8 < (int)param_1[0x2c]);
      }
      if ((int)param_1[0x2c] / 2 <= iVar9) {
        param_1[0x95] = 0.0;
        return;
      }
    }
  }
  return;
}
