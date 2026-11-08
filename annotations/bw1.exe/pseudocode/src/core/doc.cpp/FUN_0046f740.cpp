// Name: FUN_0046f740
// Address: 0046f740
// Address Range: [[0046f740, 00470740]]
// Convention: unknown
// Signature: undefined4 * FUN_0046f740(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0046f740(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint *unaff_ESI;
  uint *puVar6;
  uint *puVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_12c8 [270];
  byte *puVar10;
  byte local_e50 [48];
  uint local_e20 [12];
  byte local_df0 [48];
  uint local_dc0 [12];
  uint local_d90 [12];
  uint local_d60 [12];
  uint local_d30 [12];
  byte local_d00 [48];
  byte local_cd0 [48];
  uint local_ca0 [12];
  uint local_c70 [12];
  uint local_c40 [12];
  byte local_c10 [48];
  uint local_be0 [12];
  uint local_bb0 [12];
  uint local_b80 [12];
  uint local_b50 [12];
  uint local_b20 [3];
  float local_b14;
  float local_b04;
  float local_af4;
  uint local_af0 [12];
  byte local_ac0 [48];
  uint local_a90 [12];
  uint local_a60 [12];
  byte local_a30 [48];
  uint local_a00 [12];
  byte local_9d0 [48];
  uint local_9a0 [12];
  uint local_970 [12];
  uint local_940 [12];
  uint local_910 [12];
  uint local_8e0 [12];
  byte local_8b0 [48];
  uint local_880 [12];
  byte local_850 [48];
  uint local_820 [12];
  uint local_7f0 [12];
  byte local_7c0 [48];
  uint local_790 [12];
  uint local_760 [12];
  uint local_730 [12];
  uint local_700 [12];
  uint local_6d0 [12];
  byte local_6a0 [48];
  uint local_670 [12];
  byte local_640 [48];
  uint local_610 [12];
  uint local_5e0 [12];
  uint local_5b0 [12];
  uint local_580 [12];
  uint local_550 [12];
  uint local_520 [12];
  uint local_4f0 [12];
  uint local_4c0 [12];
  uint local_490 [12];
  byte local_460 [48];
  byte local_430 [48];
  uint local_400 [12];
  uint local_3d0 [12];
  uint local_3a0 [12];
  byte local_370 [48];
  uint local_340 [12];
  float local_310 [6];
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  uint local_2e0;
  float afStack_2dc [9];
  float local_2b8;
  float local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  float local_2a4 [3];
  float local_298 [6];
  float local_280 [4];
  float local_270 [8];
  float local_250 [3];
  float local_244;
  float local_240;
  float local_23c;
  float local_238 [3];
  float local_22c;
  float local_228;
  float local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  float afStack_210 [6];
  float afStack_1f8 [8];
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  uint local_1c0;
  float afStack_1bc [8];
  float local_19c [7];
  float local_180 [6];
  float local_168;
  float local_164;
  float local_160 [15];
  uint local_124;
  uint local_120;
  uint local_11c;
  float local_118 [3];
  uint local_10c;
  uint local_108;
  uint local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8 [6];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8 [3];
  float local_ac [4];
  float local_9c [14];
  float local_64 [7];
  int local_48;
  int local_44;
  uint local_40;
  float local_3c [8];
  
  bVar9 = 0;
  iVar4 = *(int *)(param_3 * 0x78 + param_1 + 0x25a8);
  local_22c = (float)FUN_0040c600(param_2,_DAT_02c99770);
  if (local_22c != 0.0) {
    iVar2 = *(int *)((int)local_22c + 0x2e0);
    iVar4 = param_1 + 0xfd8 + iVar4 * 0x30;
    if (iVar2 == 1) {
      pfVar3 = afStack_1bc + 5;
      local_40 = 0x3e44330d;
      local_3c[1] = 0.969617;
      local_3c[0] = 2.2981;
      local_ac[1] = -0.235855;
      afStack_1bc[5] = 0.191601;
      afStack_1bc[(uint)bVar9 * -2 + 6] = local_3c[(uint)bVar9 * -2];
      afStack_1bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           local_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      local_ac[2] = -0.412366;
      local_ac[0] = 0.53949;
      local_160[8] = 1.83791;
      FUN_005b5760(local_9d0,local_180 + 0x35,pfVar3);
      local_160[7] = 0.934256;
      pfVar3 = afStack_2dc + 0x14;
      local_160[6] = -0.414435;
      local_280[0] = 0.40292;
      pfVar8 = afStack_2dc + 0x17;
      local_280[1] = 0.095011;
      puVar10 = local_8b0;
      local_298[3] = -0.414435;
      afStack_2dc[(uint)bVar9 * -2 + 0x15] = local_180[(uint)bVar9 * -2 + 0xf];
      afStack_2dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
           local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
      local_280[2] = 0.26139;
      FUN_005b5760(puVar10,pfVar8,pfVar3);
      fVar1 = (float)FUN_00434590(param_1,3,iVar4);
      FUN_005b72c0(local_9d0,local_8b0,1.0 - fVar1);
      puVar7 = local_6d0;
      puVar6 = local_790;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_790);
      puVar6 = local_670;
    }
    else if (iVar2 == 9) {
      local_9c[2] = -0.435101;
      local_9c[4] = -2.84015;
      local_9c[3] = -0.263934;
      local_9c[5] = -0.170349;
      local_9c[6] = -0.253904;
      local_b8[0] = -0.435101;
      local_180[(uint)bVar9 * -2 + 0x33] = local_9c[(uint)bVar9 * -2 + 3];
      local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
           local_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      local_9c[7] = -0.326223;
      local_124 = 0xbc44e436;
      FUN_005b5760(local_640,local_9c + 5,local_180 + 0x32);
      local_11c = 0x3fc9f99c;
      local_120 = 0x3fca29c7;
      afStack_1f8[2] = 0.665317;
      local_9c[0xb] = (float)local_124;
      local_9c[(uint)bVar9 * -2 + 0xc] = local_180[(uint)bVar9 * -2 + 0x18];
      local_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
      afStack_1f8[3] = -0.0635326;
      afStack_1f8[4] = 0.227495;
      FUN_005b5760(local_ac0,afStack_1f8 + 2,local_9c + 0xb);
      fVar1 = (float)FUN_00434590(param_1,3,iVar4);
      FUN_005b72c0(local_640,local_ac0,1.0 - fVar1);
      puVar7 = (uint *)&stack0xfffff180;
      puVar6 = local_580;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_580);
      puVar6 = local_e20;
    }
    else if (iVar2 == 2) {
      pfVar3 = afStack_2dc + 0xe;
      local_10c = 0x3e3b65aa;
      local_104 = 0x3fd4f5c3;
      local_108 = 0x400ffdb5;
      local_298[1] = -0.0957868;
      local_2a4[0] = 0.183005;
      afStack_2dc[(uint)bVar9 * -2 + 0xf] = local_180[(uint)bVar9 * -2 + 0x1e];
      afStack_2dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
      local_298[2] = -0.233186;
      local_298[0] = 0.412537;
      local_3c[4] = 1.72744;
      FUN_005b5760(local_df0,afStack_2dc + 0x11,pfVar3);
      local_3c[3] = 1.34731;
      pfVar3 = local_270 + 5;
      local_3c[2] = -0.288645;
      local_270[2] = 0.483848;
      pfVar8 = local_270 + 2;
      local_270[3] = 0.0729828;
      puVar10 = local_cd0;
      local_270[5] = -0.288645;
      local_270[(uint)bVar9 * -2 + 6] = local_3c[(uint)bVar9 * -2 + 3];
      local_270[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           local_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      local_270[4] = 0.0731532;
      FUN_005b5760(puVar10,pfVar8,pfVar3);
      fVar1 = (float)FUN_00434590(param_1,3,iVar4);
      FUN_005b72c0(local_df0,local_cd0,1.0 - fVar1);
      puVar7 = local_550;
      puVar6 = local_400;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_400);
      puVar6 = local_4f0;
    }
    else if (iVar2 == 4) {
      afStack_2dc[5] = 0.192169;
      afStack_2dc[7] = 1.6361;
      afStack_2dc[6] = 2.30755;
      local_64[0] = 0.334258;
      local_64[1] = -0.18522;
      local_1c0 = 0x3e44c7f3;
      afStack_1bc[(uint)bVar9 * -2] = afStack_2dc[(uint)bVar9 * -2 + 6];
      afStack_1bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_2dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      local_64[2] = -0.409418;
      local_64[3] = -0.464445;
      FUN_005b5760(local_7c0,local_9c + 0xe,&local_1c0);
      local_64[5] = 1.77515;
      local_64[4] = 1.15525;
      local_19c[3] = 0.381162;
      local_238[0] = local_64[3];
      local_270[(uint)bVar9 * -2 + 0xf] = local_9c[(uint)bVar9 * -2 + 0x12];
      local_270[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
           local_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
      local_19c[4] = 0.0692056;
      local_19c[5] = -0.225393;
      FUN_005b5760(local_6a0,afStack_1bc + 0xb,local_270 + 0xe);
      fVar1 = (float)FUN_00434590(param_1,3,iVar4);
      FUN_005b72c0(local_7c0,local_6a0,1.0 - fVar1);
      puVar7 = local_d30;
      puVar6 = local_af0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_af0);
      puVar6 = local_760;
    }
    else if (iVar2 == 3) {
      local_e8[0] = 0.238337;
      local_e8[1] = -0.0656786;
      local_e8[2] = 0.0335054;
      local_9c[8] = -0.743729;
      local_9c[10] = -0.808348;
      pfVar3 = local_180 + 0x29;
      pfVar8 = local_180 + 0x26;
      puVar10 = local_d00;
      local_9c[9] = 0.693486;
      local_e8[3] = -0.743729;
      local_180[(uint)bVar9 * -2 + 0x2a] = local_9c[(uint)bVar9 * -2 + 9];
      local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
           local_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
      FUN_005b5760(puVar10,pfVar8,pfVar3);
      FUN_005b5200(local_d00,iVar4);
      puVar6 = local_5b0;
    }
    else if (iVar2 == 5) {
      pfVar3 = afStack_1f8 + 5;
      local_d0 = 0xbaa302fa;
      local_c8 = 0x3fcb079e;
      local_cc = 0x3fc99ae9;
      local_160[1] = -0.0611557;
      afStack_1f8[5] = -0.00124368;
      afStack_1f8[(uint)bVar9 * -2 + 6] = local_180[(uint)bVar9 * -2 + 0x2d];
      afStack_1f8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e];
      local_160[2] = 0.0786577;
      local_160[0] = 0.17933;
      FUN_005b5760(local_850,local_180 + 8,pfVar3);
      FUN_005b5200(local_850,iVar4);
      puVar6 = local_730;
    }
    else if (iVar2 == 7) {
      local_160[3] = -0.00840538;
      local_160[5] = 0.0168502;
      local_160[4] = 0.0531937;
      afStack_1bc[2] = 0.15802;
      afStack_1bc[3] = -0.0925491;
      local_250[0] = -0.00840538;
      local_270[(uint)bVar9 * -2 + 9] = local_180[(uint)bVar9 * -2 + 0xc];
      local_270[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
           local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      afStack_1bc[4] = -0.13807;
      local_160[9] = -0.00840538;
      FUN_005b5760(local_430,afStack_1bc + 2,local_270 + 8);
      local_160[0xb] = 0.0168502;
      local_160[10] = 0.0531937;
      local_220 = 0x3e21cfff;
      local_2e0 = local_160[9];
      afStack_2dc[(uint)bVar9 * -2] = local_180[(uint)bVar9 * -2 + 0x12];
      afStack_2dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
      local_21c = 0xbdbd8a62;
      local_218 = 0xbe0d6239;
      FUN_005b5760(local_460,&local_220,&local_2e0);
      fVar1 = (float)FUN_00434590(param_1,0,iVar4);
      FUN_005b72c0(local_430,local_460,1.0 - fVar1);
      puVar7 = local_ca0;
      puVar6 = local_d60;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_d60);
      puVar6 = local_c40;
    }
    else if (param_3 == 0) {
      FUN_005b5760(local_c10,&DAT_01b68804,&DAT_02c8af28);
      FUN_005b6d90(0x3fc90fdb,local_c10,iVar4);
      puVar7 = local_520;
      puVar6 = local_bb0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b6e10(0xbfc90fdb,local_bb0);
      puVar7 = local_dc0;
      puVar6 = local_be0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_be0);
      puVar7 = local_d90;
      puVar6 = local_b80;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_b80);
      puVar7 = local_a90;
      puVar6 = local_b50;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_b50);
      puVar6 = local_a60;
    }
    else {
      FUN_005b5760(local_a30,&DAT_01b687f8,&DAT_02c8af28);
      FUN_005b6d90(0x3fc90fdb,local_a30,iVar4);
      puVar7 = local_940;
      puVar6 = local_340;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b6e10(0x3fc42871,local_340);
      puVar7 = local_910;
      puVar6 = local_a00;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_a00);
      puVar7 = local_8e0;
      puVar6 = local_9a0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_9a0);
      puVar7 = local_3a0;
      puVar6 = local_970;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      }
      FUN_005b5200(local_970);
      puVar6 = local_880;
    }
    iVar4 = 0xc;
    puVar7 = local_7f0;
    goto LAB_0046f8ec;
  }
  local_228 = local_22c;
  local_224 = local_22c;
  local_1d8 = local_22c;
  local_1d4 = local_22c;
  local_1d0 = local_22c;
  iVar2 = FUN_0040c600(param_2,DAT_007c5330);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
    pfVar3 = local_310;
    pfVar8 = &local_2f8;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar9 * -2 + 1;
      pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
    }
    local_f4 = local_2f8 + local_2ec;
    local_f0 = local_2f4 + local_2e8;
    local_ec = local_2f0 + local_2e4;
    local_c4 = local_2f8 + local_2ec;
    local_180[(uint)bVar9 * -2 + 0x30] = local_180[(uint)bVar9 * -2 + 0x24];
    local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
         local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25];
    local_244 = local_c4 * _DAT_005da0e8;
    local_240 = local_c0 * _DAT_005da0e8;
    local_23c = local_bc * _DAT_005da0e8;
    local_180[5] = local_c4 * _DAT_005da0e8;
    local_180[(uint)bVar9 * -2 + 6] = local_270[(uint)bVar9 * -2 + 0xc];
    local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         local_270[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    if (afStack_1f8 + 8 != local_180 + 5) {
      local_1d8 = local_180[5];
      local_1d4 = local_168;
      local_1d0 = local_164;
    }
    iVar5 = *(int *)(iVar2 + 0x678);
    if (iVar5 != 2) {
      if (iVar5 == 1) {
        if (param_3 == 0) {
          FUN_005b6e10(0xbfc90fdb);
          puVar7 = local_610;
LAB_004705bf:
          puVar6 = local_700;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
          }
        }
        else {
          if (param_3 == 1) {
            FUN_005b6e10(0x3fc90fdb);
            puVar7 = local_5e0;
            goto LAB_004705bf;
          }
          FUN_005b53f0(local_700);
        }
        FUN_005b5200(local_700,iVar4 * 0x30 + param_1 + 0xfd8);
        puVar7 = local_820;
        puVar6 = local_700;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        }
        FUN_005b5930(local_700);
        local_280[3] = afStack_210[5];
        local_270[(uint)bVar9 * -2] = afStack_1f8[(uint)bVar9 * -2];
        local_270[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_1f8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (local_270 + 0x11 != afStack_2dc + 0x1a) {
          local_22c = local_280[3];
          local_228 = local_270[0];
          local_224 = local_270[1];
        }
        local_1d0 = local_2e4 * (float)_DAT_005da0f4 + local_2f0 * (float)_DAT_005da0ec;
        goto LAB_00470270;
      }
      if (iVar5 != 3) {
        _DAT_01d1d400 = "..\\core\\doc.cpp";
        _DAT_01d1d404 = 0xe3d;
        FUN_005030e0("Don't know how to carry light %s",iVar2);
        goto LAB_00470270;
      }
    }
    local_1d4 = local_2e8;
  }
LAB_00470270:
  iVar2 = (**(code **)(*(int *)(param_2 + 0x154) + 0x74))(param_2);
  if (iVar2 != 0) {
    local_2b0 = 0xbdb87c8b;
    local_2a8 = 0x3f262846;
    local_2ac = 0xbe78bef9;
    afStack_2dc[2] = 0.414782;
    afStack_2dc[3] = -0.161673;
    local_214 = 0xbdb87c8b;
    afStack_210[(uint)bVar9 * -2] = afStack_2dc[(uint)bVar9 * -2 + 0xc];
    afStack_210[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_2dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    afStack_2dc[4] = -0.489897;
    local_180[2] = 0.30057;
    FUN_005b5760(local_370,afStack_2dc + 2,&local_214);
    afStack_210[3] = -0.0122009;
    local_180[4] = 0.64525;
    pfVar3 = local_180 + 0x1a;
    local_180[3] = -0.133049;
    local_118[0] = local_180[2];
    local_180[(uint)bVar9 * -2 + 0x1b] = local_180[(uint)bVar9 * -2 + 3];
    local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
         local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    afStack_210[2] = 0.385392;
    afStack_210[4] = -0.49418;
    FUN_005b5760(local_e50,afStack_210 + 2,pfVar3);
    fVar1 = (float)FUN_00434590(param_1,0,iVar4 * 0x30 + param_1 + 0xfd8);
    FUN_005b72c0(local_370,local_e50,1.0 - fVar1);
    puVar7 = local_4c0;
    puVar6 = local_3d0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    }
    FUN_005b5200(local_3d0);
    puVar7 = local_490;
    puVar6 = local_c70;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    }
    FUN_005b5930(local_c70);
    local_100 = local_3c[5];
    local_180[(uint)bVar9 * -2 + 0x21] = local_3c[(uint)bVar9 * -2 + 6];
    local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22] =
         local_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    if (local_270 + 0x11 != local_180 + 0x20) {
      local_22c = local_100;
      local_228 = local_fc;
      local_224 = local_f8;
    }
  }
  if (param_3 == 0) {
    fVar1 = -0.4;
    local_48 = param_3;
    local_44 = param_3;
    pfVar3 = local_9c + 0x14;
    local_64[6] = -0.4;
LAB_0047045f:
    if (&local_1cc != pfVar3) {
      local_1c8 = 0.0;
      local_1c4 = 0.0;
      local_1cc = fVar1;
    }
  }
  else {
    if (param_3 == 1) {
      fVar1 = 0.4;
      local_19c[1] = 0.0;
      local_19c[2] = 0.0;
      pfVar3 = afStack_1bc + 8;
      local_19c[0] = 0.4;
      goto LAB_0047045f;
    }
    local_1c8 = 0.0;
    local_1cc = 0.0;
    local_1c4 = 0.0;
  }
  FUN_005b5100(&local_1cc,iVar4 * 0x30 + param_1 + 0xfd8);
  FUN_005b5760(local_b20,&local_1cc,local_270 + 0x11);
  FUN_005b5080(afStack_1f8 + 8,local_b20);
  afStack_2dc[8] = local_160[0xc];
  afStack_2dc[(uint)bVar9 * -2 + 9] = local_180[(uint)bVar9 * -2 + 0x15];
  afStack_2dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
  iVar4 = 0xc;
  local_19c[6] = local_1cc - afStack_2dc[8];
  local_180[0] = local_1c8 - local_2b8;
  local_180[1] = local_1c4 - local_2b4;
  local_ac[3] = local_1cc - afStack_2dc[8];
  local_9c[(uint)bVar9 * -2] = local_180[(uint)bVar9 * -2];
  local_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_180[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  puVar7 = local_7f0;
  puVar6 = local_b20;
  local_b14 = local_b14 + local_ac[3];
  local_b04 = local_b04 + local_9c[0];
  local_af4 = local_af4 + local_9c[1];
LAB_0046f8ec:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  puVar7 = local_7f0;
  puVar6 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  return unaff_ESI;
}
