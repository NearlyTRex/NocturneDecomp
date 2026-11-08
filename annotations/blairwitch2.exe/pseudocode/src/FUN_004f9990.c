// Name: FUN_004f9990
// Address: 004f9990
// Address Range: [[004f9990, 004fa9c5]]
// Convention: unknown
// Signature: void FUN_004f9990(float *param_1,float *param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9990(float *param_1,float *param_2,uint param_3,float param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1264 [808];
  byte local_52c [12];
  float local_520;
  float local_510;
  float local_500;
  byte local_4fc [40];
  uint local_4d4;
  uint local_4cc [12];
  uint local_49c [12];
  uint local_46c [12];
  uint local_43c [12];
  float local_40c;
  float local_408;
  float local_404;
  uint local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  uint local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  uint local_3e0;
  uint local_3dc [12];
  uint local_3ac [12];
  uint local_37c [12];
  uint local_34c [12];
  uint local_31c [12];
  float local_2ec [12];
  uint local_2bc [12];
  float local_28c;
  float local_288;
  float local_284;
  float local_27c;
  float local_278 [4];
  uint local_268;
  float local_264;
  uint local_260;
  uint local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  uint local_248;
  uint local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  uint local_230;
  uint local_22c;
  float local_228;
  float local_224 [4];
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
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
  uint local_1bc;
  float afStack_1b8 [6];
  float local_1a0 [4];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134 [4];
  float local_124;
  float local_120;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_fc;
  float local_f8;
  float local_f4;
  uint local_f0;
  float afStack_ec [4];
  float local_dc;
  float local_d8;
  uint local_d4;
  uint local_d0;
  float local_cc;
  float afStack_c8 [5];
  float local_b4;
  uint local_b0;
  uint local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  uint local_90;
  float local_84;
  float local_80;
  uint local_7c;
  float local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  float afStack_68 [4];
  float local_58;
  float local_54;
  uint local_50;
  uint local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar7 = 0;
  FUN_004f9460(&local_28c,param_1,param_1 + 3,param_1 + 6);
  if ((ABS(local_28c) <= ABS(local_288)) || (ABS(local_28c) <= ABS(local_284))) {
    if ((ABS(local_288) <= ABS(local_28c)) || (ABS(local_288) <= ABS(local_284))) {
      afStack_1b8[3] = 1.0;
      afStack_1b8[4] = 0.0;
      afStack_1b8[2] = 0.0;
    }
    else {
      afStack_1b8[3] = 0.0;
      afStack_1b8[4] = 1.0;
      afStack_1b8[2] = 0.0;
    }
  }
  else {
    afStack_1b8[3] = 1.0;
    afStack_1b8[4] = 0.0;
    afStack_1b8[2] = 0.0;
  }
  afStack_1b8[2] = 0.0;
  local_144 = local_28c;
  local_140 = local_288;
  local_1ec = afStack_1b8[3] * local_284 - afStack_1b8[4] * local_288;
  local_13c = local_284;
  local_1e8 = afStack_1b8[4] * local_28c - local_284 * 0.0;
  local_1e4 = local_288 * 0.0 - afStack_1b8[3] * local_28c;
  local_1f8 = local_1ec;
  local_224[(uint)bVar7 * -2 + 0xc] = local_224[(uint)bVar7 * -2 + 0xf];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  if (local_224 + 0x14 != local_224 + 0xb) {
    local_1d4 = local_1f8;
    local_1d0 = local_1f4;
    local_1cc = local_1f0;
  }
  local_1c = SQRT(local_1cc * local_1cc + local_1d4 * local_1d4 + local_1d0 * local_1d0);
  if (local_1c <= 0.0) {
    local_1d0 = 0.0;
    local_1d4 = 0.0;
    local_1cc = 0.0;
  }
  else {
    fVar1 = 1.0 / local_1c;
    local_1d4 = local_1d4 * fVar1;
    local_1d0 = local_1d0 * fVar1;
    local_1cc = local_1cc * fVar1;
  }
  local_138 = local_140 * local_1cc - local_13c * local_1d0;
  local_134[0] = local_13c * local_1d4 - local_144 * local_1cc;
  local_134[1] = local_144 * local_1d0 - local_140 * local_1d4;
  local_204 = local_138;
  local_224[(uint)bVar7 * -2 + 9] = local_134[(uint)bVar7 * -2];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (afStack_1b8 + 2 != local_224 + 8) {
    afStack_1b8[2] = local_204;
    afStack_1b8[3] = local_200;
    afStack_1b8[4] = local_1fc;
  }
  local_18 = SQRT(afStack_1b8[4] * afStack_1b8[4] +
                  afStack_1b8[2] * afStack_1b8[2] + afStack_1b8[3] * afStack_1b8[3]);
  if (local_18 <= 0.0) {
    afStack_1b8[3] = 0.0;
    afStack_1b8[2] = 0.0;
    afStack_1b8[4] = 0.0;
  }
  else {
    fVar1 = 1.0 / local_18;
    afStack_1b8[2] = afStack_1b8[2] * fVar1;
    afStack_1b8[3] = afStack_1b8[3] * fVar1;
    afStack_1b8[4] = afStack_1b8[4] * fVar1;
  }
  FUN_005918a0(local_52c);
  local_520 = -*param_1;
  local_510 = -param_1[1];
  local_40c = local_1d4;
  local_408 = local_1d0;
  local_404 = local_1cc;
  local_3fc = afStack_1b8[2];
  local_3f8 = afStack_1b8[3];
  local_3f4 = afStack_1b8[4];
  local_3ec = local_144;
  local_500 = -param_1[2];
  local_3e8 = local_140;
  local_3e4 = local_13c;
  local_400 = 0;
  local_3f0 = 0;
  local_3e0 = 0;
  FUN_005918a0(local_4fc);
  local_4d4 = 0xbf800000;
  FUN_00592830(local_52c);
  puVar4 = local_3dc;
  puVar6 = (uint *)&stack0xfffffaa4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_00592830(&local_40c,&stack0xfffffaa4);
  puVar4 = local_34c;
  puVar6 = local_4cc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_005916b0(local_52c,&local_40c,local_4fc,local_4cc);
  puVar4 = local_46c;
  puVar6 = (uint *)&stack0xfffffa74;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_005916b0(&stack0xfffffa74);
  puVar4 = local_49c;
  puVar6 = local_3ac;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_005916b0(local_3ac);
  puVar4 = local_37c;
  puVar6 = local_2bc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_005916b0(local_2bc);
  pfVar3 = local_2ec;
  pfVar5 = param_1 + 0xc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
  }
  FUN_00591530(param_2,param_1 + 0xc);
  local_168 = local_15c;
  local_1a0[(uint)bVar7 * -2 + 0xf] = local_1a0[(uint)bVar7 * -2 + 0x12];
  local_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       local_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  if (param_1 + 0x18 != local_1a0 + 0xe) {
    param_1[0x18] = local_168;
    param_1[0x19] = local_164;
    param_1[0x1a] = local_160;
  }
  FUN_00449280(param_1 + 0x1c,param_3);
  local_44 = param_1[0x1d];
  local_40 = param_1[0x20];
  local_20 = param_1[0x23];
  local_1c8 = local_44;
  local_1c4 = local_40;
  local_1c0 = local_20;
  local_3c = param_1[0x1c];
  local_38 = param_1[0x1f];
  local_34 = param_1[0x22];
  local_fc = param_1[0x1c];
  local_f8 = param_1[0x1f];
  local_f4 = param_1[0x22];
  local_30 = param_1[0x1e];
  local_2c = param_1[0x21];
  local_28 = param_1[0x24];
  afStack_ec[2] = param_1[0x1e];
  afStack_ec[3] = param_1[0x21];
  local_dc = param_1[0x24];
  local_18c = local_44 + *param_2;
  local_188 = local_40 + param_2[1];
  local_184 = local_20 + param_2[2];
  local_228 = local_44 + *param_2;
  local_224[(uint)bVar7 * -2] = local_1a0[(uint)bVar7 * -2 + 6];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       local_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  if (local_224 + 0x17 != &local_228) {
    local_1c8 = local_228;
    local_1c4 = local_224[0];
    local_1c0 = local_224[1];
  }
  local_110 = local_f8 + param_2[1];
  local_10c = local_f4 + param_2[2];
  local_114 = local_fc + *param_2;
  local_a8 = local_fc + *param_2;
  afStack_c8[(uint)bVar7 * -2 + 9] = local_134[(uint)bVar7 * -2 + 9];
  afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
  if (local_134 + 0xe != afStack_c8 + 8) {
    local_fc = local_a8;
    local_f8 = local_a4;
    local_f4 = local_a0;
  }
  local_23c = afStack_ec[3] + param_2[1];
  local_238 = local_dc + param_2[2];
  local_240 = afStack_ec[2] + *param_2;
  local_1e0 = afStack_ec[2] + *param_2;
  local_224[(uint)bVar7 * -2 + 0x12] = local_278[(uint)bVar7 * -2 + 0xf];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  if (afStack_ec + 2 != local_224 + 0x11) {
    afStack_ec[2] = local_1e0;
    afStack_ec[3] = local_1dc;
    local_dc = local_1d8;
  }
  FUN_00591530(local_224 + 0x17,param_1 + 0xc);
  local_1a0[2] = local_cc;
  local_1a0[(uint)bVar7 * -2 + 3] = afStack_c8[(uint)bVar7 * -2];
  local_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (local_224 + 0x17 != local_1a0 + 2) {
    local_1c8 = local_1a0[2];
    local_1c4 = local_1a0[3];
    local_1c0 = local_190;
  }
  FUN_00591530(local_134 + 0xe,param_1 + 0xc);
  local_258 = local_120;
  local_278[(uint)bVar7 * -2 + 9] = local_134[(uint)bVar7 * -2 + 6];
  local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  if (local_134 + 0xe != local_278 + 8) {
    local_fc = local_258;
    local_f8 = local_254;
    local_f4 = local_250;
  }
  FUN_00591530(afStack_ec + 2,param_1 + 0xc);
  local_134[2] = local_108;
  local_134[(uint)bVar7 * -2 + 3] = local_134[(uint)bVar7 * -2 + 0xc];
  local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  if (afStack_ec + 2 != local_134 + 2) {
    afStack_ec[2] = local_134[2];
    afStack_ec[3] = local_134[3];
    local_dc = local_124;
  }
  local_210 = local_1c8 - param_1[0x18];
  local_20c = local_1c4 - param_1[0x19];
  local_208 = local_1c0 - param_1[0x1a];
  local_180 = local_1c8 - param_1[0x18];
  local_1a0[(uint)bVar7 * -2 + 9] = local_224[(uint)bVar7 * -2 + 6];
  local_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  if (local_224 + 0x17 != local_1a0 + 8) {
    local_1c8 = local_180;
    local_1c4 = local_17c;
    local_1c0 = local_178;
  }
  local_150 = local_fc - param_1[0x18];
  local_14c = local_f8 - param_1[0x19];
  local_148 = local_f4 - param_1[0x1a];
  afStack_68[2] = local_fc - param_1[0x18];
  afStack_68[(uint)bVar7 * -2 + 3] = local_1a0[(uint)bVar7 * -2 + 0x15];
  afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
  if (local_134 + 0xe != afStack_68 + 2) {
    local_fc = afStack_68[2];
    local_f8 = afStack_68[3];
    local_f4 = local_58;
  }
  local_27c = afStack_ec[2] - param_1[0x18];
  local_278[0] = afStack_ec[3] - param_1[0x19];
  local_278[1] = local_dc - param_1[0x1a];
  local_224[2] = afStack_ec[2] - param_1[0x18];
  local_224[(uint)bVar7 * -2 + 3] = local_278[(uint)bVar7 * -2];
  local_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (afStack_ec + 2 != local_224 + 2) {
    afStack_ec[2] = local_224[2];
    afStack_ec[3] = local_224[3];
    local_dc = local_214;
  }
  param_1[0x1c] = local_fc;
  param_1[0x1f] = local_f8;
  param_1[0x22] = local_f4;
  param_1[0x1d] = local_1c8;
  param_1[0x20] = local_1c4;
  param_1[0x23] = local_1c0;
  param_1[0x1e] = afStack_ec[2];
  param_1[0x21] = afStack_ec[3];
  param_1[0x24] = local_dc;
  param_1[0x1b] = param_4;
  FUN_004f9950(param_1);
  FUN_005918a0(local_52c);
  local_520 = -param_1[0x18];
  local_510 = -param_1[0x19];
  local_500 = -param_1[0x1a];
  FUN_005918a0(&local_40c);
  local_40c = (float)_DAT_01c38b9c * (float)_DAT_005de024;
  local_3fc = (float)_DAT_01c38ba0 * (float)_DAT_005de024;
  local_3ec = (float)_DAT_01c38ba4 * (float)_DAT_005de024;
  local_408 = (float)_DAT_01c38ba8 * (float)_DAT_005de024;
  local_3f8 = (float)_DAT_01c38bac * (float)_DAT_005de024;
  local_3e8 = (float)_DAT_01c38bb0 * (float)_DAT_005de024;
  local_404 = (float)_DAT_01c38bb4 * (float)_DAT_005de024;
  local_3f4 = (float)_DAT_01c38bb8 * (float)_DAT_005de024;
  local_3e4 = (float)_DAT_01c38bbc * (float)_DAT_005de024;
  FUN_005916b0(local_52c,&local_40c);
  puVar4 = local_31c;
  puVar6 = local_43c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  FUN_00591530(param_1,local_43c);
  local_264 = local_174;
  local_278[(uint)bVar7 * -2 + 6] = local_1a0[(uint)bVar7 * -2 + 0xc];
  local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       local_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  if (&local_d8 != local_278 + 5) {
    local_d8 = local_264;
    local_d4 = local_260;
    local_d0 = local_25c;
  }
  FUN_00591530(param_1 + 3,local_43c);
  local_b4 = (float)local_f0;
  afStack_c8[(uint)bVar7 * -2 + 6] = afStack_ec[(uint)bVar7 * -2];
  afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (afStack_68 + 5 != afStack_c8 + 5) {
    local_54 = local_b4;
    local_50 = local_b0;
    local_4c = local_ac;
  }
  FUN_00591530(param_1 + 6,local_43c);
  local_278[2] = local_9c;
  local_278[(uint)bVar7 * -2 + 3] = afStack_c8[(uint)bVar7 * -2 + 0xc];
  local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
  if (&local_78 != local_278 + 2) {
    local_78 = local_278[2];
    local_74 = local_278[3];
    local_70 = local_268;
  }
  FUN_00591530(param_1 + 9,local_43c);
  local_24c = afStack_c8[2];
  local_278[(uint)bVar7 * -2 + 0xc] = afStack_c8[(uint)bVar7 * -2 + 3];
  local_278[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  if (local_278 + 0x11 != local_278 + 0xb) {
    local_234 = local_24c;
    local_230 = local_248;
    local_22c = local_244;
  }
  FUN_00591530(param_2,param_1 + 0xc,local_43c);
  local_6c = local_1bc;
  afStack_68[(uint)bVar7 * -2] = afStack_1b8[(uint)bVar7 * -2];
  afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_1b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  FUN_00591530(&local_6c);
  afStack_1b8[5] = (float)local_90;
  local_1a0[(uint)bVar7 * -2] = afStack_c8[(uint)bVar7 * -2 + 0xf];
  local_1a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  if (afStack_c8 + 0x11 != afStack_1b8 + 5) {
    local_84 = afStack_1b8[5];
    local_80 = local_1a0[0];
    local_7c = local_1a0[1];
  }
  FUN_004f9460(param_1 + 0x26,&local_d8,afStack_68 + 5,&local_78);
  FUN_004f9460(param_1 + 0x2a,afStack_c8 + 0x11,&local_d8,afStack_68 + 5);
  FUN_004f9460(param_1 + 0x2e,afStack_c8 + 0x11,afStack_68 + 5,&local_78);
  FUN_004f9460(param_1 + 0x32,afStack_c8 + 0x11,&local_78,local_278 + 0x11);
  FUN_004f9460(param_1 + 0x36,afStack_c8 + 0x11,local_278 + 0x11,&local_d8);
  return;
}
