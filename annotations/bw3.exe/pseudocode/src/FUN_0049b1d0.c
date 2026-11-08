// Name: FUN_0049b1d0
// Address: 0049b1d0
// Address Range: [[0049b1d0, 0049c613]]
// Convention: unknown
// Signature: void FUN_0049b1d0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b1d0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *extraout_EDX;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_1274 [942];
  float *pfVar14;
  uint uVar15;
  float local_394;
  float local_390;
  float local_380;
  byte local_378 [4];
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  byte local_330 [4];
  uint local_32c;
  uint local_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  uint local_314;
  int local_310;
  uint local_30c;
  int local_308;
  int local_304;
  uint local_300;
  int local_2fc;
  int local_2f8;
  uint local_2f4;
  uint local_2f0;
  int local_2ec;
  byte local_2e8 [4];
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  byte local_2c0 [8];
  float local_2b8;
  float local_2ac;
  float local_2a0;
  int local_298;
  int local_294;
  int local_290;
  uint local_28c;
  float afStack_288 [3];
  int local_27c;
  int local_278;
  float local_274;
  float local_270 [4];
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
  int local_238;
  int local_234;
  int local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c [4];
  float local_20c;
  float local_208;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc [4];
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198 [5];
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  uint local_174;
  uint local_170;
  float local_16c;
  float local_168 [4];
  float local_158;
  float local_154;
  uint local_150;
  uint local_14c;
  float local_148;
  int local_13c;
  int local_138;
  int local_134;
  float local_130;
  float afStack_12c [4];
  uint local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c [3];
  float local_100;
  float local_fc;
  float local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  float local_e8;
  float local_e4 [3];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  float local_ac;
  float afStack_a8 [3];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_74;
  float local_70;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar11 = 0;
  FUN_0046e5e0(DAT_005f2afc,&DAT_005fcab4);
  local_1fc = param_1[3] - *param_1;
  local_1f8 = param_1[4] - param_1[1];
  local_1f4 = param_1[5] - param_1[2];
  local_19c = param_1[3] - *param_1;
  local_198[(uint)bVar11 * -2] = local_21c[(uint)bVar11 * -2 + 9];
  local_198[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  FUN_00576250(local_1bc + 8);
  fVar2 = SQRT(local_198[1] * local_198[1] + local_19c * local_19c + local_198[0] * local_198[0]);
  pfVar14 = &local_e8;
  local_e8 = local_148;
  local_e4[(uint)bVar11 * -2] = local_168[(uint)bVar11 * -2 + 9];
  local_e4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  FUN_0045b550(local_2c0,pfVar14);
  local_380 = param_1[6];
  local_394 = param_1[7];
  local_390 = 0.0;
  FUN_0046d1c0(DAT_005f2afc);
  local_168[2] = local_130;
  local_168[(uint)bVar11 * -2 + 3] = afStack_12c[(uint)bVar11 * -2];
  local_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  local_1e4 = local_168[2] - *param_1;
  local_1e0 = local_168[3] - param_1[1];
  local_1dc = local_158 - param_1[2];
  local_250 = local_168[2] - *param_1;
  local_270[(uint)bVar11 * -2 + 9] = local_21c[(uint)bVar11 * -2 + 0xf];
  local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
       local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
  if (local_21c + 0x11 != local_270 + 8) {
    local_1d8 = local_250;
    local_1d4 = local_24c;
    local_1d0 = local_248;
  }
  local_244 = param_1[3] - *param_1;
  local_240 = param_1[4] - param_1[1];
  local_23c = param_1[5] - param_1[2];
  local_16c = param_1[3] - *param_1;
  local_168[(uint)bVar11 * -2] = local_270[(uint)bVar11 * -2 + 0xc];
  local_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
  if (&local_1cc != &local_16c) {
    local_1cc = local_16c;
    local_1c8 = local_168[0];
    local_1c4 = local_168[1];
  }
  fVar1 = local_1d0 * local_1c4 + local_1d8 * local_1cc + local_1d4 * local_1c8;
  if (0.0 < fVar1) {
    if (param_1[0xf] <= 0.0) {
      FUN_0046d1c0(DAT_005f2afc);
      local_270[2] = local_208;
      local_270[(uint)bVar11 * -2 + 3] = local_21c[(uint)bVar11 * -2 + 6];
      local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
      local_270[2] = local_270[2] - *param_1;
      local_270[3] = local_270[3] - param_1[1];
      local_260 = local_260 - param_1[2];
      FUN_0045b870(local_2c0,local_270 + 2);
      local_1bc[2] = local_ac;
      local_1bc[(uint)bVar11 * -2 + 3] = afStack_a8[(uint)bVar11 * -2];
      local_1bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      if (local_270 + 2 != local_1bc + 2) {
        local_270[2] = local_1bc[2];
        local_270[3] = local_1bc[3];
        local_260 = local_1ac;
      }
      local_60 = local_270[3] * local_270[3];
      local_5c = ((local_260 * (float)_DAT_005c0600) / 448.0) * (float)_DAT_005c0608;
      local_58 = local_270[2] * local_270[2] + local_60;
      local_54 = local_5c * local_5c;
      if (local_58 < local_54) {
        local_390 = 1.0 - local_58 / local_54;
      }
    }
    else {
      fVar12 = (float10)fcos((float10)param_1[0xf]);
      local_4c = fVar1 / (SQRT(local_1c4 * local_1c4 + local_1cc * local_1cc + local_1c8 * local_1c8
                              ) * SQRT(local_1d0 * local_1d0 +
                                       local_1d8 * local_1d8 + local_1d4 * local_1d4));
      fVar1 = (float)fVar12;
      if (fVar1 < local_4c) {
        local_390 = (local_4c - fVar1) / (1.0 - fVar1);
      }
      fVar12 = (float10)fptan((float10)param_1[0xf]);
      local_48 = (float)fVar12;
    }
  }
  FUN_0046d460(DAT_005f2afc,0);
  if ((0.0 < local_390) && (*(int *)(0x01D2130C + 0xc) != 0)) {
    fVar1 = param_1[6];
    fVar3 = 1.0 - local_390 * (float)_DAT_005c0608;
    local_380 = local_380 * fVar3;
    local_394 = fVar3 * local_394;
    FUN_0046d4b0(DAT_005f2afc,1);
    local_20 = 0;
    do {
      local_18 = local_20;
      fVar3 = (float)local_20 * _DAT_005c0610 * fVar2;
      fVar4 = local_48;
      if (param_1[0xf] <= 0.0) {
        fVar4 = (float)_DAT_005c0600 / 448.0;
      }
      local_28 = fVar4 * fVar3;
      local_1c0 = local_2b8 * fVar3;
      local_1bc[0] = local_2ac * fVar3;
      local_1bc[1] = local_2a0 * fVar3;
      local_184 = local_2b8 * fVar3;
      local_198[(uint)bVar11 * -2 + 6] = local_1bc[(uint)bVar11 * -2];
      local_198[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           local_1bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_21c[2] = *param_1 + local_184;
      local_21c[3] = param_1[1] + local_180;
      local_20c = param_1[2] + local_17c;
      local_154 = *param_1 + local_184;
      local_168[(uint)bVar11 * -2 + 6] = local_21c[(uint)bVar11 * -2 + 3];
      local_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      if (local_198 + 8 != local_168 + 5) {
        local_178 = local_154;
        local_174 = local_150;
        local_170 = local_14c;
      }
      FUN_0046ce90(DAT_005f2afc,local_198 + 8);
      FUN_0046d250(DAT_005f2afc);
      iVar7 = local_20;
      uVar15 = 0;
      local_1f0[0] = (float)local_28c;
      local_21c[(uint)bVar11 * -2 + 0xc] = afStack_288[(uint)bVar11 * -2];
      local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
           afStack_288[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_18 = iVar7;
      local_1e8 = (float)iVar7 + local_1e8;
      FUN_0046cf30(DAT_005f2afc,local_21c + 0xb,uVar15);
      local_bc = 0.0;
      local_c4 = local_28;
      local_c0 = local_28;
      local_13c = (int)ROUND(local_28 * _DAT_005df8e4);
      local_138 = (int)ROUND(local_28 * _DAT_005df8e4);
      local_134 = (int)ROUND(_DAT_005df8e4 * 0.0);
      FUN_005632a3(*DAT_005f2afc,&local_13c);
      local_c4 = -local_c4;
      local_d0 = (int)ROUND(local_c4 * _DAT_005df8e4);
      local_cc = (int)ROUND(local_c0 * _DAT_005df8e4);
      local_c8 = (int)ROUND(local_bc * _DAT_005df8e4);
      FUN_005632a3(*DAT_005f2afc + 0x30,&local_d0);
      local_c0 = -local_c0;
      afStack_a8[2] = (float)(int)ROUND(local_c4 * _DAT_005df8e4);
      local_9c = (int)ROUND(local_c0 * _DAT_005df8e4);
      local_98 = (int)ROUND(local_bc * _DAT_005df8e4);
      FUN_005632a3(*DAT_005f2afc + 0x60,afStack_a8 + 2);
      local_c4 = -local_c4;
      local_f4 = (int)ROUND(local_c4 * _DAT_005df8e4);
      local_f0 = (int)ROUND(local_c0 * _DAT_005df8e4);
      local_ec = (int)ROUND(local_bc * _DAT_005df8e4);
      FUN_005632a3(*DAT_005f2afc + 0x90,&local_f4);
      FUN_0046e5e0(DAT_005f2afc,&DAT_005fcafc);
      local_2e4 = 4;
      local_2d4 = 0;
      local_2d8 = 0;
      local_2dc = 0;
      local_2e0 = 0;
      local_2d0 = 0;
      fVar12 = (float10)(local_390 * fVar1) * (float10)_DAT_005c0618;
      iVar7 = *DAT_005f2afc;
      FUN_005a3120();
      local_74 = (int)ROUND(fVar12);
      *(int *)(iVar7 + 0x2c) = local_74;
      *(float *)(*extraout_EDX + 0x20) = param_1[0xb];
      *(float *)(*extraout_EDX + 0x24) = param_1[0xc];
      *(float *)(*extraout_EDX + 0x28) = param_1[0xd];
      local_2cc = 1;
      *(int *)(*extraout_EDX + 0x5c) = local_74;
      *(float *)(*extraout_EDX + 0x50) = param_1[0xb];
      *(float *)(*extraout_EDX + 0x54) = param_1[0xc];
      *(float *)(*extraout_EDX + 0x58) = param_1[0xd];
      local_2c8 = 2;
      *(int *)(*extraout_EDX + 0x8c) = local_74;
      *(float *)(*extraout_EDX + 0x80) = param_1[0xb];
      *(float *)(*extraout_EDX + 0x84) = param_1[0xc];
      *(float *)(*extraout_EDX + 0x88) = param_1[0xd];
      local_2c4 = 3;
      *(int *)(*extraout_EDX + 0xbc) = local_74;
      *(float *)(*extraout_EDX + 0xb0) = param_1[0xb];
      *(float *)(*extraout_EDX + 0xb4) = param_1[0xc];
      *(float *)(*extraout_EDX + 0xb8) = param_1[0xd];
      *(uint *)(*extraout_EDX + 0x18) = 0xf80000;
      *(uint *)(*extraout_EDX + 0x1c) = 0xf80000;
      *(uint *)(*extraout_EDX + 0x48) = 0x80000;
      *(uint *)(*extraout_EDX + 0x4c) = 0xf80000;
      *(uint *)(*extraout_EDX + 0x78) = 0x80000;
      *(uint *)(*extraout_EDX + 0x7c) = 0x80000;
      *(uint *)(*extraout_EDX + 0xa8) = 0xf80000;
      *(uint *)(*extraout_EDX + 0xac) = 0x80000;
      FUN_0046c510(extraout_EDX,local_2e8);
      thunk_FUN_004e5ef0(DAT_005f2afc);
      local_20 = local_20 + 1;
    } while (local_20 < 0x19);
    FUN_0046d4b0(DAT_005f2afc,0);
  }
  if ((0.0 < local_380) && (ABS(param_1[0xe]) != 0.0)) {
    FUN_0046e5e0(DAT_005f2afc,&DAT_005fcacc);
    FUN_0046ce90(DAT_005f2afc,param_1);
    FUN_0046cf30(DAT_005f2afc,&local_e8,0);
    local_50 = param_1[0xe];
    local_24 = 1.12104e-44;
    fVar1 = param_1[0xf];
    if (0.0 < fVar1) {
      fVar12 = (float10)fptan((float10)fVar1);
      local_24 = 2.24208e-44;
      local_50 = (float)(fVar12 * (float10)fVar2);
    }
    local_40 = (uint)(0.0 < fVar1);
    local_3c = (float)FUN_0049b0e0(0,param_1[0xe]);
    local_14 = local_3c;
    local_38 = (float)FUN_0049b0e0(fVar2,local_50);
    local_1c = 0;
    local_14 = local_38;
    if (-1 < (int)local_24) {
      local_44 = (fVar2 * _DAT_005c0620) / _DAT_005c0624;
      local_30 = 0x100;
      do {
        piVar5 = DAT_005f2afc;
        local_18 = local_1c;
        local_14 = local_24;
        fVar12 = ((float10)local_1c / (float10)(int)local_24) * (float10)_DAT_005c0608 *
                 (float10)_DAT_005c0628;
        fVar13 = (float10)fsin(fVar12);
        fVar12 = (float10)fcos(fVar12);
        puVar9 = (uint *)*DAT_005f2afc;
        puVar10 = (uint *)*DAT_005f2afc + 0x24;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        iVar7 = *piVar5;
        local_68 = (float)fVar13;
        puVar9 = (uint *)(iVar7 + 0x30);
        puVar10 = (uint *)(iVar7 + 0x60);
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        local_70 = (float)fVar12;
        local_224 = 0.0;
        local_228 = (float)(fVar13 * (float10)local_3c);
        local_22c = (float)(fVar12 * (float10)local_3c);
        afStack_288[2] = (float)(int)ROUND(local_22c * _DAT_005df8e4);
        local_27c = (int)ROUND(local_228 * _DAT_005df8e4);
        local_278 = (int)ROUND(_DAT_005df8e4 * 0.0);
        FUN_005632a3(*piVar5,afStack_288 + 2);
        local_22c = local_70 * local_38;
        local_228 = local_68 * local_38;
        local_224 = fVar2 + (float)_DAT_005c0640;
        local_238 = (int)ROUND(local_22c * _DAT_005df8e4);
        local_234 = (int)ROUND(local_228 * _DAT_005df8e4);
        local_230 = (int)ROUND(local_224 * _DAT_005df8e4);
        FUN_005632a3(*DAT_005f2afc + 0x30,&local_238);
        iVar7 = local_1c;
        if (local_1c != 0) {
          fVar12 = (float10)local_44;
          local_2f4 = FUN_005a3120();
          piVar5 = DAT_005f2afc;
          local_32c = 4;
          local_31c = 0;
          local_320 = 0;
          local_324 = 0;
          local_328 = 0;
          local_318 = 0;
          local_30c = 1;
          local_300 = 2;
          local_34 = (int)ROUND(fVar12);
          if (param_1[0xf] <= 0.0) {
            local_314 = 0;
            local_304 = ((iVar7 << 8) / (int)local_24 + _DAT_01c743f8) * 0x10000;
            local_2ec = (local_30 / (int)local_24 + _DAT_01c743f8) * 0x10000;
            local_2f0 = 0;
            local_2fc = local_34;
          }
          else {
            local_304 = 0x800000;
            local_2fc = 0x800000;
            local_2f0 = 0x800000;
            local_2ec = 0x800000;
            local_314 = 0x800000;
          }
          *(float *)(*DAT_005f2afc + 0x20) = param_1[0xb];
          *(float *)(*piVar5 + 0x24) = param_1[0xc];
          *(float *)(*piVar5 + 0x28) = param_1[0xd];
          *(float *)(*piVar5 + 0x50) = param_1[0xb];
          *(float *)(*piVar5 + 0x54) = param_1[0xc];
          *(float *)(*piVar5 + 0x58) = param_1[0xd];
          *(float *)(*piVar5 + 0x80) = param_1[0xb];
          *(float *)(*piVar5 + 0x84) = param_1[0xc];
          *(float *)(*piVar5 + 0x88) = param_1[0xd];
          *(float *)(*piVar5 + 0xb0) = param_1[0xb];
          *(float *)(*piVar5 + 0xb4) = param_1[0xc];
          *(float *)(*piVar5 + 0xb8) = param_1[0xd];
          local_310 = local_304;
          local_308 = local_2fc;
          local_2f8 = local_2ec;
          FUN_0046d4b0(piVar5,1);
          uVar6 = local_40;
          fVar12 = (float10)local_380 * (float10)_DAT_005c0630;
          FUN_005a3120();
          piVar5 = DAT_005f2afc;
          local_2c = (int)ROUND(fVar12);
          if (uVar6 == 0) {
            FUN_0046d4c0(DAT_005f2afc,local_2c);
            FUN_0046c800(DAT_005f2afc,local_330);
          }
          else {
            *(int *)(*DAT_005f2afc + 0x2c) = local_2c;
            *(uint *)(*piVar5 + 0x5c) = 0;
            *(uint *)(*piVar5 + 0x8c) = 0;
            *(int *)(*piVar5 + 0xbc) = local_2c;
            FUN_0046c5e0(piVar5,local_330);
          }
        }
        local_30 = local_30 + 0x100;
        local_1c = local_1c + 1;
      } while (local_1c <= (int)local_24);
    }
    thunk_FUN_004e5ef0(DAT_005f2afc);
  }
  if (0.0 < local_394) {
    fVar2 = 1.0 / fVar2;
    local_220 = local_19c * fVar2;
    local_21c[0] = local_198[0] * fVar2;
    local_21c[1] = local_198[1] * fVar2;
    local_118 = local_19c * fVar2;
    afStack_12c[(uint)bVar11 * -2 + 6] = local_21c[(uint)bVar11 * -2];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    local_25c = local_118 * _DAT_005c0638;
    local_258 = local_114 * _DAT_005c0638;
    local_254 = local_110 * _DAT_005c0638;
    local_274 = local_118 * _DAT_005c0638;
    local_270[(uint)bVar11 * -2] = local_270[(uint)bVar11 * -2 + 6];
    local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    local_100 = param_1[3] - local_274;
    local_fc = param_1[4] - local_270[0];
    local_f8 = param_1[5] - local_270[1];
    local_10c[0] = param_1[3] - local_274;
    afStack_12c[(uint)bVar11 * -2 + 9] = afStack_12c[(uint)bVar11 * -2 + 0xc];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    FUN_00576250(param_1 + 8);
    afStack_12c[2] = local_198[2];
    afStack_12c[(uint)bVar11 * -2 + 3] = local_198[(uint)bVar11 * -2 + 3];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         local_198[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if (&local_e8 != afStack_12c + 2) {
      local_e8 = afStack_12c[2];
      local_e4[0] = afStack_12c[3];
      local_e4[1] = (float)local_11c;
    }
    FUN_0046ce90(DAT_005f2afc,afStack_12c + 8);
    FUN_0046cf30(DAT_005f2afc,&local_e8,0);
    FUN_0046e5e0(DAT_005f2afc,&DAT_005fcae4);
    local_1a8 = 0.4;
    local_1a0 = 0.0;
    local_1a4 = 0.4;
    local_298 = (int)ROUND(_DAT_005df8e4 * 0.4);
    local_294 = (int)ROUND(_DAT_005df8e4 * 0.4);
    local_290 = (int)ROUND(_DAT_005df8e4 * 0.0);
    FUN_005632a3(*DAT_005f2afc,&local_298);
    local_1a8 = -local_1a8;
    local_e4[2] = (float)(int)ROUND(local_1a8 * _DAT_005df8e4);
    local_d8 = (int)ROUND(local_1a4 * _DAT_005df8e4);
    local_d4 = (int)ROUND(local_1a0 * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x30,local_e4 + 2);
    local_1a4 = -local_1a4;
    local_b8 = (int)ROUND(local_1a8 * _DAT_005df8e4);
    local_b4 = (int)ROUND(local_1a4 * _DAT_005df8e4);
    local_b0 = (int)ROUND(local_1a0 * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x60,&local_b8);
    local_1a8 = -local_1a8;
    local_94 = (int)ROUND(local_1a8 * _DAT_005df8e4);
    local_90 = (int)ROUND(local_1a4 * _DAT_005df8e4);
    local_8c = (int)ROUND(local_1a0 * _DAT_005df8e4);
    FUN_005632a3(*DAT_005f2afc + 0x90,&local_94);
    piVar5 = DAT_005f2afc;
    local_374 = 4;
    local_364 = 0;
    local_368 = 0;
    local_36c = 0;
    local_370 = 0;
    local_360 = 0;
    local_33c = 3;
    local_35c = 0;
    local_358 = 0;
    local_350 = 0x1000000;
    local_344 = 0x1000000;
    local_340 = 0x1000000;
    local_334 = 0x1000000;
    local_354 = 1;
    local_348 = 2;
    local_34c = 0;
    local_338 = 0;
    *(float *)(*DAT_005f2afc + 0x20) = param_1[0xb];
    *(float *)(*piVar5 + 0x24) = param_1[0xc];
    *(float *)(*piVar5 + 0x28) = param_1[0xd];
    *(float *)(*piVar5 + 0x50) = param_1[0xb];
    *(float *)(*piVar5 + 0x54) = param_1[0xc];
    *(float *)(*piVar5 + 0x58) = param_1[0xd];
    *(float *)(*piVar5 + 0x80) = param_1[0xb];
    *(float *)(*piVar5 + 0x84) = param_1[0xc];
    *(float *)(*piVar5 + 0x88) = param_1[0xd];
    *(float *)(*piVar5 + 0xb0) = param_1[0xb];
    *(float *)(*piVar5 + 0xb4) = param_1[0xc];
    *(float *)(*piVar5 + 0xb8) = param_1[0xd];
    FUN_0046d4b0(piVar5,1);
    local_14 = (float)FUN_0040ce40(0x47000000,0x471fff00);
    fVar12 = (float10)local_14 * (float10)local_394;
    FUN_005a3120();
    local_18 = (int)ROUND(fVar12);
    FUN_0046d4c0(DAT_005f2afc,local_18);
    FUN_0046c800(DAT_005f2afc,local_378);
    thunk_FUN_004e5ef0(DAT_005f2afc);
  }
  FUN_0046d4b0(DAT_005f2afc,0);
  FUN_0046d4c0(DAT_005f2afc,0xffff);
  return;
}
