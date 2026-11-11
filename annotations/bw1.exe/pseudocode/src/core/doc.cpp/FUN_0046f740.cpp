// Name: core_doc.cpp_FUN_0046f740
// Address: 0046f740
// Address Range: [[0046f740, 00470740]]
// Convention: unknown
// Signature: float * core_doc_cpp_FUN_0046f740(CCharacter *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_doc_cpp_FUN_0046f740(CCharacter *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  int iVar4;
  int iVar5;
  float *unaff_ESI;
  CMatrix3x4f *pCVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_12c8 [42];
  int aiStackY_1220 [9];
  float afStackY_11fc [111];
  int aiStackY_1040 [6];
  float afStackY_1028 [102];
  CMatrix3x4f *pCVar12;
  CVector3f *pCVar13;
  CMatrix3x4f local_e50;
  CMatrix3x4f local_e20;
  CMatrix3x4f local_df0;
  uint local_dc0 [12];
  uint local_d90 [12];
  uint local_d60 [12];
  uint local_d30 [12];
  CMatrix3x4f local_d00;
  CMatrix3x4f local_cd0;
  uint local_ca0 [12];
  uint local_c70 [12];
  CMatrix3x4f local_c40;
  CMatrix3x4f local_c10;
  uint local_be0 [12];
  uint local_bb0 [12];
  uint local_b80 [12];
  uint local_b50 [12];
  CMatrix3x4f local_b20;
  uint local_af0 [12];
  CMatrix3x4f local_ac0;
  uint local_a90 [12];
  CMatrix3x4f local_a60;
  CMatrix3x4f local_a30;
  uint local_a00 [12];
  CMatrix3x4f local_9d0;
  uint local_9a0 [12];
  uint local_970 [12];
  uint local_940 [12];
  uint local_910 [12];
  uint local_8e0 [12];
  CMatrix3x4f local_8b0;
  CMatrix3x4f local_880;
  CMatrix3x4f local_850;
  uint local_820 [12];
  float local_7f0 [12];
  CMatrix3x4f local_7c0;
  uint local_790 [12];
  CMatrix3x4f local_760;
  CMatrix3x4f local_730;
  uint local_700 [12];
  uint local_6d0 [12];
  CMatrix3x4f local_6a0;
  CMatrix3x4f local_670;
  CMatrix3x4f local_640;
  uint local_610 [12];
  uint local_5e0 [12];
  CMatrix3x4f local_5b0;
  uint local_580 [12];
  uint local_550 [12];
  uint local_520 [12];
  CMatrix3x4f local_4f0;
  uint local_4c0 [12];
  uint local_490 [12];
  CMatrix3x4f local_460;
  CMatrix3x4f local_430;
  uint local_400 [12];
  uint local_3d0 [12];
  uint local_3a0 [12];
  CMatrix3x4f local_370;
  uint local_340 [12];
  float local_310 [6];
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  CVector3f local_2e0;
  CVector3f local_2d4;
  uint local_2c8;
  float local_2c4 [4];
  float local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  CVector3f local_2a4;
  CVector3f local_298;
  CVector3f local_28c;
  CVector3f local_280;
  CVector3f local_274;
  CVector3f local_268;
  CVector3f local_25c;
  CVector3f local_250;
  float local_244;
  float local_240 [2];
  CVector3f local_238;
  CVector3f local_22c;
  CVector3f local_220;
  CVector3f local_214;
  CVector3f local_208;
  float local_1fc;
  float afStack_1f8 [2];
  CVector3f local_1f0;
  CVector3f local_1e4;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  CVector3f local_1cc;
  CVector3f local_1c0;
  CVector3f local_1b4;
  CVector3f local_1a8;
  CVector3f local_19c;
  CVector3f local_190;
  float local_184;
  float local_180 [6];
  float local_168;
  float local_164;
  CVector3f local_160;
  uint local_154;
  float local_150 [11];
  float local_124;
  uint local_120;
  uint local_11c;
  CVector3f local_118;
  uint local_10c;
  float local_108 [2];
  CVector3f local_100;
  float local_f4;
  float local_f0;
  float local_ec;
  CVector3f local_e8;
  CVector3f local_dc;
  uint local_d0;
  float local_cc [4];
  float local_bc;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c [5];
  CVector3f local_88;
  uint local_7c;
  float local_78 [2];
  CVector3f local_70;
  CVector3f local_64;
  float local_58;
  int local_54 [2];
  CVector3f local_4c;
  uint local_40;
  float local_3c [8];
  
  bVar11 = 0;
  iVar4 = param_1->carry_hands[param_3].bone_index;
  local_22c.x = (float)core_actor_cpp_castToClassHash_FUN_0040c600
                                 (param_2,g_CWeaponClassInfo.name_hash);
  if (local_22c.x != 0.0) {
    iVar2 = *(int *)((int)local_22c.x + 0x2e0);
    pCVar6 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
    if (iVar2 == 1) {
      pCVar3 = &local_1a8;
      local_40 = 0x3e44330d;
      local_3c[1] = 0.969617;
      local_3c[0] = 2.2981;
      local_ac.y = -0.235855;
      local_1a8.x = 0.191601;
      *(float *)((int)&local_1a8 + (uint)bVar11 * -8 + 4) = local_3c[(uint)bVar11 * -2];
      *(float *)((int)&local_1a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_ac.z = -0.412366;
      local_ac.x = 0.53949;
      local_150[4] = 1.83791;
      core_xform_cpp_FUN_005b5760(&local_9d0,&local_ac,pCVar3);
      local_150[3] = 0.934256;
      pCVar3 = &local_28c;
      local_150[2] = -0.414435;
      local_280.x = 0.40292;
      pCVar13 = &local_280;
      local_280.y = 0.095011;
      pCVar12 = &local_8b0;
      local_28c.x = -0.414435;
      *(float *)((int)&local_28c + (uint)bVar11 * -8 + 4) = local_150[(uint)bVar11 * -2 + 3];
      *(float *)((int)&local_28c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      local_280.z = 0.26139;
      core_xform_cpp_FUN_005b5760(pCVar12,pCVar13,pCVar3);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_9d0,&local_8b0,1.0 - fVar1,pCVar6);
      puVar7 = local_6d0;
      puVar9 = local_790;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_790);
      pCVar6 = &local_670;
    }
    else if (iVar2 == 9) {
      local_9c[2] = -0.435101;
      local_9c[4] = -2.84015;
      local_9c[3] = -0.263934;
      local_88.x = -0.170349;
      local_88.y = -0.253904;
      local_b8.x = -0.435101;
      *(float *)((int)&local_b8 + (uint)bVar11 * -8 + 4) = local_9c[(uint)bVar11 * -2 + 3];
      *(float *)((int)&local_b8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      local_88.z = -0.326223;
      local_124 = -0.0120173;
      core_xform_cpp_FUN_005b5760(&local_640,&local_88,&local_b8);
      local_11c = 0x3fc9f99c;
      local_120 = 0x3fca29c7;
      local_1f0.x = 0.665317;
      local_70.x = local_124;
      *(float *)((int)&local_70 + (uint)bVar11 * -8 + 4) = local_150[(uint)bVar11 * -2 + 0xc];
      *(float *)((int)&local_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
      local_1f0.y = -0.0635326;
      local_1f0.z = 0.227495;
      core_xform_cpp_FUN_005b5760(&local_ac0,&local_1f0,&local_70);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_640,&local_ac0,1.0 - fVar1,pCVar6);
      puVar7 = (uint *)&stack0xfffff180;
      puVar9 = local_580;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_580);
      pCVar6 = &local_e20;
    }
    else if (iVar2 == 2) {
      pCVar3 = &local_2a4;
      local_10c = 0x3e3b65aa;
      local_108[1] = 1.66375;
      local_108[0] = 2.24986;
      local_298.y = -0.0957868;
      local_2a4.x = 0.183005;
      *(float *)((int)&local_2a4 + (uint)bVar11 * -8 + 4) = local_108[(uint)bVar11 * -2];
      *(float *)((int)&local_2a4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_298.z = -0.233186;
      local_298.x = 0.412537;
      local_3c[4] = 1.72744;
      core_xform_cpp_FUN_005b5760(&local_df0,&local_298,pCVar3);
      local_3c[3] = 1.34731;
      pCVar3 = &local_25c;
      local_3c[2] = -0.288645;
      local_268.x = 0.483848;
      pCVar13 = &local_268;
      local_268.y = 0.0729828;
      pCVar12 = &local_cd0;
      local_25c.x = -0.288645;
      *(float *)((int)&local_25c + (uint)bVar11 * -8 + 4) = local_3c[(uint)bVar11 * -2 + 3];
      *(float *)((int)&local_25c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      local_268.z = 0.0731532;
      core_xform_cpp_FUN_005b5760(pCVar12,pCVar13,pCVar3);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_df0,&local_cd0,1.0 - fVar1,pCVar6);
      puVar7 = local_550;
      puVar9 = local_400;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_400);
      pCVar6 = &local_4f0;
    }
    else if (iVar2 == 4) {
      local_2c8 = 0x3e44c7f3;
      local_2c4[1] = 1.6361;
      local_2c4[0] = 2.30755;
      local_64.x = 0.334258;
      local_64.y = -0.18522;
      local_1c0.x = 0.192169;
      *(float *)((int)&local_1c0 + (uint)bVar11 * -8 + 4) = local_2c4[(uint)bVar11 * -2];
      *(float *)((int)&local_1c0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_64.z = -0.409418;
      local_58 = -0.464445;
      core_xform_cpp_FUN_005b5760(&local_7c0,&local_64,&local_1c0);
      local_54[1] = 0x3fe3381d;
      local_54[0] = 0x3f93df3b;
      local_190.x = 0.381162;
      local_238.x = local_58;
      *(int *)((int)&local_238 + (uint)bVar11 * -8 + 4) = local_54[(uint)bVar11 * -2];
      *(int *)((int)&local_238 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_54[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_190.y = 0.0692056;
      local_190.z = -0.225393;
      core_xform_cpp_FUN_005b5760(&local_6a0,&local_190,&local_238);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_7c0,&local_6a0,1.0 - fVar1,pCVar6);
      puVar7 = local_d30;
      puVar9 = local_af0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_af0);
      pCVar6 = &local_760;
    }
    else if (iVar2 == 3) {
      local_e8.x = 0.238337;
      local_e8.y = -0.0656786;
      local_e8.z = 0.0335054;
      local_7c = 0xbf3e6506;
      local_78[1] = -0.808348;
      pCVar3 = &local_dc;
      pCVar13 = &local_e8;
      pCVar12 = &local_d00;
      local_78[0] = 0.693486;
      local_dc.x = -0.743729;
      *(float *)((int)&local_dc + (uint)bVar11 * -8 + 4) = local_78[(uint)bVar11 * -2];
      *(float *)((int)&local_dc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_78[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      core_xform_cpp_FUN_005b5760(pCVar12,pCVar13,pCVar3);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_d00,pCVar6);
      pCVar6 = &local_5b0;
    }
    else if (iVar2 == 5) {
      pCVar3 = &local_1e4;
      local_d0 = 0xbaa302fa;
      local_cc[1] = 1.58617;
      local_cc[0] = 1.57504;
      local_160.y = -0.0611557;
      local_1e4.x = -0.00124368;
      *(float *)((int)&local_1e4 + (uint)bVar11 * -8 + 4) = local_cc[(uint)bVar11 * -2];
      *(float *)((int)&local_1e4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_160.z = 0.0786577;
      local_160.x = 0.17933;
      core_xform_cpp_FUN_005b5760(&local_850,&local_160,pCVar3);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_850,pCVar6);
      pCVar6 = &local_730;
    }
    else if (iVar2 == 7) {
      local_154 = 0xbc09b6b8;
      local_150[1] = 0.0168502;
      local_150[0] = 0.0531937;
      local_1b4.x = 0.15802;
      local_1b4.y = -0.0925491;
      local_250.x = -0.00840538;
      *(float *)((int)&local_250 + (uint)bVar11 * -8 + 4) = local_150[(uint)bVar11 * -2];
      *(float *)((int)&local_250 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_1b4.z = -0.13807;
      local_150[5] = -0.00840538;
      core_xform_cpp_FUN_005b5760(&local_430,&local_1b4,&local_250);
      local_150[7] = 0.0168502;
      local_150[6] = 0.0531937;
      local_220.x = 0.15802;
      local_2e0.x = local_150[5];
      *(float *)((int)&local_2e0 + (uint)bVar11 * -8 + 4) = local_150[(uint)bVar11 * -2 + 6];
      *(float *)((int)&local_2e0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           local_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
      local_220.y = -0.0925491;
      local_220.z = -0.13807;
      core_xform_cpp_FUN_005b5760(&local_460,&local_220,&local_2e0);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,0);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_430,&local_460,1.0 - fVar1,pCVar6);
      puVar7 = local_ca0;
      puVar9 = local_d60;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_d60);
      pCVar6 = &local_c40;
    }
    else if (param_3 == 0) {
      core_xform_cpp_FUN_005b5760(&local_c10,(CVector3f *)&DAT_01b68804,(CVector3f *)&DAT_02c8af28);
      core_xform_cpp_buildRotationX_FUN_005b6d90(0x3fc90fdb,&local_c10,pCVar6);
      puVar7 = local_520;
      puVar9 = local_bb0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005b6e10(0xbfc90fdb,local_bb0);
      puVar7 = local_dc0;
      puVar9 = local_be0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_be0);
      puVar7 = local_d90;
      puVar9 = local_b80;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_b80);
      puVar7 = local_a90;
      puVar9 = local_b50;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_b50);
      pCVar6 = &local_a60;
    }
    else {
      core_xform_cpp_FUN_005b5760(&local_a30,(CVector3f *)&DAT_01b687f8,(CVector3f *)&DAT_02c8af28);
      core_xform_cpp_buildRotationX_FUN_005b6d90(0x3fc90fdb,&local_a30,pCVar6);
      puVar7 = local_940;
      puVar9 = local_340;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005b6e10(0x3fc42871,local_340);
      puVar7 = local_910;
      puVar9 = local_a00;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_a00);
      puVar7 = local_8e0;
      puVar9 = local_9a0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_9a0);
      puVar7 = local_3a0;
      puVar9 = local_970;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_970);
      pCVar6 = &local_880;
    }
    iVar4 = 0xc;
    pfVar8 = local_7f0;
    goto LAB_0046f8ec;
  }
  local_22c.y = local_22c.x;
  local_22c.z = local_22c.x;
  local_1d8 = local_22c.x;
  local_1d4 = local_22c.x;
  local_1d0 = local_22c.x;
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(param_2,DAT_007c5330);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
    pfVar8 = local_310;
    pfVar10 = &local_2f8;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
    }
    local_f4 = local_2f8 + local_2ec;
    local_f0 = local_2f4 + local_2e8;
    local_ec = local_2f0 + local_2e4;
    local_cc[2] = local_2f8 + local_2ec;
    local_cc[(uint)bVar11 * -2 + 3] = local_108[(uint)bVar11 * -2 + 6];
    local_cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         local_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    local_244 = local_cc[2] * _DAT_005da0e8;
    local_240[0] = local_cc[3] * _DAT_005da0e8;
    local_240[1] = local_bc * _DAT_005da0e8;
    local_180[5] = local_cc[2] * _DAT_005da0e8;
    local_180[(uint)bVar11 * -2 + 6] = local_240[(uint)bVar11 * -2];
    local_180[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         local_240[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (&local_1d8 != local_180 + 5) {
      local_1d8 = local_180[5];
      local_1d4 = local_168;
      local_1d0 = local_164;
    }
    iVar5 = *(int *)(iVar2 + 0x678);
    if (iVar5 != 2) {
      if (iVar5 == 1) {
        if (param_3 == 0) {
          core_xform_cpp_buildRotationY_FUN_005b6e10(0xbfc90fdb);
          puVar7 = local_610;
LAB_004705bf:
          puVar9 = local_700;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
        }
        else {
          if (param_3 == 1) {
            core_xform_cpp_buildRotationY_FUN_005b6e10(0x3fc90fdb);
            puVar7 = local_5e0;
            goto LAB_004705bf;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(local_700);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                  (local_700,(param_1->model).bone_transform.bone_model_matrices + iVar4);
        puVar7 = local_820;
        puVar9 = local_700;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
        core_xform_cpp_matrixToEulerAngles_FUN_005b5930(local_700);
        local_274.x = local_1fc;
        *(float *)((int)&local_274 + (uint)bVar11 * -8 + 4) = afStack_1f8[(uint)bVar11 * -2];
        *(float *)((int)&local_274 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_1f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        if (&local_22c != &local_274) {
          local_22c.x = local_274.x;
          local_22c.y = local_274.y;
          local_22c.z = local_274.z;
        }
        local_1d0 = local_2e4 * (float)_DAT_005da0f4 + local_2f0 * (float)_DAT_005da0ec;
        goto LAB_00470270;
      }
      if (iVar5 != 3) {
        _DAT_01d1d400 = "..\\core\\doc.cpp";
        _DAT_01d1d404 = 0xe3d;
        core_main_c_FUN_005030e0("Don't know how to carry light %s",iVar2);
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
    local_2d4.x = 0.414782;
    local_2d4.y = -0.161673;
    local_214.x = -0.0900813;
    *(float *)((int)&local_214 + (uint)bVar11 * -8 + 4) = local_2c4[(uint)bVar11 * -2 + 6];
    *(float *)((int)&local_214 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    local_2d4.z = -0.489897;
    local_180[2] = 0.30057;
    core_xform_cpp_FUN_005b5760(&local_370,&local_2d4,&local_214);
    local_208.y = -0.0122009;
    local_180[4] = 0.64525;
    pCVar3 = &local_118;
    local_180[3] = -0.133049;
    local_118.x = local_180[2];
    *(float *)((int)&local_118 + (uint)bVar11 * -8 + 4) = local_180[(uint)bVar11 * -2 + 3];
    *(float *)((int)&local_118 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_180[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    local_208.x = 0.385392;
    local_208.z = -0.49418;
    core_xform_cpp_FUN_005b5760(&local_e50,&local_208,pCVar3);
    pCVar6 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
    fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_370,&local_e50,1.0 - fVar1,pCVar6);
    puVar7 = local_4c0;
    puVar9 = local_3d0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_3d0);
    puVar7 = local_490;
    puVar9 = local_c70;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(local_c70);
    local_100.x = local_3c[5];
    local_108[(uint)bVar11 * -2 + 3] = local_3c[(uint)bVar11 * -2 + 6];
    local_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         local_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    if (&local_22c != (CVector3f *)(local_108 + 2)) {
      local_22c.x = local_100.x;
      local_22c.y = local_100.y;
      local_22c.z = local_100.z;
    }
  }
  if (param_3 == 0) {
    fVar1 = -0.4;
    local_4c.y = (float)param_3;
    local_4c.z = (float)param_3;
    pCVar3 = (CVector3f *)(local_54 + 2);
    local_4c.x = -0.4;
LAB_0047045f:
    if (&local_1cc != pCVar3) {
      local_1cc.y = 0.0;
      local_1cc.z = 0.0;
      local_1cc.x = fVar1;
    }
  }
  else {
    if (param_3 == 1) {
      fVar1 = 0.4;
      local_19c.y = 0.0;
      local_19c.z = 0.0;
      pCVar3 = &local_19c;
      local_19c.x = 0.4;
      goto LAB_0047045f;
    }
    local_1cc.y = 0.0;
    local_1cc.x = 0.0;
    local_1cc.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005b5100
            (&local_1cc,(param_1->model).bone_transform.bone_model_matrices + iVar4);
  core_xform_cpp_FUN_005b5760(&local_b20,&local_1cc,&local_22c);
  core_xform_cpp_FUN_005b5080(&local_1d8,&local_b20);
  local_2c4[2] = local_150[8];
  local_2c4[(uint)bVar11 * -2 + 3] = local_150[(uint)bVar11 * -2 + 9];
  local_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       local_150[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  iVar4 = 0xc;
  local_184 = local_1cc.x - local_2c4[2];
  local_180[0] = local_1cc.y - local_2c4[3];
  local_180[1] = local_1cc.z - local_2b4;
  local_a0 = local_1cc.x - local_2c4[2];
  local_9c[(uint)bVar11 * -2] = local_180[(uint)bVar11 * -2];
  local_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_180[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  pfVar8 = local_7f0;
  pCVar6 = &local_b20;
  local_b20.m[0].z = local_b20.m[0].z + local_a0;
  local_b20.m[1].z = local_b20.m[1].z + local_9c[0];
  local_b20.m[2].z = local_b20.m[2].z + local_9c[1];
LAB_0046f8ec:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar8 = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar11 * -2 + 1) * 4);
    pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
  }
  pfVar8 = local_7f0;
  pfVar10 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar10 = *pfVar8;
    pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
  }
  return unaff_ESI;
}
