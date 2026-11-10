// Name: core_prye.cpp_FUN_0051f490
// Address: 0051f490
// Address Range: [[0051f490, 00520d1f]]
// Convention: unknown
// Signature: float * core_prye_cpp_FUN_0051f490(CCharacter *param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_prye_cpp_FUN_0051f490(CCharacter *param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *unaff_ESI;
  float *pfVar5;
  float *pfVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_147c [111];
  byte *puVar10;
  byte *puVar11;
  byte local_1250 [8];
  float afStack_1248 [46];
  byte local_1190 [8];
  float afStack_1188 [70];
  byte local_1070 [8];
  float afStack_1068 [22];
  byte local_1010 [48];
  byte local_fe0 [48];
  uint local_fb0 [12];
  uint local_f80 [12];
  float local_f50 [3];
  float local_f44;
  float local_f34;
  float local_f24;
  float local_f20 [12];
  byte local_ef0 [48];
  byte local_ec0 [48];
  byte local_e90 [48];
  float local_e60 [12];
  float local_e30 [12];
  byte local_e00 [48];
  float local_dd0 [12];
  uint local_da0 [12];
  float local_d70 [12];
  uint local_d40 [12];
  uint local_d10 [12];
  byte local_ce0 [48];
  uint local_cb0 [12];
  float local_c80 [12];
  uint local_c50 [12];
  uint local_c20 [12];
  float local_bf0 [12];
  uint local_bc0 [12];
  float local_b90 [12];
  uint local_b60 [12];
  float local_b30 [12];
  uint local_b00 [12];
  uint local_ad0 [12];
  uint local_aa0 [12];
  byte local_a70 [48];
  float local_a40 [12];
  uint local_a10 [12];
  uint local_9e0 [12];
  float local_9b0 [12];
  byte local_980 [48];
  uint local_950 [12];
  uint local_920 [12];
  uint local_8f0 [12];
  byte local_8c0 [48];
  uint local_890 [12];
  byte local_860 [48];
  uint local_830 [12];
  uint local_800 [12];
  uint local_7d0 [12];
  byte local_7a0 [48];
  float local_770 [12];
  byte local_740 [48];
  uint local_710 [12];
  float local_6e0 [12];
  uint local_6b0 [12];
  uint local_680 [12];
  float local_650 [12];
  byte local_620 [48];
  byte local_5f0 [48];
  uint local_5c0 [12];
  uint local_590 [12];
  float local_560 [12];
  uint local_530 [12];
  uint local_500 [12];
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  float local_4c0;
  float local_4bc;
  float local_4b8 [6];
  uint local_4a0;
  uint local_49c;
  uint local_498;
  float local_494;
  float local_490 [4];
  float local_480;
  float local_47c [4];
  float local_46c [11];
  uint local_440;
  uint local_43c;
  uint local_438;
  float local_434 [3];
  uint local_428;
  uint local_424;
  uint local_420;
  uint local_41c;
  uint local_418;
  uint local_414;
  uint local_410;
  uint local_40c;
  uint local_408;
  float local_404 [10];
  float afStack_3dc [5];
  uint local_3c8;
  uint local_3c4;
  uint local_3c0;
  float local_3bc [7];
  float afStack_3a0 [6];
  float afStack_388 [5];
  float local_374 [3];
  float local_368 [3];
  float local_35c [22];
  float afStack_304 [4];
  float local_2f4;
  uint local_2f0;
  uint local_2ec;
  uint local_2e8;
  float local_2e4;
  float local_2e0 [4];
  float local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  float local_2b4 [4];
  float afStack_2a4 [6];
  float afStack_28c [5];
  float local_278 [6];
  uint local_260;
  uint local_25c;
  uint local_258;
  float local_254 [7];
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224 [6];
  float local_20c [3];
  float local_200 [18];
  float local_1b8;
  float local_1b4;
  float local_1b0;
  uint local_1ac;
  float local_1a8 [8];
  float local_188 [3];
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  float local_164 [3];
  float local_158 [7];
  float local_13c [5];
  uint local_128;
  uint local_124;
  uint local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float afStack_10c [14];
  float local_d4 [3];
  float local_c8 [3];
  uint local_bc;
  uint local_b8;
  uint local_b4;
  float local_b0 [3];
  float local_a4 [3];
  uint local_98;
  uint local_94;
  uint local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80 [3];
  float local_74 [3];
  float local_68 [4];
  float afStack_58 [9];
  float local_34;
  float local_30;
  float local_2c [3];
  
  bVar9 = 0;
  iVar2 = *(int *)(param_1->carry_hands + (int)param_3 * 0x78);
  fVar1 = (CWeapon *)(float)core_actor_cpp_castToClassHash_FUN_0040c840(param_2,g_CWeaponClassInfo.name_hash);
  if (fVar1 != 0.0) {
    iVar3 = *(int *)((int)fVar1 + 0x2e0);
    if (iVar3 == 1) {
      pfVar6 = afStack_3a0 + 5;
      local_200[0xc] = 0.191601;
      local_200[0xe] = 0.969617;
      local_200[0xd] = 2.2981;
      afStack_10c[0xb] = 0.191601;
      afStack_10c[(uint)bVar9 * -2 + 0xc] = afStack_28c[(uint)bVar9 * -2 + 0x30];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31];
      local_35c[0xd] = -0.235855;
      local_35c[0xe] = -0.412366;
      afStack_3a0[5] = afStack_10c[0xb];
      afStack_388[(uint)bVar9 * -2] = afStack_10c[(uint)bVar9 * -2 + 0xc];
      afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      local_35c[0xc] = 0.53949;
      core_xform_cpp_FUN_00583940(local_e00,afStack_388 + 0x17,pfVar6);
      local_408 = 0x3feb40a3;
      pfVar6 = local_46c + 0x23;
      local_410 = 0x3d4ccccd;
      local_40c = 0x3f99999a;
      local_404[1] = -0.05;
      afStack_10c[0xb] = 0.05;
      afStack_10c[(uint)bVar9 * -2 + 0xc] = local_46c[(uint)bVar9 * -2 + 0x18];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           local_46c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
      local_404[0] = 0.40292;
      pfVar5 = local_46c + 0x1a;
      puVar11 = local_ce0;
      local_404[2] = 0.26139;
      local_404[9] = afStack_10c[0xb];
      afStack_3dc[(uint)bVar9 * -2] = afStack_10c[(uint)bVar9 * -2 + 0xc];
      afStack_3dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      core_xform_cpp_FUN_00583940(puVar11,pfVar5,pfVar6);
      puVar11 = &(param_1->model).field_0xe80 + iVar2 * 0x30;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_e00,local_ce0,1.0 - fVar1,puVar11);
      puVar7 = local_8f0;
      puVar8 = local_bc0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_bc0);
      pfVar6 = afStack_1068 + 10;
      pfVar5 = local_b90;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      }
      pfVar5 = local_b90;
    }
    else if (iVar3 == 9) {
      local_17c = 0xbedec58f;
      local_174 = 0xc035c505;
      local_178 = 0xbe87225b;
      local_254[0] = -0.170349;
      afStack_10c[0xb] = -0.435101;
      afStack_10c[(uint)bVar9 * -2 + 0xc] = local_1a8[(uint)bVar9 * -2 + 0xc];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           local_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      local_74[0] = afStack_10c[0xb];
      afStack_10c[(uint)bVar9 * -2 + 0x27] = afStack_10c[(uint)bVar9 * -2 + 0xc];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28] =
           afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      local_254[1] = -0.253904;
      local_254[2] = -0.326223;
      core_xform_cpp_FUN_00583940(local_fe0,afStack_28c + 0xe,afStack_10c + 0x26);
      local_35c[6] = -0.0120173;
      local_35c[8] = 1.57793;
      local_35c[7] = 1.5794;
      afStack_10c[0xb] = -0.0120173;
      afStack_10c[(uint)bVar9 * -2 + 0xc] = afStack_388[(uint)bVar9 * -2 + 0x12];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
      local_c8[0] = afStack_10c[0xb];
      afStack_10c[(uint)bVar9 * -2 + 0x12] = afStack_10c[(uint)bVar9 * -2 + 0xc];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
           afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      local_47c[2] = 0.227495;
      local_47c[0] = 0.665317;
      local_47c[1] = -0.0635326;
      core_xform_cpp_FUN_00583940(local_ec0,local_490 + 5,afStack_10c + 0x11);
      puVar11 = &(param_1->model).field_0xe80 + iVar2 * 0x30;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_fe0,local_ec0,1.0 - fVar1,puVar11);
      puVar7 = (uint *)&stack0xffffed80;
      puVar8 = local_da0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_da0);
      pfVar6 = afStack_1248 + 0x16;
      pfVar5 = local_d70;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      }
      pfVar5 = local_d70;
    }
    else if (iVar3 == 2) {
      local_254[3] = 0.183005;
      local_254[5] = 1.66375;
      local_254[4] = 2.24986;
      afStack_10c[6] = -0.0957868;
      afStack_10c[5] = 0.412537;
      afStack_10c[0xb] = 0.183005;
      afStack_10c[(uint)bVar9 * -2 + 0xc] = afStack_28c[(uint)bVar9 * -2 + 0x12];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
      afStack_10c[7] = -0.233186;
      local_68[3] = afStack_10c[0xb];
      afStack_58[(uint)bVar9 * -2] = afStack_10c[(uint)bVar9 * -2 + 0xc];
      afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      core_xform_cpp_FUN_00583940(local_1190,afStack_10c + 5,afStack_10c + 0x2c);
      local_200[3] = -0.288645;
      local_200[5] = 1.72744;
      local_200[4] = 1.34731;
      local_3bc[3] = 0.483848;
      afStack_10c[0xb] = -0.288645;
      afStack_10c[(uint)bVar9 * -2 + 0xc] = afStack_28c[(uint)bVar9 * -2 + 0x27];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
      pfVar6 = afStack_3dc + 0xe;
      local_3bc[6] = afStack_10c[0xb];
      afStack_3a0[(uint)bVar9 * -2] = afStack_10c[(uint)bVar9 * -2 + 0xc];
      afStack_3a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      local_3bc[4] = 0.0729828;
      local_3bc[5] = 0.0731532;
      core_xform_cpp_FUN_00583940(local_1070,afStack_3dc + 0xb,pfVar6);
      puVar11 = &(param_1->model).field_0xe80 + iVar2 * 0x30;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_1190,local_1070,1.0 - fVar1,puVar11);
      puVar7 = local_590;
      puVar8 = local_f80;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_f80);
      pfVar6 = (float *)local_800;
      pfVar5 = local_f20;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      }
      pfVar5 = local_f20;
    }
    else if (iVar3 == 4) {
      local_200[6] = 0.192169;
      local_200[8] = 1.6361;
      local_200[7] = 2.30755;
      afStack_10c[0xb] = 0.192169;
      afStack_10c[(uint)bVar9 * -2 + 0xc] = afStack_28c[(uint)bVar9 * -2 + 0x2a];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b];
      local_a4[0] = afStack_10c[0xb];
      afStack_10c[(uint)bVar9 * -2 + 0x1b] = afStack_10c[(uint)bVar9 * -2 + 0xc];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
           afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      local_200[2] = -0.409418;
      local_200[0] = 0.334258;
      local_200[1] = -0.18522;
      local_418 = 0x3f93df3b;
      core_xform_cpp_FUN_00583940(local_8c0,afStack_28c + 0x23,afStack_10c + 0x1a);
      local_41c = 0xbeedcbbc;
      local_414 = 0x3fe3381d;
      afStack_10c[0xb] = -0.464445;
      afStack_10c[(uint)bVar9 * -2 + 0xc] = local_46c[(uint)bVar9 * -2 + 0x15];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           local_46c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
      local_2ec = 0x3d8dbbaa;
      local_b0[0] = afStack_10c[0xb];
      afStack_10c[(uint)bVar9 * -2 + 0x18] = afStack_10c[(uint)bVar9 * -2 + 0xc];
      afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
           afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      local_2e8 = 0xbe66cd6c;
      local_2f0 = 0x3ec327aa;
      core_xform_cpp_FUN_00583940(local_7a0,&local_2f0,afStack_10c + 0x17);
      puVar11 = &(param_1->model).field_0xe80 + iVar2 * 0x30;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_8c0,local_7a0,1.0 - fVar1,puVar11);
      puVar7 = local_680;
      puVar8 = local_950;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_950);
      pfVar6 = (float *)local_ad0;
      pfVar5 = local_650;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      }
      pfVar5 = local_650;
    }
    else if (iVar3 == 3) {
      iVar3 = (CDisease *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar1,g_CDiseaseClassInfo.name_hash);
      if (iVar3 == 0) {
        iVar3 = (CBindEvil *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar1,g_CBindEvilClassInfo.name_hash);
        if (iVar3 == 0) {
          pfVar5 = afStack_28c + 0x20;
          local_1ac = 0xbf3e6506;
          local_1a8[1] = -0.808348;
          local_1a8[0] = 0.693486;
          local_46c[6] = -0.0656786;
          afStack_10c[0xb] = -0.743729;
          afStack_10c[(uint)bVar9 * -2 + 0xc] = local_1a8[(uint)bVar9 * -2];
          afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
               local_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          local_46c[5] = 0.238337;
          pfVar6 = local_46c + 5;
          local_46c[7] = 0.0335054;
          local_20c[0] = afStack_10c[0xb];
          afStack_28c[(uint)bVar9 * -2 + 0x21] = afStack_10c[(uint)bVar9 * -2 + 0xc];
          afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22] =
               afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
        }
        else {
          local_428 = 0x3ec477ff;
          local_420 = 0x4043d902;
          local_424 = 0x402c45f6;
          local_68[0] = -0.355122;
          pfVar5 = local_2e0 + 0xe;
          afStack_10c[0xb] = 0.383728;
          afStack_10c[(uint)bVar9 * -2 + 0xc] = local_46c[(uint)bVar9 * -2 + 0x12];
          afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
               local_46c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
          pfVar6 = afStack_10c + 0x29;
          local_68[1] = 0.263786;
          local_2b4[3] = afStack_10c[0xb];
          afStack_2a4[(uint)bVar9 * -2] = afStack_10c[(uint)bVar9 * -2 + 0xc];
          afStack_2a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
          local_68[2] = 0.352928;
        }
      }
      else {
        local_98 = 0x3ef7c116;
        local_90 = 0xbfd87454;
        local_94 = 0xbff27a10;
        local_2c[0] = -0.0912048;
        afStack_10c[0xb] = 0.483895;
        afStack_10c[(uint)bVar9 * -2 + 0xc] = afStack_10c[(uint)bVar9 * -2 + 0x1e];
        afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
             afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
        pfVar5 = afStack_388 + 8;
        pfVar6 = afStack_58 + 0xb;
        local_368[0] = afStack_10c[0xb];
        afStack_388[(uint)bVar9 * -2 + 9] = afStack_10c[(uint)bVar9 * -2 + 0xc];
        afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
        local_2c[1] = -0.172093;
        local_2c[2] = -0.308361;
      }
      core_xform_cpp_FUN_00583940(local_a70,pfVar6,pfVar5);
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                (local_a70,&(param_1->model).field_0xe80 + iVar2 * 0x30);
      pfVar5 = local_b30;
    }
    else {
      puVar11 = &(param_1->model).field_0xe80 + iVar2 * 0x30;
      iVar3 = *(int *)((int)fVar1 + 0x2e0);
      if (iVar3 == 5) {
        local_1a8[2] = -0.00124368;
        local_1a8[4] = 1.58617;
        local_1a8[3] = 1.57504;
        local_158[4] = -0.0611557;
        local_80[0] = -0.00124368;
        afStack_10c[(uint)bVar9 * -2 + 0x24] = local_1a8[(uint)bVar9 * -2 + 3];
        afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25] =
             local_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        local_158[5] = 0.0786577;
        local_158[3] = 0.17933;
        core_xform_cpp_FUN_00583940(local_1010,local_1a8 + 0x17,afStack_10c + 0x23);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_1010,puVar11);
        pfVar5 = local_9b0;
      }
      else if (iVar3 == 0xc) {
        iVar3 = (CLightStaff *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar1,g_CLightStaffClassInfo.name_hash);
        if (iVar3 == 0) {
          local_170 = 0x3d9fcc18;
          local_168 = 0x3fdb15b5;
          local_16c = 0x3fc8f80e;
          local_404[3] = 0.252501;
          local_404[4] = -0.104792;
          local_188[0] = 0.078026;
          local_1a8[(uint)bVar9 * -2 + 9] = local_1a8[(uint)bVar9 * -2 + 0xf];
          local_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               local_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
          local_404[5] = 0.223944;
          afStack_10c[2] = 0.078026;
          core_xform_cpp_FUN_00583940(local_980,local_46c + 0x1d,local_1a8 + 8);
          afStack_10c[4] = 1.7116;
          afStack_10c[3] = 1.57007;
          local_3bc[0] = 0.252501;
          pfVar6 = afStack_28c + 2;
          afStack_28c[2] = afStack_10c[2];
          afStack_28c[(uint)bVar9 * -2 + 3] = afStack_10c[(uint)bVar9 * -2 + 3];
          afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          pfVar5 = afStack_3dc + 8;
          local_3bc[1] = -0.104792;
          local_3bc[2] = 0.223944;
        }
        else {
          afStack_10c[8] = 0.166663;
          afStack_10c[10] = 1.59043;
          afStack_10c[9] = 1.50603;
          local_46c[8] = 0.166663;
          local_46c[(uint)bVar9 * -2 + 9] = afStack_10c[(uint)bVar9 * -2 + 9];
          local_46c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          local_35c[9] = 0.332412;
          local_35c[10] = -0.0711692;
          local_35c[0xb] = 0.492656;
          local_46c[3] = 1.50603;
          core_xform_cpp_FUN_00583940(local_980,afStack_388 + 0x14,local_46c + 8);
          pfVar6 = afStack_28c + 0x32;
          local_46c[2] = 0.166663;
          local_46c[4] = 1.59043;
          local_200[10] = -0.0711692;
          pfVar5 = afStack_28c + 0x2c;
          local_200[0xf] = 0.166663;
          afStack_28c[(uint)bVar9 * -2 + 0x33] = local_46c[(uint)bVar9 * -2 + 3];
          afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
               local_46c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          local_200[0xb] = 0.492656;
          local_200[9] = 0.332412;
        }
        core_xform_cpp_FUN_00583940(local_e90,pfVar5,pfVar6);
        puVar11 = &(param_1->model).field_0xe80 + iVar2 * 0x30;
        fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
        core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_980,local_e90,1.0 - fVar1,puVar11);
        puVar7 = local_710;
        puVar8 = local_920;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_920);
        pfVar5 = local_e60;
      }
      else if (iVar3 == 7) {
        iVar3 = (CHolycross *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar1,g_CHolycrossClassInfo.name_hash);
        if (iVar3 == 0) {
          local_260 = 0xbdb87c8b;
          local_258 = 0x3f262846;
          local_25c = 0xbe78bef9;
          local_158[0] = 0.414782;
          local_158[1] = -0.161673;
          local_164[0] = -0.0900813;
          local_1a8[(uint)bVar9 * -2 + 0x12] = afStack_28c[(uint)bVar9 * -2 + 0xc];
          local_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
               afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
          local_158[2] = -0.489897;
          local_2e4 = 0.05;
          core_xform_cpp_FUN_00583940(local_620,local_1a8 + 0x14,local_1a8 + 0x11);
          local_2e0[1] = 1.83791;
          local_2e0[0] = 1.2;
          afStack_3a0[2] = 0.40292;
          pfVar6 = &local_110;
          local_110 = local_2e4;
          afStack_10c[(uint)bVar9 * -2] = local_2e0[(uint)bVar9 * -2];
          afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               local_2e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          pfVar5 = afStack_3a0 + 2;
          afStack_3a0[3] = -0.05;
          afStack_3a0[4] = 0.26139;
        }
        else {
          local_128 = 0x3ef5907e;
          local_120 = 0x3fd7f338;
          local_124 = 0x3fd38bac;
          local_374[0] = 0.479618;
          afStack_388[(uint)bVar9 * -2 + 6] = local_13c[(uint)bVar9 * -2 + 6];
          afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               local_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          local_35c[0x12] = 0.201904;
          local_35c[0x13] = 0.00499905;
          local_35c[0x14] = -0.689518;
          local_3c4 = 0x3fd38bac;
          core_xform_cpp_FUN_00583940(local_620,afStack_388 + 0x1d,afStack_388 + 5);
          pfVar6 = local_1a8 + 5;
          local_3c8 = 0x3ef5907e;
          local_3c0 = 0x3fd7f338;
          local_404[7] = 0.00499905;
          pfVar5 = local_46c + 0x20;
          local_1a8[5] = 0.479618;
          local_1a8[(uint)bVar9 * -2 + 6] = afStack_3dc[(uint)bVar9 * -2 + 6];
          local_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_3dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          local_404[8] = -0.689518;
          local_404[6] = 0.201904;
        }
        core_xform_cpp_FUN_00583940(local_860,pfVar5,pfVar6);
        puVar11 = &(param_1->model).field_0xe80 + iVar2 * 0x30;
        fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
        core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_620,local_860,1.0 - fVar1,puVar11);
        puVar7 = local_b60;
        puVar8 = local_830;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_830);
        pfVar5 = (float *)&stack0xffffed50;
      }
      else if (param_3 == 0.0) {
        core_xform_cpp_FUN_00583940(local_1250,&DAT_01ed36cc,&DAT_02cfd900);
        core_xform_cpp_buildRotationX_FUN_00584f70(0x3fc90fdb,local_1250,puVar11);
        pfVar6 = afStack_1188 + 10;
        pfVar5 = local_a40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar5 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
        }
        core_xform_cpp_buildRotationY_FUN_00584ff0(0xbfc90fdb,local_a40);
        pfVar6 = afStack_1188 + 0x16;
        pfVar5 = afStack_1248 + 10;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar5 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(afStack_1248 + 10);
        pfVar6 = afStack_1188 + 0x22;
        pfVar5 = afStack_1248 + 0x22;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar5 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(afStack_1248 + 0x22);
        pfVar6 = afStack_1188 + 0x2e;
        pfVar5 = local_6e0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar5 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_6e0);
        pfVar5 = afStack_1188 + 0x3a;
      }
      else {
        iVar2 = (CStorm *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar1,g_CStormClassInfo.name_hash);
        if (iVar2 == 0) {
          iVar2 = (CBurncross *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar1,g_CBurncrossClassInfo.name_hash)
          ;
          if (iVar2 == 0) {
            iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (fVar1,g_CExorcismClassInfo.name_hash);
            if (iVar2 == 0) {
              iVar2 = (CHeal *)core_actor_cpp_castToClassHash_FUN_0040c840(fVar1,g_CHealClassInfo.name_hash);
              if (iVar2 == 0) {
                core_xform_cpp_FUN_00583940(local_5f0,&DAT_01ed36c0,&DAT_02cfd900);
                core_xform_cpp_buildRotationX_FUN_00584f70(0x3fc90fdb,local_5f0,puVar11);
                puVar7 = local_d10;
                puVar8 = local_890;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                  puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
                }
                core_xform_cpp_buildRotationY_FUN_00584ff0(0x3fc90fdb,local_890);
                puVar7 = local_a10;
                puVar8 = local_b00;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                  puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_b00);
                puVar7 = local_9e0;
                puVar8 = local_aa0;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                  puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_aa0);
                puVar7 = local_500;
                puVar8 = local_fb0;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                  puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_fb0);
                pfVar5 = local_560;
              }
              else {
                pfVar6 = afStack_3dc + 2;
                local_2cc = 0x3e2ec4e7;
                local_2c4 = 0xbfcaafcd;
                local_2c8 = 0xbfc40ebf;
                local_2b4[1] = 0.0778476;
                local_2b4[0] = 0.229505;
                pfVar5 = local_2e0 + 0xb;
                puVar10 = local_5f0;
                local_2b4[2] = 0.145295;
                afStack_3dc[2] = 0.170673;
                afStack_3dc[(uint)bVar9 * -2 + 3] = local_2e0[(uint)bVar9 * -2 + 6];
                afStack_3dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                     local_2e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
                core_xform_cpp_FUN_00583940(puVar10,pfVar5,pfVar6);
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_5f0,puVar11);
                pfVar5 = local_e30;
              }
            }
            else {
              local_bc = 0xb9bf74b1;
              local_b4 = 0xbfb9ffd6;
              local_b8 = 0x3a76cae7;
              local_4a0 = 0x3e8a16c6;
              local_49c = 0xbee25e57;
              pfVar6 = afStack_388 + 2;
              puVar7 = &local_4a0;
              puVar10 = local_5f0;
              local_498 = 0xb8c20791;
              afStack_388[2] = -0.000365173;
              afStack_388[(uint)bVar9 * -2 + 3] = afStack_10c[(uint)bVar9 * -2 + 0x15];
              afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                   afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
              core_xform_cpp_FUN_00583940(puVar10,puVar7,pfVar6);
              core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_5f0,puVar11);
              pfVar5 = local_c80;
            }
          }
          else {
            local_35c[3] = -0.00681985;
            local_35c[5] = 1.60644;
            local_35c[4] = 1.57832;
            local_35c[0] = 0.620831;
            local_224[3] = -0.00681985;
            afStack_28c[(uint)bVar9 * -2 + 0x1e] = afStack_388[(uint)bVar9 * -2 + 0xf];
            afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f] =
                 afStack_388[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
            local_35c[1] = -0.135219;
            local_35c[2] = 0.0465041;
            core_xform_cpp_FUN_00583940(local_5f0,afStack_388 + 0xb,afStack_28c + 0x1d);
            core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_5f0,puVar11);
            pfVar5 = local_dd0;
          }
        }
        else {
          afStack_58[5] = 1.56387;
          afStack_58[7] = -0.0819392;
          afStack_58[6] = -0.0800115;
          local_278[0] = 0.283893;
          local_278[3] = 1.56387;
          afStack_28c[(uint)bVar9 * -2 + 9] = afStack_58[(uint)bVar9 * -2 + 6];
          afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          local_278[1] = -0.046264;
          local_278[2] = -0.363459;
          core_xform_cpp_FUN_00583940(local_5f0,afStack_28c + 5,afStack_28c + 8);
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_5f0,puVar11);
          pfVar5 = local_770;
        }
      }
    }
    iVar2 = 0xc;
    pfVar6 = local_bf0;
    goto LAB_0051f655;
  }
  afStack_304[2] = fVar1;
  afStack_304[3] = fVar1;
  local_2f4 = fVar1;
  local_1b8 = fVar1;
  local_1b4 = fVar1;
  local_1b0 = fVar1;
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840(param_2,DAT_007e1a50);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
    pfVar6 = local_4b8;
    pfVar5 = &local_4d0;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
    }
    local_158[6] = local_4d0 + local_4c4;
    local_13c[0] = local_4cc + local_4c0;
    local_13c[1] = local_4c8 + local_4bc;
    local_494 = local_4d0 + local_4c4;
    local_490[(uint)bVar9 * -2] = local_13c[(uint)bVar9 * -2];
    local_490[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_47c[3] = local_494 * _DAT_005cd4cb;
    local_46c[0] = local_490[0] * _DAT_005cd4cb;
    local_46c[1] = local_490[1] * _DAT_005cd4cb;
    local_230 = local_494 * _DAT_005cd4cb;
    afStack_28c[(uint)bVar9 * -2 + 0x18] = local_46c[(uint)bVar9 * -2];
    afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
         local_46c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (afStack_28c + 0x35 != afStack_28c + 0x17) {
      local_1b8 = local_230;
      local_1b4 = local_22c;
      local_1b0 = local_228;
    }
    iVar4 = *(int *)(iVar3 + 0x6e8);
    if (iVar4 != 2) {
      if (iVar4 == 1) {
        if (param_3 == 0.0) {
          core_xform_cpp_buildRotationY_FUN_00584ff0(0xbfc90fdb);
          puVar7 = local_c50;
LAB_00520ba3:
          puVar8 = local_d40;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
        }
        else {
          if (param_3 == 1.4013e-45) {
            core_xform_cpp_buildRotationY_FUN_00584ff0(0x3fc90fdb);
            puVar7 = local_c20;
            goto LAB_00520ba3;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(local_d40);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (local_d40,&(param_1->model).field_0xe80 + iVar2 * 0x30);
        puVar7 = local_530;
        puVar8 = local_d40;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00583b10(local_d40);
        local_8c = afStack_2a4[5];
        afStack_10c[(uint)bVar9 * -2 + 0x21] = afStack_28c[(uint)bVar9 * -2];
        afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22] =
             afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (afStack_304 + 2 != afStack_10c + 0x20) {
          afStack_304[2] = local_8c;
          afStack_304[3] = local_88;
          local_2f4 = local_84;
        }
        local_1b0 = local_4bc * (float)_DAT_005cd4d7 + local_4c8 * (float)_DAT_005cd4cf;
        goto LAB_0052083a;
      }
      if (iVar4 != 3) {
        _DAT_01d71de0 = "..\\core\\prye.cpp";
        _DAT_01d71de4 = 0x1050;
        core_main_c_FUN_004e4330("Don't know how to carry light %s",iVar3);
        goto LAB_0052083a;
      }
    }
    local_1b4 = local_4c0;
  }
LAB_0052083a:
  iVar3 = (**(code **)(*(int *)(param_2 + 0x154) + 0x74))(param_2);
  if (iVar3 != 0) {
    local_440 = 0xbdb87c8b;
    local_438 = 0x3f262846;
    local_43c = 0xbe78bef9;
    local_224[1] = -0.161673;
    local_224[0] = 0.414782;
    local_224[2] = -0.489897;
    local_d4[0] = -0.0900813;
    afStack_10c[(uint)bVar9 * -2 + 0xf] = local_46c[(uint)bVar9 * -2 + 0xc];
    afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
         local_46c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    local_2c0 = 0x3e99e450;
    local_2b8 = 0x3f252f1b;
    core_xform_cpp_FUN_00583940(local_740,afStack_28c + 0x1a,afStack_10c + 0xe);
    local_2bc = 0xbe083dff;
    pfVar6 = local_46c + 0xe;
    local_35c[0xf] = 0.385392;
    local_434[0] = (float)local_2c0;
    local_46c[(uint)bVar9 * -2 + 0xf] = local_2e0[(uint)bVar9 * -2 + 9];
    local_46c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
         local_2e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    local_35c[0x10] = -0.0122009;
    local_35c[0x11] = -0.49418;
    core_xform_cpp_FUN_00583940(local_ef0,afStack_388 + 0x1a,pfVar6);
    puVar11 = &(param_1->model).field_0xe80 + iVar2 * 0x30;
    fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_740,local_ef0,1.0 - fVar1,puVar11);
    puVar7 = local_6b0;
    puVar8 = local_cb0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_cb0);
    puVar7 = local_7d0;
    puVar8 = local_5c0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(local_5c0);
    local_2e0[2] = local_13c[2];
    local_2e0[(uint)bVar9 * -2 + 3] = local_13c[(uint)bVar9 * -2 + 3];
    local_2e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         local_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    if (afStack_304 + 2 != local_2e0 + 2) {
      afStack_304[2] = local_2e0[2];
      afStack_304[3] = local_2e0[3];
      local_2f4 = local_2d0;
    }
  }
  if (param_3 == 0.0) {
    local_118 = param_3;
    local_11c = -0.4;
    local_114 = param_3;
    if (afStack_2a4 + 2 != local_13c + 8) {
      afStack_2a4[3] = param_3;
      afStack_2a4[4] = param_3;
      afStack_2a4[2] = -0.4;
    }
  }
  else if (param_3 == 1.4013e-45) {
    afStack_58[3] = 0.0;
    afStack_58[4] = 0.0;
    afStack_58[2] = 0.4;
    if (afStack_2a4 + 2 != afStack_58 + 2) {
      afStack_2a4[2] = 0.4;
      afStack_2a4[3] = 0.0;
      afStack_2a4[4] = 0.0;
    }
  }
  else {
    afStack_2a4[3] = 0.0;
    afStack_2a4[2] = 0.0;
    afStack_2a4[4] = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005832e0
            (afStack_2a4 + 2,&(param_1->model).field_0xe80 + iVar2 * 0x30);
  core_xform_cpp_FUN_00583940(local_f50,afStack_2a4 + 2,afStack_304 + 2);
  core_xform_cpp_FUN_00583260(afStack_28c + 0x35,local_f50);
  local_490[2] = local_35c[0x15];
  local_490[(uint)bVar9 * -2 + 3] = afStack_304[(uint)bVar9 * -2];
  local_490[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_304[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  iVar2 = 0xc;
  afStack_58[8] = afStack_2a4[2] - local_490[2];
  local_34 = afStack_2a4[3] - local_490[3];
  local_30 = afStack_2a4[4] - local_480;
  local_254[6] = afStack_2a4[2] - local_490[2];
  afStack_28c[(uint)bVar9 * -2 + 0x15] = afStack_58[(uint)bVar9 * -2 + 9];
  afStack_28c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
       afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
  pfVar6 = local_bf0;
  pfVar5 = local_f50;
  local_f44 = local_f44 + local_254[6];
  local_f34 = local_f34 + local_238;
  local_f24 = local_f24 + local_234;
LAB_0051f655:
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
  }
  pfVar6 = local_bf0;
  pfVar5 = unaff_ESI;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
  }
  return unaff_ESI;
}
