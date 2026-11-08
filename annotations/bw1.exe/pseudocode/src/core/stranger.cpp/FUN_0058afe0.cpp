// Name: FUN_0058afe0
// Address: 0058afe0
// Address Range: [[0058afe0, 0058c23a]]
// Convention: unknown
// Signature: undefined4 * FUN_0058afe0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0058afe0(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint *unaff_ESI;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_1330 [210];
  byte *puVar10;
  byte local_e88 [48];
  uint local_e58 [12];
  uint local_e28 [12];
  uint local_df8 [12];
  uint local_dc8 [12];
  uint local_d98 [12];
  uint local_d68 [12];
  uint local_d38 [12];
  uint local_d08 [3];
  float local_cfc;
  float local_cec;
  float local_cdc;
  uint local_cd8 [12];
  uint local_ca8 [12];
  uint local_c78 [12];
  uint local_c48 [12];
  byte local_c18 [48];
  uint local_be8 [12];
  uint local_bb8 [12];
  uint local_b88 [3];
  float local_b7c;
  float local_b6c;
  float local_b5c;
  uint local_b58 [12];
  byte local_b28 [48];
  uint local_af8 [12];
  uint local_ac8 [12];
  byte local_a98 [48];
  byte local_a68 [48];
  uint local_a38 [12];
  byte local_a08 [48];
  uint local_9d8 [12];
  byte local_9a8 [48];
  uint local_978 [12];
  uint local_948 [12];
  uint local_918 [12];
  uint local_8e8 [12];
  byte local_8b8 [48];
  uint local_888 [12];
  byte local_858 [48];
  uint local_828 [12];
  uint local_7f8 [12];
  uint local_7c8 [12];
  byte local_798 [48];
  uint local_768 [12];
  uint local_738 [12];
  uint local_708 [12];
  byte local_6d8 [48];
  uint local_6a8 [12];
  byte local_678 [48];
  uint local_648 [12];
  byte local_618 [48];
  uint local_5e8 [12];
  byte local_5b8 [48];
  uint local_588 [12];
  uint local_558 [12];
  uint local_528 [12];
  uint local_4f8 [12];
  uint local_4c8 [12];
  byte local_498 [48];
  uint local_468 [12];
  byte local_438 [48];
  uint local_408 [12];
  uint local_3d8 [12];
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  uint local_390 [6];
  float local_378 [6];
  uint local_360;
  float local_35c;
  float local_350;
  uint local_348;
  float local_344 [5];
  float local_330;
  float local_32c;
  float local_328;
  float local_324 [6];
  float local_30c [3];
  float local_300;
  float local_2fc;
  float local_2f8;
  uint local_2f4;
  uint local_2f0;
  uint local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  uint local_2d8;
  float local_2d4;
  float local_2d0 [4];
  float afStack_2c0 [6];
  float local_2a8 [3];
  int local_29c;
  int local_298;
  uint local_294;
  float afStack_290 [4];
  float local_280;
  float local_27c [3];
  float local_270;
  float local_264 [4];
  uint local_254;
  float local_250;
  float local_24c;
  float local_248 [6];
  float afStack_230 [5];
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  float local_1f8;
  uint local_1f4;
  float local_1f0;
  float local_1ec [3];
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8 [4];
  float afStack_1b8 [5];
  uint local_1a4 [3];
  uint local_198;
  uint local_194;
  uint local_190;
  float local_18c;
  float afStack_188 [8];
  float local_168 [3];
  float local_15c [6];
  float local_144;
  float local_140;
  float local_13c;
  uint local_138;
  float local_134 [6];
  float local_11c [11];
  float local_f0 [7];
  float local_d4;
  float local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  float local_a8 [4];
  float local_98 [5];
  uint local_84;
  uint local_80;
  uint local_7c;
  float local_78;
  float local_74;
  float local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_60 [15];
  
  bVar9 = 0;
  iVar1 = *(int *)(param_1 + 0x25a8 + param_3 * 0x78);
  local_264[3] = (float)FUN_0040c600(param_2,_DAT_02c99770);
  iVar4 = param_1 + 0xfd8;
  if (local_264[3] != 0.0) {
    iVar4 = iVar4 + iVar1 * 0x30;
    iVar1 = *(int *)((int)local_264[3] + 0x2e0);
    if (iVar1 == 9) {
      pfVar7 = afStack_230 + 0x11;
      local_138 = 0xbedec58f;
      local_134[1] = -2.84015;
      local_134[0] = -0.263934;
      afStack_2c0[3] = -0.253904;
      afStack_2c0[2] = -0.170349;
      afStack_2c0[4] = -0.326223;
      local_1ec[0] = -0.435101;
      afStack_230[(uint)bVar9 * -2 + 0x12] = local_134[(uint)bVar9 * -2];
      afStack_230[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
           local_134[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      local_f0[3] = 0.286436;
      local_f0[5] = 1.58751;
      FUN_005b5760(local_b28,afStack_2c0 + 2,pfVar7);
      local_f0[4] = 1.61223;
      pfVar7 = afStack_1b8 + 5;
      local_1c8[0] = 0.49391;
      local_1a4[0] = local_f0[3];
      afStack_1b8[(uint)bVar9 * -2 + 6] = local_11c[(uint)bVar9 * -2 + 0xf];
      afStack_1b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           local_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
      local_1c8[1] = -0.149521;
      local_1c8[2] = 0.00338589;
      FUN_005b5760(local_a08,afStack_230 + 0x1a,pfVar7);
      fVar2 = (float)FUN_00434590(param_1,3,iVar4);
      FUN_005b72c0(local_b28,local_a08,1.0 - fVar2);
      puVar6 = local_828;
      puVar5 = local_8e8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_8e8);
      puVar5 = local_7c8;
    }
    else if (iVar1 == 1) {
      local_2f4 = 0x3e44330d;
      local_2ec = 0x3f7838d2;
      local_2f0 = 0x40131412;
      local_134[2] = 0.53949;
      local_11c[8] = 0.191601;
      local_11c[(uint)bVar9 * -2 + 9] = local_344[(uint)bVar9 * -2 + 0x15];
      local_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
           local_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
      local_134[3] = -0.235855;
      local_134[4] = -0.412366;
      FUN_005b5760(local_798,local_134 + 2,local_11c + 8);
      local_204 = 0xbed430d3;
      local_1fc = 0x3feb40a3;
      pfVar7 = local_344 + 0xb;
      local_200 = 0x3f6f2b67;
      local_324[3] = -0.414435;
      local_344[(uint)bVar9 * -2 + 0xc] = afStack_230[(uint)bVar9 * -2 + 0xc];
      local_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_230[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      local_f0[2] = 0.26139;
      local_f0[0] = 0.40292;
      local_f0[1] = 0.095011;
      FUN_005b5760(local_678,local_11c + 0xb,pfVar7);
      fVar2 = (float)FUN_00434590(param_1,3,iVar4);
      FUN_005b72c0(local_798,local_678,1.0 - fVar2);
      puVar6 = local_558;
      puVar5 = local_888;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_888);
      puVar5 = local_5e8;
    }
    else if (iVar1 == 2) {
      pfVar7 = local_98 + 2;
      local_60[3] = 0.183005;
      local_60[5] = 1.66375;
      local_60[4] = 2.24986;
      local_60[10] = -0.0957868;
      local_98[2] = 0.183005;
      local_98[(uint)bVar9 * -2 + 3] = local_98[(uint)bVar9 * -2 + 0x12];
      local_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           local_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
      local_60[0xb] = -0.233186;
      local_60[9] = 0.412537;
      local_11c[4] = 1.72744;
      FUN_005b5760(local_a98,local_98 + 0x17,pfVar7);
      local_11c[3] = 1.34731;
      pfVar7 = afStack_188 + 8;
      local_11c[2] = -0.288645;
      local_2d0[0] = 0.483848;
      pfVar8 = local_344 + 0x1d;
      local_2d0[1] = 0.0729828;
      puVar10 = local_618;
      local_168[0] = -0.288645;
      afStack_188[(uint)bVar9 * -2 + 9] = local_11c[(uint)bVar9 * -2 + 3];
      afStack_188[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
           local_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      local_2d0[2] = 0.0731532;
      FUN_005b5760(puVar10,pfVar8,pfVar7);
      fVar2 = (float)FUN_00434590(param_1,3,iVar4);
      FUN_005b72c0(local_a98,local_618,1.0 - fVar2);
      puVar6 = local_3d8;
      puVar5 = local_4f8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_4f8);
      puVar5 = local_588;
    }
    else if (iVar1 == 4) {
      local_cc = 0x3e44c7f3;
      local_c4 = 0x3fd16bba;
      local_c8 = 0x4013aee6;
      local_11c[5] = 0.334258;
      local_11c[6] = -0.18522;
      local_344[2] = 0.192169;
      local_344[(uint)bVar9 * -2 + 3] = local_11c[(uint)bVar9 * -2 + 0x15];
      local_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           local_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
      local_11c[7] = -0.409418;
      local_60[6] = -0.464445;
      FUN_005b5760(local_498,local_11c + 5,local_344 + 2);
      local_60[8] = 1.77515;
      local_60[7] = 1.15525;
      local_248[2] = 0.381162;
      afStack_230[2] = local_60[6];
      afStack_230[(uint)bVar9 * -2 + 3] = local_98[(uint)bVar9 * -2 + 0x15];
      afStack_230[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           local_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
      local_248[3] = 0.0692056;
      local_248[4] = -0.225393;
      FUN_005b5760(local_c18,local_248 + 2,afStack_230 + 2);
      fVar2 = (float)FUN_00434590(param_1,3,iVar4);
      FUN_005b72c0(local_498,local_c18,1.0 - fVar2);
      puVar6 = local_a38;
      puVar5 = local_af8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_af8);
      puVar5 = local_9d8;
    }
    else if (iVar1 == 3) {
      local_198 = 0x3e740e9d;
      local_194 = 0xbd868280;
      local_190 = 0x3d093cf5;
      local_6c = 0xbf3e6506;
      local_64 = 0xbf4eefe5;
      pfVar7 = local_344 + 0xe;
      pfVar8 = afStack_1b8 + 8;
      puVar10 = local_9a8;
      local_68 = 0x3f31884c;
      local_30c[0] = -0.743729;
      local_344[(uint)bVar9 * -2 + 0xf] = local_98[(uint)bVar9 * -2 + 0xc];
      local_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           local_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      FUN_005b5760(puVar10,pfVar8,pfVar7);
      FUN_005b5200(local_9a8,iVar4);
      puVar5 = local_bb8;
    }
    else if (iVar1 == 5) {
      local_15c[0] = 0.62;
      local_15c[1] = 0.0;
      local_15c[2] = 0.217;
      local_344[0] = 1.57;
      pfVar7 = afStack_188 + 0xe;
      local_344[1] = -1.57;
      pfVar8 = afStack_188 + 0xb;
      puVar10 = local_858;
      local_348 = 0;
      local_15c[3] = 0.0;
      afStack_188[(uint)bVar9 * -2 + 0xf] = local_344[(uint)bVar9 * -2];
      afStack_188[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           local_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      FUN_005b5760(puVar10,pfVar8,pfVar7);
      FUN_005b5200(local_858,iVar4);
      puVar5 = local_738;
    }
    else if (iVar1 == 7) {
      local_b4 = 0xbdb87c8b;
      local_ac = 0x3f262846;
      local_b0 = 0xbe78bef9;
      local_60[0xc] = 0.414782;
      local_60[0xd] = -0.161673;
      local_27c[0] = -0.0900813;
      afStack_290[(uint)bVar9 * -2 + 6] = local_11c[(uint)bVar9 * -2 + 0x1b];
      afStack_290[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           local_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
      local_60[0xe] = -0.489897;
      afStack_188[2] = 0.30057;
      FUN_005b5760(local_8b8,local_98 + 0x1a,afStack_290 + 5);
      afStack_188[4] = 0.64525;
      afStack_188[3] = -0.133049;
      local_264[0] = 0.303704;
      local_294 = afStack_188[2];
      afStack_290[(uint)bVar9 * -2] = afStack_188[(uint)bVar9 * -2 + 3];
      afStack_290[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_188[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      local_264[1] = 0.0649791;
      local_264[2] = -0.273446;
      FUN_005b5760(local_6d8,afStack_290 + 0xb,&local_294);
      fVar2 = (float)FUN_00434590(param_1,0,iVar4);
      FUN_005b72c0(local_8b8,local_6d8,1.0 - fVar2);
      puVar6 = local_468;
      puVar5 = local_b58;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_b58);
      puVar5 = local_708;
    }
    else if (param_3 == 0) {
      FUN_005b5760(local_438,&DAT_02c835f0,&DAT_02c8af28);
      FUN_005b6d90(0x3fc90fdb,local_438,iVar4);
      puVar6 = (uint *)&stack0xfffff088;
      puVar5 = local_648;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b6e10(0xbfc90fdb,local_648);
      puVar6 = (uint *)&stack0xfffff0b8;
      puVar5 = local_4c8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_4c8);
      puVar6 = (uint *)&stack0xfffff0e8;
      puVar5 = (uint *)&stack0xfffff028;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(&stack0xfffff028);
      puVar6 = (uint *)&stack0xfffff118;
      puVar5 = (uint *)&stack0xfffff058;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(&stack0xfffff058);
      puVar5 = (uint *)&stack0xfffff148;
    }
    else {
      FUN_005b5760(local_e88,&DAT_02c835e4,&DAT_02c8af28);
      FUN_005b6d90(0x3fc90fdb,local_e88,iVar4);
      puVar6 = local_d98;
      puVar5 = local_e28;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b6e10(0x3fc90fdb,local_e28);
      puVar6 = local_d68;
      puVar5 = local_e58;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_e58);
      puVar6 = local_d38;
      puVar5 = local_df8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_df8);
      puVar6 = local_408;
      puVar5 = local_dc8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_dc8);
      puVar5 = local_cd8;
    }
    iVar4 = 0xc;
    puVar6 = local_ac8;
    goto LAB_0058b190;
  }
  local_254 = 0;
  local_250 = local_264[3];
  local_144 = local_264[3];
  local_140 = local_264[3];
  local_13c = local_264[3];
  if (*(int *)(param_1 + 0x2c98) == 0xe) {
    FUN_005b5080(&DAT_02c8af28,_DAT_02c83638 * 0x30 + iVar4);
    local_134[5] = local_248[5];
    local_11c[(uint)bVar9 * -2] = afStack_230[(uint)bVar9 * -2];
    local_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_230[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    FUN_005b5080(&DAT_02c8af28,_DAT_02c83634 * 0x30 + iVar4);
    local_f0[6] = local_2d0[3];
    local_11c[(uint)bVar9 * -2 + 0x12] = afStack_2c0[(uint)bVar9 * -2];
    local_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
         afStack_2c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_2e8 = local_f0[6] + local_134[5];
    local_2e4 = local_d4 + local_11c[0];
    local_2e0 = local_d0 + local_11c[1];
    local_21c = local_f0[6] + local_134[5];
    afStack_230[(uint)bVar9 * -2 + 6] = local_344[(uint)bVar9 * -2 + 0x18];
    afStack_230[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         local_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
    local_78 = local_21c * _DAT_005f6bc9;
    local_74 = local_218 * _DAT_005f6bc9;
    local_70 = local_214 * _DAT_005f6bc9;
    afStack_290[2] = local_21c * _DAT_005f6bc9;
    afStack_290[(uint)bVar9 * -2 + 3] = local_98[(uint)bVar9 * -2 + 9];
    afStack_290[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         local_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
    puVar6 = local_390;
    puVar5 = &local_360;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    }
    local_280 = local_280 + _DAT_005f6be1;
    afStack_290[3] = afStack_290[3] - (local_350 - local_35c);
    fVar2 = (float)FUN_00585170(param_2);
    afStack_290[3] = fVar2 + afStack_290[3];
    FUN_005b53f0(local_b88);
    local_b7c = afStack_290[2];
    local_b6c = afStack_290[3];
    local_b5c = local_280;
    if (*(int *)(param_1 + 0x2005c) != 0) {
      FUN_005b6e10(0x40490fdb,local_b88);
      puVar6 = local_948;
      puVar5 = local_ca8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_ca8);
      puVar6 = local_c48;
      puVar5 = local_b88;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      }
    }
    iVar4 = 0xc;
    puVar6 = local_ac8;
    puVar5 = local_b88;
    goto LAB_0058b190;
  }
  iVar4 = FUN_0040c600(param_2,DAT_007c5330);
  if (iVar4 != 0) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
    pfVar7 = local_378;
    pfVar8 = &local_3a8;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
      pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
    }
    local_c0 = local_3a8 + local_39c;
    local_bc = local_3a4 + local_398;
    local_b8 = local_3a0 + local_394;
    local_300 = local_3a8 + local_39c;
    local_344[(uint)bVar9 * -2 + 0x12] = local_11c[(uint)bVar9 * -2 + 0x18];
    local_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
         local_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
    afStack_2c0[5] = local_300 * _DAT_005f6bc9;
    local_2a8[0] = local_2fc * _DAT_005f6bc9;
    local_2a8[1] = local_2f8 * _DAT_005f6bc9;
    local_a8[3] = local_300 * _DAT_005f6bc9;
    local_98[(uint)bVar9 * -2] = local_2a8[(uint)bVar9 * -2];
    local_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_2a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (afStack_188 + 0x11 != local_11c + 0x20) {
      local_144 = local_a8[3];
      local_140 = local_98[0];
      local_13c = local_98[1];
    }
    iVar3 = *(int *)(iVar4 + 0x678);
    if (iVar3 != 2) {
      if (iVar3 == 1) {
        if (param_3 == 0) {
          FUN_005b6e10(0xbfc90fdb);
          puVar6 = local_6a8;
LAB_0058c0ac:
          puVar5 = local_768;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = *puVar6;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
          }
        }
        else {
          if (param_3 == 1) {
            FUN_005b6e10(0x3fc90fdb);
            puVar6 = local_978;
            goto LAB_0058c0ac;
          }
          FUN_005b53f0(local_768);
        }
        FUN_005b5200(local_768,iVar1 * 0x30 + param_1 + 0xfd8);
        puVar6 = local_918;
        puVar5 = local_768;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
        }
        FUN_005b5930(local_768);
        local_1f8 = local_270;
        afStack_230[(uint)bVar9 * -2 + 0xf] = afStack_290[(uint)bVar9 * -2 + 9];
        afStack_230[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
             afStack_290[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        if (afStack_290 + 0xe != afStack_230 + 0xe) {
          local_264[3] = local_1f8;
          local_254 = local_1f4;
          local_250 = local_1f0;
        }
        local_13c = local_394 * (float)_DAT_005f6bd9 + local_3a0 * (float)_DAT_005f6bd1;
        goto LAB_0058bb32;
      }
      if (iVar3 != 3) {
        _DAT_01d1d400 = "..\\core\\stranger.cpp";
        _DAT_01d1d404 = 0xcb5;
        FUN_005030e0("Don't know how to carry light %s",iVar4);
        goto LAB_0058bb32;
      }
    }
    local_140 = local_398;
  }
LAB_0058bb32:
  iVar4 = (**(code **)(*(int *)(param_2 + 0x154) + 0x74))(param_2);
  if (iVar4 != 0) {
    local_1e0 = 0xbdb87c8b;
    local_1d8 = 0x3f262846;
    local_1dc = 0xbe78bef9;
    local_60[0] = 0.414782;
    local_60[1] = -0.161673;
    afStack_1b8[2] = -0.0900813;
    afStack_1b8[(uint)bVar9 * -2 + 3] = afStack_230[(uint)bVar9 * -2 + 0x15];
    afStack_1b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_230[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
    local_60[2] = -0.489897;
    local_84 = 0x3e99e450;
    FUN_005b5760(local_5b8,local_98 + 0xe,afStack_1b8 + 2);
    local_7c = 0x3f252f1b;
    local_80 = 0xbe083dff;
    local_324[0] = 0.385392;
    afStack_188[5] = (float)local_84;
    afStack_188[(uint)bVar9 * -2 + 6] = local_98[(uint)bVar9 * -2 + 6];
    afStack_188[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         local_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    local_324[1] = -0.0122009;
    local_324[2] = -0.49418;
    FUN_005b5760(local_a68,local_344 + 8,afStack_188 + 5);
    fVar2 = (float)FUN_00434590(param_1,0,iVar1 * 0x30 + param_1 + 0xfd8);
    FUN_005b72c0(local_5b8,local_a68,1.0 - fVar2);
    puVar6 = local_c78;
    puVar5 = local_7f8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    }
    FUN_005b5200(local_7f8);
    puVar6 = local_be8;
    puVar5 = local_528;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    }
    FUN_005b5930(local_528);
    local_2dc = local_18c;
    local_344[(uint)bVar9 * -2 + 0x1b] = afStack_188[(uint)bVar9 * -2];
    local_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
         afStack_188[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (afStack_290 + 0xe != local_344 + 0x1a) {
      local_264[3] = local_2dc;
      local_254 = local_2d8;
      local_250 = local_2d4;
    }
  }
  if (param_3 == 0) {
    local_29c = param_3;
    local_298 = param_3;
    local_2a8[2] = -0.4;
    if (afStack_230 + 0x17 != local_2a8 + 2) {
      local_1d0 = 0.0;
      local_1cc = 0.0;
      local_1d4 = -0.4;
    }
  }
  else if (param_3 == 1) {
    local_a8[0] = 0.4;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    if (afStack_230 + 0x17 != local_11c + 0x1d) {
      local_1d0 = 0.0;
      local_1cc = 0.0;
      local_1d4 = 0.4;
    }
  }
  else {
    local_1d0 = 0.0;
    local_1d4 = 0.0;
    local_1cc = 0.0;
  }
  FUN_005b5100(afStack_230 + 0x17,param_1 + 0xfd8 + iVar1 * 0x30);
  FUN_005b5760(local_d08,afStack_230 + 0x17,afStack_290 + 0xe);
  FUN_005b5080(afStack_188 + 0x11,local_d08);
  local_210 = local_1c8[3];
  afStack_230[(uint)bVar9 * -2 + 9] = afStack_1b8[(uint)bVar9 * -2];
  afStack_230[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       afStack_1b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  iVar4 = 0xc;
  local_330 = local_1d4 - local_210;
  local_32c = local_1d0 - local_20c;
  local_328 = local_1cc - local_208;
  local_24c = local_1d4 - local_210;
  local_248[(uint)bVar9 * -2] = local_344[(uint)bVar9 * -2 + 6];
  local_248[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_344[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  puVar6 = local_ac8;
  puVar5 = local_d08;
  local_cfc = local_cfc + local_24c;
  local_cec = local_cec + local_248[0];
  local_cdc = local_cdc + local_248[1];
LAB_0058b190:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  puVar6 = local_ac8;
  puVar5 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
  }
  return unaff_ESI;
}
