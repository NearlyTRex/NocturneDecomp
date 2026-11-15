// Name: core_prye.cpp_FUN_0051f490
// Address: 0051f490
// Address Range: [[0051f490, 00520d1f]]
// Convention: unknown
// Signature: float * core_prye_cpp_FUN_0051f490(CCharacter *param_1,CDemonActor *param_2,float param_3)

#include "nocturne.h"

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
  float *pfVar11;
  byte bVar12;
  float afStackY_147c [108];
  CDemonActor *apCStackY_12cc [3];
  CVector3f *pCVar13;
  CVector3f *pCVar14;
  CQuaternion4f *pCVar15;
  CBoundingBox3D *in_stack_ffffed50;
  CVector3f *in_stack_ffffed58;
  CVector3f *in_stack_ffffed5c;
  float afStack_1290 [16];
  CMatrix3x4f local_1250;
  CMatrix3x4f local_1220;
  CMatrix3x4f local_11f0;
  CMatrix3x4f local_11c0;
  CMatrix3x4f local_1190;
  CMatrix3x4f local_1160;
  CMatrix3x4f local_1130;
  CMatrix3x4f local_1100;
  CMatrix3x4f local_10d0;
  CMatrix3x4f local_10a0;
  CMatrix3x4f local_1070;
  CMatrix3x4f local_1040;
  CMatrix3x4f local_1010;
  CMatrix3x4f local_fe0;
  CMatrix3x4f local_fb0;
  CMatrix3x4f local_f80;
  CMatrix3x4f local_f50;
  CMatrix3x4f local_f20;
  CMatrix3x4f local_ef0;
  CMatrix3x4f local_ec0;
  CMatrix3x4f local_e90;
  CMatrix3x4f local_e60;
  CMatrix3x4f local_e30;
  CMatrix3x4f local_e00;
  CMatrix3x4f local_dd0;
  CMatrix3x4f local_da0;
  CMatrix3x4f local_d70;
  CMatrix3x4f local_d40;
  CMatrix3x4f local_d10;
  CMatrix3x4f local_ce0;
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
  CMatrix3x4f local_980;
  CMatrix3x4f local_950;
  CMatrix3x4f local_920;
  float local_8f0 [12];
  CMatrix3x4f local_8c0;
  CMatrix3x4f local_890;
  CMatrix3x4f local_860;
  CMatrix3x4f local_830;
  CMatrix3x4f local_800;
  CMatrix3x4f local_7d0;
  CMatrix3x4f local_7a0;
  CMatrix3x4f local_770;
  CMatrix3x4f local_740;
  float local_710 [12];
  CMatrix3x4f local_6e0;
  float local_6b0 [12];
  float local_680 [12];
  CMatrix3x4f local_650;
  CMatrix3x4f local_620;
  CMatrix3x4f local_5f0;
  CMatrix3x4f local_5c0;
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
  CVector3f local_4a0;
  float local_494;
  float local_490 [4];
  float local_480;
  CVector3f local_47c;
  CDemonActor *local_470;
  float local_46c [5];
  CVector3f local_458;
  CVector3f local_44c;
  uint local_440;
  float local_43c [2];
  CVector3f local_434;
  uint local_428;
  float local_424 [8];
  CVector3f local_404;
  CVector3f local_3f8;
  CVector3f local_3ec;
  CVector3f local_3e0;
  CVector3f local_3d4;
  uint local_3c8;
  float local_3c4 [2];
  CVector3f local_3bc;
  CVector3f local_3b0;
  CVector3f local_3a4;
  CVector3f local_398;
  CVector3f local_38c;
  CVector3f local_380;
  CVector3f local_374;
  CVector3f local_368;
  CVector3f local_35c;
  uint local_350;
  float local_34c [5];
  CVector3f local_338;
  CVector3f local_32c;
  CVector3f local_320;
  CVector3f local_314;
  CVector3f local_308;
  CVector3f local_2fc;
  CVector3f local_2f0;
  float local_2e4;
  CDemonActor *local_2e0 [2];
  CVector3f local_2d8;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  float local_2c0;
  float local_2bc [2];
  CVector3f local_2b4;
  CVector3f local_2a8;
  CVector3f local_29c;
  CDemonActor *local_290;
  float afStack_28c [2];
  CVector3f local_284;
  CVector3f local_278;
  CVector3f local_26c;
  uint local_260;
  float local_25c [2];
  CVector3f local_254;
  uint local_248;
  float local_244 [4];
  float local_234;
  CVector3f local_230;
  CVector3f local_224;
  CVector3f local_218;
  CVector3f local_20c;
  CVector3f local_200;
  uint local_1f4;
  float local_1f0 [5];
  CVector3f local_1dc;
  uint local_1d0;
  float local_1cc [2];
  CVector3f local_1c4;
  CVector3f local_1b8;
  uint local_1ac;
  float local_1a8 [5];
  CVector3f local_194;
  CVector3f local_188;
  uint local_17c;
  float local_178 [5];
  CVector3f local_164;
  CVector3f local_158;
  CVector3f local_14c;
  float local_140;
  float local_13c [2];
  CDemonActor *local_134;
  float afStack_130 [5];
  CVector3f local_11c;
  CVector3f local_110;
  float local_104;
  float local_100 [2];
  CVector3f local_f8;
  uint local_ec;
  float local_e8 [5];
  CVector3f local_d4;
  CVector3f local_c8;
  uint local_bc;
  float local_b8 [2];
  CVector3f local_b0;
  CVector3f local_a4;
  uint local_98;
  CDemonActor *local_94 [2];
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  uint local_44;
  float local_40 [4];
  float local_30;
  CVector3f local_2c;
  
  bVar12 = 0;
  iVar4 = param_1->carry_hands[(int)param_3].bone_index;
  pCVar1 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(param_2,g_CWeaponClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    fVar3 = pCVar1[2].orient.vec.x;
    if (fVar3 == 1.4013e-45) {
      pCVar14 = &local_38c;
      local_1d0 = 0x3e44330d;
      local_1cc[1] = 0.969617;
      local_1cc[0] = 2.2981;
      local_e8[2] = 0.191601;
      local_e8[(uint)bVar12 * -2 + 3] = local_1cc[(uint)bVar12 * -2];
      local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           local_1cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      local_32c.y = -0.235855;
      local_32c.z = -0.412366;
      local_38c.x = local_e8[2];
      *(float *)((int)&local_38c + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_38c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_32c.x = 0.53949;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                (&local_e00,&local_32c,pCVar14);
      local_424[7] = 1.83791;
      pCVar14 = &local_3e0;
      local_424[5] = 0.05;
      local_424[6] = 1.2;
      local_404.y = -0.05;
      local_e8[2] = 0.05;
      local_e8[(uint)bVar12 * -2 + 3] = local_424[(uint)bVar12 * -2 + 6];
      local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           local_424[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
      local_404.x = 0.40292;
      pCVar13 = &local_404;
      pCVar6 = &local_ce0;
      local_404.z = 0.26139;
      local_3e0.x = local_e8[2];
      *(float *)((int)&local_3e0 + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_3e0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940(pCVar6,pCVar13,pCVar14);
      pCVar15 = (param_1->model).bone_transform.bone_model_matrices[iVar4].m;
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(&local_e00,&local_ce0,1.0 - fVar3);
      pfVar7 = local_8f0;
      pCVar6 = &local_bc0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_bc0,(CMatrix3x4f *)pCVar15,&local_1040);
      pCVar6 = &local_1040;
      pCVar9 = &local_b90;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar9->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
      }
      pCVar6 = &local_b90;
    }
    else if (fVar3 == 1.26117e-44) {
      local_17c = 0xbedec58f;
      local_178[1] = -2.84015;
      local_178[0] = -0.263934;
      local_254.x = -0.170349;
      local_e8[2] = -0.435101;
      local_e8[(uint)bVar12 * -2 + 3] = local_178[(uint)bVar12 * -2];
      local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           local_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      local_74.x = local_e8[2];
      *(float *)((int)&local_74 + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_74 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_254.y = -0.253904;
      local_254.z = -0.326223;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                (&local_fe0,&local_254,&local_74);
      local_34c[2] = -0.0120173;
      local_34c[4] = 1.57793;
      local_34c[3] = 1.5794;
      local_e8[2] = -0.0120173;
      local_e8[(uint)bVar12 * -2 + 3] = local_34c[(uint)bVar12 * -2 + 3];
      local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           local_34c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_c8.x = local_e8[2];
      *(float *)((int)&local_c8 + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_c8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_47c.z = 0.227495;
      local_47c.x = 0.665317;
      local_47c.y = -0.0635326;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                (&local_ec0,&local_47c,&local_c8);
      pCVar15 = (param_1->model).bone_transform.bone_model_matrices[iVar4].m;
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(&local_fe0,&local_ec0,1.0 - fVar3);
      pfVar7 = afStack_1290 + 4;
      pCVar6 = &local_da0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_da0,(CMatrix3x4f *)pCVar15,&local_11f0);
      pCVar6 = &local_11f0;
      pCVar9 = &local_d70;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar9->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
      }
      pCVar6 = &local_d70;
    }
    else if (fVar3 == 2.8026e-45) {
      local_248 = 0x3e3b65aa;
      local_244[1] = 1.66375;
      local_244[0] = 2.24986;
      local_f8.y = -0.0957868;
      local_f8.x = 0.412537;
      local_e8[2] = 0.183005;
      local_e8[(uint)bVar12 * -2 + 3] = local_244[(uint)bVar12 * -2];
      local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           local_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      local_f8.z = -0.233186;
      local_5c.x = local_e8[2];
      *(float *)((int)&local_5c + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_5c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                (&local_1190,&local_f8,&local_5c);
      local_1f4 = 0xbe93c947;
      local_1f0[1] = 1.72744;
      local_1f0[0] = 1.34731;
      local_3b0.x = 0.483848;
      local_e8[2] = -0.288645;
      local_e8[(uint)bVar12 * -2 + 3] = local_1f0[(uint)bVar12 * -2];
      local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           local_1f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      pCVar14 = &local_3a4;
      local_3a4.x = local_e8[2];
      *(float *)((int)&local_3a4 + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_3a4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_3b0.y = 0.0729828;
      local_3b0.z = 0.0731532;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                (&local_1070,&local_3b0,pCVar14);
      pCVar15 = (param_1->model).bone_transform.bone_model_matrices[iVar4].m;
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(&local_1190,&local_1070,1.0 - fVar3);
      pfVar7 = local_590;
      pCVar6 = &local_f80;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_f80,(CMatrix3x4f *)pCVar15,&local_800);
      pCVar6 = &local_800;
      pCVar9 = &local_f20;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar9->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
      }
      pCVar6 = &local_f20;
    }
    else if (fVar3 == 5.60519e-45) {
      local_1f0[2] = 0.192169;
      local_1f0[4] = 1.6361;
      local_1f0[3] = 2.30755;
      local_e8[2] = 0.192169;
      local_e8[(uint)bVar12 * -2 + 3] = local_1f0[(uint)bVar12 * -2 + 3];
      local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           local_1f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_a4.x = local_e8[2];
      *(float *)((int)&local_a4 + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_a4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_200.z = -0.409418;
      local_200.x = 0.334258;
      local_200.y = -0.18522;
      local_424[3] = 1.15525;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                (&local_8c0,&local_200,&local_a4);
      local_424[2] = -0.464445;
      local_424[4] = 1.77515;
      local_e8[2] = -0.464445;
      local_e8[(uint)bVar12 * -2 + 3] = local_424[(uint)bVar12 * -2 + 3];
      local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           local_424[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_2f0.y = 0.0692056;
      local_b0.x = local_e8[2];
      *(float *)((int)&local_b0 + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_b0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_2f0.z = -0.225393;
      local_2f0.x = 0.381162;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                (&local_7a0,&local_2f0,&local_b0);
      pCVar15 = (param_1->model).bone_transform.bone_model_matrices[iVar4].m;
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005854a0(&local_8c0,&local_7a0,1.0 - fVar3);
      pfVar7 = local_680;
      pCVar6 = &local_950;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_950,(CMatrix3x4f *)pCVar15,&local_ad0);
      pCVar6 = &local_ad0;
      pCVar9 = &local_650;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar9->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
      }
      pCVar6 = &local_650;
    }
    else if (fVar3 == 4.2039e-45) {
      pCVar2 = (CDisease *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CDiseaseClassInfo.name_hash);
      if (pCVar2 == (CDemonActor *)0x0) {
        pCVar1 = (CBindEvil *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CBindEvilClassInfo.name_hash);
        if (pCVar1 == (CDemonActor *)0x0) {
          pCVar13 = &local_20c;
          local_1ac = 0xbf3e6506;
          local_1a8[1] = -0.808348;
          local_1a8[0] = 0.693486;
          local_458.y = -0.0656786;
          local_e8[2] = -0.743729;
          local_e8[(uint)bVar12 * -2 + 3] = local_1a8[(uint)bVar12 * -2];
          local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
               local_1a8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          local_458.x = 0.238337;
          pCVar14 = &local_458;
          local_458.z = 0.0335054;
          local_20c.x = local_e8[2];
          *(float *)((int)&local_20c + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
          *(float *)((int)&local_20c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        }
        else {
          local_428 = 0x3ec477ff;
          local_424[1] = 3.06012;
          local_424[0] = 2.69177;
          local_68.x = -0.355122;
          pCVar13 = &local_2a8;
          local_e8[2] = 0.383728;
          local_e8[(uint)bVar12 * -2 + 3] = local_424[(uint)bVar12 * -2];
          local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
               local_424[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          pCVar14 = &local_68;
          local_68.y = 0.263786;
          local_2a8.x = local_e8[2];
          *(float *)((int)&local_2a8 + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
          *(float *)((int)&local_2a8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          local_68.z = 0.352928;
        }
      }
      else {
        local_98 = 0x3ef7c116;
        local_94[1] = (CDemonActor *)0xbfd87454;
        local_94[0] = (CDemonActor *)0xbff27a10;
        local_2c.x = -0.0912048;
        local_e8[2] = 0.483895;
        local_e8[(uint)bVar12 * -2 + 3] = (float)local_94[(uint)bVar12 * -2];
        local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
             (float)local_94[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        pCVar13 = &local_368;
        pCVar14 = &local_2c;
        local_368.x = local_e8[2];
        *(float *)((int)&local_368 + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2 + 3];
        *(float *)((int)&local_368 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        local_2c.y = -0.172093;
        local_2c.z = -0.308361;
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940(&local_a70,pCVar14,pCVar13);
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                (&local_a70,
                 (CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[iVar4].m,
                 &local_b30);
      pCVar6 = &local_b30;
    }
    else {
      pCVar15 = (param_1->model).bone_transform.bone_model_matrices[iVar4].m;
      fVar3 = pCVar1[2].orient.vec.x;
      if (fVar3 == 7.00649e-45) {
        local_1a8[2] = -0.00124368;
        local_1a8[4] = 1.58617;
        local_1a8[3] = 1.57504;
        local_14c.y = -0.0611557;
        local_80.x = -0.00124368;
        *(float *)((int)&local_80 + (uint)bVar12 * -8 + 4) = local_1a8[(uint)bVar12 * -2 + 3];
        *(float *)((int)&local_80 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             local_1a8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        local_14c.z = 0.0786577;
        local_14c.x = 0.17933;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                  (&local_1010,&local_14c,&local_80);
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_1010,(CMatrix3x4f *)pCVar15,&local_9b0)
        ;
        pCVar6 = &local_9b0;
      }
      else if (fVar3 == 1.68156e-44) {
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (pCVar1,g_CLightStaffClassInfo.name_hash);
        if (pCVar1 == (CDemonActor *)0x0) {
          local_178[2] = 0.078026;
          local_178[4] = 1.7116;
          local_178[3] = 1.57007;
          local_3f8.x = 0.252501;
          local_3f8.y = -0.104792;
          local_188.x = 0.078026;
          *(float *)((int)&local_188 + (uint)bVar12 * -8 + 4) = local_178[(uint)bVar12 * -2 + 3];
          *(float *)((int)&local_188 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          local_3f8.z = 0.223944;
          local_104 = 0.078026;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                    (&local_980,&local_3f8,&local_188);
          local_100[1] = 1.7116;
          local_100[0] = 1.57007;
          local_3bc.x = 0.252501;
          pCVar14 = &local_284;
          local_284.x = local_104;
          *(float *)((int)&local_284 + (uint)bVar12 * -8 + 4) = local_100[(uint)bVar12 * -2];
          *(float *)((int)&local_284 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          pCVar13 = &local_3bc;
          local_3bc.y = -0.104792;
          local_3bc.z = 0.223944;
        }
        else {
          local_ec = 0x3e2aa9b5;
          local_e8[1] = 1.59043;
          local_e8[0] = 1.50603;
          local_44c.x = 0.166663;
          *(float *)((int)&local_44c + (uint)bVar12 * -8 + 4) = local_e8[(uint)bVar12 * -2];
          *(float *)((int)&local_44c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          local_338.x = 0.332412;
          local_338.y = -0.0711692;
          local_338.z = 0.492656;
          local_46c[3] = 1.50603;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                    (&local_980,&local_338,&local_44c);
          pCVar14 = &local_1c4;
          local_46c[2] = 0.166663;
          local_46c[4] = 1.59043;
          local_1dc.y = -0.0711692;
          pCVar13 = &local_1dc;
          local_1c4.x = 0.166663;
          *(float *)((int)&local_1c4 + (uint)bVar12 * -8 + 4) = local_46c[(uint)bVar12 * -2 + 3];
          *(float *)((int)&local_1c4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_46c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          local_1dc.z = 0.492656;
          local_1dc.x = 0.332412;
        }
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                  (&local_e90,pCVar13,pCVar14);
        pCVar15 = (param_1->model).bone_transform.bone_model_matrices[iVar4].m;
        fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
        core_xform_cpp_lerpMatrix3x4_FUN_005854a0(&local_980,&local_e90,1.0 - fVar3);
        pfVar7 = local_710;
        pCVar6 = &local_920;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar6->m[0].w = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_920,(CMatrix3x4f *)pCVar15,&local_e60);
        pCVar6 = &local_e60;
      }
      else if (fVar3 == 9.80909e-45) {
        pCVar1 = (CHolycross *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CHolycrossClassInfo.name_hash)
        ;
        if (pCVar1 == (CDemonActor *)0x0) {
          local_260 = 0xbdb87c8b;
          local_25c[1] = 0.649052;
          local_25c[0] = -0.242916;
          local_158.x = 0.414782;
          local_158.y = -0.161673;
          local_164.x = -0.0900813;
          *(float *)((int)&local_164 + (uint)bVar12 * -8 + 4) = local_25c[(uint)bVar12 * -2];
          *(float *)((int)&local_164 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_25c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          local_158.z = -0.489897;
          local_2e4 = 0.05;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                    (&local_620,&local_158,&local_164);
          local_2e0[1] = (CDemonActor *)0x3feb40a3;
          local_2e0[0] = (CDemonActor *)0x3f99999a;
          local_398.x = 0.40292;
          pCVar14 = &local_110;
          local_110.x = local_2e4;
          *(CDemonActor **)((int)&local_110 + (uint)bVar12 * -8 + 4) = local_2e0[(uint)bVar12 * -2];
          *(CDemonActor **)((int)&local_110 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_2e0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          pCVar13 = &local_398;
          local_398.y = -0.05;
          local_398.z = 0.26139;
        }
        else {
          afStack_130[2] = 0.479618;
          afStack_130[4] = 1.68711;
          afStack_130[3] = 1.6527;
          local_374.x = 0.479618;
          *(float *)((int)&local_374 + (uint)bVar12 * -8 + 4) = afStack_130[(uint)bVar12 * -2 + 3];
          *(float *)((int)&local_374 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          local_314.x = 0.201904;
          local_314.y = 0.00499905;
          local_314.z = -0.689518;
          local_3c4[0] = 1.6527;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                    (&local_620,&local_314,&local_374);
          pCVar14 = &local_194;
          local_3c8 = 0x3ef5907e;
          local_3c4[1] = 1.68711;
          local_3ec.y = 0.00499905;
          pCVar13 = &local_3ec;
          local_194.x = 0.479618;
          *(float *)((int)&local_194 + (uint)bVar12 * -8 + 4) = local_3c4[(uint)bVar12 * -2];
          *(float *)((int)&local_194 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_3c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          local_3ec.z = -0.689518;
          local_3ec.x = 0.201904;
        }
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                  (&local_860,pCVar13,pCVar14);
        pCVar15 = (param_1->model).bone_transform.bone_model_matrices[iVar4].m;
        fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
        core_xform_cpp_lerpMatrix3x4_FUN_005854a0(&local_620,&local_860,1.0 - fVar3);
        pfVar7 = local_b60;
        pCVar6 = &local_830;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar6->m[0].w = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (&local_830,(CMatrix3x4f *)pCVar15,(CMatrix3x4f *)&stack0xffffed50);
        pCVar6 = (CMatrix3x4f *)&stack0xffffed50;
      }
      else if (param_3 == 0.0) {
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                  (&local_1250,(CVector3f *)&DAT_01ed36cc,(CVector3f *)&DAT_02cfd900);
        pCVar6 = &local_1250;
        core_xform_cpp_buildRotationX_FUN_00584f70(1.5707964,&local_1160);
        pCVar9 = &local_a40;
        pCVar8 = &local_1160;
        pCVar10 = &local_a40;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar10->m[0].w = pCVar8->m[0].w;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
        }
        core_xform_cpp_buildRotationY_FUN_00584ff0(-1.5707964,&local_1130);
        pCVar8 = &local_1130;
        pCVar10 = &local_1220;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar10->m[0].w = pCVar8->m[0].w;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_1220,pCVar9,&local_1100);
        pCVar9 = &local_1100;
        pCVar8 = &local_11c0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar8->m[0].w = pCVar9->m[0].w;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_11c0,pCVar6,&local_10d0);
        pCVar6 = &local_10d0;
        pCVar9 = &local_6e0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar9->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_6e0,(CMatrix3x4f *)pCVar15,&local_10a0)
        ;
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
                core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                          (&local_5f0,(CVector3f *)&DAT_01ed36c0,(CVector3f *)&DAT_02cfd900);
                pCVar6 = &local_5f0;
                core_xform_cpp_buildRotationX_FUN_00584f70(1.5707964,&local_d10);
                pCVar9 = &local_890;
                pCVar8 = &local_d10;
                pCVar10 = &local_890;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar10->m[0].w = pCVar8->m[0].w;
                  pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
                  pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
                }
                core_xform_cpp_buildRotationY_FUN_00584ff0(1.5707964,&local_a10);
                pCVar8 = &local_a10;
                pCVar10 = &local_b00;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar10->m[0].w = pCVar8->m[0].w;
                  pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
                  pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_b00,pCVar9,&local_9e0);
                pCVar9 = &local_9e0;
                pCVar8 = &local_aa0;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar8->m[0].w = pCVar9->m[0].w;
                  pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
                  pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_aa0,pCVar6,&local_500);
                pCVar6 = &local_500;
                pCVar9 = &local_fb0;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar9->m[0].w = pCVar6->m[0].w;
                  pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
                  pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                          (&local_fb0,(CMatrix3x4f *)pCVar15,&local_560);
                pCVar6 = &local_560;
              }
              else {
                pCVar14 = &local_3d4;
                local_2cc = 0x3e2ec4e7;
                local_2c4 = 0xbfcaafcd;
                local_2c8 = 0xbfc40ebf;
                local_2b4.y = 0.0778476;
                local_2b4.x = 0.229505;
                pCVar13 = &local_2b4;
                pCVar6 = &local_5f0;
                local_2b4.z = 0.145295;
                local_3d4.x = 0.170673;
                *(CDemonActor **)((int)&local_3d4 + (uint)bVar12 * -8 + 4) =
                     local_2e0[(uint)bVar12 * -2 + 6];
                *(CDemonActor **)((int)&local_3d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                     local_2e0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
                core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                          (pCVar6,pCVar13,pCVar14);
                core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                          (&local_5f0,(CMatrix3x4f *)pCVar15,&local_e30);
                pCVar6 = &local_e30;
              }
            }
            else {
              local_bc = 0xb9bf74b1;
              local_b8[1] = -1.45312;
              local_b8[0] = 0.000941439;
              local_4a0.x = 0.269705;
              local_4a0.y = -0.442126;
              pCVar14 = &local_380;
              pCVar13 = &local_4a0;
              pCVar6 = &local_5f0;
              local_4a0.z = -9.25205e-05;
              local_380.x = -0.000365173;
              *(float *)((int)&local_380 + (uint)bVar12 * -8 + 4) = local_b8[(uint)bVar12 * -2];
              *(float *)((int)&local_380 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                   local_b8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                        (pCVar6,pCVar13,pCVar14);
              core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                        (&local_5f0,(CMatrix3x4f *)pCVar15,&local_c80);
              pCVar6 = &local_c80;
            }
          }
          else {
            local_350 = 0xbbdf790c;
            local_34c[1] = 1.60644;
            local_34c[0] = 1.57832;
            local_35c.x = 0.620831;
            local_218.x = -0.00681985;
            *(float *)((int)&local_218 + (uint)bVar12 * -8 + 4) = local_34c[(uint)bVar12 * -2];
            *(float *)((int)&local_218 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                 local_34c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            local_35c.y = -0.135219;
            local_35c.z = 0.0465041;
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                      (&local_5f0,&local_35c,&local_218);
            core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                      (&local_5f0,(CMatrix3x4f *)pCVar15,&local_dd0);
            pCVar6 = &local_dd0;
          }
        }
        else {
          local_44 = 0x3fc82ce4;
          local_40[1] = -0.0819392;
          local_40[0] = -0.0800115;
          local_278.x = 0.283893;
          local_26c.x = 1.56387;
          *(float *)((int)&local_26c + (uint)bVar12 * -8 + 4) = local_40[(uint)bVar12 * -2];
          *(float *)((int)&local_26c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               local_40[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          local_278.y = -0.046264;
          local_278.z = -0.363459;
          core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                    (&local_5f0,&local_278,&local_26c);
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                    (&local_5f0,(CMatrix3x4f *)pCVar15,&local_770);
          pCVar6 = &local_770;
        }
      }
    }
    iVar4 = 0xc;
    pfVar7 = local_bf0;
    goto LAB_0051f655;
  }
  local_2fc.x = (float)pCVar1;
  local_2fc.y = (float)pCVar1;
  local_2fc.z = (float)pCVar1;
  local_1b8.x = (float)pCVar1;
  local_1b8.y = (float)pCVar1;
  local_1b8.z = (float)pCVar1;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(param_2,DAT_007e1a50);
  if (pCVar1 != (CDemonActor *)0x0) {
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_ffffed50);
    pfVar7 = local_4b8;
    pfVar11 = &local_4d0;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar11 = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
      pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
    }
    local_140 = local_4d0 + local_4c4;
    local_13c[0] = local_4cc + (float)local_4c0;
    local_13c[1] = local_4c8 + local_4bc;
    local_494 = local_4d0 + local_4c4;
    local_490[(uint)bVar12 * -2] = local_13c[(uint)bVar12 * -2];
    local_490[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         local_13c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    local_470 = (CDemonActor *)(local_494 * _DAT_005cd4cb);
    local_46c[0] = local_490[0] * _DAT_005cd4cb;
    local_46c[1] = local_490[1] * _DAT_005cd4cb;
    local_230.x = local_494 * _DAT_005cd4cb;
    *(float *)((int)&local_230 + (uint)bVar12 * -8 + 4) = local_46c[(uint)bVar12 * -2];
    *(float *)((int)&local_230 + ((uint)bVar12 * -2 + (uint)bVar12 * -2 + 1) * 4 + 4) =
         local_46c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    if (&local_1b8 != &local_230) {
      local_1b8.x = local_230.x;
      local_1b8.y = local_230.y;
      local_1b8.z = local_230.z;
    }
    fVar3 = pCVar1[5].orient.vec.x;
    if (fVar3 != 2.8026e-45) {
      if (fVar3 == 1.4013e-45) {
        if (param_3 == 0.0) {
          core_xform_cpp_buildRotationY_FUN_00584ff0(-1.5707964,&local_c50);
          pCVar6 = &local_c50;
LAB_00520ba3:
          pCVar9 = &local_d40;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            pCVar9->m[0].w = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
            pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
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
                  (&local_d40,
                   (CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[iVar4].m,
                   &local_530);
        pCVar6 = &local_530;
        pCVar9 = &local_d40;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          pCVar9->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&local_d40,in_stack_ffffed58);
        local_8c.x = (float)local_290;
        local_94[(uint)bVar12 * -2 + 3] = (CDemonActor *)afStack_28c[(uint)bVar12 * -2];
        local_94[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
             (CDemonActor *)afStack_28c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        if (&local_2fc != (CVector3f *)(local_94 + 2)) {
          local_2fc.x = local_8c.x;
          local_2fc.y = local_8c.y;
          local_2fc.z = local_8c.z;
        }
        local_1b8.z = local_4bc * (float)_DAT_005cd4d7 + local_4c8 * (float)_DAT_005cd4cf;
        goto LAB_0052083a;
      }
      if (fVar3 != 4.2039e-45) {
        _DAT_01d71de0 = "..\\core\\prye.cpp";
        _DAT_01d71de4 = 0x1050;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Don't know how to carry light %s");
        goto LAB_0052083a;
      }
    }
    local_1b8.y = (float)local_4c0;
  }
LAB_0052083a:
  iVar5 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar5 != 0) {
    local_440 = 0xbdb87c8b;
    local_43c[1] = 0.649052;
    local_43c[0] = -0.242916;
    local_224.y = -0.161673;
    local_224.x = 0.414782;
    local_224.z = -0.489897;
    local_d4.x = -0.0900813;
    *(float *)((int)&local_d4 + (uint)bVar12 * -8 + 4) = local_43c[(uint)bVar12 * -2];
    *(float *)((int)&local_d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         local_43c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    local_2c0 = 0.30057;
    local_2bc[1] = 0.64525;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
              (&local_740,&local_224,&local_d4);
    local_2bc[0] = -0.133049;
    pCVar14 = &local_434;
    local_320.x = 0.385392;
    local_434.x = local_2c0;
    *(float *)((int)&local_434 + (uint)bVar12 * -8 + 4) = local_2bc[(uint)bVar12 * -2];
    *(float *)((int)&local_434 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         local_2bc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    local_320.y = -0.0122009;
    local_320.z = -0.49418;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940(&local_ef0,&local_320,pCVar14)
    ;
    pCVar15 = (param_1->model).bone_transform.bone_model_matrices[iVar4].m;
    core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_005854a0(&local_740);
    pfVar7 = local_6b0;
    pCVar6 = &local_cb0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar6->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_cb0,(CMatrix3x4f *)pCVar15,&local_7d0);
    pCVar6 = &local_7d0;
    pCVar9 = &local_5c0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar9->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&local_5c0,in_stack_ffffed5c);
    local_2d8.x = (float)local_134;
    local_2e0[(uint)bVar12 * -2 + 3] = (CDemonActor *)afStack_130[(uint)bVar12 * -2];
    local_2e0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         (CDemonActor *)afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    if (&local_2fc != (CVector3f *)(local_2e0 + 2)) {
      local_2fc.x = local_2d8.x;
      local_2fc.y = local_2d8.y;
      local_2fc.z = local_2d8.z;
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
    if (&local_29c != &local_50) {
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
            (&local_29c,(CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[iVar4].m)
  ;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
            (&local_f50,&local_29c,&local_2fc);
  core_xform_cpp_transformVector3x4_FUN_00583260(&local_1b8,&local_f50,&local_308);
  local_490[2] = local_308.x;
  local_490[(uint)bVar12 * -2 + 3] = *(float *)((int)&local_308 + (uint)bVar12 * -8 + 4);
  local_490[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
       *(float *)((int)&local_308 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
  iVar4 = 0xc;
  local_40[2] = local_29c.x - local_490[2];
  local_40[3] = local_29c.y - local_490[3];
  local_30 = local_29c.z - local_480;
  local_244[2] = local_29c.x - local_490[2];
  local_244[(uint)bVar12 * -2 + 3] = local_40[(uint)bVar12 * -2 + 3];
  local_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
       local_40[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
  pfVar7 = local_bf0;
  pCVar6 = &local_f50;
  local_f50.m[0].z = local_f50.m[0].z + local_244[2];
  local_f50.m[1].z = local_f50.m[1].z + local_244[3];
  local_f50.m[2].z = local_f50.m[2].z + local_234;
LAB_0051f655:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
  }
  pfVar7 = local_bf0;
  pfVar11 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar11 = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar12 * -2 + 1;
    pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
  }
  return unaff_ESI;
}
