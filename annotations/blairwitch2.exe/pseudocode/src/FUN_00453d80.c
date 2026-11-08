// Name: FUN_00453d80
// Address: 00453d80
// Address Range: [[00453d80, 00455168]]
// Convention: unknown
// Signature: void FUN_00453d80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453d80(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar7;
  float *pfVar9;
  byte bVar10;
  float10 fVar11;
  float fVar12;
  float local_2034;
  float local_2030;
  float local_202c;
  float local_2024;
  float local_2020;
  float local_201c;
  float fStack_2014;
  float local_2010;
  uint local_200c [2];
  uint local_2004;
  float afStack_1cf4 [1505];
  byte local_570 [40];
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float local_530 [6];
  uint local_518;
  uint auStack_514 [7];
  uint local_4f8 [4];
  uint local_4e8 [4];
  uint local_4d8;
  uint auStack_4d4 [7];
  uint local_4b8 [4];
  uint local_4a8;
  uint local_498;
  uint local_488;
  uint local_478 [4];
  uint local_468 [4];
  uint local_458 [4];
  uint local_448 [4];
  uint local_438 [4];
  uint local_428;
  uint auStack_424 [7];
  uint local_408 [4];
  uint local_3f8;
  uint local_3e8;
  uint local_3d8 [4];
  uint local_3c8;
  uint local_3b8;
  uint local_3a8 [4];
  uint local_398;
  uint local_388;
  uint local_378 [4];
  uint local_368 [4];
  uint local_358;
  uint auStack_348 [4];
  uint local_338;
  uint auStack_334 [7];
  uint local_318 [4];
  uint local_308 [4];
  uint local_2f8 [4];
  uint local_2e8;
  uint auStack_2e4 [7];
  uint auStack_2c8 [4];
  float local_2b8;
  float local_2b4 [4];
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  uint local_294;
  float local_288;
  uint local_284;
  float local_27c;
  uint local_270;
  float local_264;
  float local_260;
  float local_25c;
  float fStack_258;
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
  float local_214;
  float local_210;
  uint local_204;
  uint local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  uint local_1ec;
  uint local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  uint local_1d4;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  uint local_1bc;
  float local_1b8;
  float local_1b0;
  uint local_1a4;
  float local_198;
  float local_194;
  float local_190;
  float local_18c [3];
  float fStack_180;
  float local_174;
  float local_168;
  float local_15c;
  float local_158;
  float local_154;
  float local_150 [3];
  float local_144 [4];
  float afStack_134 [5];
  uint local_120;
  float local_11c;
  float afStack_114 [3];
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0 [3];
  uint uStack_e4;
  uint uStack_d8;
  uint uStack_d4;
  float local_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float local_7c;
  float afStack_78 [3];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [3];
  float local_54;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float *local_20;
  int local_1c;
  float local_18;
  float local_14;
  uint *puVar6;
  uint *puVar8;
  
  bVar10 = 0;
  local_14 = (float)FUN_005038a0(param_1 + 0x2b4,0);
  local_2030 = local_14;
  if (*(int *)(param_1 + 0x256bc) < 0x3e19999a) {
    local_2030 = (*(float *)(param_1 + 0x256bc) / _DAT_005d015f) * local_14;
  }
  if (0.85 < *(float *)(param_1 + 0x256bc)) {
    local_2030 = ((1.0 - *(float *)(param_1 + 0x256bc)) / 0.15) * local_2030;
  }
  FUN_00544f00(param_1 + 0x2b4);
  if ((0.0 < local_2030) && (-1 < *(int *)(param_1 + 0x256ec))) {
    FUN_00455170(param_1,local_200c);
    local_200c[0] = 0;
    local_2004 = 0;
    FUN_00546190(param_1 + 0x2b4,local_200c,local_2030,0xffffffff,&LAB_00544cc0);
  }
  FUN_004555c0(param_1);
  FUN_00455d10(param_1,*(uint *)(0x01CB6900 + 0x284));
  local_1c = param_1 + 0x2b4;
  iVar1 = FUN_005035c0(local_1c);
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0x15) {
    pfVar4 = (float *)(param_1 + 0x25704 + (uint)bVar10 * -8);
    local_264 = *(float *)(param_1 + 0x25700);
    local_2b4[(uint)bVar10 * -2 + 0x15] = *pfVar4;
    local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] = pfVar4[(uint)bVar10 * -2 + 1];
    FUN_005469a0(local_1c,_DAT_01b4d268);
    fVar12 = local_264;
    local_21c = local_210;
    local_2b4[(uint)bVar10 * -2 + 0x27] = local_2b4[(uint)bVar10 * -2 + 0x2a];
    local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28] =
         local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b];
    local_198 = fVar12 - local_21c;
    local_194 = local_260 - local_218;
    local_190 = local_25c - local_214;
    afStack_134[2] = fVar12 - local_21c;
    afStack_134[(uint)bVar10 * -2 + 3] = local_2b4[(uint)bVar10 * -2 + 0x48];
    afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x49];
    FUN_005838f0(afStack_134 + 2);
    iVar1 = local_1c;
    local_204 = local_294;
    local_2b4[(uint)bVar10 * -2 + 0x2d] = local_2b4[(uint)bVar10 * -2 + 9];
    local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e] =
         local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    local_2034 = *(float *)(iVar1 + 8);
    if ((float)_DAT_005d01bf <= local_2034) {
      local_2034 = 1.0 - (local_2034 + (float)_DAT_005d01c7) * (float)_DAT_005d01cf;
      if (local_2034 < 0.0) {
        local_2034 = 0.0;
      }
    }
    else {
      local_2034 = local_2034 * (float)_DAT_005d01cf;
    }
    FUN_00593fa0(local_204);
    auStack_334[3] = local_358;
    auStack_334[(uint)bVar10 * -2 + 4] = auStack_424[(uint)bVar10 * -2 + 0x34];
    auStack_334[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
         auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x35];
    (auStack_334 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1] =
         (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x35)[(uint)bVar10 * -2 + 1];
    local_14 = (float)(param_1 + 0x2b4);
    FUN_00546f40(param_1 + 0x2b4,auStack_334 + 3,local_2034,_DAT_01b4d29c,&LAB_00544cc0);
    FUN_00593fe0(local_200);
    puVar7 = auStack_514 + 7;
    puVar5 = local_4e8;
    puVar2 = auStack_514 + 7;
    local_201c = local_2034;
    uVar3 = _DAT_01b4d268;
LAB_00454025:
    puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
    puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
    *puVar7 = *puVar5;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
    (puVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (puVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    fVar12 = local_14;
  }
  else {
    if (iVar1 != 0x13) {
      if (iVar1 == 0x16) {
        FUN_00449280(local_570,param_1 + 0x2562c);
        if ((DAT_01b4d230 & 1) == 0) {
          DAT_01b4d230 = DAT_01b4d230 | 1;
        }
        iVar1 = *(int *)(param_1 + 0x2561c);
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
          pfVar4 = local_530;
          pfVar9 = &fStack_548;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar9 = *pfVar4;
            pfVar4 = pfVar4 + (uint)bVar10 * -2 + 1;
            pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
          }
          local_2b4[2] = fStack_548 + fStack_53c;
          local_2b4[3] = fStack_544 + fStack_538;
          fStack_2a4 = fStack_540 + fStack_534;
          fStack_6c = fStack_548 + fStack_53c;
          afStack_134[(uint)bVar10 * -2 + 0x33] = local_2b4[(uint)bVar10 * -2 + 3];
          afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x34] =
               local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          fStack_9c = fStack_6c * _DAT_005d018f;
          fStack_98 = fStack_68 * _DAT_005d018f;
          fStack_94 = fStack_64 * _DAT_005d018f;
          fStack_b4 = fStack_6c * _DAT_005d018f;
          afStack_134[(uint)bVar10 * -2 + 0x21] = afStack_134[(uint)bVar10 * -2 + 0x27];
          afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22] =
               afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
          if (&stack0x00000000 != (byte *)0x1b4d2d4) {
            _DAT_01b4d220 = fStack_b4;
            _DAT_01b4d224 = uStack_b0;
            _DAT_01b4d228 = uStack_ac;
          }
        }
        FUN_00449530(local_570,&DAT_01b4d220);
        local_c0 = local_1b0;
        afStack_134[(uint)bVar10 * -2 + 0x1e] = local_2b4[(uint)bVar10 * -2 + 0x42];
        afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
             local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x43];
        fStack_90 = *(float *)(param_1 + 0x25620) + local_c0;
        fStack_8c = *(float *)(param_1 + 0x25624) + fStack_bc;
        fStack_88 = *(float *)(param_1 + 0x25628) + fStack_b8;
        afStack_78[0] = fStack_90;
        afStack_134[(uint)bVar10 * -2 + 0x30] = afStack_134[(uint)bVar10 * -2 + 0x2a];
        afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31] =
             afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b];
        FUN_00408de0(param_1,afStack_134 + 0x2f);
        local_14 = (float)(param_1 + 0x2b4);
        fStack_1e0 = fStack_258;
        local_2b4[(uint)bVar10 * -2 + 0x36] = local_2b4[(uint)bVar10 * -2 + 0x18];
        local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x37] =
             local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
        FUN_005469a0(param_1 + 0x2b4,_DAT_01b4d268);
        fVar12 = fStack_1e0;
        fStack_fc = fStack_180;
        afStack_134[(uint)bVar10 * -2 + 0xf] = local_2b4[(uint)bVar10 * -2 + 0x4e];
        afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x4f];
        fStack_2a0 = fVar12 - fStack_fc;
        fStack_29c = fStack_1dc - fStack_f8;
        fStack_298 = fStack_1d8 - fStack_f4;
        afStack_114[0] = fVar12 - fStack_fc;
        afStack_134[(uint)bVar10 * -2 + 9] = local_2b4[(uint)bVar10 * -2 + 6];
        afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        FUN_005838f0(afStack_134 + 8);
        fVar12 = local_14;
        uStack_d8 = uStack_e4;
        afStack_134[(uint)bVar10 * -2 + 0x18] = afStack_134[(uint)bVar10 * -2 + 0x15];
        afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
             afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
        fStack_2014 = *(float *)((int)fVar12 + 8);
        if ((float)_DAT_005d0197 <= fStack_2014) {
          fStack_2014 = 1.0 - (fStack_2014 + (float)_DAT_005d019f) * (float)_DAT_005d01a7;
          if (fStack_2014 < 0.0) {
            fStack_2014 = 0.0;
          }
        }
        else {
          fStack_2014 = fStack_2014 * (float)_DAT_005d01af;
        }
        FUN_00593fa0(uStack_d8);
        auStack_2e4[3] = auStack_424[3];
        auStack_2e4[(uint)bVar10 * -2 + 4] = auStack_424[(uint)bVar10 * -2 + 4];
        auStack_2e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
             auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
        (auStack_2e4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1] =
             (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
        local_14 = (float)(param_1 + 0x2b4);
        FUN_00546f40(param_1 + 0x2b4,auStack_2e4 + 3,fStack_2014,_DAT_01b4d29c,&LAB_00544cc0);
        FUN_00593fe0(uStack_d4);
        puVar7 = auStack_2e4 + 7;
        puVar5 = auStack_424 + 0x37;
        puVar2 = auStack_2e4 + 7;
        local_201c = fStack_2014;
        uVar3 = _DAT_01b4d268;
      }
      else {
        if (iVar1 == 0x21) {
          local_20 = (float *)(param_1 + 0x25700);
          if (*(int *)(param_1 + 0x25610) == 0) {
            FUN_004e2220(_DAT_01b4d22c);
            local_60[0] = (float)local_1d4;
            afStack_134[(uint)bVar10 * -2 + 0x36] = local_2b4[(uint)bVar10 * -2 + 0x39];
            afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x37] =
                 local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3a];
            FUN_00408de0(param_1,afStack_134 + 0x35);
            pfVar4 = local_20;
            local_228 = local_cc;
            local_2b4[(uint)bVar10 * -2 + 0x24] = afStack_134[(uint)bVar10 * -2 + 0x1b];
            local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
                 afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
            if (local_2b4 + 0x23 != pfVar4) {
              *pfVar4 = local_228;
              pfVar4[1] = local_224;
              pfVar4[2] = local_220;
            }
          }
          else {
            FUN_004e2220(*(int *)(param_1 + 0x25610));
            local_150[0] = (float)local_a8;
            local_2b4[(uint)bVar10 * -2 + 0x5a] = afStack_134[(uint)bVar10 * -2 + 0x24];
            local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x5b] =
                 afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25];
            FUN_00408de0(param_1,local_2b4 + 0x59);
            local_84 = local_174;
            afStack_134[(uint)bVar10 * -2 + 0x2d] = local_2b4[(uint)bVar10 * -2 + 0x51];
            afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e] =
                 local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x52];
            if (afStack_134 + 0x2c != local_20) {
              *local_20 = local_84;
              local_20[1] = local_80;
              local_20[2] = local_7c;
            }
            _DAT_01b4d22c = *(uint *)(param_1 + 0x25610);
          }
          pfVar4 = (float *)(param_1 + 0x25704 + (uint)bVar10 * -8);
          local_24c = *(float *)(param_1 + 0x25700);
          local_2b4[(uint)bVar10 * -2 + 0x1b] = *pfVar4;
          local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c] = pfVar4[(uint)bVar10 * -2 + 1];
          local_14 = (float)(param_1 + 0x2b4);
          FUN_005469a0(local_14,_DAT_01b4d268);
          fVar12 = local_24c;
          local_240 = local_54;
          local_2b4[(uint)bVar10 * -2 + 0x1e] = afStack_134[(uint)bVar10 * -2 + 0x39];
          local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
               afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3a];
          fVar12 = fVar12 - local_240;
          local_1c8 = fVar12;
          local_1c4 = local_248 - local_23c;
          local_1c0 = local_244 - local_238;
          local_1f8 = fVar12;
          local_2b4[(uint)bVar10 * -2 + 0x30] = local_2b4[(uint)bVar10 * -2 + 0x3c];
          local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31] =
               local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3d];
          local_2b8 = fVar12;
          local_2b4[0] = local_1c4;
          local_2b4[1] = local_1c0;
          local_f0[0] = fVar12;
          afStack_134[(uint)bVar10 * -2 + 0x12] = local_2b4[(uint)bVar10 * -2];
          afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
               local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          FUN_005838f0(afStack_134 + 0x11);
          fVar12 = local_14;
          local_1ec = local_1a4;
          local_2b4[(uint)bVar10 * -2 + 0x33] = local_2b4[(uint)bVar10 * -2 + 0x45];
          local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x34] =
               local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x46];
          local_201c = *(float *)((int)fVar12 + 8);
          if ((float)_DAT_005d017f <= local_201c) {
            if (_DAT_005d0167 <= (double)local_201c) {
              local_201c = 1.0 - (local_201c + (float)_DAT_005d016f) * (float)_DAT_005d0177;
              if (local_201c < 0.0) {
                local_201c = 0.0;
              }
            }
            else {
              local_201c = 1.0;
            }
          }
          else {
            local_201c = local_201c * (float)_DAT_005d0187;
          }
          local_30 = SQRT(local_1f0 * local_1f0 + local_1f8 * local_1f8 + local_1f4 * local_1f4);
          if (local_30 < _DAT_005f5164) {
            fVar11 = (float10)local_30 / (float10)_DAT_005f5164;
            FUN_005b9924();
            local_3c = (float)fVar11;
            FUN_00593fe0(local_3c);
            local_378[0] = local_428;
            auStack_424[(uint)bVar10 * -2 + 0x2c] = auStack_424[(uint)bVar10 * -2];
            auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2d] =
                 auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2d)[(uint)bVar10 * -2 + 1] =
                 (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            local_14 = (float)(param_1 + 0x2b4);
            FUN_00546f40(local_14,auStack_424 + 0x2b,local_201c,_DAT_01b4d268,&LAB_00544cc0);
            FUN_00593fe0(-local_3c);
            fVar12 = local_14;
            local_318[0] = local_3b8;
            auStack_334[(uint)bVar10 * -2 + 8] = auStack_424[(uint)bVar10 * -2 + 0x1c];
            auStack_334[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9] =
                 auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1d];
            (auStack_334 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1] =
                 (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1d)[(uint)bVar10 * -2 + 1]
            ;
            FUN_00546f40(fVar12,auStack_334 + 7,local_201c,_DAT_01b4d270,&LAB_00544cc0);
          }
          FUN_00593fa0(local_1ec);
          local_2e8 = auStack_4d4[3];
          auStack_2e4[(uint)bVar10 * -2] = auStack_4d4[(uint)bVar10 * -2 + 4];
          auStack_2e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
          (auStack_2e4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
          local_14 = (float)(param_1 + 0x2b4);
          FUN_00546f40(param_1 + 0x2b4,&local_2e8,local_201c,_DAT_01b4d268,&LAB_00544cc0);
          FUN_00593fe0(local_1e8);
          local_458[0] = local_488;
          auStack_4d4[(uint)bVar10 * -2 + 0x20] = auStack_4d4[(uint)bVar10 * -2 + 0x14];
          auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x21] =
               auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x15];
          (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x21)[(uint)bVar10 * -2 + 1] =
               (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1];
          puVar2 = auStack_4d4 + 0x1f;
          fVar12 = local_14;
          uVar3 = _DAT_01b4d268;
          goto LAB_00454032;
        }
        if (iVar1 == 0x17) {
          local_202c = *(float *)(local_1c + 8) * (float)_DAT_005d0177;
          if (1.0 < local_202c) {
            local_202c = 1.0;
          }
          fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) / (float10)_DAT_005f5164,
                                   (float10)1);
          local_40 = (float)fVar11;
          FUN_00593fe0(local_40);
          local_3d8[0] = local_398;
          auStack_424[(uint)bVar10 * -2 + 0x14] = auStack_424[(uint)bVar10 * -2 + 0x24];
          auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x15] =
               auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25];
          (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
               (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25)[(uint)bVar10 * -2 + 1];
          local_14 = (float)(param_1 + 0x2b4);
          FUN_00546f40(param_1 + 0x2b4,auStack_424 + 0x13,local_202c,_DAT_01b4d268,&LAB_00544cc0);
          FUN_00593fe0(-local_40);
          puVar7 = auStack_424 + 0x13;
          puVar5 = auStack_334 + 0xf;
          puVar2 = auStack_424 + 0x13;
          local_201c = local_202c;
          uVar3 = _DAT_01b4d264;
        }
        else {
          if (iVar1 != 0x18) {
            if (iVar1 == 0x19) {
              local_2020 = 1.0 - (*(float *)(local_1c + 8) + (float)_DAT_005d016f) *
                                 (float)_DAT_005d0177;
              if (local_2020 < 0.0) {
                local_2020 = 0.0;
              }
              if (1.0 < local_2020) {
                local_2020 = 1.0;
              }
              fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) /
                                       (float10)_DAT_005f5164,(float10)1);
              local_24 = (float)fVar11;
              FUN_00593fe0(local_24);
              local_3a8[0] = local_388;
              auStack_424[(uint)bVar10 * -2 + 0x20] = auStack_424[(uint)bVar10 * -2 + 0x28];
              auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x21] =
                   auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x29];
              (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x21)[(uint)bVar10 * -2 + 1] =
                   (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x29)
                   [(uint)bVar10 * -2 + 1];
              local_14 = (float)(param_1 + 0x2b4);
              FUN_00546f40(param_1 + 0x2b4,auStack_424 + 0x1f,local_2020,_DAT_01b4d268,&LAB_00544cc0
                          );
              FUN_00593fe0(-local_24);
              local_3a8[0] = local_3c8;
              auStack_424[(uint)bVar10 * -2 + 0x20] = auStack_424[(uint)bVar10 * -2 + 0x18];
              auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x21] =
                   auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
              (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x21)[(uint)bVar10 * -2 + 1] =
                   (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19)
                   [(uint)bVar10 * -2 + 1];
              puVar2 = auStack_424 + 0x1f;
              fVar12 = local_14;
              local_201c = local_2020;
              uVar3 = _DAT_01b4d264;
            }
            else {
              if (iVar1 != 0x1a) goto LAB_0045403a;
              local_2010 = *(float *)(local_1c + 8);
              if (local_2010 < (float)_DAT_005d0167) {
                local_2010 = local_2010 * (float)_DAT_005d0177;
              }
              else {
                local_2010 = 1.0 - (local_2010 + (float)_DAT_005d016f) * (float)_DAT_005d0177;
              }
              if (1.0 < local_2010) {
                local_2010 = 1.0;
              }
              if (local_2010 < 0.0) {
                local_2010 = 0.0;
              }
              local_14 = (float)(param_1 + 0x2b4);
              FUN_005469a0(local_14,_DAT_01b4d268);
              local_1bc = local_270;
              local_2b4[(uint)bVar10 * -2 + 0x3f] = local_2b4[(uint)bVar10 * -2 + 0x12];
              local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x40] =
                   local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
              fVar11 = (float10)local_1b8 - (float10)*(float *)(param_1 + 0x25704);
              FUN_005b9989();
              FUN_00593fa0((float)fVar11);
              local_308[0] = local_4a8;
              auStack_334[(uint)bVar10 * -2 + 0xc] = auStack_4d4[(uint)bVar10 * -2 + 0xc];
              fVar12 = local_14;
              auStack_334[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
                   auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
              (auStack_334 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd)[(uint)bVar10 * -2 + 1] =
                   (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd)
                   [(uint)bVar10 * -2 + 1];
              FUN_00546f40(local_14,auStack_334 + 0xb,local_2010,_DAT_01b4d268,&LAB_00544cc0);
              FUN_00546f40(fVar12,auStack_334 + 0xb,local_2010,_DAT_01b4d264,&LAB_00544cc0);
              fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) /
                                       (float10)_DAT_005f5164,(float10)1);
              local_18 = (float)fVar11;
              FUN_00593fe0(local_18);
              fVar12 = local_14;
              local_4b8[0] = local_498;
              auStack_4d4[(uint)bVar10 * -2 + 8] = auStack_4d4[(uint)bVar10 * -2 + 0x10];
              auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9] =
                   auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11];
              (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1] =
                   (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11)
                   [(uint)bVar10 * -2 + 1];
              FUN_00546f40(fVar12,auStack_4d4 + 7,local_2010,_DAT_01b4d268,&LAB_00544cc0);
              FUN_00593fe0(-local_18);
              local_4b8[0] = local_3e8;
              auStack_4d4[(uint)bVar10 * -2 + 8] = auStack_424[(uint)bVar10 * -2 + 0x10];
              auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9] =
                   auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11];
              (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1] =
                   (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x11)
                   [(uint)bVar10 * -2 + 1];
              puVar2 = auStack_4d4 + 7;
              fVar12 = local_14;
              local_201c = local_2010;
              uVar3 = _DAT_01b4d264;
            }
            goto LAB_00454032;
          }
          local_2024 = *(float *)(local_1c + 8);
          if ((float)_DAT_005d0167 <= local_2024) {
            local_2024 = 1.0 - (local_2024 + (float)_DAT_005d016f) * (float)_DAT_005d0177;
          }
          else {
            local_2024 = local_2024 * (float)_DAT_005d0177;
          }
          if (1.0 < local_2024) {
            local_2024 = 1.0;
          }
          if (local_2024 < 0.0) {
            local_2024 = 0.0;
          }
          FUN_005469a0(param_1 + 0x2b4,_DAT_01b4d268);
          local_120 = local_144[3];
          afStack_134[(uint)bVar10 * -2 + 6] = afStack_134[(uint)bVar10 * -2];
          afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
               afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          local_2c = (*(float *)(param_1 + 0x25704) + *(float *)(param_1 + 0x2571c)) -
                     *(float *)(param_1 + 0x25710);
          if (*(int *)(param_1 + 0x25608) != 0) {
            _DAT_01b4d2f0 = (float)FUN_0044ffd0(*(int *)(param_1 + 0x25608));
            local_14 = _DAT_01b4d2f0;
          }
          local_2c = local_2c - _DAT_01b4d2f0;
          fVar11 = (float10)local_11c - (float10)local_2c;
          FUN_005b9989();
          FUN_00593fa0((float)fVar11);
          local_468[0] = auStack_514[3];
          auStack_4d4[(uint)bVar10 * -2 + 0x1c] = auStack_514[(uint)bVar10 * -2 + 4];
          auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1d] =
               auStack_514[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
          (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1d)[(uint)bVar10 * -2 + 1] =
               (auStack_514 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
          local_14 = (float)(param_1 + 0x2b4);
          FUN_00546f40(param_1 + 0x2b4,auStack_4d4 + 0x1b,local_2024,_DAT_01b4d268,&LAB_00544cc0);
          FUN_00546f40(local_14,auStack_4d4 + 0x1b,local_2024,_DAT_01b4d264,&LAB_00544cc0);
          fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x25718) / (float10)_DAT_005f5164,
                                   (float10)1);
          local_38 = (float)fVar11;
          FUN_00593fe0(local_38);
          fVar12 = local_14;
          local_448[0] = local_4d8;
          auStack_4d4[(uint)bVar10 * -2 + 0x24] = auStack_4d4[(uint)bVar10 * -2];
          auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
               auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25)[(uint)bVar10 * -2 + 1] =
               (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          FUN_00546f40(fVar12,auStack_4d4 + 0x23,local_2024,_DAT_01b4d268,&LAB_00544cc0);
          FUN_00593fe0(-local_38);
          puVar7 = auStack_4d4 + 0x23;
          puVar5 = auStack_4d4 + 0x27;
          puVar2 = auStack_4d4 + 0x23;
          local_201c = local_2024;
          uVar3 = _DAT_01b4d264;
        }
      }
      goto LAB_00454025;
    }
    pfVar4 = (float *)(param_1 + 0x25704 + (uint)bVar10 * -8);
    local_15c = *(float *)(param_1 + 0x25700);
    local_2b4[(uint)bVar10 * -2 + 0x57] = *pfVar4;
    local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x58] = pfVar4[(uint)bVar10 * -2 + 1];
    FUN_005469a0(local_1c,_DAT_01b4d268);
    fVar12 = local_15c;
    local_234 = local_168;
    local_2b4[(uint)bVar10 * -2 + 0x21] = local_2b4[(uint)bVar10 * -2 + 0x54];
    local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22] =
         local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x55];
    local_108 = fVar12 - local_234;
    local_104 = local_158 - local_230;
    local_100 = local_154 - local_22c;
    local_18c[0] = fVar12 - local_234;
    local_2b4[(uint)bVar10 * -2 + 0x4b] = afStack_134[(uint)bVar10 * -2 + 0xc];
    local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x4c] =
         afStack_134[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
    FUN_005838f0(local_2b4 + 0x4a);
    local_288 = local_27c;
    local_2b4[(uint)bVar10 * -2 + 0xc] = local_2b4[(uint)bVar10 * -2 + 0xf];
    local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         local_2b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    local_28 = 0.0;
    FUN_00593fa0(-local_288);
    local_478[0] = local_518;
    auStack_4d4[(uint)bVar10 * -2 + 0x18] = auStack_514[(uint)bVar10 * -2];
    auStack_4d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
         auStack_514[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (auStack_4d4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19)[(uint)bVar10 * -2 + 1] =
         (auStack_514 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_14 = (float)(param_1 + 0x2b4);
    FUN_00546f40(local_14,auStack_4d4 + 0x17,local_28,_DAT_01b4d268,&LAB_00544cc0);
    FUN_00593fe0(local_284);
    fVar12 = local_14;
    local_201c = local_28;
    puVar2 = auStack_424 + 0x2f;
    local_368[0] = local_3f8;
    auStack_424[(uint)bVar10 * -2 + 0x30] = auStack_424[(uint)bVar10 * -2 + 0xc];
    auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31] =
         auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
    (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31)[(uint)bVar10 * -2 + 1] =
         (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd)[(uint)bVar10 * -2 + 1];
    uVar3 = _DAT_01b4d268;
  }
LAB_00454032:
  FUN_00546f40(fVar12,puVar2,local_201c,uVar3,&LAB_00544cc0);
LAB_0045403a:
  if (*(int *)(0x01CB6900 + 0x25c) != 0) {
    local_144[1] = 0.0;
    local_144[2] = 0.0;
    local_144[0] = 0.0;
    if ((*(int *)(param_1 + 0x25640) != 0) && (*(int *)(param_1 + 0x25698) != 0)) {
      local_144[0] = *(float *)(param_1 + 0x2567c);
    }
    FUN_00594380(local_2b4 + 0x5c,0x3f800000,_DAT_01b4d258,&LAB_00544cc0);
    local_408[0] = local_338;
    auStack_424[(uint)bVar10 * -2 + 8] = auStack_334[(uint)bVar10 * -2];
    auStack_424[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9] =
         auStack_334[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (auStack_424 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 9)[(uint)bVar10 * -2 + 1] =
         (auStack_334 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    FUN_005466c0(param_1 + 0x2b4,auStack_424 + 7);
  }
  if (*(float *)(param_1 + 0x256ac) <= 0.0) {
    return;
  }
  iVar1 = param_1 + 0x2b4;
  uVar3 = FUN_00547890(iVar1,"?draw_holsters2aimPistols" + 1,1);
  uVar3 = FUN_00502f10(uVar3);
  local_34 = FUN_00503f50(iVar1,uVar3,0x3f800000);
  local_14 = (float)local_34;
  FUN_00545a60(iVar1,uVar3,local_34,*(uint *)(param_1 + 0x256ac),_DAT_01b4d298,&LAB_00544cc0);
  return;
}
