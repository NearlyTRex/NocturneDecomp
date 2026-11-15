// Name: core_doc.cpp_FUN_004568e0
// Address: 004568e0
// Address Range: [[004568e0, 0045831b]]
// Convention: unknown
// Signature: float * core_doc_cpp_FUN_004568e0(CCharacter *param_1,CDemonActor *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_doc_cpp_FUN_004568e0(CCharacter *param_1,CDemonActor *param_2,float param_3)

{
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  float *unaff_ESI;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  uint *puVar10;
  CMatrix3x4f *pCVar11;
  float *pfVar12;
  uint *puVar13;
  byte bVar14;
  float afStackY_14c8 [6];
  CVector3f *euler_angles;
  CBoundingBox3D *in_stack_ffffeb60;
  CVector3f *in_stack_ffffeb68;
  CVector3f *in_stack_ffffeb6c;
  CMatrix3x4f local_1470;
  CMatrix3x4f local_1440;
  float local_1410 [2];
  float afStack_1408 [10];
  CMatrix3x4f local_13e0;
  CMatrix3x4f local_13b0;
  CMatrix3x4f local_1380;
  CMatrix3x4f local_1350;
  CMatrix3x4f local_1320;
  CMatrix3x4f local_12f0;
  CMatrix3x4f local_12c0;
  float local_1290 [5];
  float afStack_127c [7];
  CMatrix3x4f local_1260;
  CMatrix3x4f local_1230;
  CMatrix3x4f local_1200;
  CMatrix3x4f local_11d0;
  CMatrix3x4f local_11a0;
  CMatrix3x4f local_1170;
  CMatrix3x4f local_1140;
  CMatrix3x4f local_1110;
  CMatrix3x4f local_10e0;
  CMatrix3x4f local_10b0;
  float local_1080 [5];
  float afStack_106c [7];
  CMatrix3x4f local_1050;
  CMatrix3x4f local_1020;
  CMatrix3x4f local_ff0;
  float local_fc0 [12];
  CMatrix3x4f local_f90;
  CMatrix3x4f local_f60;
  CMatrix3x4f local_f30;
  CMatrix3x4f local_f00;
  CMatrix3x4f local_ed0;
  CMatrix3x4f local_ea0;
  CMatrix3x4f local_e70;
  float local_e40 [12];
  CMatrix3x4f local_e10;
  CMatrix3x4f local_de0;
  CMatrix3x4f local_db0;
  CMatrix3x4f local_d80;
  CMatrix3x4f local_d50;
  CMatrix3x4f local_d20;
  CMatrix3x4f local_cf0;
  CMatrix3x4f local_cc0;
  CMatrix3x4f local_c90;
  CMatrix3x4f local_c60;
  float local_c30 [12];
  CMatrix3x4f local_c00;
  CMatrix3x4f local_bd0;
  CMatrix3x4f local_ba0;
  CMatrix3x4f local_b70;
  CMatrix3x4f local_b40;
  CMatrix3x4f local_b10;
  CMatrix3x4f local_ae0;
  CMatrix3x4f local_ab0;
  CMatrix3x4f local_a80;
  CMatrix3x4f local_a50;
  float local_a20 [12];
  CMatrix3x4f local_9f0;
  CMatrix3x4f local_9c0;
  CMatrix3x4f local_990;
  CMatrix3x4f local_960;
  CMatrix3x4f local_930;
  float local_900 [12];
  CMatrix3x4f local_8d0;
  CMatrix3x4f local_8a0;
  CMatrix3x4f local_870;
  CMatrix3x4f local_840;
  CMatrix3x4f local_810;
  CMatrix3x4f local_7e0;
  CMatrix3x4f local_7b0;
  CMatrix3x4f local_780;
  CMatrix3x4f local_750;
  CMatrix3x4f local_720;
  CMatrix3x4f local_6f0;
  CMatrix3x4f local_6c0;
  CMatrix3x4f local_690;
  CMatrix3x4f local_660;
  CMatrix3x4f local_630;
  CMatrix3x4f local_600;
  CMatrix3x4f local_5d0;
  CMatrix3x4f local_5a0;
  CMatrix3x4f local_570;
  uint local_540;
  float local_53c;
  float local_530;
  float local_528 [6];
  uint local_510 [6];
  float local_4f8;
  float local_4f4;
  float local_4f0;
  float local_4ec;
  CDemonActor *local_4e8;
  float local_4e4;
  CVector3f local_4e0;
  CDemonActor *local_4d4;
  float afStack_4d0 [2];
  CVector3f local_4c8;
  CVector3f local_4bc;
  float local_4b0;
  float local_4ac [2];
  CVector3f local_4a4;
  float local_498;
  float local_494 [2];
  CVector3f local_48c;
  CVector3f local_480;
  CVector3f local_474;
  CVector3f local_468;
  CVector3f local_45c;
  CVector3f local_450;
  CVector3f local_444;
  uint local_438;
  float local_434 [6];
  float local_41c;
  float local_418;
  CVector3f local_414;
  float local_408;
  float local_404 [2];
  CVector3f local_3fc;
  float local_3f0;
  CDemonActor *local_3ec [11];
  CVector3f local_3c0;
  CVector3f local_3b4;
  uint local_3a8;
  float local_3a4 [4];
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  CVector3f local_378;
  CVector3f local_36c;
  CVector3f local_360;
  CVector3f local_354;
  CDemonActor *local_348;
  float local_344 [2];
  CVector3f local_33c;
  CVector3f local_330;
  CVector3f local_324;
  CVector3f local_318;
  CVector3f local_30c;
  CVector3f local_300;
  CVector3f local_2f4;
  CVector3f local_2e8;
  float local_2dc;
  float local_2d8 [2];
  CDemonActor *local_2d0;
  float afStack_2cc [2];
  CVector3f local_2c4;
  CVector3f local_2b8;
  CVector3f local_2ac;
  CVector3f local_2a0;
  uint local_294;
  float local_290 [2];
  CVector3f local_288;
  float local_27c;
  float local_278 [5];
  CVector3f local_264;
  CVector3f local_258;
  CVector3f local_24c;
  CVector3f local_240;
  CVector3f local_234;
  CVector3f local_228;
  CVector3f local_21c;
  CVector3f local_210;
  CVector3f local_204;
  CVector3f local_1f8;
  CVector3f local_1ec;
  float local_1e0;
  float local_1dc [5];
  CVector3f local_1c8;
  uint local_1bc;
  CDemonActor *local_1b8 [5];
  CVector3f local_1a4;
  CVector3f local_198;
  CVector3f local_18c;
  CVector3f local_180;
  CVector3f local_174;
  CVector3f local_168;
  float local_15c;
  float local_158 [8];
  CVector3f local_138;
  uint local_12c;
  CDemonActor *local_128 [2];
  CVector3f local_120;
  CVector3f local_114;
  CDemonActor *local_108;
  float local_fc;
  float local_f8 [2];
  CVector3f local_f0;
  float local_e4;
  float local_e0 [5];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  uint local_bc;
  uint local_b8;
  CVector3f local_b4;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  CDemonActor *local_9c;
  float afStack_98 [2];
  CVector3f local_90;
  CVector3f local_84;
  float local_78;
  float local_74 [2];
  CVector3f local_6c;
  float local_60;
  float local_5c [5];
  CVector3f local_48;
  CVector3f local_3c;
  uint local_30;
  uint local_2c [2];
  
  bVar14 = 0;
  iVar3 = param_1->carry_hands[(int)param_3].bone_index;
  local_3b4.x = (float)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                 (param_2,g_CWeaponClassInfo.name_hash);
  if ((CDemonActor *)local_3b4.x != (CDemonActor *)0x0) {
    iVar4 = ((CDemonActor *)((int)local_3b4.x + 0x2b4))->particle_systems[0].stop_after_fade;
    if (iVar4 == 10) {
      local_1dc[2] = 0.191601;
      local_1dc[4] = 0.969617;
      local_1dc[3] = 2.2981;
      local_e0[2] = 0.191601;
      local_e0[(uint)bVar14 * -2 + 3] = local_1dc[(uint)bVar14 * -2 + 3];
      local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           local_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_264.x = local_e0[2];
      *(float *)((int)&local_264 + (uint)bVar14 * -8 + 4) = local_e0[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_264 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_2a0.z = -0.412366;
      local_2a0.x = 0.53949;
      local_2a0.y = -0.235855;
      local_380 = 0x3fca29c7;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_ff0,&local_2a0,&local_264);
      local_384 = 0xbc44fdcb;
      local_37c = 0x3fc9f99c;
      local_e0[2] = -0.0120234;
      local_e0[(uint)bVar14 * -2 + 3] = local_3a4[(uint)bVar14 * -2 + 9];
      local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           local_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
      local_45c.y = 0.00441608;
      local_36c.x = local_e0[2];
      *(float *)((int)&local_36c + (uint)bVar14 * -8 + 4) = local_e0[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_36c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_45c.z = 0.179667;
      local_45c.x = 0.4778;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_ed0,&local_45c,&local_36c);
      pCVar9 = (param_1->model).bone_transform.bone_model_matrices + iVar3;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_ff0,&local_ed0,1.0 - fVar1);
      pfVar5 = local_1290;
      pCVar6 = &local_db0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->m[0].w = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_db0,pCVar9,&local_cc0);
      pCVar6 = &local_cc0;
      pCVar9 = &local_d80;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar9->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
      }
      pCVar6 = &local_d80;
    }
    else if (iVar4 == 1) {
      local_278[2] = 0.191601;
      local_278[4] = 0.969617;
      local_278[3] = 2.2981;
      local_30c.x = 0.53949;
      local_30c.y = -0.235855;
      local_e0[2] = 0.191601;
      local_e0[(uint)bVar14 * -2 + 3] = local_278[(uint)bVar14 * -2 + 3];
      local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           local_278[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_414.x = local_e0[2];
      *(float *)((int)&local_414 + (uint)bVar14 * -8 + 4) = local_e0[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_414 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_30c.z = -0.412366;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_720,&local_30c,&local_414);
      local_3ec[8] = (CDemonActor *)0xbed430d3;
      local_3ec[10] = (CDemonActor *)0x3feb40a3;
      local_3ec[9] = (CDemonActor *)0x3f6f2b67;
      local_e0[2] = -0.414435;
      local_e0[(uint)bVar14 * -2 + 3] = (float)local_3ec[(uint)bVar14 * -2 + 9];
      local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           (float)local_3ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
      local_2b8.x = 0.40292;
      local_450.x = local_e0[2];
      *(float *)((int)&local_450 + (uint)bVar14 * -8 + 4) = local_e0[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_450 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_2b8.y = 0.095011;
      local_2b8.z = 0.26139;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_8d0,&local_2b8,&local_450);
      pCVar9 = (param_1->model).bone_transform.bone_model_matrices + iVar3;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_720,&local_8d0,1.0 - fVar1);
      pfVar5 = local_1410;
      pCVar6 = &local_cf0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->m[0].w = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_cf0,pCVar9,&local_1380);
      pCVar6 = &local_1380;
      pCVar9 = &local_d20;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar9->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
      }
      pCVar6 = &local_d20;
    }
    else if (iVar4 == 10) {
      local_a8 = 0x3e44330d;
      local_a0 = 0x3f7838d2;
      local_a4 = 0x40131412;
      local_e0[2] = 0.191601;
      local_e0[(uint)bVar14 * -2 + 3] = local_e0[(uint)bVar14 * -2 + 0xf];
      local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
      local_354.y = -0.235855;
      local_354.z = -0.412366;
      local_1f8.x = local_e0[2];
      *(float *)((int)&local_1f8 + (uint)bVar14 * -8 + 4) = local_e0[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_1f8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_354.x = 0.53949;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_e10,&local_354,&local_1f8);
      local_3a4[1] = 1.57793;
      local_3a8 = 0xbc44fdcb;
      local_3a4[0] = 1.5794;
      local_4bc.y = 0.00441608;
      local_e0[2] = -0.0120234;
      local_e0[(uint)bVar14 * -2 + 3] = local_3a4[(uint)bVar14 * -2];
      local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           local_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      local_4bc.x = 0.4778;
      local_4bc.z = 0.179667;
      local_2f4.x = local_e0[2];
      *(float *)((int)&local_2f4 + (uint)bVar14 * -8 + 4) = local_e0[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_2f4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_1200,&local_4bc,&local_2f4);
      pCVar9 = (param_1->model).bone_transform.bone_model_matrices + iVar3;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_e10,&local_1200,1.0 - fVar1);
      pfVar5 = local_900;
      pCVar6 = &local_10e0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->m[0].w = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_10e0,pCVar9,&local_660);
      pCVar6 = &local_660;
      pCVar9 = &local_c00;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar9->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
      }
      pCVar6 = &local_c00;
    }
    else {
      pCVar6 = (param_1->model).bone_transform.bone_model_matrices + iVar3;
      iVar3 = ((CDemonActor *)((int)local_3b4.x + 0x2b4))->particle_systems[0].stop_after_fade;
      if (iVar3 == 2) {
        local_1bc = 0x3e3b65aa;
        local_1b8[1] = (CDemonActor *)0x3fd4f5c3;
        local_1b8[0] = (CDemonActor *)0x400ffdb5;
        local_138.x = 0.412537;
        local_138.y = -0.0957868;
        local_258.x = 0.183005;
        *(CDemonActor **)((int)&local_258 + (uint)bVar14 * -8 + 4) = local_1b8[(uint)bVar14 * -2];
        *(CDemonActor **)((int)&local_258 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_1b8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        local_138.z = -0.233186;
        local_434[2] = -0.288645;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_810,&local_138,&local_258);
        local_434[4] = 1.72744;
        local_434[3] = 1.34731;
        local_f0.x = 0.483848;
        local_360.x = local_434[2];
        *(float *)((int)&local_360 + (uint)bVar14 * -8 + 4) = local_434[(uint)bVar14 * -2 + 3];
        *(float *)((int)&local_360 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_434[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        local_f0.y = 0.0729828;
        local_f0.z = 0.0731532;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_960,&local_f0,&local_360);
        fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
        core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_810,&local_960,1.0 - fVar1);
        pfVar5 = local_a20;
        pCVar9 = &local_840;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar9->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_840,pCVar6,&local_1170);
        pCVar6 = &local_1170;
      }
      else if (iVar3 == 4) {
        local_158[2] = 0.192169;
        local_158[4] = 1.6361;
        local_158[3] = 2.30755;
        local_2c4.x = 0.192169;
        *(float *)((int)&local_2c4 + (uint)bVar14 * -8 + 4) = local_158[(uint)bVar14 * -2 + 3];
        *(float *)((int)&local_2c4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_158[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        local_1c8.x = 0.334258;
        local_1c8.y = -0.18522;
        local_1c8.z = -0.409418;
        local_3ec[6] = (CDemonActor *)0x3f93df3b;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_6f0,&local_1c8,&local_2c4);
        local_3ec[5] = (CDemonActor *)0xbeedcbbc;
        local_3ec[7] = (CDemonActor *)0x3fe3381d;
        local_288.y = 0.0692056;
        local_48.x = -0.464445;
        *(CDemonActor **)((int)&local_48 + (uint)bVar14 * -8 + 4) = local_3ec[(uint)bVar14 * -2 + 6]
        ;
        *(CDemonActor **)((int)&local_48 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_3ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
        local_288.z = -0.225393;
        local_288.x = 0.381162;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_1020,&local_288,&local_48);
        fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
        core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_6f0,&local_1020,1.0 - fVar1);
        pfVar5 = local_e40;
        pCVar9 = &local_7e0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar9->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_7e0,pCVar6,&local_de0);
        pCVar6 = &local_de0;
      }
      else if (iVar3 == 3) {
        local_210.x = 0.238337;
        local_210.y = -0.0656786;
        local_210.z = 0.0335054;
        local_294 = 0xbf3e6506;
        local_290[0] = 0.693486;
        local_290[1] = -0.808348;
        local_1ec.x = -0.743729;
        *(float *)((int)&local_1ec + (uint)bVar14 * -8 + 4) = local_290[(uint)bVar14 * -2];
        *(float *)((int)&local_1ec + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_290[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_600,&local_210,&local_1ec);
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_600,pCVar6,&local_c90);
        pCVar6 = &local_c90;
      }
      else if (iVar3 == 5) {
        local_3ec[2] = (CDemonActor *)0xbaa302fa;
        local_3ec[4] = (CDemonActor *)0x3fcb079e;
        local_3ec[3] = (CDemonActor *)0x3fc99ae9;
        local_300.x = 0.17933;
        local_300.y = -0.0611557;
        local_300.z = 0.0786577;
        local_234.x = -0.00124368;
        *(CDemonActor **)((int)&local_234 + (uint)bVar14 * -8 + 4) =
             local_3ec[(uint)bVar14 * -2 + 3];
        *(CDemonActor **)((int)&local_234 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_3ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_630,&local_300,&local_234);
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_630,pCVar6,&local_930);
        pCVar6 = &local_930;
      }
      else if (iVar3 == 6) {
        local_438 = 0;
        local_434[1] = 1.8;
        local_434[0] = 0.0;
        local_174.y = -0.03;
        local_174.x = 0.2;
        local_174.z = -0.3;
        local_318.x = 0.0;
        *(float *)((int)&local_318 + (uint)bVar14 * -8 + 4) = local_434[(uint)bVar14 * -2];
        *(float *)((int)&local_318 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_434[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_b10,&local_174,&local_318);
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_b10,pCVar6,&local_1470);
        pCVar6 = &local_1470;
      }
      else if (iVar3 == 8) {
        local_12c = 0;
        local_128[1] = (CDemonActor *)0x0;
        local_128[0] = (CDemonActor *)0x0;
        local_90.y = -0.1;
        local_378.x = 0.0;
        *(CDemonActor **)((int)&local_378 + (uint)bVar14 * -8 + 4) = local_128[(uint)bVar14 * -2];
        *(CDemonActor **)((int)&local_378 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_128[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        local_90.z = 0.0;
        local_90.x = 0.22;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_1440,&local_90,&local_378);
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_1440,pCVar6,&local_1320);
        pCVar6 = &local_1320;
      }
      else if (iVar3 == 0xc) {
        local_c0 = -*(float *)(param_1[2].flames[1].off_event + 0x24) * (float)_DAT_005d0307;
        local_b8 = 0;
        local_33c.z = 0.0;
        local_bc = 0x3fc90fdb;
        local_444.x = local_c0;
        *(float *)((int)&local_444 + (uint)bVar14 * -8 + 4) = local_e0[(uint)bVar14 * -2 + 9];
        *(float *)((int)&local_444 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
        local_33c.x = 0.25;
        local_33c.y = -0.13;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_12f0,&local_33c,&local_444);
        pCVar6 = &local_12f0;
        core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                  (&local_12f0,(param_1->model).bone_transform.bone_model_matrices + _DAT_01b4d290);
      }
      else if (iVar3 == 0xd) {
        euler_angles = &local_4e0;
        local_5c[2] = 0.0;
        local_5c[4] = 1.5707964;
        local_5c[3] = 1.5707964;
        local_4e0.x = 0.0;
        *(float *)((int)&local_4e0 + (uint)bVar14 * -8 + 4) = local_5c[(uint)bVar14 * -2 + 3];
        *(float *)((int)&local_4e0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_5c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        local_2ac.z = -0.4;
        local_2ac.x = 0.23;
        local_2ac.y = -0.1;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_10b0,&local_2ac,euler_angles);
        pCVar6 = &local_10b0;
        core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                  (&local_10b0,(param_1->model).bone_transform.bone_model_matrices + _DAT_01b4d290);
      }
      else if (iVar3 == 7) {
        local_30 = 0xbdb87c8b;
        local_2c[1] = 0x3f262846;
        local_2c[0] = 0xbe78bef9;
        local_2e8.x = 0.414782;
        local_2e8.y = -0.161673;
        local_48c.x = -0.0900813;
        *(uint *)((int)&local_48c + (uint)bVar14 * -8 + 4) = local_2c[(uint)bVar14 * -2];
        *(uint *)((int)&local_48c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_2c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        local_2e8.z = -0.489897;
        local_60 = 0.30057;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_f30,&local_2e8,&local_48c);
        local_5c[1] = 0.64525;
        local_5c[0] = -0.133049;
        local_6c.x = 0.303704;
        local_4c8.x = local_60;
        *(float *)((int)&local_4c8 + (uint)bVar14 * -8 + 4) = local_5c[(uint)bVar14 * -2];
        *(float *)((int)&local_4c8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             local_5c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        local_6c.y = 0.0649791;
        local_6c.z = -0.273446;
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_f00,&local_6c,&local_4c8);
        fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
        core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_f30,&local_f00,1.0 - fVar1);
        pfVar5 = local_c30;
        pCVar9 = &local_1230;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar9->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_1230,pCVar6,&local_1110);
        pCVar6 = &local_1110;
      }
      else if (param_3 == 0.0) {
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_ba0,(CVector3f *)&DAT_01b4d248,(CVector3f *)&DAT_0265370c);
        pCVar9 = &local_ba0;
        core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_ab0);
        pCVar8 = &local_b40;
        pCVar7 = &local_ab0;
        pCVar11 = &local_b40;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar11->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_a80);
        pCVar7 = &local_a80;
        pCVar11 = &local_b70;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar11->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_b70,pCVar8,&local_f90);
        pCVar8 = &local_f90;
        pCVar7 = &local_1050;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar7->m[0].w = pCVar8->m[0].w;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&local_1050,pCVar9,(CMatrix3x4f *)&stack0xffffeb60);
        pfVar5 = (float *)&stack0xffffeb60;
        pCVar9 = &local_ae0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar9->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_ae0,pCVar6,&local_9f0);
        pCVar6 = &local_9f0;
      }
      else {
        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                  (&local_9c0,(CVector3f *)&DAT_01b4d23c,(CVector3f *)&DAT_0265370c);
        pCVar9 = &local_9c0;
        core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_1350);
        pCVar8 = &local_ea0;
        pCVar7 = &local_1350;
        pCVar11 = &local_ea0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar11->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_8a0);
        pCVar7 = &local_8a0;
        pCVar11 = &local_990;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar11->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
          pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_990,pCVar8,&local_870);
        pCVar8 = &local_870;
        pCVar7 = &local_13b0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar7->m[0].w = pCVar8->m[0].w;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_13b0,pCVar9,&local_12c0);
        pCVar9 = &local_12c0;
        pCVar8 = &local_bd0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar8->m[0].w = pCVar9->m[0].w;
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_bd0,pCVar6,&local_1260);
        pCVar6 = &local_1260;
      }
    }
    iVar3 = 0xc;
    pfVar5 = local_1080;
    goto LAB_00456abe;
  }
  local_3b4.y = local_3b4.x;
  local_3b4.z = local_3b4.x;
  local_3c.x = local_3b4.x;
  local_3c.y = local_3b4.x;
  local_3c.z = local_3b4.x;
  if (param_1->layer_action_index == 9) {
    core_xform_cpp_transformVector3x4_FUN_00591530
              ((CVector3f *)&DAT_0265370c,
               (param_1->model).bone_transform.bone_model_matrices + _DAT_01b4d290,&local_1a4);
    local_390 = local_1a4.x;
    local_3a4[(uint)bVar14 * -2 + 6] = *(float *)((int)&local_1a4 + (uint)bVar14 * -8 + 4);
    local_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         *(float *)((int)&local_1a4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    core_xform_cpp_transformVector3x4_FUN_00591530
              ((CVector3f *)&DAT_0265370c,
               (param_1->model).bone_transform.bone_model_matrices + _DAT_01b4d28c,&local_3fc);
    local_78 = local_3fc.x;
    local_74[(uint)bVar14 * -2] = *(float *)((int)&local_3fc + (uint)bVar14 * -8 + 4);
    local_74[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         *(float *)((int)&local_3fc + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    local_e4 = local_78 + local_390;
    local_e0[0] = local_74[0] + local_38c;
    local_e0[1] = local_74[1] + local_388;
    local_434[5] = local_78 + local_390;
    local_434[(uint)bVar14 * -2 + 6] = local_e0[(uint)bVar14 * -2];
    local_434[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    local_408 = local_434[5] * _DAT_005d02e7;
    local_404[0] = local_41c * _DAT_005d02e7;
    local_404[1] = local_418 * _DAT_005d02e7;
    local_cc = local_434[5] * _DAT_005d02e7;
    local_e0[(uint)bVar14 * -2 + 6] = local_404[(uint)bVar14 * -2];
    local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         local_404[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_ffffeb60);
    puVar10 = local_510;
    puVar13 = &local_540;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
    }
    local_c4 = local_c4 + _DAT_005d02ff;
    local_c8 = local_c8 - (local_530 - local_53c);
    fVar1 = (float)core_doc_cpp_FUN_0044ffd0();
    local_c8 = fVar1 + local_c8;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(&local_1140);
    local_1140.m[0].z = local_cc;
    local_1140.m[1].z = local_c8;
    local_1140.m[2].z = local_c4;
    if (*(int *)(param_1[2].flames[2].base.actor_name + 0x10) != 0) {
      pCVar6 = &local_1140;
      core_xform_cpp_buildRotationY_FUN_005932c0(3.1415927,&local_750);
      pCVar9 = &local_750;
      pCVar8 = &local_7b0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar9->m[0].w;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_7b0,pCVar6,&local_570);
      pCVar6 = &local_570;
      pCVar9 = &local_1140;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar9->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
      }
    }
    iVar3 = 0xc;
    pfVar5 = local_1080;
    pCVar6 = &local_1140;
    goto LAB_00456abe;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,DAT_007bcc84);
  if (pCVar2 != (CDemonActor *)0x0) {
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_ffffeb60);
    pfVar5 = local_528;
    pfVar12 = &local_4f8;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar12 = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
      pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
    }
    local_3a4[2] = local_4f8 + local_4ec;
    local_3a4[3] = local_4f4 + (float)local_4e8;
    local_394 = local_4f0 + local_4e4;
    local_2dc = local_4f8 + local_4ec;
    local_2d8[(uint)bVar14 * -2] = local_3a4[(uint)bVar14 * -2 + 3];
    local_2d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         local_3a4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    local_348 = (CDemonActor *)(local_2dc * _DAT_005d02e7);
    local_344[0] = local_2d8[0] * _DAT_005d02e7;
    local_344[1] = local_2d8[1] * _DAT_005d02e7;
    local_240.x = local_2dc * _DAT_005d02e7;
    *(float *)((int)&local_240 + (uint)bVar14 * -8 + 4) = local_344[(uint)bVar14 * -2];
    *(float *)((int)&local_240 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         local_344[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    if (&local_3c != &local_240) {
      local_3c.x = local_240.x;
      local_3c.y = local_240.y;
      local_3c.z = local_240.z;
    }
    fVar1 = pCVar2[2].particle_systems[4].position.z;
    if (fVar1 != 2.8026e-45) {
      if (fVar1 == 1.4013e-45) {
        if (param_3 == 0.0) {
          core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_c60);
          pCVar6 = &local_c60;
LAB_00457ee2:
          pCVar9 = &local_d50;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar9->m[0].w = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
            pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
          }
        }
        else {
          if (param_3 == 1.4013e-45) {
            core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_5d0);
            pCVar6 = &local_5d0;
            goto LAB_00457ee2;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(&local_d50);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&local_d50,(param_1->model).bone_transform.bone_model_matrices + iVar3,&local_6c0
                  );
        pCVar6 = &local_6c0;
        pCVar9 = &local_d50;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar9->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_d50,in_stack_ffffeb68);
        local_3c0.x = (float)local_1b8[2];
        local_3ec[(uint)bVar14 * -2 + 0xc] = local_1b8[(uint)bVar14 * -2 + 3];
        local_3ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
             local_1b8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        if (&local_3b4 != (CVector3f *)(local_3ec + 0xb)) {
          local_3b4.x = local_3c0.x;
          local_3b4.y = local_3c0.y;
          local_3b4.z = local_3c0.z;
        }
        local_3c.z = local_4e4 * (float)_DAT_005d02f7 + local_4f0 * (float)_DAT_005d02ef;
        goto LAB_004578df;
      }
      if (fVar1 != 4.2039e-45) {
        _DAT_01d046a0 = "..\\core\\doc.cpp";
        _DAT_01d046a4 = 0xe8f;
        core_main_c_displayErrorAndQuit_FUN_004e4500("Don't know how to carry light %s");
        goto LAB_004578df;
      }
    }
    local_3c.y = (float)local_4e8;
  }
LAB_004578df:
  iVar4 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar4 != 0) {
    local_158[5] = -0.0900813;
    local_158[7] = 0.649052;
    local_158[6] = -0.242916;
    local_4a4.x = 0.414782;
    local_4a4.y = -0.161673;
    local_198.x = -0.0900813;
    *(float *)((int)&local_198 + (uint)bVar14 * -8 + 4) = local_158[(uint)bVar14 * -2 + 6];
    *(float *)((int)&local_198 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         local_158[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    local_4a4.z = -0.489897;
    local_15c = 0.30057;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_a50,&local_4a4,&local_198);
    local_158[1] = 0.64525;
    local_158[0] = -0.133049;
    local_204.x = 0.385392;
    local_324.x = local_15c;
    *(float *)((int)&local_324 + (uint)bVar14 * -8 + 4) = local_158[(uint)bVar14 * -2];
    *(float *)((int)&local_324 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         local_158[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    local_204.y = -0.0122009;
    local_204.z = -0.49418;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_13e0,&local_204,&local_324);
    pCVar9 = (param_1->model).bone_transform.bone_model_matrices + iVar3;
    core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_a50);
    pfVar5 = local_fc0;
    pCVar6 = &local_690;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar6->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_690,pCVar9,&local_f60);
    pCVar6 = &local_f60;
    pCVar9 = &local_11d0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar9->m[0].w = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_11d0,in_stack_ffffeb6c);
    local_120.x = (float)local_9c;
    local_128[(uint)bVar14 * -2 + 3] = (CDemonActor *)afStack_98[(uint)bVar14 * -2];
    local_128[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         (CDemonActor *)afStack_98[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    if (&local_3b4 != (CVector3f *)(local_128 + 2)) {
      local_3b4.x = local_120.x;
      local_3b4.y = local_120.y;
      local_3b4.z = local_120.z;
    }
  }
  pCVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CBoxActorClassInfo.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    fVar1 = (float)_strcmp(pCVar2[1].create_event,"SHOVEL.KFM");
    if (fVar1 == 0.0) {
      local_3f0 = fVar1;
      local_3ec[1] = (CDemonActor *)0x3e3851ec;
      local_3ec[0] = (CDemonActor *)0x3fc00000;
      local_228.y = -0.1;
      local_228.x = 0.25;
      local_228.z = 0.0;
      local_21c.x = fVar1;
      *(CDemonActor **)((int)&local_21c + (uint)bVar14 * -8 + 4) = local_3ec[(uint)bVar14 * -2];
      *(CDemonActor **)((int)&local_21c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_3ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_e70,&local_228,&local_21c);
      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                (&local_e70,(param_1->model).bone_transform.bone_model_matrices + _DAT_01b4d290);
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_e70,in_stack_ffffeb6c);
      local_468.x = (float)local_4d4;
      *(float *)((int)&local_468 + (uint)bVar14 * -8 + 4) = afStack_4d0[(uint)bVar14 * -2];
      *(float *)((int)&local_468 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_4d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      if (&local_3b4 != &local_468) {
        local_3b4.x = local_468.x;
        local_3b4.y = local_468.y;
        local_3b4.z = local_468.z;
      }
    }
  }
  pCVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CBoxActorClassInfo.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    fVar1 = (float)_strcmp
                             (pCVar2[1].create_event,"WOOD_BOWL.KFM");
    if (fVar1 == 0.0) {
      local_27c = fVar1;
      local_278[1] = -1.75;
      local_278[0] = -2.1;
      local_168.x = fVar1;
      *(float *)((int)&local_168 + (uint)bVar14 * -8 + 4) = local_278[(uint)bVar14 * -2];
      *(float *)((int)&local_168 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_278[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      local_180.z = 0.0;
      local_180.x = 0.2;
      local_180.y = -0.08;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_5a0,&local_180,&local_168);
      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                (&local_5a0,(param_1->model).bone_transform.bone_model_matrices + _DAT_01b4d290);
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_5a0,in_stack_ffffeb6c);
      local_114.x = (float)local_108;
      local_128[(uint)bVar14 * -2 + 6] = local_128[(uint)bVar14 * -2 + 9];
      local_128[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
           local_128[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
      if (&local_3b4 != (CVector3f *)(local_128 + 5)) {
        local_3b4.x = local_114.x;
        local_3b4.y = local_114.y;
        local_3b4.z = local_114.z;
      }
    }
  }
  pCVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CBoxActorClassInfo.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    fVar1 = (float)_strcmp(pCVar2[1].create_event,"JOURNAL.KFM");
    if (fVar1 == 0.0) {
      local_fc = fVar1;
      local_f8[0] = fVar1;
      local_f8[1] = 3.2;
      local_18c.x = 0.2;
      local_330.x = fVar1;
      *(float *)((int)&local_330 + (uint)bVar14 * -8 + 4) = local_f8[(uint)bVar14 * -2];
      *(float *)((int)&local_330 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      local_18c.y = -0.16;
      local_18c.z = 0.0;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_780,&local_18c,&local_330);
      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                (&local_780,(param_1->model).bone_transform.bone_model_matrices + _DAT_01b4d290);
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_780,in_stack_ffffeb6c);
      local_84.x = (float)local_2d0;
      *(float *)((int)&local_84 + (uint)bVar14 * -8 + 4) = afStack_2cc[(uint)bVar14 * -2];
      *(float *)((int)&local_84 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_2cc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      if (&local_3b4 != &local_84) {
        local_3b4.x = local_84.x;
        local_3b4.y = local_84.y;
        local_3b4.z = local_84.z;
      }
    }
  }
  if (param_3 == 0.0) {
    local_474.y = param_3;
    local_474.x = -0.4;
    local_474.z = param_3;
    if (&local_480 != &local_474) {
      local_480.y = param_3;
      local_480.z = param_3;
      local_480.x = -0.4;
    }
  }
  else if (param_3 == 1.4013e-45) {
    local_b4.y = 0.0;
    local_b4.z = 0.0;
    local_b4.x = 0.4;
    if (&local_480 != (CVector3f *)(local_e0 + 0xb)) {
      local_480.x = 0.4;
      local_480.y = 0.0;
      local_480.z = 0.0;
    }
  }
  else {
    local_480.y = 0.0;
    local_480.x = 0.0;
    local_480.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0
            (&local_480,(param_1->model).bone_transform.bone_model_matrices + iVar3);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
            (&local_11a0,&local_480,&local_3b4);
  core_xform_cpp_transformVector3x4_FUN_00591530(&local_3c,&local_11a0,&local_24c);
  local_4b0 = local_24c.x;
  local_4ac[(uint)bVar14 * -2] = *(float *)((int)&local_24c + (uint)bVar14 * -8 + 4);
  local_4ac[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
       *(float *)((int)&local_24c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
  iVar3 = 0xc;
  local_1e0 = local_480.x - local_4b0;
  local_1dc[0] = local_480.y - local_4ac[0];
  local_1dc[1] = local_480.z - local_4ac[1];
  local_498 = local_480.x - local_4b0;
  local_494[(uint)bVar14 * -2] = local_1dc[(uint)bVar14 * -2];
  local_494[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
       local_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
  pfVar5 = local_1080;
  pCVar6 = &local_11a0;
  local_11a0.m[0].z = local_11a0.m[0].z + local_498;
  local_11a0.m[1].z = local_11a0.m[1].z + local_494[0];
  local_11a0.m[2].z = local_11a0.m[2].z + local_494[1];
LAB_00456abe:
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar14 * -2 + 1) * 4);
    pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
  }
  pfVar5 = local_1080;
  pfVar12 = unaff_ESI;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar12 = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar14 * -2 + 1;
    pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
  }
  return unaff_ESI;
}
