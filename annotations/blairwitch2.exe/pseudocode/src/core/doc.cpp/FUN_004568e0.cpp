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
  uint *puVar9;
  CMatrix3x4f *pCVar10;
  float *pfVar11;
  uint *puVar12;
  byte bVar13;
  CDemonActor *apCStackY_14c8 [6];
  CQuaternion4f *pCVar14;
  CBoundingBox3D *in_stack_ffffeb60;
  float afStack_1480 [4];
  CMatrix3x4f local_1470;
  CMatrix3x4f local_1440;
  float local_1410 [2];
  float afStack_1408 [12];
  CDemonActor *apCStack_13d8 [10];
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
  byte local_1200 [32];
  float afStack_11e0 [16];
  CMatrix3x4f local_11a0;
  CMatrix3x4f local_1170;
  CMatrix3x4f local_1140;
  CMatrix3x4f local_1110;
  CMatrix3x4f local_10e0;
  CMatrix3x4f local_10b0;
  float local_1080 [5];
  CDemonActor *apCStack_106c [3];
  float afStack_1060 [4];
  CMatrix3x4f local_1050;
  byte local_1020 [8];
  float afStack_1018 [10];
  byte local_ff0 [48];
  float local_fc0 [12];
  CMatrix3x4f local_f90;
  CMatrix3x4f local_f60;
  byte local_f30 [48];
  byte local_f00 [48];
  byte local_ed0 [48];
  CMatrix3x4f local_ea0;
  CMatrix3x4f local_e70;
  float local_e40 [12];
  byte local_e10 [48];
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
  byte local_a50 [48];
  float local_a20 [12];
  CMatrix3x4f local_9f0;
  CMatrix3x4f local_9c0;
  CMatrix3x4f local_990;
  byte local_960 [48];
  CMatrix3x4f local_930;
  float local_900 [12];
  byte local_8d0 [48];
  CMatrix3x4f local_8a0;
  CMatrix3x4f local_870;
  CMatrix3x4f local_840;
  byte local_810 [48];
  CMatrix3x4f local_7e0;
  CMatrix3x4f local_7b0;
  CMatrix3x4f local_780;
  CMatrix3x4f local_750;
  byte local_720 [48];
  byte local_6f0 [48];
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
  uint local_4e0;
  CDemonActor *apCStack_4dc [5];
  CDemonActor *local_4c8 [3];
  CDemonActor *local_4bc;
  uint local_4b8;
  uint local_4b4;
  float local_4b0;
  float local_4ac [6];
  float local_494 [5];
  CVector3f local_480;
  CVector3f local_474;
  CDemonActor *local_468;
  CDemonActor *local_464 [6];
  float afStack_44c [5];
  uint local_438;
  uint local_434;
  uint local_430;
  uint local_42c;
  uint local_428;
  uint local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414 [3];
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  int local_3f0;
  CDemonActor *local_3ec [12];
  CDemonActor *local_3bc;
  CDemonActor *local_3b8;
  CDemonActor *local_3b4;
  CDemonActor *local_3b0;
  CDemonActor *local_3ac;
  uint local_3a8;
  float local_3a4 [4];
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  float local_378 [3];
  float local_36c [3];
  float local_360 [3];
  float local_354 [3];
  CDemonActor *local_348;
  float local_344 [6];
  float afStack_32c [5];
  float local_318 [3];
  float local_30c [7];
  float afStack_2f0 [6];
  float local_2d8 [2];
  CDemonActor *local_2d0;
  float afStack_2cc [5];
  float local_2b8 [15];
  int local_27c;
  float local_278 [8];
  float local_258 [3];
  float local_24c;
  CDemonActor *local_240;
  CDemonActor *local_23c [5];
  uint local_228;
  uint local_224;
  uint local_220;
  int local_21c;
  uint auStack_218 [9];
  float afStack_1f4 [5];
  float local_1e0;
  float local_1dc;
  float local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  float local_1c8 [6];
  CDemonActor *local_1b0;
  float afStack_1ac [5];
  uint local_198;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  float local_174 [3];
  int local_168;
  float afStack_164 [17];
  CDemonActor *local_120;
  CDemonActor *local_11c;
  CDemonActor *local_118;
  CDemonActor *local_114;
  CDemonActor *local_110;
  CDemonActor *local_10c;
  CDemonActor *local_108;
  float local_fc;
  float local_f8 [6];
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
  float afStack_98 [5];
  CDemonActor *local_84;
  CDemonActor *local_80 [2];
  float local_78;
  float local_74 [14];
  CDemonActor *local_3c;
  CDemonActor *local_38;
  CDemonActor *local_34;
  uint local_30;
  float local_2c [2];
  
  bVar13 = 0;
  iVar3 = param_1->carry_hands[(int)param_3].bone_index;
  local_3b4 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CWeaponClassInfo.name_hash);
  if (local_3b4 != (CDemonActor *)0x0) {
    iVar4 = local_3b4[1].particle_systems[0].stop_after_fade;
    if (iVar4 == 10) {
      local_1d4 = 0x3e44330d;
      local_1cc = 0x3f7838d2;
      local_1d0 = 0x40131412;
      local_e0[2] = 0.191601;
      local_e0[(uint)bVar13 * -2 + 3] = afStack_1f4[(uint)bVar13 * -2 + 9];
      local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_1f4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      local_278[5] = local_e0[2];
      local_278[(uint)bVar13 * -2 + 6] = local_e0[(uint)bVar13 * -2 + 3];
      local_278[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      local_2b8[8] = -0.412366;
      local_2b8[6] = 0.53949;
      local_2b8[7] = -0.235855;
      local_380 = 0x3fca29c7;
      core_xform_cpp_FUN_00591c10(local_ff0,afStack_2cc + 0xb,local_278 + 5);
      local_384 = 0xbc44fdcb;
      local_37c = 0x3fc9f99c;
      local_e0[2] = -0.0120234;
      local_e0[(uint)bVar13 * -2 + 3] = local_3a4[(uint)bVar13 * -2 + 9];
      local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           local_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      local_464[3] = (CDemonActor *)0x3b90b4c4;
      local_36c[0] = local_e0[2];
      local_3a4[(uint)bVar13 * -2 + 0xf] = local_e0[(uint)bVar13 * -2 + 3];
      local_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
           local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      local_464[4] = (CDemonActor *)0x3e37faa0;
      local_464[2] = (CDemonActor *)0x3ef4a234;
      core_xform_cpp_FUN_00591c10(local_ed0,local_464 + 2,local_3a4 + 0xe);
      pCVar14 = (param_1->model).bone_transform.bone_model_matrices[iVar3].m;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_ff0,local_ed0,1.0 - fVar1);
      pfVar5 = local_1290;
      pCVar6 = &local_db0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->m[0].w = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_db0,(CMatrix3x4f *)pCVar14,&local_cc0);
      pCVar6 = &local_cc0;
      pCVar8 = &local_d80;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
      }
      pCVar6 = &local_d80;
    }
    else if (iVar4 == 1) {
      local_278[2] = 0.191601;
      local_278[4] = 0.969617;
      local_278[3] = 2.2981;
      local_30c[0] = 0.53949;
      local_30c[1] = -0.235855;
      local_e0[2] = 0.191601;
      local_e0[(uint)bVar13 * -2 + 3] = local_278[(uint)bVar13 * -2 + 3];
      local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           local_278[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      local_414[0] = local_e0[2];
      afStack_44c[(uint)bVar13 * -2 + 0xf] = local_e0[(uint)bVar13 * -2 + 3];
      afStack_44c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
           local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      local_30c[2] = -0.412366;
      core_xform_cpp_FUN_00591c10(local_720,afStack_32c + 8,afStack_44c + 0xe);
      local_3ec[8] = (CDemonActor *)0xbed430d3;
      local_3ec[10] = (CDemonActor *)0x3feb40a3;
      local_3ec[9] = (CDemonActor *)0x3f6f2b67;
      local_e0[2] = -0.414435;
      local_e0[(uint)bVar13 * -2 + 3] = (float)local_3ec[(uint)bVar13 * -2 + 9];
      local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           (float)local_3ec[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      local_2b8[0] = 0.40292;
      local_464[5] = (CDemonActor *)local_e0[2];
      afStack_44c[(uint)bVar13 * -2] = local_e0[(uint)bVar13 * -2 + 3];
      afStack_44c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      local_2b8[1] = 0.095011;
      local_2b8[2] = 0.26139;
      core_xform_cpp_FUN_00591c10(local_8d0,afStack_2cc + 5,local_464 + 5);
      pCVar14 = (param_1->model).bone_transform.bone_model_matrices[iVar3].m;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_720,local_8d0,1.0 - fVar1);
      pfVar5 = local_1410;
      pCVar6 = &local_cf0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->m[0].w = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_cf0,(CMatrix3x4f *)pCVar14,&local_1380);
      pCVar6 = &local_1380;
      pCVar8 = &local_d20;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
      }
      pCVar6 = &local_d20;
    }
    else if (iVar4 == 10) {
      local_a8 = 0x3e44330d;
      local_a0 = 0x3f7838d2;
      local_a4 = 0x40131412;
      local_e0[2] = 0.191601;
      local_e0[(uint)bVar13 * -2 + 3] = local_e0[(uint)bVar13 * -2 + 0xf];
      local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
      local_354[1] = -0.235855;
      local_354[2] = -0.412366;
      auStack_218[8] = local_e0[2];
      afStack_1f4[(uint)bVar13 * -2] = local_e0[(uint)bVar13 * -2 + 3];
      afStack_1f4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      local_354[0] = 0.53949;
      core_xform_cpp_FUN_00591c10(local_e10,local_3a4 + 0x14,auStack_218 + 8);
      local_3a4[1] = 1.57793;
      local_3a8 = 0xbc44fdcb;
      local_3a4[0] = 1.5794;
      local_4b8 = 0x3b90b4c4;
      local_e0[2] = -0.0120234;
      local_e0[(uint)bVar13 * -2 + 3] = local_3a4[(uint)bVar13 * -2];
      local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           local_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      local_4bc = (CDemonActor *)0x3ef4a234;
      local_4b4 = 0x3e37faa0;
      local_30c[6] = local_e0[2];
      afStack_2f0[(uint)bVar13 * -2] = local_e0[(uint)bVar13 * -2 + 3];
      afStack_2f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      core_xform_cpp_FUN_00591c10(local_1200,apCStack_4dc + 8,afStack_32c + 0xe);
      pCVar14 = (param_1->model).bone_transform.bone_model_matrices[iVar3].m;
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_e10,local_1200,1.0 - fVar1);
      pfVar5 = local_900;
      pCVar6 = &local_10e0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->m[0].w = *pfVar5;
        pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_10e0,(CMatrix3x4f *)pCVar14,&local_660);
      pCVar6 = &local_660;
      pCVar8 = &local_c00;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
      }
      pCVar6 = &local_c00;
    }
    else {
      pCVar14 = (param_1->model).bone_transform.bone_model_matrices[iVar3].m;
      iVar3 = local_3b4[1].particle_systems[0].stop_after_fade;
      if (iVar3 == 2) {
        local_1c8[3] = 0.183005;
        local_1c8[5] = 1.66375;
        local_1c8[4] = 2.24986;
        afStack_164[0xb] = 0.412537;
        afStack_164[0xc] = -0.0957868;
        local_258[0] = 0.183005;
        local_278[(uint)bVar13 * -2 + 9] = afStack_1f4[(uint)bVar13 * -2 + 0xf];
        local_278[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
             afStack_1f4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
        afStack_164[0xd] = -0.233186;
        local_42c = 0xbe93c947;
        core_xform_cpp_FUN_00591c10(local_810,afStack_164 + 0xb,local_278 + 8);
        local_424 = 0x3fdd1cc1;
        local_428 = 0x3fac74a7;
        local_f8[2] = 0.483848;
        local_360[0] = (float)local_42c;
        local_3a4[(uint)bVar13 * -2 + 0x12] = afStack_44c[(uint)bVar13 * -2 + 9];
        local_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
             afStack_44c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
        local_f8[3] = 0.0729828;
        local_f8[4] = 0.0731532;
        core_xform_cpp_FUN_00591c10(local_960,local_f8 + 2,local_3a4 + 0x11);
        fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
        core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_810,local_960,1.0 - fVar1);
        pfVar5 = local_a20;
        pCVar6 = &local_840;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar6->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_840,(CMatrix3x4f *)pCVar14,&local_1170)
        ;
        pCVar6 = &local_1170;
      }
      else if (iVar3 == 4) {
        afStack_164[5] = 0.192169;
        afStack_164[7] = 1.6361;
        afStack_164[6] = 2.30755;
        afStack_2cc[2] = 0.192169;
        afStack_2cc[(uint)bVar13 * -2 + 3] = afStack_164[(uint)bVar13 * -2 + 6];
        afStack_2cc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        local_1c8[0] = 0.334258;
        local_1c8[1] = -0.18522;
        local_1c8[2] = -0.409418;
        local_3ec[6] = (CDemonActor *)0x3f93df3b;
        core_xform_cpp_FUN_00591c10(local_6f0,afStack_1f4 + 0xb,afStack_2cc + 2);
        local_3ec[5] = (CDemonActor *)0xbeedcbbc;
        local_3ec[7] = (CDemonActor *)0x3fe3381d;
        local_2b8[0xd] = 0.0692056;
        local_74[0xb] = -0.464445;
        local_74[(uint)bVar13 * -2 + 0xc] = (float)local_3ec[(uint)bVar13 * -2 + 6];
        local_74[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
             (float)local_3ec[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        local_2b8[0xe] = -0.225393;
        local_2b8[0xc] = 0.381162;
        core_xform_cpp_FUN_00591c10(local_1020,afStack_2cc + 0x11,local_74 + 0xb);
        fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
        core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_6f0,local_1020,1.0 - fVar1);
        pfVar5 = local_e40;
        pCVar6 = &local_7e0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar6->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_7e0,(CMatrix3x4f *)pCVar14,&local_de0);
        pCVar6 = &local_de0;
      }
      else if (iVar3 == 3) {
        auStack_218[2] = 0x3e740e9d;
        auStack_218[3] = 0xbd868280;
        auStack_218[4] = 0x3d093cf5;
        local_2b8[9] = -0.743729;
        local_2b8[10] = 0.693486;
        local_2b8[0xb] = -0.808348;
        afStack_1f4[2] = -0.743729;
        afStack_1f4[(uint)bVar13 * -2 + 3] = afStack_2cc[(uint)bVar13 * -2 + 0xf];
        afStack_1f4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             afStack_2cc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
        core_xform_cpp_FUN_00591c10(&local_600,auStack_218 + 2,afStack_1f4 + 2);
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_600,(CMatrix3x4f *)pCVar14,&local_c90);
        pCVar6 = &local_c90;
      }
      else if (iVar3 == 5) {
        local_3ec[2] = (CDemonActor *)0xbaa302fa;
        local_3ec[4] = (CDemonActor *)0x3fcb079e;
        local_3ec[3] = (CDemonActor *)0x3fc99ae9;
        local_30c[3] = 0.17933;
        local_30c[4] = -0.0611557;
        local_30c[5] = 0.0786577;
        local_23c[2] = (CDemonActor *)0xbaa302fa;
        local_23c[(uint)bVar13 * -2 + 3] = local_3ec[(uint)bVar13 * -2 + 3];
        local_23c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             local_3ec[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        core_xform_cpp_FUN_00591c10(&local_630,afStack_32c + 0xb,local_23c + 2);
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_630,(CMatrix3x4f *)pCVar14,&local_930);
        pCVar6 = &local_930;
      }
      else if (iVar3 == 6) {
        local_438 = 0;
        local_430 = 0x3fe66666;
        local_434 = 0;
        local_174[1] = -0.03;
        local_174[0] = 0.2;
        local_174[2] = -0.3;
        local_318[0] = 0.0;
        afStack_32c[(uint)bVar13 * -2 + 6] = afStack_44c[(uint)bVar13 * -2 + 6];
        afStack_32c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
             afStack_44c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        core_xform_cpp_FUN_00591c10(&local_b10,afStack_1ac + 0xe,afStack_32c + 5);
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_b10,(CMatrix3x4f *)pCVar14,&local_1470)
        ;
        pCVar6 = &local_1470;
      }
      else if (iVar3 == 8) {
        afStack_164[0xe] = 0.0;
        afStack_164[0x10] = 0.0;
        afStack_164[0xf] = 0.0;
        afStack_98[3] = -0.1;
        local_378[0] = 0.0;
        local_3a4[(uint)bVar13 * -2 + 0xc] = afStack_164[(uint)bVar13 * -2 + 0xf];
        local_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
             afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
        afStack_98[4] = 0.0;
        afStack_98[2] = 0.22;
        core_xform_cpp_FUN_00591c10(&local_1440,afStack_98 + 2,local_3a4 + 0xb);
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&local_1440,(CMatrix3x4f *)pCVar14,&local_1320);
        pCVar6 = &local_1320;
      }
      else if (iVar3 == 0xc) {
        local_c0 = -*(float *)(param_1[2].flames[1].off_event + 0x24) * (float)_DAT_005d0307;
        local_b8 = 0;
        local_344[4] = 0.0;
        local_bc = 0x3fc90fdb;
        afStack_44c[2] = local_c0;
        afStack_44c[(uint)bVar13 * -2 + 3] = local_e0[(uint)bVar13 * -2 + 9];
        afStack_44c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
        local_344[2] = 0.25;
        local_344[3] = -0.13;
        core_xform_cpp_FUN_00591c10(&local_12f0,local_344 + 2,afStack_44c + 2);
        pCVar6 = &local_12f0;
        core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                  (&local_12f0,
                   (CMatrix3x4f *)
                   (param_1->model).bone_transform.bone_model_matrices[_DAT_01b4d290].m);
      }
      else if (iVar3 == 0xd) {
        puVar9 = &local_4e0;
        local_74[8] = 0.0;
        local_74[10] = 1.5707964;
        local_74[9] = 1.5707964;
        local_4e0 = 0;
        apCStack_4dc[(uint)bVar13 * -2] = (CDemonActor *)local_74[(uint)bVar13 * -2 + 9];
        apCStack_4dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             (CDemonActor *)local_74[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
        local_2b8[5] = -0.4;
        local_2b8[3] = 0.23;
        local_2b8[4] = -0.1;
        core_xform_cpp_FUN_00591c10(&local_10b0,afStack_2cc + 8,puVar9);
        pCVar6 = &local_10b0;
        core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                  (&local_10b0,
                   (CMatrix3x4f *)
                   (param_1->model).bone_transform.bone_model_matrices[_DAT_01b4d290].m);
      }
      else if (iVar3 == 7) {
        local_30 = 0xbdb87c8b;
        local_2c[1] = 0.649052;
        local_2c[0] = -0.242916;
        afStack_2f0[2] = 0.414782;
        afStack_2f0[3] = -0.161673;
        local_494[2] = -0.0900813;
        local_494[(uint)bVar13 * -2 + 3] = local_2c[(uint)bVar13 * -2];
        local_494[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
             local_2c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        afStack_2f0[4] = -0.489897;
        local_74[5] = 0.30057;
        core_xform_cpp_FUN_00591c10(local_f30,afStack_2f0 + 2,local_494 + 2);
        local_74[7] = 0.64525;
        local_74[6] = -0.133049;
        local_74[2] = 0.303704;
        local_4c8[0] = (CDemonActor *)local_74[5];
        apCStack_4dc[(uint)bVar13 * -2 + 6] = (CDemonActor *)local_74[(uint)bVar13 * -2 + 6];
        apCStack_4dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
             (CDemonActor *)local_74[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        local_74[3] = 0.0649791;
        local_74[4] = -0.273446;
        core_xform_cpp_FUN_00591c10(local_f00,local_74 + 2,apCStack_4dc + 5);
        fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
        core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_f30,local_f00,1.0 - fVar1);
        pfVar5 = local_c30;
        pCVar6 = &local_1230;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar6->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&local_1230,(CMatrix3x4f *)pCVar14,&local_1110);
        pCVar6 = &local_1110;
      }
      else if (param_3 == 0.0) {
        core_xform_cpp_FUN_00591c10(&local_ba0,&DAT_01b4d248,&DAT_0265370c);
        pCVar6 = &local_ba0;
        core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_ab0);
        pCVar8 = &local_b40;
        pCVar7 = &local_ab0;
        pCVar10 = &local_b40;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar10->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_a80);
        pCVar7 = &local_a80;
        pCVar10 = &local_b70;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar10->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_b70,pCVar8,&local_f90);
        pCVar8 = &local_f90;
        pCVar7 = &local_1050;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar7->m[0].w = pCVar8->m[0].w;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&local_1050,pCVar6,(CMatrix3x4f *)&stack0xffffeb60);
        pfVar5 = (float *)&stack0xffffeb60;
        pCVar6 = &local_ae0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar6->m[0].w = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_ae0,(CMatrix3x4f *)pCVar14,&local_9f0);
        pCVar6 = &local_9f0;
      }
      else {
        core_xform_cpp_FUN_00591c10(&local_9c0,&DAT_01b4d23c,&DAT_0265370c);
        pCVar6 = &local_9c0;
        core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_1350);
        pCVar8 = &local_ea0;
        pCVar7 = &local_1350;
        pCVar10 = &local_ea0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar10->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_8a0);
        pCVar7 = &local_8a0;
        pCVar10 = &local_990;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar10->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_990,pCVar8,&local_870);
        pCVar8 = &local_870;
        pCVar7 = &local_13b0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar7->m[0].w = pCVar8->m[0].w;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_13b0,pCVar6,&local_12c0);
        pCVar6 = &local_12c0;
        pCVar8 = &local_bd0;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar8->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_bd0,(CMatrix3x4f *)pCVar14,&local_1260)
        ;
        pCVar6 = &local_1260;
      }
    }
    iVar3 = 0xc;
    pfVar5 = local_1080;
    goto LAB_00456abe;
  }
  local_3b0 = local_3b4;
  local_3ac = local_3b4;
  local_3c = local_3b4;
  local_38 = local_3b4;
  local_34 = local_3b4;
  if (param_1->layer_action_index == 9) {
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,(param_1->model).bone_transform.bone_model_matrices[_DAT_01b4d290].m);
    local_390 = afStack_1ac[2];
    local_3a4[(uint)bVar13 * -2 + 6] = afStack_1ac[(uint)bVar13 * -2 + 3];
    local_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,(param_1->model).bone_transform.bone_model_matrices[_DAT_01b4d28c].m);
    local_78 = local_3fc;
    local_74[(uint)bVar13 * -2] = afStack_44c[(uint)bVar13 * -2 + 0x15];
    local_74[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_44c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
    local_f8[5] = local_78 + local_390;
    local_e0[0] = local_74[0] + local_38c;
    local_e0[1] = local_74[1] + local_388;
    local_420 = local_78 + local_390;
    afStack_44c[(uint)bVar13 * -2 + 0xc] = local_e0[(uint)bVar13 * -2];
    afStack_44c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
         local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    local_408 = local_420 * _DAT_005d02e7;
    local_404 = local_41c * _DAT_005d02e7;
    local_400 = local_418 * _DAT_005d02e7;
    local_cc = local_420 * _DAT_005d02e7;
    local_e0[(uint)bVar13 * -2 + 6] = afStack_44c[(uint)bVar13 * -2 + 0x12];
    local_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_44c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_ffffeb60);
    puVar9 = local_510;
    puVar12 = &local_540;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
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
      pCVar8 = &local_750;
      pCVar7 = &local_7b0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar7->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_7b0,pCVar6,&local_570);
      pCVar6 = &local_570;
      pCVar8 = &local_1140;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
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
    pfVar11 = &local_4f8;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar11 = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
      pfVar11 = pfVar11 + (uint)bVar13 * -2 + 1;
    }
    local_3a4[2] = local_4f8 + local_4ec;
    local_3a4[3] = local_4f4 + (float)local_4e8;
    local_394 = local_4f0 + local_4e4;
    afStack_2f0[5] = local_4f8 + local_4ec;
    local_2d8[(uint)bVar13 * -2] = local_3a4[(uint)bVar13 * -2 + 3];
    local_2d8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         local_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    local_348 = (CDemonActor *)(afStack_2f0[5] * _DAT_005d02e7);
    local_344[0] = local_2d8[0] * _DAT_005d02e7;
    local_344[1] = local_2d8[1] * _DAT_005d02e7;
    local_240 = (CDemonActor *)(afStack_2f0[5] * _DAT_005d02e7);
    local_23c[(uint)bVar13 * -2] = (CDemonActor *)local_344[(uint)bVar13 * -2];
    local_23c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         (CDemonActor *)local_344[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    if (&local_3c != &local_240) {
      local_3c = local_240;
      local_38 = local_23c[0];
      local_34 = local_23c[1];
    }
    fVar1 = pCVar2[2].particle_systems[4].position.z;
    if (fVar1 != 2.8026e-45) {
      if (fVar1 == 1.4013e-45) {
        if (param_3 == 0.0) {
          core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_c60);
          pCVar6 = &local_c60;
LAB_00457ee2:
          pCVar8 = &local_d50;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar8->m[0].w = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
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
                  (&local_d50,
                   (CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[iVar3].m,
                   &local_6c0);
        pCVar6 = &local_6c0;
        pCVar8 = &local_d50;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar8->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
        local_3ec[0xb] = local_1b0;
        local_3ec[(uint)bVar13 * -2 + 0xc] = (CDemonActor *)afStack_1ac[(uint)bVar13 * -2];
        local_3ec[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
             (CDemonActor *)afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        if (local_3ec + 0xe != local_3ec + 0xb) {
          local_3b4 = local_3ec[0xb];
          local_3b0 = local_3bc;
          local_3ac = local_3b8;
        }
        local_34 = (CDemonActor *)
                   (local_4e4 * (float)_DAT_005d02f7 + local_4f0 * (float)_DAT_005d02ef);
        goto LAB_004578df;
      }
      if (fVar1 != 4.2039e-45) {
        _DAT_01d046a0 = "..\\core\\doc.cpp";
        _DAT_01d046a4 = 0xe8f;
        core_main_c_FUN_004e4500();
        goto LAB_004578df;
      }
    }
    local_38 = local_4e8;
  }
LAB_004578df:
  iVar4 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar4 != 0) {
    afStack_164[8] = -0.0900813;
    afStack_164[10] = 0.649052;
    afStack_164[9] = -0.242916;
    local_4ac[2] = 0.414782;
    local_4ac[3] = -0.161673;
    local_198 = 0xbdb87c8b;
    afStack_1ac[(uint)bVar13 * -2 + 6] = afStack_164[(uint)bVar13 * -2 + 9];
    afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    local_4ac[4] = -0.489897;
    afStack_164[2] = 0.30057;
    core_xform_cpp_FUN_00591c10();
    afStack_164[4] = 0.64525;
    afStack_164[3] = -0.133049;
    auStack_218[5] = 0x3ec5521a;
    afStack_32c[2] = afStack_164[2];
    afStack_32c[(uint)bVar13 * -2 + 3] = afStack_164[(uint)bVar13 * -2 + 3];
    afStack_32c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    auStack_218[6] = 0xbc47e649;
    auStack_218[7] = 0xbefd0529;
    core_xform_cpp_FUN_00591c10();
    pCVar14 = (param_1->model).bone_transform.bone_model_matrices[iVar3].m;
    core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_a50);
    pfVar5 = local_fc0;
    pCVar6 = &local_690;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar6->m[0].w = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_690,(CMatrix3x4f *)pCVar14,&local_f60);
    pCVar6 = &local_f60;
    pfVar5 = afStack_11e0 + 4;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
      pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
    local_120 = local_9c;
    afStack_164[(uint)bVar13 * -2 + 0x12] = afStack_98[(uint)bVar13 * -2];
    afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
         afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    if (local_3ec + 0xe != (CDemonActor **)(afStack_164 + 0x11)) {
      local_3b4 = local_120;
      local_3b0 = local_11c;
      local_3ac = local_118;
    }
  }
  pCVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CBoxActorClassInfo.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    iVar4 = _strcmp(pCVar2[1].create_event,"SHOVEL.KFM");
    if (iVar4 == 0) {
      local_3f0 = iVar4;
      local_3ec[1] = (CDemonActor *)0x3e3851ec;
      local_3ec[0] = (CDemonActor *)0x3fc00000;
      local_224 = 0xbdcccccd;
      local_228 = 0x3e800000;
      local_220 = 0;
      local_21c = iVar4;
      auStack_218[(uint)bVar13 * -2] = local_3ec[(uint)bVar13 * -2];
      auStack_218[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           local_3ec[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_xform_cpp_FUN_00591c10();
      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                (&local_e70,
                 (CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[_DAT_01b4d290].m
                );
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
      local_468 = apCStack_4dc[2];
      local_464[(uint)bVar13 * -2] = apCStack_4dc[(uint)bVar13 * -2 + 3];
      local_464[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           apCStack_4dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      if (local_3ec + 0xe != &local_468) {
        local_3b4 = local_468;
        local_3b0 = local_464[0];
        local_3ac = local_464[1];
      }
    }
  }
  pCVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CBoxActorClassInfo.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    iVar4 = _strcmp(pCVar2[1].create_event,"WOOD_BOWL.KFM");
    if (iVar4 == 0) {
      local_27c = iVar4;
      local_278[1] = -1.75;
      local_278[0] = -2.1;
      local_168 = iVar4;
      afStack_164[(uint)bVar13 * -2] = local_278[(uint)bVar13 * -2];
      afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           local_278[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      local_178 = 0;
      local_180 = 0x3e4ccccd;
      local_17c = 0xbda3d70a;
      core_xform_cpp_FUN_00591c10();
      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                (&local_5a0,
                 (CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[_DAT_01b4d290].m
                );
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
      local_114 = local_108;
      afStack_164[(uint)bVar13 * -2 + 0x15] = afStack_164[(uint)bVar13 * -2 + 0x18];
      afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
           afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
      if (local_3ec + 0xe != (CDemonActor **)(afStack_164 + 0x14)) {
        local_3b4 = local_114;
        local_3b0 = local_110;
        local_3ac = local_10c;
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
      local_18c = 0x3e4ccccd;
      local_344[5] = fVar1;
      afStack_32c[(uint)bVar13 * -2] = local_f8[(uint)bVar13 * -2];
      afStack_32c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           local_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      local_188 = 0xbe23d70a;
      local_184 = 0;
      core_xform_cpp_FUN_00591c10();
      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_00591860
                (&local_780,
                 (CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[_DAT_01b4d290].m
                );
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
      local_84 = local_2d0;
      local_80[(uint)bVar13 * -2] = (CDemonActor *)afStack_2cc[(uint)bVar13 * -2];
      local_80[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           (CDemonActor *)afStack_2cc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      if (local_3ec + 0xe != (CDemonActor **)(afStack_98 + 5)) {
        local_3b4 = local_84;
        local_3b0 = local_80[0];
        local_3ac = local_80[1];
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
            (&local_480,(CMatrix3x4f *)(param_1->model).bone_transform.bone_model_matrices[iVar3].m)
  ;
  core_xform_cpp_FUN_00591c10();
  core_xform_cpp_FUN_00591530();
  local_4b0 = local_24c;
  local_4ac[(uint)bVar13 * -2] = local_278[(uint)bVar13 * -2 + 0xc];
  local_4ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       local_278[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
  iVar3 = 0xc;
  local_1e0 = local_480.x - local_4b0;
  local_1dc = local_480.y - local_4ac[0];
  local_1d8 = local_480.z - local_4ac[1];
  local_4ac[5] = local_480.x - local_4b0;
  local_494[(uint)bVar13 * -2] = afStack_1f4[(uint)bVar13 * -2 + 6];
  local_494[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       afStack_1f4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
  pfVar5 = local_1080;
  pCVar6 = (CMatrix3x4f *)(afStack_11e0 + 0x10);
  local_11a0.m[0].z = local_11a0.m[0].z + local_4ac[5];
  local_11a0.m[1].z = local_11a0.m[1].z + local_494[0];
  local_11a0.m[2].z = local_11a0.m[2].z + local_494[1];
LAB_00456abe:
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
    pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
  }
  pfVar5 = local_1080;
  pfVar11 = unaff_ESI;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar11 = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar13 * -2 + 1;
    pfVar11 = pfVar11 + (uint)bVar13 * -2 + 1;
  }
  return unaff_ESI;
}
