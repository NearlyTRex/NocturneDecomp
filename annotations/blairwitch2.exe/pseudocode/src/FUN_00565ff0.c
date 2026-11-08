// Name: FUN_00565ff0
// Address: 00565ff0
// Address Range: [[00565ff0, 0056742b]]
// Convention: unknown
// Signature: void FUN_00565ff0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00565ff0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float10 fVar7;
  float fVar8;
  float local_204c;
  float local_203c;
  float local_2038;
  float local_2034;
  float fStack_2030;
  float local_202c;
  float local_2024;
  float local_2020;
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
  float afStack_514 [7];
  float local_4f8 [4];
  float local_4e8 [4];
  uint local_4d8;
  float local_4c8 [4];
  uint local_4b8;
  uint local_4a8;
  float local_498 [4];
  float local_488 [4];
  uint local_478;
  uint local_468;
  uint uStack_458;
  float local_448 [4];
  uint local_438;
  uint local_428;
  float local_418 [4];
  float local_408 [4];
  float local_3f8 [4];
  uint local_3e8;
  uint local_3d8;
  float local_3c8 [4];
  uint local_3b8;
  uint local_3a8;
  uint local_398;
  float local_388 [4];
  uint local_378;
  uint uStack_368;
  float local_358 [4];
  float local_348 [4];
  uint local_338;
  uint local_328;
  uint local_318;
  float local_308 [4];
  float local_2f8 [4];
  float afStack_2e8 [4];
  uint local_2d8;
  float afStack_2c8 [4];
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float fStack_2a0;
  float local_294;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  uint uStack_27c;
  float local_270;
  float local_264 [3];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  uint local_24c;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  uint local_228;
  float local_224;
  float local_21c;
  float local_218;
  float local_214;
  float fStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint local_204;
  float fStack_1f8;
  float local_1ec;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint local_1bc;
  uint local_1b0;
  uint local_1ac;
  float local_1a4;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float local_18c;
  float local_188;
  float local_184;
  float afStack_180 [3];
  float afStack_174 [3];
  uint local_168;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144 [3];
  uint local_138;
  float local_134;
  float local_12c;
  float local_120;
  float fStack_11c;
  float fStack_118;
  uint local_114;
  uint local_110;
  float local_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float local_e4;
  float local_d8;
  uint local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [3];
  float local_9c [4];
  float afStack_8c [4];
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c [3];
  uint local_60;
  float local_54 [5];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float *local_20;
  int local_1c;
  float local_18;
  
  bVar6 = 0;
  local_18 = (float)FUN_005038a0(param_1 + 0x2b4,0);
  local_2020 = local_18;
  if (*(int *)(param_1 + 0x256c0) < 0x3e19999a) {
    local_2020 = (*(float *)(param_1 + 0x256c0) / _DAT_005eb7dd) * local_18;
  }
  if (0.85 < *(float *)(param_1 + 0x256c0)) {
    local_2020 = ((1.0 - *(float *)(param_1 + 0x256c0)) / 0.15) * local_2020;
  }
  FUN_00544f00(param_1 + 0x2b4);
  if ((0.0 < local_2020) && (-1 < *(int *)(param_1 + 0x256f0))) {
    FUN_00567430(param_1,local_200c);
    local_200c[0] = 0;
    local_2004 = 0;
    FUN_00546190(param_1 + 0x2b4,local_200c,local_2020,0xffffffff,&LAB_00544cc0);
  }
  FUN_00567880(param_1);
  local_1c = param_1 + 0x2b4;
  iVar2 = FUN_005035c0(local_1c);
  iVar1 = local_1c;
  iVar2 = *(int *)(iVar2 + 0x24);
  if (iVar2 == 0x15) {
    pfVar4 = (float *)(param_1 + 0x25708 + (uint)bVar6 * -8);
    afStack_8c[2] = *(float *)(param_1 + 0x25704);
    afStack_8c[(uint)bVar6 * -2 + 3] = *pfVar4;
    afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] = pfVar4[(uint)bVar6 * -2 + 1];
    FUN_005469a0(iVar1,_DAT_0264be40);
    fVar8 = afStack_8c[2];
    local_2ac = local_270;
    afStack_514[(uint)bVar6 * -2 + 0x9b] = afStack_514[(uint)bVar6 * -2 + 0xaa];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x9c] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xab];
    local_234 = fVar8 - local_2ac;
    local_230 = afStack_8c[3] - local_2a8;
    local_22c = local_7c - local_2a4;
    local_6c[0] = fVar8 - local_2ac;
    afStack_8c[(uint)bVar6 * -2 + 9] = afStack_514[(uint)bVar6 * -2 + 0xb9];
    afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xba];
    FUN_005838f0(afStack_8c + 8);
    iVar2 = local_1c;
    local_1b0 = local_1bc;
    afStack_514[(uint)bVar6 * -2 + 0xda] = afStack_514[(uint)bVar6 * -2 + 0xd7];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xdb] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd8];
    local_2034 = *(float *)(iVar2 + 8);
    if ((float)_DAT_005eb84d <= local_2034) {
      local_2034 = 1.0 - (local_2034 + (float)_DAT_005eb855) * (float)_DAT_005eb85d;
      if (local_2034 < 0.0) {
        local_2034 = 0.0;
      }
    }
    else {
      local_2034 = local_2034 * (float)_DAT_005eb85d;
    }
    FUN_00593fa0(local_1b0);
    local_308[0] = (float)local_478;
    afStack_514[(uint)bVar6 * -2 + 0x84] = afStack_514[(uint)bVar6 * -2 + 0x28];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x85] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x29];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x85)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x29)[(uint)bVar6 * -2 + 1];
    local_18 = (float)(param_1 + 0x2b4);
    FUN_00546f40(local_18,afStack_514 + 0x83,local_2034,_DAT_0264be74,&LAB_00544cc0);
    FUN_00593fe0(local_1ac);
    fVar8 = local_18;
    pfVar4 = afStack_514 + 0x73;
    local_348[0] = (float)local_318;
    afStack_514[(uint)bVar6 * -2 + 0x74] = afStack_514[(uint)bVar6 * -2 + 0x80];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x75] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x81];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x75)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x81)[(uint)bVar6 * -2 + 1];
    uVar3 = _DAT_0264be40;
  }
  else if (iVar2 == 0x13) {
    pfVar4 = (float *)(param_1 + 0x25708 + (uint)bVar6 * -8);
    local_cc = *(float *)(param_1 + 0x25704);
    afStack_514[(uint)bVar6 * -2 + 0x113] = *pfVar4;
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x114] = pfVar4[(uint)bVar6 * -2 + 1];
    FUN_005469a0(local_1c,_DAT_0264be40);
    fVar8 = local_cc;
    local_1e0 = local_1ec;
    afStack_514[(uint)bVar6 * -2 + 0xce] = afStack_514[(uint)bVar6 * -2 + 0xcb];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xcf] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xcc];
    local_15c = fVar8 - local_1e0;
    local_158 = local_c8 - local_1dc;
    local_154 = local_c4 - local_1d8;
    local_a8[0] = fVar8 - local_1e0;
    afStack_514[(uint)bVar6 * -2 + 0x11c] = afStack_514[(uint)bVar6 * -2 + 0xef];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11d] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xf0];
    FUN_005838f0(afStack_514 + 0x11b);
    iVar2 = local_1c;
    local_d8 = local_12c;
    afStack_514[(uint)bVar6 * -2 + 0x110] = afStack_514[(uint)bVar6 * -2 + 0xfb];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x111] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xfc];
    local_202c = *(float *)(iVar2 + 8);
    if ((float)_DAT_005eb835 <= local_202c) {
      local_202c = 1.0 - (local_202c + (float)_DAT_005eb83d) * (float)_DAT_005eb805;
      if (local_202c < 0.0) {
        local_202c = 0.0;
      }
    }
    else {
      local_202c = local_202c * (float)_DAT_005eb845;
    }
    FUN_00593fa0(-local_d8);
    local_4f8[0] = (float)local_4a8;
    afStack_514[(uint)bVar6 * -2 + 8] = afStack_514[(uint)bVar6 * -2 + 0x1c];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d)[(uint)bVar6 * -2 + 1];
    local_18 = (float)(param_1 + 0x2b4);
    FUN_00546f40(param_1 + 0x2b4,afStack_514 + 7,local_202c,_DAT_0264be40,&LAB_00544cc0);
    FUN_00593fe0(local_d4);
    local_3c8[0] = (float)local_3b8;
    afStack_514[(uint)bVar6 * -2 + 0x54] = afStack_514[(uint)bVar6 * -2 + 0x58];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x55] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x59];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x55)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x59)[(uint)bVar6 * -2 + 1];
    pfVar4 = afStack_514 + 0x53;
    fVar8 = local_18;
    local_2034 = local_202c;
    uVar3 = _DAT_0264be40;
  }
  else if (iVar2 == 0x16) {
    FUN_00449280(local_570,param_1 + 0x2562c);
    if ((DAT_0264be10 & 1) == 0) {
      DAT_0264be10 = DAT_0264be10 | 1;
    }
    iVar2 = *(int *)(param_1 + 0x2561c);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
      pfVar4 = local_530;
      pfVar5 = &fStack_548;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_258 = fStack_548 + fStack_53c;
      fStack_254 = fStack_544 + fStack_538;
      fStack_250 = fStack_540 + fStack_534;
      fStack_1d4 = fStack_548 + fStack_53c;
      afStack_514[(uint)bVar6 * -2 + 0xd1] = afStack_514[(uint)bVar6 * -2 + 0xb0];
      afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd2] =
           afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb1];
      fStack_1c8 = fStack_1d4 * _DAT_005eb80d;
      fStack_1c4 = fStack_1d0 * _DAT_005eb80d;
      fStack_1c0 = fStack_1cc * _DAT_005eb80d;
      fStack_210 = fStack_1d4 * _DAT_005eb80d;
      afStack_514[(uint)bVar6 * -2 + 0xc2] = afStack_514[(uint)bVar6 * -2 + 0xd4];
      afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xc3] =
           afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd5];
      if (&stack0x00000000 != (byte *)0x264c010) {
        _DAT_0264be00 = fStack_210;
        _DAT_0264be04 = uStack_20c;
        _DAT_0264be08 = uStack_208;
      }
    }
    FUN_00449530(local_570,&DAT_0264be00);
    local_120 = local_1a4;
    afStack_514[(uint)bVar6 * -2 + 0xfe] = afStack_514[(uint)bVar6 * -2 + 0xdd];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xff] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xde];
    fStack_fc = *(float *)(param_1 + 0x25620) + local_120;
    fStack_f8 = *(float *)(param_1 + 0x25624) + fStack_11c;
    fStack_f4 = *(float *)(param_1 + 0x25628) + fStack_118;
    afStack_174[0] = fStack_fc;
    afStack_514[(uint)bVar6 * -2 + 0xe9] = afStack_514[(uint)bVar6 * -2 + 0x107];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xea] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x108];
    FUN_00408de0(param_1,afStack_514 + 0xe8);
    local_18 = (float)(param_1 + 0x2b4);
    fStack_288 = fStack_1f8;
    afStack_514[(uint)bVar6 * -2 + 0xa4] = afStack_514[(uint)bVar6 * -2 + 200];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xa5] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xc9];
    FUN_005469a0(param_1 + 0x2b4,_DAT_0264be40);
    fVar8 = fStack_288;
    fStack_2b8 = fStack_2a0;
    afStack_514[(uint)bVar6 * -2 + 0x98] = afStack_514[(uint)bVar6 * -2 + 0x9e];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x99] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x9f];
    fStack_198 = fVar8 - fStack_2b8;
    fStack_194 = fStack_284 - fStack_2b4;
    fStack_190 = fStack_280 - fStack_2b0;
    afStack_180[0] = fVar8 - fStack_2b8;
    afStack_514[(uint)bVar6 * -2 + 0xe6] = afStack_514[(uint)bVar6 * -2 + 0xe0];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe7] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe1];
    FUN_005838f0(afStack_514 + 0xe5);
    fVar8 = local_18;
    uStack_f0 = uStack_27c;
    afStack_514[(uint)bVar6 * -2 + 0x10a] = afStack_514[(uint)bVar6 * -2 + 0xa7];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10b] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xa8];
    fStack_2030 = *(float *)((int)fVar8 + 8);
    if ((float)_DAT_005eb815 <= fStack_2030) {
      fStack_2030 = 1.0 - (fStack_2030 + (float)_DAT_005eb81d) * (float)_DAT_005eb825;
      if (fStack_2030 < 0.0) {
        fStack_2030 = 0.0;
      }
    }
    else {
      fStack_2030 = fStack_2030 * (float)_DAT_005eb82d;
    }
    FUN_00593fa0(uStack_f0);
    afStack_2e8[0] = (float)uStack_458;
    afStack_514[(uint)bVar6 * -2 + 0x8c] = afStack_514[(uint)bVar6 * -2 + 0x30];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x8d] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x8d)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31)[(uint)bVar6 * -2 + 1];
    local_18 = (float)(param_1 + 0x2b4);
    FUN_00546f40(param_1 + 0x2b4,afStack_514 + 0x8b,fStack_2030,_DAT_0264be74,&LAB_00544cc0);
    FUN_00593fe0(uStack_ec);
    pfVar4 = afStack_514 + 0x93;
    afStack_2c8[0] = (float)uStack_368;
    afStack_514[(uint)bVar6 * -2 + 0x94] = afStack_514[(uint)bVar6 * -2 + 0x6c];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x95] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x6d];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x95)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x6d)[(uint)bVar6 * -2 + 1];
    fVar8 = local_18;
    local_2034 = fStack_2030;
    uVar3 = _DAT_0264be40;
  }
  else if (iVar2 == 0x1f) {
    local_20 = (float *)(param_1 + 0x25704);
    if (*(int *)(param_1 + 0x25610) == 0) {
      FUN_004e2220(_DAT_0264be0c);
      local_264[0] = (float)local_168;
      afStack_514[(uint)bVar6 * -2 + 0xad] = afStack_514[(uint)bVar6 * -2 + 0xec];
      afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xae] =
           afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xed];
      FUN_00408de0(param_1,afStack_514 + 0xac);
      pfVar4 = local_20;
      local_18c = local_e4;
      afStack_514[(uint)bVar6 * -2 + 0xe3] = afStack_514[(uint)bVar6 * -2 + 0x10d];
      afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe4] =
           afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10e];
      if (afStack_514 + 0xe2 != pfVar4) {
        *pfVar4 = local_18c;
        pfVar4[1] = local_188;
        pfVar4[2] = local_184;
      }
    }
    else {
      FUN_004e2220(*(int *)(param_1 + 0x25610));
      local_144[0] = (float)local_24c;
      afStack_514[(uint)bVar6 * -2 + 0xf5] = afStack_514[(uint)bVar6 * -2 + 0xb3];
      afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xf6] =
           afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb4];
      FUN_00408de0(param_1,afStack_514 + 0xf4);
      local_78 = local_294;
      afStack_8c[(uint)bVar6 * -2 + 6] = afStack_514[(uint)bVar6 * -2 + 0xa1];
      afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xa2];
      if (afStack_8c + 5 != local_20) {
        *local_20 = local_78;
        local_20[1] = local_74;
        local_20[2] = local_70;
      }
      _DAT_0264be0c = *(uint *)(param_1 + 0x25610);
    }
    pfVar4 = (float *)(param_1 + 0x25708 + (uint)bVar6 * -8);
    local_150 = *(float *)(param_1 + 0x25704);
    afStack_514[(uint)bVar6 * -2 + 0xf2] = *pfVar4;
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xf3] = pfVar4[(uint)bVar6 * -2 + 1];
    local_18 = (float)(param_1 + 0x2b4);
    FUN_005469a0(local_18,_DAT_0264be40);
    fVar8 = local_150;
    local_21c = local_108;
    afStack_514[(uint)bVar6 * -2 + 0xbf] = afStack_514[(uint)bVar6 * -2 + 0x104];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xc0] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x105];
    fVar8 = fVar8 - local_21c;
    local_240 = fVar8;
    local_23c = local_14c - local_218;
    local_238 = local_148 - local_214;
    local_c0 = fVar8;
    afStack_514[(uint)bVar6 * -2 + 0x116] = afStack_514[(uint)bVar6 * -2 + 0xb6];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x117] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb7];
    local_b4 = fVar8;
    local_b0 = local_23c;
    local_ac = local_238;
    local_54[0] = fVar8;
    afStack_8c[(uint)bVar6 * -2 + 0xf] = afStack_514[(uint)bVar6 * -2 + 0x119];
    afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11a];
    FUN_005838f0(afStack_8c + 0xe);
    fVar8 = local_18;
    local_114 = local_9c[3];
    afStack_514[(uint)bVar6 * -2 + 0x101] = afStack_8c[(uint)bVar6 * -2];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x102] =
         afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    local_2024 = *(float *)((int)fVar8 + 8);
    if ((float)_DAT_005eb7fd <= local_2024) {
      if (_DAT_005eb7e5 <= (double)local_2024) {
        local_2024 = 1.0 - (local_2024 + (float)_DAT_005eb7ed) * (float)_DAT_005eb7f5;
        if (local_2024 < 0.0) {
          local_2024 = 0.0;
        }
      }
      else {
        local_2024 = 1.0;
      }
    }
    else {
      local_2024 = local_2024 * (float)_DAT_005eb805;
    }
    local_28 = SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc);
    if (local_28 < _DAT_005fc208) {
      fVar7 = (float10)local_28 / (float10)_DAT_005fc208;
      FUN_005b9924();
      local_30 = (float)fVar7;
      FUN_00593fe0(local_30);
      local_388[0] = (float)local_338;
      afStack_514[(uint)bVar6 * -2 + 100] = afStack_514[(uint)bVar6 * -2 + 0x78];
      afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x65] =
           afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x79];
      (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x65)[(uint)bVar6 * -2 + 1] =
           (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x79)[(uint)bVar6 * -2 + 1];
      local_18 = (float)(param_1 + 0x2b4);
      FUN_00546f40(local_18,afStack_514 + 99,local_2024,_DAT_0264be40,&LAB_00544cc0);
      FUN_00593fe0(-local_30);
      fVar8 = local_18;
      local_358[0] = (float)local_328;
      afStack_514[(uint)bVar6 * -2 + 0x70] = afStack_514[(uint)bVar6 * -2 + 0x7c];
      afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x71] =
           afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x7d];
      (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x71)[(uint)bVar6 * -2 + 1] =
           (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x7d)[(uint)bVar6 * -2 + 1];
      FUN_00546f40(fVar8,afStack_514 + 0x6f,local_2024,_DAT_0264be48,&LAB_00544cc0);
    }
    FUN_00593fa0(local_114);
    local_498[0] = (float)local_4d8;
    afStack_514[(uint)bVar6 * -2 + 0x20] = afStack_514[(uint)bVar6 * -2 + 0x10];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
    local_18 = (float)(param_1 + 0x2b4);
    FUN_00546f40(param_1 + 0x2b4,afStack_514 + 0x1f,local_2024,_DAT_0264be40,&LAB_00544cc0);
    FUN_00593fe0(local_110);
    local_4c8[0] = (float)local_428;
    afStack_514[(uint)bVar6 * -2 + 0x14] = afStack_514[(uint)bVar6 * -2 + 0x3c];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d)[(uint)bVar6 * -2 + 1];
    pfVar4 = afStack_514 + 0x13;
    fVar8 = local_18;
    local_2034 = local_2024;
    uVar3 = _DAT_0264be40;
  }
  else if (iVar2 == 0x17) {
    local_2038 = *(float *)(local_1c + 8) * (float)_DAT_005eb7f5;
    if (1.0 < local_2038) {
      local_2038 = 1.0;
    }
    fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x2571c) / (float10)_DAT_005fc208,
                            (float10)1);
    local_3c = (float)fVar7;
    FUN_00593fe0(local_3c);
    local_2f8[0] = (float)local_468;
    afStack_514[(uint)bVar6 * -2 + 0x88] = afStack_514[(uint)bVar6 * -2 + 0x2c];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x89] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2d];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x89)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2d)[(uint)bVar6 * -2 + 1];
    local_18 = (float)(param_1 + 0x2b4);
    FUN_00546f40(param_1 + 0x2b4,afStack_514 + 0x87,local_2038,_DAT_0264be40,&LAB_00544cc0);
    FUN_00593fe0(-local_3c);
    pfVar4 = afStack_514 + 0x87;
    local_2f8[0] = (float)local_518;
    afStack_514[(uint)bVar6 * -2 + 0x88] = afStack_514[(uint)bVar6 * -2];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x89] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x89)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    fVar8 = local_18;
    local_2034 = local_2038;
    uVar3 = _DAT_0264be3c;
  }
  else if (iVar2 == 0x18) {
    local_204c = *(float *)(local_1c + 8);
    if ((float)_DAT_005eb7e5 <= local_204c) {
      local_204c = 1.0 - (local_204c + (float)_DAT_005eb7ed) * (float)_DAT_005eb7f5;
    }
    else {
      local_204c = local_204c * (float)_DAT_005eb7f5;
    }
    if (1.0 < local_204c) {
      local_204c = 1.0;
    }
    if (local_204c < 0.0) {
      local_204c = 0.0;
    }
    FUN_005469a0(param_1 + 0x2b4,_DAT_0264be40);
    local_228 = local_60;
    afStack_514[(uint)bVar6 * -2 + 0xbc] = afStack_8c[(uint)bVar6 * -2 + 0xc];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xbd] =
         afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    local_24 = (*(float *)(param_1 + 0x25708) + *(float *)(param_1 + 0x25720)) -
               *(float *)(param_1 + 0x25714);
    if (*(int *)(param_1 + 0x25608) != 0) {
      _DAT_0264bec8 = (float)FUN_005626f0(*(int *)(param_1 + 0x25608));
      local_18 = _DAT_0264bec8;
    }
    local_24 = local_24 - _DAT_0264bec8;
    fVar7 = (float10)local_224 - (float10)local_24;
    FUN_005b9989();
    FUN_00593fa0((float)fVar7);
    local_488[0] = (float)local_398;
    afStack_514[(uint)bVar6 * -2 + 0x24] = afStack_514[(uint)bVar6 * -2 + 0x60];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x61];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x61)[(uint)bVar6 * -2 + 1];
    local_18 = (float)(param_1 + 0x2b4);
    FUN_00546f40(param_1 + 0x2b4,afStack_514 + 0x23,local_204c,_DAT_0264be40,&LAB_00544cc0);
    FUN_00546f40(local_18,afStack_514 + 0x23,local_204c,_DAT_0264be3c,&LAB_00544cc0);
    fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x2571c) / (float10)_DAT_005fc208,
                            (float10)1);
    local_34 = (float)fVar7;
    FUN_00593fe0(local_34);
    fVar8 = local_18;
    local_418[0] = (float)local_4b8;
    afStack_514[(uint)bVar6 * -2 + 0x40] = afStack_514[(uint)bVar6 * -2 + 0x18];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19)[(uint)bVar6 * -2 + 1];
    FUN_00546f40(fVar8,afStack_514 + 0x3f,local_204c,_DAT_0264be40,&LAB_00544cc0);
    FUN_00593fe0(-local_34);
    pfVar4 = afStack_514 + 0x3f;
    local_418[0] = (float)local_3d8;
    afStack_514[(uint)bVar6 * -2 + 0x40] = afStack_514[(uint)bVar6 * -2 + 0x50];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x51];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x51)[(uint)bVar6 * -2 + 1];
    fVar8 = local_18;
    local_2034 = local_204c;
    uVar3 = _DAT_0264be3c;
  }
  else if (iVar2 == 0x19) {
    local_2010 = 1.0 - (*(float *)(local_1c + 8) + (float)_DAT_005eb7ed) * (float)_DAT_005eb7f5;
    if (local_2010 < 0.0) {
      local_2010 = 0.0;
    }
    if (1.0 < local_2010) {
      local_2010 = 1.0;
    }
    fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x2571c) / (float10)_DAT_005fc208,
                            (float10)1);
    local_38 = (float)fVar7;
    FUN_00593fe0(local_38);
    local_408[0] = (float)local_378;
    afStack_514[(uint)bVar6 * -2 + 0x44] = afStack_514[(uint)bVar6 * -2 + 0x68];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x45] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x69];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x45)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x69)[(uint)bVar6 * -2 + 1];
    local_18 = (float)(param_1 + 0x2b4);
    FUN_00546f40(param_1 + 0x2b4,afStack_514 + 0x43,local_2010,_DAT_0264be40,&LAB_00544cc0);
    FUN_00593fe0(-local_38);
    local_408[0] = (float)local_2d8;
    afStack_514[(uint)bVar6 * -2 + 0x44] = afStack_514[(uint)bVar6 * -2 + 0x90];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x45] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x91];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x45)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x91)[(uint)bVar6 * -2 + 1];
    pfVar4 = afStack_514 + 0x43;
    fVar8 = local_18;
    local_2034 = local_2010;
    uVar3 = _DAT_0264be3c;
  }
  else {
    if (iVar2 != 0x1a) goto LAB_0056629e;
    local_203c = *(float *)(local_1c + 8);
    if (local_203c < (float)_DAT_005eb7e5) {
      local_203c = local_203c * (float)_DAT_005eb7f5;
    }
    else {
      local_203c = 1.0 - (local_203c + (float)_DAT_005eb7ed) * (float)_DAT_005eb7f5;
    }
    if (1.0 < local_203c) {
      local_203c = 1.0;
    }
    if (local_203c < 0.0) {
      local_203c = 0.0;
    }
    local_18 = (float)(param_1 + 0x2b4);
    FUN_005469a0(local_18,_DAT_0264be40);
    local_138 = local_204;
    afStack_514[(uint)bVar6 * -2 + 0xf8] = afStack_514[(uint)bVar6 * -2 + 0xc5];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xf9] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xc6];
    fVar7 = (float10)local_134 - (float10)*(float *)(param_1 + 0x25708);
    FUN_005b9989();
    FUN_00593fa0((float)fVar7);
    local_3f8[0] = (float)local_3e8;
    afStack_514[(uint)bVar6 * -2 + 0x48] = afStack_514[(uint)bVar6 * -2 + 0x4c];
    fVar8 = local_18;
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x49] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x4d];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x49)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x4d)[(uint)bVar6 * -2 + 1];
    FUN_00546f40(local_18,afStack_514 + 0x47,local_203c,_DAT_0264be40,&LAB_00544cc0);
    FUN_00546f40(fVar8,afStack_514 + 0x47,local_203c,_DAT_0264be3c,&LAB_00544cc0);
    fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x2571c) / (float10)_DAT_005fc208,
                            (float10)1);
    local_40 = (float)fVar7;
    FUN_00593fe0(local_40);
    fVar8 = local_18;
    local_4e8[0] = afStack_514[3];
    afStack_514[(uint)bVar6 * -2 + 0xc] = afStack_514[(uint)bVar6 * -2 + 4];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    FUN_00546f40(fVar8,afStack_514 + 0xb,local_203c,_DAT_0264be40,&LAB_00544cc0);
    FUN_00593fe0(-local_40);
    local_4e8[0] = (float)local_438;
    afStack_514[(uint)bVar6 * -2 + 0xc] = afStack_514[(uint)bVar6 * -2 + 0x38];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x39];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x39)[(uint)bVar6 * -2 + 1];
    pfVar4 = afStack_514 + 0xb;
    fVar8 = local_18;
    local_2034 = local_203c;
    uVar3 = _DAT_0264be3c;
  }
  FUN_00546f40(fVar8,pfVar4,local_2034,uVar3,&LAB_00544cc0);
LAB_0056629e:
  if (*(int *)(0x01CB6900 + 0x25c) != 0) {
    local_9c[1] = 0.0;
    local_9c[2] = 0.0;
    local_9c[0] = 0.0;
    if ((*(int *)(param_1 + 0x25640) != 0) && (*(int *)(param_1 + 0x25698) != 0)) {
      local_9c[0] = *(float *)(param_1 + 0x2565c);
    }
    FUN_00594380(afStack_514 + 0x11e,0x3f800000,_DAT_0264be30,&LAB_00544cc0);
    local_448[0] = (float)local_3a8;
    afStack_514[(uint)bVar6 * -2 + 0x34] = afStack_514[(uint)bVar6 * -2 + 0x5c];
    afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x35] =
         afStack_514[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x5d];
    (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x35)[(uint)bVar6 * -2 + 1] =
         (afStack_514 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x5d)[(uint)bVar6 * -2 + 1];
    FUN_005466c0(param_1 + 0x2b4,afStack_514 + 0x33);
  }
  if (*(float *)(param_1 + 0x256b0) <= 0.0) {
    return;
  }
  iVar2 = param_1 + 0x2b4;
  uVar3 = FUN_00547890(iVar2,"?draw_holsters2aimPistols" + 1,1);
  uVar3 = FUN_00502f10(uVar3);
  local_2c = FUN_00503f50(iVar2,uVar3,0x3f800000);
  local_18 = (float)local_2c;
  FUN_00545a60(iVar2,uVar3,local_2c,*(uint *)(param_1 + 0x256b0),_DAT_0264be70,&LAB_00544cc0);
  return;
}
