// Name: core_prye.cpp_FUN_0051f490
// Address: 0051f490
// Address Range: [[0051f490, 00520d1f]]
// Convention: unknown
// Signature: float * core_prye_cpp_FUN_0051f490(CCharacter *param_1,CDemonActor *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_prye_cpp_FUN_0051f490(CCharacter *param_1,CDemonActor *param_2,float param_3)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *unaff_ESI;
  CMatrix3x4f *pCVar6;
  float *pfVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  CMatrix3x4f *pCVar10;
  CMatrix3x4f *pCVar11;
  float *pfVar12;
  byte bVar13;
  float afStackY_147c [99];
  CDemonActor *apCStackY_12f0 [12];
  byte *puVar14;
  CDemonActor **ppCVar15;
  CDemonActor **ppCVar16;
  uint *puVar17;
  CBoundingBox3D *in_stack_ffffed50;
  float afStack_1290 [6];
  CDemonActor *apCStack_1278 [10];
  CMatrix3x4f local_1250;
  CMatrix3x4f local_1220;
  CMatrix3x4f local_11f0;
  CMatrix3x4f local_11c0;
  byte local_1190 [8];
  float afStack_1188 [10];
  CMatrix3x4f local_1160;
  CMatrix3x4f local_1130;
  CMatrix3x4f local_1100;
  CMatrix3x4f local_10d0;
  CMatrix3x4f local_10a0;
  byte local_1070 [8];
  float afStack_1068 [10];
  CMatrix3x4f local_1040;
  CMatrix3x4f local_1010;
  byte local_fe0 [48];
  CMatrix3x4f local_fb0;
  CMatrix3x4f local_f80;
  CMatrix3x4f local_f50;
  CMatrix3x4f local_f20 [2];
  byte local_ec0 [48];
  byte local_e90 [48];
  CMatrix3x4f local_e60;
  CMatrix3x4f local_e30;
  byte local_e00 [48];
  CMatrix3x4f local_dd0;
  CMatrix3x4f local_da0;
  CMatrix3x4f local_d70;
  CMatrix3x4f local_d40;
  CMatrix3x4f local_d10;
  byte local_ce0 [48];
  CMatrix3x4f local_cb0;
  CMatrix3x4f local_c80;
  CMatrix3x4f local_c50;
  CMatrix3x4f local_c20;
  float local_bf0 [12];
  CMatrix3x4f local_bc0;
  CMatrix3x4f local_b90;
  float local_b60 [12];
  CMatrix3x4f local_b30;
  CMatrix3x4f local_b00;
  CMatrix3x4f local_ad0;
  CMatrix3x4f local_aa0;
  CMatrix3x4f local_a70;
  CMatrix3x4f local_a40;
  CMatrix3x4f local_a10;
  CMatrix3x4f local_9e0;
  CMatrix3x4f local_9b0;
  byte local_980 [48];
  CMatrix3x4f local_950;
  CMatrix3x4f local_920;
  float local_8f0 [12];
  byte local_8c0 [48];
  CMatrix3x4f local_890;
  byte local_860 [48];
  CMatrix3x4f local_830;
  CMatrix3x4f local_800;
  CMatrix3x4f local_7d0;
  byte local_7a0 [48];
  CMatrix3x4f local_770;
  byte local_740 [48];
  float local_710 [12];
  CMatrix3x4f local_6e0;
  float local_6b0 [12];
  float local_680 [12];
  CMatrix3x4f local_650;
  byte local_620 [48];
  CMatrix3x4f local_5f0;
  float local_5c0 [12];
  float local_590 [12];
  CMatrix3x4f local_560;
  CMatrix3x4f local_530;
  CMatrix3x4f local_500;
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  CDemonActor *local_4c0;
  float local_4bc;
  float local_4b8 [6];
  uint local_4a0;
  uint local_49c;
  uint local_498;
  float local_494;
  float local_490 [4];
  float local_480;
  float local_47c [3];
  CDemonActor *local_470;
  float local_46c [11];
  uint local_440;
  uint local_43c;
  uint local_438;
  uint local_434;
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
  CDemonActor *local_3bc;
  uint local_3b8;
  uint local_3b4;
  float local_3b0 [4];
  float afStack_3a0 [6];
  float afStack_388 [5];
  float local_374 [3];
  CDemonActor *local_368 [3];
  float local_35c [22];
  CDemonActor *apCStack_304 [4];
  CDemonActor *local_2f4;
  uint local_2f0;
  uint local_2ec;
  uint local_2e8;
  float local_2e4;
  CDemonActor *local_2e0 [4];
  CDemonActor *local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  CDemonActor *local_2b4;
  uint local_2b0;
  uint local_2ac;
  CDemonActor *local_2a8;
  float afStack_2a4 [2];
  CVector3f local_29c;
  CDemonActor *local_290;
  CDemonActor *apCStack_28c [5];
  CDemonActor *local_278;
  uint local_274;
  uint local_270;
  CDemonActor *local_26c [3];
  uint local_260;
  uint local_25c;
  uint local_258;
  CDemonActor *local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  float local_23c;
  float local_238;
  float local_234;
  CDemonActor *local_230;
  CDemonActor *local_22c [8];
  CDemonActor *local_20c [3];
  CDemonActor *local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  CDemonActor *local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  CDemonActor *local_1c4 [3];
  CDemonActor *local_1b8;
  CDemonActor *local_1b4;
  CDemonActor *local_1b0;
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
  float local_13c [2];
  CDemonActor *local_134;
  float afStack_130 [5];
  CVector3f local_11c;
  float local_110;
  float afStack_10c [14];
  uint local_d4;
  float local_c8 [3];
  uint local_bc;
  uint local_b8;
  uint local_b4;
  float local_b0 [3];
  float local_a4 [3];
  uint local_98;
  uint local_94;
  uint local_90;
  CDemonActor *local_8c;
  CDemonActor *local_88;
  CDemonActor *local_84;
  float local_80 [3];
  float local_74 [3];
  float local_68 [4];
  float afStack_58 [2];
  CVector3f local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [3];
  
  bVar13 = 0;
  iVar4 = param_1->carry_hands[(int)param_3].bone_index;
  pCVar1 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(param_2,g_CWeaponClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    fVar3 = pCVar1[2].orient.vec.x;
    if (fVar3 == 1.4013e-45) {
      pfVar7 = afStack_3a0 + 5;
      local_1d0 = 0x3e44330d;
      local_1c8 = 0x3f7838d2;
      local_1cc = 0x40131412;
      afStack_10c[0xb] = 0.191601;
      afStack_10c[(uint)bVar13 * -2 + 0xc] = (float)local_22c[(uint)bVar13 * -2 + 0x18];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           (float)local_22c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
      local_35c[0xd] = -0.235855;
      local_35c[0xe] = -0.412366;
      afStack_3a0[5] = afStack_10c[0xb];
      afStack_388[(uint)bVar13 * -2] = afStack_10c[(uint)bVar13 * -2 + 0xc];
      afStack_388[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      local_35c[0xc] = 0.53949;
      core_xform_cpp_FUN_00583940(local_e00,afStack_388 + 0x17,pfVar7);
      local_408 = 0x3feb40a3;
      pfVar7 = local_46c + 0x23;
      local_410 = 0x3d4ccccd;
      local_40c = 0x3f99999a;
      local_404[1] = -0.05;
      afStack_10c[0xb] = 0.05;
      afStack_10c[(uint)bVar13 * -2 + 0xc] = local_46c[(uint)bVar13 * -2 + 0x18];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           local_46c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
      local_404[0] = 0.40292;
      pfVar12 = local_46c + 0x1a;
      puVar14 = local_ce0;
      local_404[2] = 0.26139;
      local_404[9] = afStack_10c[0xb];
      afStack_3dc[(uint)bVar13 * -2] = afStack_10c[(uint)bVar13 * -2 + 0xc];
      afStack_3dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      core_xform_cpp_FUN_00583940(puVar14,pfVar12,pfVar7);
      pCVar10 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_e00,local_ce0,1.0 - fVar3);
      pfVar7 = local_8f0;
      pCVar6 = &local_bc0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_bc0,pCVar10,&local_1040);
      pCVar6 = &local_1040;
      pCVar10 = &local_b90;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
      }
      pCVar6 = &local_b90;
    }
    else if (fVar3 == 1.26117e-44) {
      local_17c = 0xbedec58f;
      local_174 = 0xc035c505;
      local_178 = 0xbe87225b;
      local_254 = (CDemonActor *)0xbe2e6ff8;
      afStack_10c[0xb] = -0.435101;
      afStack_10c[(uint)bVar13 * -2 + 0xc] = local_1a8[(uint)bVar13 * -2 + 0xc];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           local_1a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      local_74[0] = afStack_10c[0xb];
      afStack_10c[(uint)bVar13 * -2 + 0x27] = afStack_10c[(uint)bVar13 * -2 + 0xc];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
           afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      local_250 = 0xbe81ffb5;
      local_24c = 0xbea706b3;
      core_xform_cpp_FUN_00583940(local_fe0,apCStack_28c + 0xe,afStack_10c + 0x26);
      local_35c[6] = -0.0120173;
      local_35c[8] = 1.57793;
      local_35c[7] = 1.5794;
      afStack_10c[0xb] = -0.0120173;
      afStack_10c[(uint)bVar13 * -2 + 0xc] = afStack_388[(uint)bVar13 * -2 + 0x12];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_388[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
      local_c8[0] = afStack_10c[0xb];
      afStack_10c[(uint)bVar13 * -2 + 0x12] = afStack_10c[(uint)bVar13 * -2 + 0xc];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
           afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      local_47c[2] = 0.227495;
      local_47c[0] = 0.665317;
      local_47c[1] = -0.0635326;
      core_xform_cpp_FUN_00583940(local_ec0,local_490 + 5,afStack_10c + 0x11);
      pCVar10 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_fe0,local_ec0,1.0 - fVar3);
      pfVar7 = afStack_1290 + 4;
      pCVar6 = &local_da0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_da0,pCVar10,&local_11f0);
      pCVar6 = &local_11f0;
      pCVar10 = &local_d70;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
      }
      pCVar6 = &local_d70;
    }
    else if (fVar3 == 2.8026e-45) {
      local_248 = 0x3e3b65aa;
      local_240 = 0x3fd4f5c3;
      local_244 = 0x400ffdb5;
      afStack_10c[6] = -0.0957868;
      afStack_10c[5] = 0.412537;
      afStack_10c[0xb] = 0.183005;
      afStack_10c[(uint)bVar13 * -2 + 0xc] = (float)apCStack_28c[(uint)bVar13 * -2 + 0x12];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           (float)apCStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
      afStack_10c[7] = -0.233186;
      local_68[3] = afStack_10c[0xb];
      afStack_58[(uint)bVar13 * -2] = afStack_10c[(uint)bVar13 * -2 + 0xc];
      afStack_58[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      core_xform_cpp_FUN_00583940(local_1190,afStack_10c + 5,afStack_10c + 0x2c);
      local_1f4 = 0xbe93c947;
      local_1ec = 0x3fdd1cc1;
      local_1f0 = 0x3fac74a7;
      local_3b0[0] = 0.483848;
      afStack_10c[0xb] = -0.288645;
      afStack_10c[(uint)bVar13 * -2 + 0xc] = (float)local_22c[(uint)bVar13 * -2 + 0xf];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           (float)local_22c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
      pfVar7 = afStack_3dc + 0xe;
      local_3b0[3] = afStack_10c[0xb];
      afStack_3a0[(uint)bVar13 * -2] = afStack_10c[(uint)bVar13 * -2 + 0xc];
      afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      local_3b0[1] = 0.0729828;
      local_3b0[2] = 0.0731532;
      core_xform_cpp_FUN_00583940(local_1070,afStack_3dc + 0xb,pfVar7);
      pCVar10 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_1190,local_1070,1.0 - fVar3);
      pfVar7 = local_590;
      pCVar6 = &local_f80;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_f80,pCVar10,&local_800);
      pCVar6 = &local_800;
      pCVar10 = local_f20;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
      }
      pCVar6 = local_f20;
    }
    else if (fVar3 == 5.60519e-45) {
      local_1e8 = 0x3e44c7f3;
      local_1e0 = 0x3fd16bba;
      local_1e4 = 0x4013aee6;
      afStack_10c[0xb] = 0.192169;
      afStack_10c[(uint)bVar13 * -2 + 0xc] = (float)local_22c[(uint)bVar13 * -2 + 0x12];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           (float)local_22c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
      local_a4[0] = afStack_10c[0xb];
      afStack_10c[(uint)bVar13 * -2 + 0x1b] = afStack_10c[(uint)bVar13 * -2 + 0xc];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
           afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      local_1f8 = 0xbed19f3c;
      local_200 = (CDemonActor *)0x3eab23dd;
      local_1fc = 0xbe3daa50;
      local_418 = 0x3f93df3b;
      core_xform_cpp_FUN_00583940(local_8c0,local_22c + 0xb,afStack_10c + 0x1a);
      local_41c = 0xbeedcbbc;
      local_414 = 0x3fe3381d;
      afStack_10c[0xb] = -0.464445;
      afStack_10c[(uint)bVar13 * -2 + 0xc] = local_46c[(uint)bVar13 * -2 + 0x15];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           local_46c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
      local_2ec = 0x3d8dbbaa;
      local_b0[0] = afStack_10c[0xb];
      afStack_10c[(uint)bVar13 * -2 + 0x18] = afStack_10c[(uint)bVar13 * -2 + 0xc];
      afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
           afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      local_2e8 = 0xbe66cd6c;
      local_2f0 = 0x3ec327aa;
      core_xform_cpp_FUN_00583940(local_7a0,&local_2f0,afStack_10c + 0x17);
      pCVar10 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_8c0,local_7a0,1.0 - fVar3);
      pfVar7 = local_680;
      pCVar6 = &local_950;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_950,pCVar10,&local_ad0);
      pCVar6 = &local_ad0;
      pCVar10 = &local_650;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
      }
      pCVar6 = &local_650;
    }
    else if (fVar3 == 4.2039e-45) {
      pCVar2 = (CDisease *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CDiseaseClassInfo.name_hash);
      if (pCVar2 == (CDemonActor *)0x0) {
        pCVar1 = (CBindEvil *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CBindEvilClassInfo.name_hash);
        if (pCVar1 == (CDemonActor *)0x0) {
          ppCVar15 = local_22c + 8;
          local_1ac = 0xbf3e6506;
          local_1a8[1] = -0.808348;
          local_1a8[0] = 0.693486;
          local_46c[6] = -0.0656786;
          afStack_10c[0xb] = -0.743729;
          afStack_10c[(uint)bVar13 * -2 + 0xc] = local_1a8[(uint)bVar13 * -2];
          afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
               local_1a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          local_46c[5] = 0.238337;
          pfVar7 = local_46c + 5;
          local_46c[7] = 0.0335054;
          local_20c[0] = (CDemonActor *)afStack_10c[0xb];
          local_22c[(uint)bVar13 * -2 + 9] = (CDemonActor *)afStack_10c[(uint)bVar13 * -2 + 0xc];
          local_22c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
               (CDemonActor *)afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
        }
        else {
          local_428 = 0x3ec477ff;
          local_420 = 0x4043d902;
          local_424 = 0x402c45f6;
          local_68[0] = -0.355122;
          ppCVar15 = local_2e0 + 0xe;
          afStack_10c[0xb] = 0.383728;
          afStack_10c[(uint)bVar13 * -2 + 0xc] = local_46c[(uint)bVar13 * -2 + 0x12];
          afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
               local_46c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
          pfVar7 = afStack_10c + 0x29;
          local_68[1] = 0.263786;
          local_2a8 = (CDemonActor *)afStack_10c[0xb];
          afStack_2a4[(uint)bVar13 * -2] = afStack_10c[(uint)bVar13 * -2 + 0xc];
          afStack_2a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
          local_68[2] = 0.352928;
        }
      }
      else {
        local_98 = 0x3ef7c116;
        local_90 = 0xbfd87454;
        local_94 = 0xbff27a10;
        local_2c[0] = -0.0912048;
        afStack_10c[0xb] = 0.483895;
        afStack_10c[(uint)bVar13 * -2 + 0xc] = afStack_10c[(uint)bVar13 * -2 + 0x1e];
        afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
             afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
        ppCVar15 = (CDemonActor **)(afStack_388 + 8);
        pfVar7 = afStack_58 + 0xb;
        local_368[0] = (CDemonActor *)afStack_10c[0xb];
        afStack_388[(uint)bVar13 * -2 + 9] = afStack_10c[(uint)bVar13 * -2 + 0xc];
        afStack_388[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
             afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
        local_2c[1] = -0.172093;
        local_2c[2] = -0.308361;
      }
      core_xform_cpp_FUN_00583940(&local_a70,pfVar7,ppCVar15);
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                (&local_a70,(param_1->model).bone_transform.bone_model_matrices + iVar4,&local_b30);
      pCVar6 = &local_b30;
    }
    else {
      pCVar6 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
      fVar3 = pCVar1[2].orient.vec.x;
      if (fVar3 == 7.00649e-45) {
        local_1a8[2] = -0.00124368;
        local_1a8[4] = 1.58617;
        local_1a8[3] = 1.57504;
        local_158[4] = -0.0611557;
        local_80[0] = -0.00124368;
        afStack_10c[(uint)bVar13 * -2 + 0x24] = local_1a8[(uint)bVar13 * -2 + 3];
        afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
             local_1a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        local_158[5] = 0.0786577;
        local_158[3] = 0.17933;
        core_xform_cpp_FUN_00583940(&local_1010,local_1a8 + 0x17,afStack_10c + 0x23);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_1010,pCVar6,&local_9b0);
        pCVar6 = &local_9b0;
      }
      else if (fVar3 == 1.68156e-44) {
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (pCVar1,g_CLightStaffClassInfo.name_hash);
        if (pCVar1 == (CDemonActor *)0x0) {
          local_170 = 0x3d9fcc18;
          local_168 = 0x3fdb15b5;
          local_16c = 0x3fc8f80e;
          local_404[3] = 0.252501;
          local_404[4] = -0.104792;
          local_188[0] = 0.078026;
          local_1a8[(uint)bVar13 * -2 + 9] = local_1a8[(uint)bVar13 * -2 + 0xf];
          local_1a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
               local_1a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
          local_404[5] = 0.223944;
          afStack_10c[2] = 0.078026;
          core_xform_cpp_FUN_00583940(local_980,local_46c + 0x1d,local_1a8 + 8);
          afStack_10c[4] = 1.7116;
          afStack_10c[3] = 1.57007;
          local_3bc = (CDemonActor *)0x3e8147d0;
          ppCVar15 = apCStack_28c + 2;
          apCStack_28c[2] = (CDemonActor *)afStack_10c[2];
          apCStack_28c[(uint)bVar13 * -2 + 3] = (CDemonActor *)afStack_10c[(uint)bVar13 * -2 + 3];
          apCStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
               (CDemonActor *)afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          ppCVar16 = (CDemonActor **)(afStack_3dc + 8);
          local_3b8 = 0xbdd69d30;
          local_3b4 = 0x3e655193;
        }
        else {
          afStack_10c[8] = 0.166663;
          afStack_10c[10] = 1.59043;
          afStack_10c[9] = 1.50603;
          local_46c[8] = 0.166663;
          local_46c[(uint)bVar13 * -2 + 9] = afStack_10c[(uint)bVar13 * -2 + 9];
          local_46c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
               afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
          local_35c[9] = 0.332412;
          local_35c[10] = -0.0711692;
          local_35c[0xb] = 0.492656;
          local_46c[3] = 1.50603;
          core_xform_cpp_FUN_00583940(local_980,afStack_388 + 0x14,local_46c + 8);
          ppCVar15 = local_22c + 0x1a;
          local_46c[2] = 0.166663;
          local_46c[4] = 1.59043;
          local_1d8 = 0xbd91c128;
          ppCVar16 = local_22c + 0x14;
          local_1c4[0] = (CDemonActor *)0x3e2aa9b5;
          local_22c[(uint)bVar13 * -2 + 0x1b] = (CDemonActor *)local_46c[(uint)bVar13 * -2 + 3];
          local_22c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
               (CDemonActor *)local_46c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          local_1d4 = 0x3efc3d68;
          local_1dc = (CDemonActor *)0x3eaa31e8;
        }
        core_xform_cpp_FUN_00583940(local_e90,ppCVar16,ppCVar15);
        pCVar10 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
        fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
        core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_980,local_e90,1.0 - fVar3);
        pfVar7 = local_710;
        pCVar6 = &local_920;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar6->m[0].w = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_920,pCVar10,&local_e60);
        pCVar6 = &local_e60;
      }
      else if (fVar3 == 9.80909e-45) {
        pCVar1 = (CHolycross *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CHolycrossClassInfo.name_hash)
        ;
        if (pCVar1 == (CDemonActor *)0x0) {
          local_260 = 0xbdb87c8b;
          local_258 = 0x3f262846;
          local_25c = 0xbe78bef9;
          local_158[0] = 0.414782;
          local_158[1] = -0.161673;
          local_164[0] = -0.0900813;
          local_1a8[(uint)bVar13 * -2 + 0x12] = (float)apCStack_28c[(uint)bVar13 * -2 + 0xc];
          local_1a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
               (float)apCStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
          local_158[2] = -0.489897;
          local_2e4 = 0.05;
          core_xform_cpp_FUN_00583940(local_620,local_1a8 + 0x14,local_1a8 + 0x11);
          local_2e0[1] = (CDemonActor *)0x3feb40a3;
          local_2e0[0] = (CDemonActor *)0x3f99999a;
          afStack_3a0[2] = 0.40292;
          pfVar7 = &local_110;
          local_110 = local_2e4;
          afStack_10c[(uint)bVar13 * -2] = (float)local_2e0[(uint)bVar13 * -2];
          afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               (float)local_2e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          pfVar12 = afStack_3a0 + 2;
          afStack_3a0[3] = -0.05;
          afStack_3a0[4] = 0.26139;
        }
        else {
          afStack_130[2] = 0.479618;
          afStack_130[4] = 1.68711;
          afStack_130[3] = 1.6527;
          local_374[0] = 0.479618;
          afStack_388[(uint)bVar13 * -2 + 6] = afStack_130[(uint)bVar13 * -2 + 3];
          afStack_388[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
               afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          local_35c[0x12] = 0.201904;
          local_35c[0x13] = 0.00499905;
          local_35c[0x14] = -0.689518;
          local_3c4 = 0x3fd38bac;
          core_xform_cpp_FUN_00583940(local_620,afStack_388 + 0x1d,afStack_388 + 5);
          pfVar7 = local_1a8 + 5;
          local_3c8 = 0x3ef5907e;
          local_3c0 = 0x3fd7f338;
          local_404[7] = 0.00499905;
          pfVar12 = local_46c + 0x20;
          local_1a8[5] = 0.479618;
          local_1a8[(uint)bVar13 * -2 + 6] = afStack_3dc[(uint)bVar13 * -2 + 6];
          local_1a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
               afStack_3dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          local_404[8] = -0.689518;
          local_404[6] = 0.201904;
        }
        core_xform_cpp_FUN_00583940(local_860,pfVar12,pfVar7);
        pCVar10 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
        fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
        core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_620,local_860,1.0 - fVar3);
        pfVar7 = local_b60;
        pCVar6 = &local_830;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar6->m[0].w = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (&local_830,pCVar10,(CMatrix3x4f *)&stack0xffffed50);
        pCVar6 = (CMatrix3x4f *)&stack0xffffed50;
      }
      else if (param_3 == 0.0) {
        core_xform_cpp_FUN_00583940(&local_1250,&DAT_01ed36cc,&DAT_02cfd900);
        pCVar10 = &local_1250;
        core_xform_cpp_buildRotationX_FUN_00584f70(1.5707964,&local_1160);
        pCVar9 = &local_a40;
        pCVar8 = &local_1160;
        pCVar11 = &local_a40;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar11->m[0].w = pCVar8->m[0].w;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_buildRotationY_FUN_00584ff0(-1.5707964,&local_1130);
        pCVar8 = &local_1130;
        pCVar11 = &local_1220;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar11->m[0].w = pCVar8->m[0].w;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_1220,pCVar9,&local_1100);
        pCVar9 = &local_1100;
        pCVar8 = &local_11c0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar8->m[0].w = pCVar9->m[0].w;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_11c0,pCVar10,&local_10d0);
        pCVar10 = &local_10d0;
        pCVar9 = &local_6e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar9->m[0].w = pCVar10->m[0].w;
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_6e0,pCVar6,&local_10a0);
        pCVar6 = &local_10a0;
      }
      else {
        pCVar2 = (CStorm *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CStormClassInfo.name_hash);
        if (pCVar2 == (CDemonActor *)0x0) {
          pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (pCVar1,g_CBurncrossClassInfo.name_hash);
          if (pCVar2 == (CDemonActor *)0x0) {
            pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (pCVar1,g_CExorcismClassInfo.name_hash);
            if (pCVar2 == (CDemonActor *)0x0) {
              pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                                 (pCVar1,g_CHealClassInfo.name_hash);
              if (pCVar1 == (CDemonActor *)0x0) {
                core_xform_cpp_FUN_00583940(&local_5f0,&DAT_01ed36c0,&DAT_02cfd900);
                pCVar10 = &local_5f0;
                core_xform_cpp_buildRotationX_FUN_00584f70(1.5707964,&local_d10);
                pCVar9 = &local_890;
                pCVar8 = &local_d10;
                pCVar11 = &local_890;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar11->m[0].w = pCVar8->m[0].w;
                  pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
                  pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
                }
                core_xform_cpp_buildRotationY_FUN_00584ff0(1.5707964,&local_a10);
                pCVar8 = &local_a10;
                pCVar11 = &local_b00;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar11->m[0].w = pCVar8->m[0].w;
                  pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
                  pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_b00,pCVar9,&local_9e0);
                pCVar9 = &local_9e0;
                pCVar8 = &local_aa0;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar8->m[0].w = pCVar9->m[0].w;
                  pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar13 * -2 + 1) * 4);
                  pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_aa0,pCVar10,&local_500);
                pCVar10 = &local_500;
                pCVar9 = &local_fb0;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar9->m[0].w = pCVar10->m[0].w;
                  pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
                  pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar13 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_fb0,pCVar6,&local_560);
                pCVar6 = &local_560;
              }
              else {
                pfVar7 = afStack_3dc + 2;
                local_2cc = 0x3e2ec4e7;
                local_2c4 = 0xbfcaafcd;
                local_2c8 = 0xbfc40ebf;
                local_2b0 = 0x3d9f6e90;
                local_2b4 = (CDemonActor *)0x3e6b035c;
                ppCVar15 = local_2e0 + 0xb;
                pCVar10 = &local_5f0;
                local_2ac = 0x3e14c836;
                afStack_3dc[2] = 0.170673;
                afStack_3dc[(uint)bVar13 * -2 + 3] = (float)local_2e0[(uint)bVar13 * -2 + 6];
                afStack_3dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                     (float)local_2e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
                core_xform_cpp_FUN_00583940(pCVar10,ppCVar15,pfVar7);
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_5f0,pCVar6,&local_e30);
                pCVar6 = &local_e30;
              }
            }
            else {
              local_bc = 0xb9bf74b1;
              local_b4 = 0xbfb9ffd6;
              local_b8 = 0x3a76cae7;
              local_4a0 = 0x3e8a16c6;
              local_49c = 0xbee25e57;
              pfVar7 = afStack_388 + 2;
              puVar17 = &local_4a0;
              pCVar10 = &local_5f0;
              local_498 = 0xb8c20791;
              afStack_388[2] = -0.000365173;
              afStack_388[(uint)bVar13 * -2 + 3] = afStack_10c[(uint)bVar13 * -2 + 0x15];
              afStack_388[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                   afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
              core_xform_cpp_FUN_00583940(pCVar10,puVar17,pfVar7);
              core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_5f0,pCVar6,&local_c80);
              pCVar6 = &local_c80;
            }
          }
          else {
            local_35c[3] = -0.00681985;
            local_35c[5] = 1.60644;
            local_35c[4] = 1.57832;
            local_35c[0] = 0.620831;
            local_22c[5] = (CDemonActor *)0xbbdf790c;
            local_22c[(uint)bVar13 * -2 + 6] = (CDemonActor *)afStack_388[(uint)bVar13 * -2 + 0xf];
            local_22c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
                 (CDemonActor *)afStack_388[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
            local_35c[1] = -0.135219;
            local_35c[2] = 0.0465041;
            core_xform_cpp_FUN_00583940(&local_5f0,afStack_388 + 0xb,local_22c + 5);
            core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_5f0,pCVar6,&local_dd0);
            pCVar6 = &local_dd0;
          }
        }
        else {
          local_44 = 0x3fc82ce4;
          local_3c = 0xbda7cfbd;
          local_40 = 0xbda3dd12;
          local_278 = (CDemonActor *)0x3e915a6c;
          local_26c[0] = (CDemonActor *)0x3fc82ce4;
          apCStack_28c[(uint)bVar13 * -2 + 9] = (CDemonActor *)afStack_58[(uint)bVar13 * -2 + 6];
          apCStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
               (CDemonActor *)afStack_58[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
          local_274 = 0xbd3d7f52;
          local_270 = 0xbeba174c;
          core_xform_cpp_FUN_00583940(&local_5f0,apCStack_28c + 5,apCStack_28c + 8);
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_5f0,pCVar6,&local_770);
          pCVar6 = &local_770;
        }
      }
    }
    iVar4 = 0xc;
    pfVar7 = local_bf0;
    goto LAB_0051f655;
  }
  apCStack_304[2] = pCVar1;
  apCStack_304[3] = pCVar1;
  local_2f4 = pCVar1;
  local_1b8 = pCVar1;
  local_1b4 = pCVar1;
  local_1b0 = pCVar1;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(param_2,DAT_007e1a50);
  if (pCVar1 != (CDemonActor *)0x0) {
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_ffffed50);
    pfVar7 = local_4b8;
    pfVar12 = &local_4d0;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar12 = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
      pfVar12 = pfVar12 + (uint)bVar13 * -2 + 1;
    }
    local_158[6] = local_4d0 + local_4c4;
    local_13c[0] = local_4cc + (float)local_4c0;
    local_13c[1] = local_4c8 + local_4bc;
    local_494 = local_4d0 + local_4c4;
    local_490[(uint)bVar13 * -2] = local_13c[(uint)bVar13 * -2];
    local_490[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         local_13c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    local_470 = (CDemonActor *)(local_494 * _DAT_005cd4cb);
    local_46c[0] = local_490[0] * _DAT_005cd4cb;
    local_46c[1] = local_490[1] * _DAT_005cd4cb;
    local_230 = (CDemonActor *)(local_494 * _DAT_005cd4cb);
    local_22c[(uint)bVar13 * -2] = (CDemonActor *)local_46c[(uint)bVar13 * -2];
    local_22c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         (CDemonActor *)local_46c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    if (local_22c + 0x1d != &local_230) {
      local_1b8 = local_230;
      local_1b4 = local_22c[0];
      local_1b0 = local_22c[1];
    }
    fVar3 = pCVar1[5].orient.vec.x;
    if (fVar3 != 2.8026e-45) {
      if (fVar3 == 1.4013e-45) {
        if (param_3 == 0.0) {
          core_xform_cpp_buildRotationY_FUN_00584ff0(-1.5707964,&local_c50);
          pCVar6 = &local_c50;
LAB_00520ba3:
          pCVar10 = &local_d40;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            pCVar10->m[0].w = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
          }
        }
        else {
          if (param_3 == 1.4013e-45) {
            core_xform_cpp_buildRotationY_FUN_00584ff0(1.5707964,&local_c20);
            pCVar6 = &local_c20;
            goto LAB_00520ba3;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0(&local_d40);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (&local_d40,(param_1->model).bone_transform.bone_model_matrices + iVar4,&local_530
                  );
        pCVar6 = &local_530;
        pCVar10 = &local_d40;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          pCVar10->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00583b10();
        local_8c = local_290;
        afStack_10c[(uint)bVar13 * -2 + 0x21] = (float)apCStack_28c[(uint)bVar13 * -2];
        afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22] =
             (float)apCStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        if (apCStack_304 + 2 != (CDemonActor **)(afStack_10c + 0x20)) {
          apCStack_304[2] = local_8c;
          apCStack_304[3] = local_88;
          local_2f4 = local_84;
        }
        local_1b0 = (CDemonActor *)
                    (local_4bc * (float)_DAT_005cd4d7 + local_4c8 * (float)_DAT_005cd4cf);
        goto LAB_0052083a;
      }
      if (fVar3 != 4.2039e-45) {
        _DAT_01d71de0 = "..\\core\\prye.cpp";
        _DAT_01d71de4 = 0x1050;
        core_main_c_FUN_004e4330();
        goto LAB_0052083a;
      }
    }
    local_1b4 = local_4c0;
  }
LAB_0052083a:
  iVar5 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar5 != 0) {
    local_440 = 0xbdb87c8b;
    local_438 = 0x3f262846;
    local_43c = 0xbe78bef9;
    local_22c[3] = (CDemonActor *)0xbe258d9b;
    local_22c[2] = (CDemonActor *)0x3ed45e4e;
    local_22c[4] = (CDemonActor *)0xbefad3c8;
    local_d4 = 0xbdb87c8b;
    afStack_10c[(uint)bVar13 * -2 + 0xf] = local_46c[(uint)bVar13 * -2 + 0xc];
    afStack_10c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
         local_46c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
    local_2c0 = 0x3e99e450;
    local_2b8 = 0x3f252f1b;
    core_xform_cpp_FUN_00583940();
    local_2bc = 0xbe083dff;
    local_35c[0xf] = 0.385392;
    local_434 = local_2c0;
    local_46c[(uint)bVar13 * -2 + 0xf] = (float)local_2e0[(uint)bVar13 * -2 + 9];
    local_46c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
         (float)local_2e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    local_35c[0x10] = -0.0122009;
    local_35c[0x11] = -0.49418;
    core_xform_cpp_FUN_00583940();
    pCVar10 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
    core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_005854a0(local_740);
    pfVar7 = local_6b0;
    pCVar6 = &local_cb0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar6->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_cb0,pCVar10,&local_7d0);
    pCVar6 = &local_7d0;
    pfVar7 = local_5c0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
      pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10();
    local_2e0[2] = local_134;
    local_2e0[(uint)bVar13 * -2 + 3] = (CDemonActor *)afStack_130[(uint)bVar13 * -2];
    local_2e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         (CDemonActor *)afStack_130[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    if (apCStack_304 + 2 != local_2e0 + 2) {
      apCStack_304[2] = local_2e0[2];
      apCStack_304[3] = local_2e0[3];
      local_2f4 = local_2d0;
    }
  }
  if (param_3 == 0.0) {
    local_11c.y = param_3;
    local_11c.x = -0.4;
    local_11c.z = param_3;
    if (&local_29c != (CVector3f *)(afStack_130 + 5)) {
      local_29c.y = param_3;
      local_29c.z = param_3;
      local_29c.x = -0.4;
    }
  }
  else if (param_3 == 1.4013e-45) {
    local_50.y = 0.0;
    local_50.z = 0.0;
    local_50.x = 0.4;
    if (&local_29c != (CVector3f *)(afStack_58 + 2)) {
      local_29c.x = 0.4;
      local_29c.y = 0.0;
      local_29c.z = 0.0;
    }
  }
  else {
    local_29c.y = 0.0;
    local_29c.x = 0.0;
    local_29c.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005832e0
            (&local_29c,(param_1->model).bone_transform.bone_model_matrices + iVar4);
  core_xform_cpp_FUN_00583940();
  core_xform_cpp_FUN_00583260();
  local_490[2] = local_35c[0x15];
  local_490[(uint)bVar13 * -2 + 3] = (float)apCStack_304[(uint)bVar13 * -2];
  local_490[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
       (float)apCStack_304[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  iVar4 = 0xc;
  local_38 = local_29c.x - local_490[2];
  local_34 = local_29c.y - local_490[3];
  local_30 = local_29c.z - local_480;
  local_23c = local_29c.x - local_490[2];
  apCStack_28c[(uint)bVar13 * -2 + 0x15] = (CDemonActor *)afStack_58[(uint)bVar13 * -2 + 9];
  apCStack_28c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
       (CDemonActor *)afStack_58[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
  pfVar7 = local_bf0;
  pCVar6 = &local_f50;
  local_f50.m[0].z = local_f50.m[0].z + local_23c;
  local_f50.m[1].z = local_f50.m[1].z + local_238;
  local_f50.m[2].z = local_f50.m[2].z + local_234;
LAB_0051f655:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
  }
  pfVar7 = local_bf0;
  pfVar12 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar12 = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
    pfVar12 = pfVar12 + (uint)bVar13 * -2 + 1;
  }
  return unaff_ESI;
}
