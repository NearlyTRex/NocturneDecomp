// Name: core_stranger.cpp_FUN_00568500
// Address: 00568500
// Address Range: [[00568500, 005695f6]]
// Convention: unknown
// Signature: float * core_stranger_cpp_FUN_00568500(CCharacter *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_stranger_cpp_FUN_00568500(CCharacter *param_1,CDemonActor *param_2,int param_3)

{
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  float *unaff_ESI;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar8;
  uint *puVar9;
  CMatrix3x4f *pCVar10;
  float *pfVar11;
  uint *puVar12;
  byte bVar13;
  float afStackY_12e8 [18];
  CDemonActor *apCStackY_12a0 [12];
  float afStackY_1270 [57];
  CDemonActor *apCStackY_118c [6];
  float afStackY_1174 [15];
  CDemonActor *apCStackY_1138 [9];
  float afStackY_1114 [153];
  byte *puVar14;
  CDemonActor **ppCVar15;
  CQuaternion4f *pCVar16;
  CBoundingBox3D *in_stack_fffff160;
  CMatrix3x4f local_e70;
  CMatrix3x4f local_e40;
  CMatrix3x4f local_e10;
  CMatrix3x4f local_de0;
  CMatrix3x4f local_db0;
  CMatrix3x4f local_d80;
  CMatrix3x4f local_d50;
  CMatrix3x4f local_d20;
  float local_cf0 [12];
  CMatrix3x4f local_cc0;
  CMatrix3x4f local_c90;
  CMatrix3x4f local_c60;
  CMatrix3x4f local_c30;
  CMatrix3x4f local_c00;
  byte local_bd0 [48];
  float local_ba0 [12];
  CMatrix3x4f local_b70;
  CMatrix3x4f local_b40;
  CMatrix3x4f local_b10;
  CMatrix3x4f local_ae0;
  float local_ab0 [12];
  byte local_a80 [96];
  CMatrix3x4f local_a20;
  byte local_9f0 [48];
  CMatrix3x4f local_9c0;
  CMatrix3x4f local_990;
  float local_960 [12];
  CMatrix3x4f local_930;
  CMatrix3x4f local_900;
  byte local_8d0 [48];
  CMatrix3x4f local_8a0;
  byte local_870 [48];
  byte local_840 [48];
  CMatrix3x4f local_810;
  float local_7e0 [12];
  CMatrix3x4f local_7b0;
  CMatrix3x4f local_780;
  CMatrix3x4f local_750;
  CMatrix3x4f local_720;
  CMatrix3x4f local_6f0;
  CMatrix3x4f local_6c0;
  CMatrix3x4f local_690;
  byte local_660 [48];
  float local_630 [12];
  CMatrix3x4f local_600;
  CMatrix3x4f local_5d0;
  CMatrix3x4f local_5a0;
  CMatrix3x4f local_570;
  byte local_540 [48];
  CMatrix3x4f local_510;
  CMatrix3x4f local_4e0;
  float local_4b0 [12];
  CMatrix3x4f local_480;
  CMatrix3x4f local_450;
  CMatrix3x4f local_420;
  byte local_3f0 [48];
  CMatrix3x4f local_3c0;
  CMatrix3x4f local_390;
  uint local_360;
  float local_35c;
  float local_350;
  uint local_348 [6];
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  CDemonActor *local_320;
  float local_31c;
  float local_318 [6];
  CDemonActor *local_300;
  float local_2fc [11];
  float local_2d0 [3];
  float local_2c4;
  float local_2c0;
  float local_2bc;
  CDemonActor *local_2b8;
  CDemonActor *local_2b4 [8];
  CDemonActor *local_294;
  uint local_290;
  uint local_28c;
  float local_288;
  float local_284 [4];
  float local_274;
  CDemonActor *local_270;
  CDemonActor *local_26c;
  CDemonActor *local_268;
  float local_264;
  float local_260 [2];
  CDemonActor *local_258;
  float afStack_254 [5];
  float local_240;
  float local_23c;
  float local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  float local_228;
  float local_21c [3];
  uint local_210;
  uint local_20c;
  uint local_208;
  float local_204 [6];
  float local_1ec [3];
  float local_1e0 [4];
  float local_1d0 [5];
  CVector3f local_1bc;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  CDemonActor *local_1a4;
  CDemonActor *local_1a0 [5];
  float local_18c;
  float local_188 [5];
  uint local_174;
  float local_168 [6];
  CDemonActor *local_150;
  CDemonActor *local_14c [9];
  float afStack_128 [14];
  uint local_f0;
  uint local_ec;
  uint local_e8;
  float local_e4;
  float local_e0 [5];
  CVector3f local_cc;
  CVector3f local_c0;
  uint local_b4;
  float local_b0 [8];
  uint local_90;
  uint local_8c;
  uint local_88;
  float local_84 [4];
  float local_74 [4];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  CDemonActor *local_54;
  CDemonActor *local_50;
  CDemonActor *local_4c;
  float local_48;
  float afStack_44 [8];
  
  bVar13 = 0;
  iVar3 = param_1->carry_hands[param_3].bone_index;
  local_270 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CWeaponClassInfo.name_hash);
  if (local_270 != (CDemonActor *)0x0) {
    pCVar16 = (param_1->model).bone_transform.bone_model_matrices[iVar3].m;
    iVar3 = local_270[1].particle_systems[0].stop_after_fade;
    if (iVar3 == 1) {
      afStack_128[8] = 0.191601;
      afStack_128[10] = 0.969617;
      afStack_128[9] = 2.2981;
      local_204[0] = 0.53949;
      local_1a0[2] = (CDemonActor *)0x3e44330d;
      local_1a0[(uint)bVar13 * -2 + 3] = (CDemonActor *)afStack_128[(uint)bVar13 * -2 + 9];
      local_1a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           (CDemonActor *)afStack_128[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      local_204[1] = -0.235855;
      local_204[2] = -0.412366;
      core_xform_cpp_FUN_00591c10(local_9f0,afStack_254 + 0x14,local_1a0 + 2);
      local_2fc[5] = -0.414435;
      local_2fc[7] = 1.83791;
      ppCVar15 = local_2b4 + 5;
      local_2fc[6] = 0.934256;
      local_2b4[5] = (CDemonActor *)0xbed430d3;
      local_2b4[(uint)bVar13 * -2 + 6] = (CDemonActor *)local_2fc[(uint)bVar13 * -2 + 6];
      local_2b4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           (CDemonActor *)local_2fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      local_14c[7] = (CDemonActor *)0x3e85d4e9;
      local_14c[5] = (CDemonActor *)0x3ece4b88;
      local_14c[6] = (CDemonActor *)0x3dc29521;
      core_xform_cpp_FUN_00591c10(local_bd0,local_14c + 5,ppCVar15);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_9f0,local_bd0,1.0 - fVar1);
      pfVar6 = local_cf0;
      pCVar5 = &local_7b0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar5->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_7b0,(CMatrix3x4f *)pCVar16,&local_c90);
      pCVar5 = &local_c90;
    }
    else if (iVar3 == 2) {
      pfVar6 = local_188 + 2;
      local_90 = 0x3e3b65aa;
      local_88 = 0x3fd4f5c3;
      local_8c = 0x400ffdb5;
      local_2fc[3] = -0.0957868;
      local_188[2] = 0.183005;
      local_188[(uint)bVar13 * -2 + 3] = local_b0[(uint)bVar13 * -2 + 9];
      local_188[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           local_b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      local_2fc[4] = -0.233186;
      local_2fc[2] = 0.412537;
      local_b0[1] = 1.72744;
      core_xform_cpp_FUN_00591c10(local_660,local_2fc + 2,pfVar6);
      local_b0[0] = 1.34731;
      pfVar11 = afStack_254 + 0x17;
      local_b4 = 0xbe93c947;
      local_84[0] = 0.483848;
      pfVar6 = local_b0 + 0xb;
      local_84[1] = 0.0729828;
      puVar14 = local_540;
      local_204[3] = -0.288645;
      afStack_254[(uint)bVar13 * -2 + 0x18] = local_b0[(uint)bVar13 * -2];
      afStack_254[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
           local_b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      local_84[2] = 0.0731532;
      core_xform_cpp_FUN_00591c10(puVar14,pfVar6,pfVar11);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_660,local_540,1.0 - fVar1);
      pfVar6 = local_960;
      pCVar5 = &local_a20;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar5->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_a20,(CMatrix3x4f *)pCVar16,&local_900);
      pCVar5 = &local_900;
    }
    else if (iVar3 == 4) {
      afStack_128[2] = 0.192169;
      afStack_128[4] = 1.6361;
      afStack_128[3] = 2.30755;
      local_168[3] = 0.334258;
      local_168[4] = -0.18522;
      local_2d0[0] = 0.192169;
      local_2fc[(uint)bVar13 * -2 + 0xc] = afStack_128[(uint)bVar13 * -2 + 3];
      local_2fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_128[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      local_168[5] = -0.409418;
      afStack_44[5] = -0.464445;
      core_xform_cpp_FUN_00591c10(local_8d0,local_188 + 0xb,local_2fc + 0xb);
      afStack_44[7] = 1.77515;
      afStack_44[6] = 1.15525;
      local_294 = (CDemonActor *)0x3ec327aa;
      local_21c[0] = afStack_44[5];
      afStack_254[(uint)bVar13 * -2 + 0xf] = afStack_44[(uint)bVar13 * -2 + 6];
      afStack_254[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
           afStack_44[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      local_290 = 0x3d8dbbaa;
      local_28c = 0xbe66cd6c;
      core_xform_cpp_FUN_00591c10(local_3f0,local_2b4 + 8,afStack_254 + 0xe);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_8d0,local_3f0,1.0 - fVar1);
      pfVar6 = local_ba0;
      pCVar5 = &local_c60;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar5->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_c60,(CMatrix3x4f *)pCVar16,&local_420);
      pCVar5 = &local_420;
    }
    else if (iVar3 == 3) {
      local_1b0 = 0x3e740e9d;
      local_1ac = 0xbd868280;
      local_1a8 = 0x3d093cf5;
      local_210 = 0xbf3e6506;
      local_208 = 0xbf4eefe5;
      pfVar6 = afStack_254 + 0x1a;
      puVar9 = &local_1b0;
      pCVar5 = &local_b10;
      local_20c = 0x3f31884c;
      local_1ec[0] = -0.743729;
      afStack_254[(uint)bVar13 * -2 + 0x1b] = afStack_254[(uint)bVar13 * -2 + 0x12];
      afStack_254[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
           afStack_254[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
      core_xform_cpp_FUN_00591c10(pCVar5,puVar9,pfVar6);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_b10,(CMatrix3x4f *)pCVar16,&local_720);
      pCVar5 = &local_720;
    }
    else if (iVar3 == 5) {
      local_1d0[2] = 0.62;
      local_1d0[3] = 0.0;
      local_1d0[4] = 0.217;
      local_b0[3] = 1.57;
      pfVar6 = local_e0 + 2;
      local_b0[4] = -1.57;
      pfVar11 = local_1d0 + 2;
      pCVar5 = &local_5a0;
      local_b0[2] = 0.0;
      local_e0[2] = 0.0;
      local_e0[(uint)bVar13 * -2 + 3] = local_b0[(uint)bVar13 * -2 + 3];
      local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           local_b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      core_xform_cpp_FUN_00591c10(pCVar5,pfVar11,pfVar6);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_5a0,(CMatrix3x4f *)pCVar16,&local_8a0);
      pCVar5 = &local_8a0;
    }
    else if (iVar3 == 7) {
      local_234 = 0xbdb87c8b;
      local_22c = 0x3f262846;
      local_230 = 0xbe78bef9;
      local_168[0] = 0.414782;
      local_168[1] = -0.161673;
      local_2fc[8] = -0.0900813;
      local_2fc[(uint)bVar13 * -2 + 9] = afStack_254[(uint)bVar13 * -2 + 9];
      local_2fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
           afStack_254[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      local_168[2] = -0.489897;
      afStack_44[2] = 0.30057;
      core_xform_cpp_FUN_00591c10(local_870,local_188 + 8,local_2fc + 8);
      afStack_44[4] = 0.64525;
      afStack_44[3] = -0.133049;
      local_1e0[0] = 0.303704;
      afStack_128[0xb] = afStack_44[2];
      afStack_128[(uint)bVar13 * -2 + 0xc] = afStack_44[(uint)bVar13 * -2 + 3];
      afStack_128[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_44[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      local_1e0[1] = 0.0649791;
      local_1e0[2] = -0.273446;
      core_xform_cpp_FUN_00591c10(local_840,afStack_254 + 0x1d,afStack_128 + 0xb);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_870,local_840,1.0 - fVar1);
      pfVar6 = local_630;
      pCVar5 = &local_c30;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar5->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_c30,(CMatrix3x4f *)pCVar16,&local_510);
      pCVar5 = &local_510;
    }
    else if (param_3 == 0) {
      core_xform_cpp_FUN_00591c10(&local_ae0,&DAT_0264be20,&DAT_0265370c);
      pCVar5 = &local_ae0;
      core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_6f0);
      pCVar8 = &local_3c0;
      pCVar7 = &local_6f0;
      pCVar10 = &local_3c0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar10->m[0].w = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_6c0);
      pCVar7 = &local_6c0;
      pCVar10 = &local_570;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar10->m[0].w = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_570,pCVar8,&local_690);
      pCVar8 = &local_690;
      pCVar7 = &local_780;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar7->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_780,pCVar5,&local_450);
      pCVar5 = &local_450;
      pCVar8 = &local_750;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar5->m[0].w;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_750,(CMatrix3x4f *)pCVar16,&local_930);
      pCVar5 = &local_930;
    }
    else {
      core_xform_cpp_FUN_00591c10(&local_4e0,&DAT_0264be14,&DAT_0265370c);
      pCVar5 = &local_4e0;
      core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_e10);
      pCVar8 = (CMatrix3x4f *)&stack0xfffff160;
      pCVar7 = &local_e10;
      pfVar6 = (float *)&stack0xfffff160;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar6 = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
        pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_de0);
      pCVar7 = &local_de0;
      pCVar10 = &local_600;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar10->m[0].w = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_600,pCVar8,&local_db0);
      pCVar8 = &local_db0;
      pCVar7 = &local_e70;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar7->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_e70,pCVar5,&local_d80);
      pCVar5 = &local_d80;
      pCVar8 = &local_e40;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar5->m[0].w;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_e40,(CMatrix3x4f *)pCVar16,&local_d50);
      pCVar5 = &local_d50;
    }
    iVar3 = 0xc;
    pfVar6 = local_ab0;
    goto LAB_005686a7;
  }
  local_50 = (CDemonActor *)0x0;
  local_26c = local_270;
  local_268 = local_270;
  local_54 = local_270;
  local_4c = local_270;
  if (param_1->layer_action_index == 0xe) {
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,(param_1->model).bone_transform.bone_model_matrices[_DAT_0264be68].m);
    local_18c = afStack_254[2];
    local_188[(uint)bVar13 * -2] = afStack_254[(uint)bVar13 * -2 + 3];
    local_188[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_254[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,(param_1->model).bone_transform.bone_model_matrices[_DAT_0264be64].m);
    local_74[2] = local_228;
    local_74[(uint)bVar13 * -2 + 3] = afStack_254[(uint)bVar13 * -2 + 0xc];
    local_74[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_254[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
    local_264 = local_74[2] + local_18c;
    local_260[0] = local_74[3] + local_188[0];
    local_260[1] = local_64 + local_188[1];
    local_240 = local_74[2] + local_18c;
    afStack_254[(uint)bVar13 * -2 + 6] = local_260[(uint)bVar13 * -2];
    afStack_254[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         local_260[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    local_e4 = local_240 * _DAT_005eb955;
    local_e0[0] = local_23c * _DAT_005eb955;
    local_e0[1] = local_238 * _DAT_005eb955;
    local_288 = local_240 * _DAT_005eb955;
    local_284[(uint)bVar13 * -2] = local_e0[(uint)bVar13 * -2];
    local_284[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffff160);
    puVar9 = local_348;
    puVar12 = &local_360;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
    }
    local_284[1] = local_284[1] + _DAT_005eb96d;
    local_284[0] = local_284[0] - (local_350 - local_35c);
    fVar1 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005626f0(param_2);
    local_284[0] = fVar1 + local_284[0];
    core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(&local_c00);
    local_c00.m[0].z = local_288;
    local_c00.m[1].z = local_284[0];
    local_c00.m[2].z = local_284[1];
    if (*(int *)(param_1[2].flames[2].base.actor_name + 0x14) != 0) {
      pCVar5 = &local_c00;
      core_xform_cpp_buildRotationY_FUN_005932c0(3.1415927,&local_9c0);
      pCVar8 = &local_9c0;
      pCVar7 = &local_5d0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar7->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_5d0,pCVar5,&local_990);
      pCVar5 = &local_990;
      pCVar8 = &local_c00;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar5->m[0].w;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
      }
    }
    iVar3 = 0xc;
    pfVar6 = local_ab0;
    pCVar5 = &local_c00;
    goto LAB_005686a7;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,DAT_007bcc84);
  if (pCVar2 != (CDemonActor *)0x0) {
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffff160);
    pfVar6 = local_318;
    pfVar11 = &local_330;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar11 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
      pfVar11 = pfVar11 + (uint)bVar13 * -2 + 1;
    }
    local_1e0[3] = local_330 + local_324;
    local_1d0[0] = local_32c + (float)local_320;
    local_1d0[1] = local_328 + local_31c;
    local_284[2] = local_330 + local_324;
    local_284[(uint)bVar13 * -2 + 3] = local_1d0[(uint)bVar13 * -2];
    local_284[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         local_1d0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    local_300 = (CDemonActor *)(local_284[2] * _DAT_005eb955);
    local_2fc[0] = local_284[3] * _DAT_005eb955;
    local_2fc[1] = local_274 * _DAT_005eb955;
    local_1a4 = (CDemonActor *)(local_284[2] * _DAT_005eb955);
    local_1a0[(uint)bVar13 * -2] = (CDemonActor *)local_2fc[(uint)bVar13 * -2];
    local_1a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         (CDemonActor *)local_2fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    if (&local_270 != &local_1a4) {
      local_270 = local_1a4;
      local_26c = local_1a0[0];
      local_268 = local_1a0[1];
    }
    fVar1 = pCVar2[2].particle_systems[4].position.z;
    if (fVar1 != 2.8026e-45) {
      if (fVar1 == 1.4013e-45) {
        if (param_3 == 0) {
          core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_d20);
          pCVar5 = &local_d20;
LAB_00569474:
          pCVar8 = &local_810;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar8->m[0].w = pCVar5->m[0].w;
            pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
          }
        }
        else {
          if (param_3 == 1) {
            core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_cc0);
            pCVar5 = &local_cc0;
            goto LAB_00569474;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(&local_810);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&local_810,
                   (CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[iVar3].m,
                   &local_390);
        pCVar5 = &local_390;
        pCVar8 = &local_810;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar8->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
        local_2b8 = local_258;
        local_2b4[(uint)bVar13 * -2] = (CDemonActor *)afStack_254[(uint)bVar13 * -2];
        local_2b4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             (CDemonActor *)afStack_254[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        if (&local_54 != &local_2b8) {
          local_54 = local_2b8;
          local_50 = local_2b4[0];
          local_4c = local_2b4[1];
        }
        local_268 = (CDemonActor *)
                    (local_31c * (float)_DAT_005eb965 + local_328 * (float)_DAT_005eb95d);
        goto LAB_00568f2d;
      }
      if (fVar1 != 4.2039e-45) {
        _DAT_01d046a0 = "..\\core\\stranger.cpp";
        _DAT_01d046a4 = 0xc40;
        core_main_c_FUN_004e4500();
        goto LAB_00568f2d;
      }
    }
    local_26c = local_320;
  }
LAB_00568f2d:
  iVar4 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar4 != 0) {
    local_2b4[2] = (CDemonActor *)0xbdb87c8b;
    local_2b4[4] = (CDemonActor *)0x3f262846;
    local_2b4[3] = (CDemonActor *)0xbe78bef9;
    afStack_128[5] = 0.414782;
    afStack_128[6] = -0.161673;
    local_b0[5] = -0.0900813;
    local_b0[(uint)bVar13 * -2 + 6] = (float)local_2b4[(uint)bVar13 * -2 + 3];
    local_b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         (float)local_2b4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    afStack_128[7] = -0.489897;
    local_14c[2] = (CDemonActor *)0x3e99e450;
    core_xform_cpp_FUN_00591c10();
    local_14c[4] = (CDemonActor *)0x3f252f1b;
    local_14c[3] = (CDemonActor *)0xbe083dff;
    local_f0 = 0x3ec5521a;
    local_174 = local_14c[2];
    local_188[(uint)bVar13 * -2 + 6] = (float)local_14c[(uint)bVar13 * -2 + 3];
    local_188[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         (float)local_14c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    local_ec = 0xbc47e649;
    local_e8 = 0xbefd0529;
    core_xform_cpp_FUN_00591c10();
    pCVar16 = (param_1->model).bone_transform.bone_model_matrices[iVar3].m;
    core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_a80);
    pfVar6 = local_7e0;
    pCVar5 = &local_480;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar5->m[0].w = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_480,(CMatrix3x4f *)pCVar16,&local_b70);
    pCVar5 = &local_b70;
    pfVar6 = local_4b0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
      pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
    local_150 = local_14c[8];
    local_14c[(uint)bVar13 * -2] = (CDemonActor *)afStack_128[(uint)bVar13 * -2];
    local_14c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         (CDemonActor *)afStack_128[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    if (&local_54 != &local_150) {
      local_54 = local_150;
      local_50 = local_14c[0];
      local_4c = local_14c[1];
    }
  }
  if (param_3 == 0) {
    local_cc.y = (float)param_3;
    local_cc.z = (float)param_3;
    local_cc.x = -0.4;
    if (&local_1bc != (CVector3f *)(local_e0 + 5)) {
      local_1bc.y = 0.0;
      local_1bc.z = 0.0;
      local_1bc.x = -0.4;
    }
  }
  else if (param_3 == 1) {
    local_c0.y = 0.0;
    local_c0.z = 0.0;
    local_c0.x = 0.4;
    if (&local_1bc != &local_c0) {
      local_1bc.y = 0.0;
      local_1bc.z = 0.0;
      local_1bc.x = 0.4;
    }
  }
  else {
    local_1bc.y = 0.0;
    local_1bc.x = 0.0;
    local_1bc.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0
            (&local_1bc,(CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[iVar3].m)
  ;
  core_xform_cpp_FUN_00591c10();
  core_xform_cpp_FUN_00591530();
  local_84[3] = local_48;
  local_74[(uint)bVar13 * -2] = afStack_44[(uint)bVar13 * -2];
  local_74[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       afStack_44[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  iVar3 = 0xc;
  local_60 = local_1bc.x - local_84[3];
  local_5c = local_1bc.y - local_74[0];
  local_58 = local_1bc.z - local_74[1];
  local_2c4 = local_1bc.x - local_84[3];
  local_2fc[(uint)bVar13 * -2 + 0xf] = local_74[(uint)bVar13 * -2 + 6];
  local_2fc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
       local_74[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
  pfVar6 = local_ab0;
  pCVar5 = &local_b40;
  local_b40.m[0].z = local_b40.m[0].z + local_2c4;
  local_b40.m[1].z = local_b40.m[1].z + local_2c0;
  local_b40.m[2].z = local_b40.m[2].z + local_2bc;
LAB_005686a7:
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
    pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
  }
  pfVar6 = local_ab0;
  pfVar11 = unaff_ESI;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar11 = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar13 * -2 + 1;
    pfVar11 = pfVar11 + (uint)bVar13 * -2 + 1;
  }
  return unaff_ESI;
}
