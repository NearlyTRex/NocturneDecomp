// Name: FUN_00485a90
// Address: 00485a90
// Address Range: [[00485a90, 00486d3d]]
// Convention: unknown
// Signature: void FUN_00485a90(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485a90(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  float *pfVar6;
  uint *puVar7;
  int iVar8;
  int *extraout_EDX;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  float local_2f4;
  float local_2e8;
  float local_2e0;
  byte local_2d8 [8];
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  int local_2b8;
  uint local_2b4;
  int local_2b0;
  int local_2ac;
  uint local_2a8;
  int local_2a4;
  int local_2a0;
  uint local_29c;
  uint local_298;
  int local_294;
  byte local_290 [4];
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  byte local_248 [4];
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  byte local_220 [8];
  float local_218;
  float local_20c;
  float local_200;
  byte local_1f8 [8];
  float local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  int local_198;
  int local_194;
  int local_190;
  float local_18c;
  float local_188;
  float local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  float local_168;
  float local_164;
  float local_160;
  byte local_15c [12];
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
  int local_108;
  int local_104;
  int local_100;
  byte local_fc [12];
  byte local_f0 [12];
  float local_e4;
  float local_e0;
  float local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_74;
  float local_6c;
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
  float local_18;
  
  bVar11 = 0;
  FUN_00461eb0(DAT_005ae704,&DAT_005b852c);
  local_1a4 = param_1[3] - *param_1;
  local_1a0 = param_1[4] - param_1[1];
  local_19c = param_1[5] - param_1[2];
  FUN_0054e4a0(&local_9c,&local_1a4);
  fVar2 = SQRT(local_19c * local_19c + local_1a4 * local_1a4 + local_1a0 * local_1a0);
  FUN_0044d7a0(local_220,&local_9c);
  local_2e0 = param_1[6];
  local_2f4 = param_1[7];
  local_2e8 = 0.0;
  pfVar6 = (float *)FUN_00460d30(DAT_005ae704,local_f0);
  local_144 = *pfVar6 - *param_1;
  local_140 = pfVar6[1] - param_1[1];
  local_13c = pfVar6[2] - param_1[2];
  if (&local_120 != &local_144) {
    local_120 = local_144;
    local_11c = local_140;
    local_118 = local_13c;
  }
  local_18c = param_1[3] - *param_1;
  local_188 = param_1[4] - param_1[1];
  local_184 = param_1[5] - param_1[2];
  if (&local_1e0 != &local_18c) {
    local_1e0 = local_18c;
    local_1dc = local_188;
    local_1d8 = local_184;
  }
  fVar1 = local_118 * local_1d8 + local_120 * local_1e0 + local_11c * local_1dc;
  if (0.0 < fVar1) {
    if (param_1[0xf] <= 0.0) {
      FUN_00460d30(DAT_005ae704,&local_1d4);
      local_1d4 = local_1d4 - *param_1;
      local_1d0 = local_1d0 - param_1[1];
      local_1cc = local_1cc - param_1[2];
      pfVar6 = (float *)FUN_0044daa0(local_220,local_fc,&local_1d4);
      if (&local_1d4 != pfVar6) {
        local_1d4 = *pfVar6;
        local_1d0 = pfVar6[1];
        local_1cc = pfVar6[2];
      }
      local_60 = local_1d0 * local_1d0;
      local_58 = ((local_1cc * (float)_DAT_00581184) / 448.0) * (float)_DAT_0058118c;
      local_50 = local_1d4 * local_1d4 + local_60;
      local_5c = local_58 * local_58;
      if (local_50 < local_5c) {
        local_2e8 = 1.0 - local_50 / local_5c;
      }
    }
    else {
      fVar12 = (float10)fcos((float10)param_1[0xf]);
      local_4c = fVar1 / (SQRT(local_1d8 * local_1d8 + local_1e0 * local_1e0 + local_1dc * local_1dc
                              ) * SQRT(local_118 * local_118 +
                                       local_120 * local_120 + local_11c * local_11c));
      fVar1 = (float)fVar12;
      if (fVar1 < local_4c) {
        local_2e8 = (local_4c - fVar1) / (1.0 - fVar1);
      }
      fVar12 = (float10)fptan((float10)param_1[0xf]);
      local_44 = (float)fVar12;
    }
  }
  FUN_00460fb0(DAT_005ae704,0);
  if ((0.0 < local_2e8) && (*(int *)(0x01C775EC + 0xc) != 0)) {
    fVar1 = param_1[6];
    fVar3 = 1.0 - local_2e8 * (float)_DAT_0058118c;
    local_2e0 = local_2e0 * fVar3;
    local_2f4 = fVar3 * local_2f4;
    iVar9 = 0;
    FUN_00461000(DAT_005ae704,1);
    do {
      local_1a8 = (float)iVar9 * _DAT_00581194 * fVar2;
      local_28 = local_44;
      if (param_1[0xf] <= 0.0) {
        local_28 = (float)_DAT_00581184 / 448.0;
      }
      local_28 = local_28 * local_1a8;
      local_1b0 = local_218 * local_1a8;
      local_1ac = local_20c * local_1a8;
      local_1a8 = local_200 * local_1a8;
      local_90 = local_218;
      local_8c = local_20c;
      local_88 = local_200;
      local_150 = *param_1 + local_1b0;
      local_14c = param_1[1] + local_1ac;
      local_148 = param_1[2] + local_1a8;
      if (&local_168 != &local_150) {
        local_168 = local_150;
        local_164 = local_14c;
        local_160 = local_148;
      }
      local_1c = iVar9;
      FUN_00460a00(DAT_005ae704,&local_168);
      FUN_00460db0(DAT_005ae704,local_1f8);
      local_1f0 = (float)iVar9 + local_1f0;
      local_1c = iVar9;
      FUN_00460aa0(DAT_005ae704,local_1f8,0);
      local_e4 = local_28;
      local_e0 = local_28;
      local_dc = 0.0;
      local_180 = (int)ROUND(local_28 * _DAT_0059d1f8);
      local_17c = (int)ROUND(local_28 * _DAT_0059d1f8);
      local_178 = (int)ROUND(_DAT_0059d1f8 * 0.0);
      FUN_0053075c(*DAT_005ae704,&local_180);
      local_e4 = -local_e4;
      local_c0 = (int)ROUND(local_e4 * _DAT_0059d1f8);
      local_bc = (int)ROUND(local_e0 * _DAT_0059d1f8);
      local_b8 = (int)ROUND(local_dc * _DAT_0059d1f8);
      FUN_0053075c(*DAT_005ae704 + 0x30,&local_c0);
      local_e0 = -local_e0;
      local_1bc = (int)ROUND(local_e4 * _DAT_0059d1f8);
      local_1b8 = (int)ROUND(local_e0 * _DAT_0059d1f8);
      local_1b4 = (int)ROUND(local_dc * _DAT_0059d1f8);
      FUN_0053075c(*DAT_005ae704 + 0x60,&local_1bc);
      local_e4 = -local_e4;
      local_174 = (int)ROUND(local_e4 * _DAT_0059d1f8);
      local_170 = (int)ROUND(local_e0 * _DAT_0059d1f8);
      local_16c = (int)ROUND(local_dc * _DAT_0059d1f8);
      FUN_0053075c(*DAT_005ae704 + 0x90,&local_174);
      FUN_00461eb0(DAT_005ae704,&DAT_005b8574);
      fVar12 = (float10)(local_2e8 * fVar1) * (float10)_DAT_0058119c;
      local_244 = 4;
      local_234 = 0;
      local_238 = 0;
      local_23c = 0;
      local_240 = 0;
      local_230 = 0;
      FUN_00563a30();
      local_74 = (int)ROUND(fVar12);
      *(int *)(*extraout_EDX + 0x2c) = local_74;
      *(float *)(*extraout_EDX + 0x20) = param_1[0xb];
      *(float *)(*extraout_EDX + 0x24) = param_1[0xc];
      *(float *)(*extraout_EDX + 0x28) = param_1[0xd];
      local_22c = 1;
      *(int *)(*extraout_EDX + 0x5c) = local_74;
      *(float *)(*extraout_EDX + 0x50) = param_1[0xb];
      *(float *)(*extraout_EDX + 0x54) = param_1[0xc];
      *(float *)(*extraout_EDX + 0x58) = param_1[0xd];
      local_228 = 2;
      *(int *)(*extraout_EDX + 0x8c) = local_74;
      *(float *)(*extraout_EDX + 0x80) = param_1[0xb];
      *(float *)(*extraout_EDX + 0x84) = param_1[0xc];
      *(float *)(*extraout_EDX + 0x88) = param_1[0xd];
      local_224 = 3;
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
      FUN_00460080(extraout_EDX,local_248);
      iVar9 = iVar9 + 1;
      thunk_FUN_004cdbc0(DAT_005ae704);
    } while (iVar9 < 0x19);
    FUN_00461000(DAT_005ae704,0);
  }
  if (0.0 < local_2e0) {
    FUN_00461eb0(DAT_005ae704,&DAT_005b8544);
    FUN_00460a00(DAT_005ae704,param_1);
    FUN_00460aa0(DAT_005ae704,&local_9c,0);
    fVar1 = param_1[0xf];
    local_54 = param_1[0xe];
    local_24 = 1.12104e-44;
    if (0.0 < fVar1) {
      fVar12 = (float10)fptan((float10)fVar1);
      local_24 = 2.24208e-44;
      local_54 = (float)(fVar12 * (float10)fVar2);
    }
    local_40 = (uint)(0.0 < fVar1);
    local_3c = (float)FUN_004859a0(0,param_1[0xe]);
    local_18 = local_3c;
    local_38 = (float)FUN_004859a0(fVar2,local_54);
    local_20 = 0;
    local_18 = local_38;
    if (-1 < (int)local_24) {
      local_48 = (fVar2 * _DAT_005811a4) / _DAT_005811a8;
      local_30 = 0x100;
      do {
        piVar4 = DAT_005ae704;
        local_1c = local_20;
        local_18 = local_24;
        fVar12 = ((float10)local_20 / (float10)(int)local_24) * (float10)_DAT_0058118c *
                 (float10)_DAT_005811ac;
        fVar13 = (float10)fsin(fVar12);
        fVar12 = (float10)fcos(fVar12);
        puVar7 = (uint *)*DAT_005ae704;
        puVar10 = (uint *)*DAT_005ae704 + 0x24;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        local_6c = (float)fVar13;
        iVar9 = *piVar4;
        local_68 = (float)fVar12;
        puVar7 = (uint *)(iVar9 + 0x30);
        puVar10 = (uint *)(iVar9 + 0x60);
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        local_c4 = 0.0;
        local_c8 = (float)(fVar13 * (float10)local_3c);
        local_cc = (float)(fVar12 * (float10)local_3c);
        local_a8 = (int)ROUND(local_cc * _DAT_0059d1f8);
        local_a4 = (int)ROUND(local_c8 * _DAT_0059d1f8);
        local_a0 = (int)ROUND(_DAT_0059d1f8 * 0.0);
        FUN_0053075c(*piVar4,&local_a8);
        local_cc = local_68 * local_38;
        local_c8 = local_6c * local_38;
        local_c4 = fVar2 + (float)_DAT_005811c4;
        local_108 = (int)ROUND(local_cc * _DAT_0059d1f8);
        local_104 = (int)ROUND(local_c8 * _DAT_0059d1f8);
        local_100 = (int)ROUND(local_c4 * _DAT_0059d1f8);
        FUN_0053075c(*DAT_005ae704 + 0x30,&local_108);
        if (local_20 != 0) {
          fVar12 = (float10)local_48;
          uVar14 = FUN_00563a30();
          piVar4 = DAT_005ae704;
          local_2c4 = 0;
          local_2c8 = 0;
          local_2cc = 0;
          local_2d0 = 0;
          local_2c0 = 0;
          local_29c = 3;
          local_2b4 = 1;
          local_2a8 = 2;
          local_34 = (int)ROUND(fVar12);
          if (*(float *)((int)uVar14 + 0x3c) <= 0.0) {
            local_2ac = (((int)((ulonglong)uVar14 >> 0x20) << 8) / (int)local_24 + _DAT_01c094b8) *
                        0x10000;
            local_298 = 0;
            local_294 = (local_30 / (int)local_24 + _DAT_01c094b8) * 0x10000;
            local_2bc = 0;
            local_2a4 = local_34;
          }
          else {
            local_2ac = 0x800000;
            local_2a4 = 0x800000;
            local_298 = 0x800000;
            local_294 = 0x800000;
            local_2bc = 0x800000;
          }
          *(float *)(*DAT_005ae704 + 0x20) = param_1[0xb];
          *(float *)(*piVar4 + 0x24) = param_1[0xc];
          *(float *)(*piVar4 + 0x28) = param_1[0xd];
          *(float *)(*piVar4 + 0x50) = param_1[0xb];
          *(float *)(*piVar4 + 0x54) = param_1[0xc];
          *(float *)(*piVar4 + 0x58) = param_1[0xd];
          *(float *)(*piVar4 + 0x80) = param_1[0xb];
          *(float *)(*piVar4 + 0x84) = param_1[0xc];
          *(float *)(*piVar4 + 0x88) = param_1[0xd];
          *(float *)(*piVar4 + 0xb0) = param_1[0xb];
          *(float *)(*piVar4 + 0xb4) = param_1[0xc];
          *(float *)(*piVar4 + 0xb8) = param_1[0xd];
          local_2b8 = local_2ac;
          local_2b0 = local_2a4;
          local_2a0 = local_294;
          FUN_00461000(piVar4,1);
          uVar5 = local_40;
          fVar12 = (float10)local_2e0 * (float10)_DAT_005811b4;
          FUN_00563a30();
          piVar4 = DAT_005ae704;
          local_2c = (int)ROUND(fVar12);
          if (uVar5 == 0) {
            FUN_00461010(DAT_005ae704,local_2c);
            FUN_00460370(DAT_005ae704,local_2d8);
          }
          else {
            *(int *)(*DAT_005ae704 + 0x2c) = local_2c;
            *(uint *)(*piVar4 + 0x5c) = 0;
            *(uint *)(*piVar4 + 0x8c) = 0;
            *(int *)(*piVar4 + 0xbc) = local_2c;
            FUN_00460150(piVar4,local_2d8);
          }
        }
        local_30 = local_30 + 0x100;
        local_20 = local_20 + 1;
      } while (local_20 <= (int)local_24);
    }
    thunk_FUN_004cdbc0(DAT_005ae704);
  }
  if (0.0 < local_2f4) {
    local_130 = 1.0 / fVar2;
    local_138 = local_1a4 * local_130;
    local_134 = local_1a0 * local_130;
    local_130 = local_19c * local_130;
    local_114 = local_138 * _DAT_005811bc;
    local_110 = local_134 * _DAT_005811bc;
    local_10c = local_130 * _DAT_005811bc;
    local_12c = param_1[3] - local_114;
    local_128 = param_1[4] - local_110;
    local_124 = param_1[5] - local_10c;
    puVar7 = (uint *)FUN_0054e4a0(local_15c,param_1 + 8);
    if (&local_9c != puVar7) {
      local_9c = *puVar7;
      local_98 = puVar7[1];
      local_94 = puVar7[2];
    }
    FUN_00460a00(DAT_005ae704,&local_12c);
    FUN_00460aa0(DAT_005ae704,&local_9c,0);
    FUN_00461eb0(DAT_005ae704,&DAT_005b855c);
    local_b4 = 0.2;
    local_ac = 0.0;
    local_b0 = 0.2;
    local_198 = (int)ROUND(_DAT_0059d1f8 * 0.2);
    local_194 = (int)ROUND(_DAT_0059d1f8 * 0.2);
    local_190 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    FUN_0053075c(*DAT_005ae704,&local_198);
    local_b4 = -local_b4;
    local_d8 = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_d4 = (int)ROUND(local_b0 * _DAT_0059d1f8);
    local_d0 = (int)ROUND(local_ac * _DAT_0059d1f8);
    FUN_0053075c(*DAT_005ae704 + 0x30,&local_d8);
    local_b0 = -local_b0;
    local_1ec = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_1e8 = (int)ROUND(local_b0 * _DAT_0059d1f8);
    local_1e4 = (int)ROUND(local_ac * _DAT_0059d1f8);
    FUN_0053075c(*DAT_005ae704 + 0x60,&local_1ec);
    local_b4 = -local_b4;
    local_1c8 = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_1c4 = (int)ROUND(local_b0 * _DAT_0059d1f8);
    local_1c0 = (int)ROUND(local_ac * _DAT_0059d1f8);
    FUN_0053075c(*DAT_005ae704 + 0x90,&local_1c8);
    piVar4 = DAT_005ae704;
    local_28c = 4;
    local_27c = 0;
    local_280 = 0;
    local_284 = 0;
    local_288 = 0;
    local_278 = 0;
    local_254 = 3;
    local_274 = 0x80000;
    local_270 = 0x80000;
    local_268 = 0xf80000;
    local_264 = 0x80000;
    local_25c = 0xf80000;
    local_258 = 0xf80000;
    local_250 = 0x80000;
    local_24c = 0xf80000;
    local_26c = 1;
    local_260 = 2;
    *(float *)(*DAT_005ae704 + 0x20) = param_1[0xb];
    *(float *)(*piVar4 + 0x24) = param_1[0xc];
    *(float *)(*piVar4 + 0x28) = param_1[0xd];
    *(float *)(*piVar4 + 0x50) = param_1[0xb];
    *(float *)(*piVar4 + 0x54) = param_1[0xc];
    *(float *)(*piVar4 + 0x58) = param_1[0xd];
    *(float *)(*piVar4 + 0x80) = param_1[0xb];
    *(float *)(*piVar4 + 0x84) = param_1[0xc];
    *(float *)(*piVar4 + 0x88) = param_1[0xd];
    *(float *)(*piVar4 + 0xb0) = param_1[0xb];
    *(float *)(*piVar4 + 0xb4) = param_1[0xc];
    *(float *)(*piVar4 + 0xb8) = param_1[0xd];
    FUN_00461000(piVar4,1);
    local_18 = (float)FUN_0040dda0(0x47000000,0x471fff00);
    fVar12 = (float10)local_18 * (float10)local_2f4;
    FUN_00563a30();
    local_1c = (int)ROUND(fVar12);
    FUN_00461010(DAT_005ae704,local_1c);
    FUN_00460370(DAT_005ae704,local_290);
    thunk_FUN_004cdbc0(DAT_005ae704);
  }
  FUN_00461000(DAT_005ae704,0);
  FUN_00461010(DAT_005ae704,0xffff);
  return;
}
