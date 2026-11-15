// Name: core_stranger.cpp_FUN_00568500
// Address: 00568500
// Address Range: [[00568500, 005695f6]]
// Convention: unknown
// Signature: float * core_stranger_cpp_FUN_00568500(CCharacter *param_1,CDemonActor *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_stranger_cpp_FUN_00568500(CCharacter *param_1,CDemonActor *param_2,float param_3)

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
  CMatrix3x4f *pCVar9;
  uint *puVar10;
  CMatrix3x4f *pCVar11;
  float *pfVar12;
  uint *puVar13;
  byte bVar14;
  float afStackY_12e8 [270];
  CVector3f *pCVar15;
  CVector3f *pCVar16;
  CBoundingBox3D *in_stack_fffff160;
  CVector3f *in_stack_fffff168;
  CVector3f *in_stack_fffff16c;
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
  CMatrix3x4f local_bd0;
  float local_ba0 [12];
  CMatrix3x4f local_b70;
  CMatrix3x4f local_b40;
  CMatrix3x4f local_b10;
  CMatrix3x4f local_ae0;
  float local_ab0 [12];
  CMatrix3x4f local_a80;
  CMatrix3x4f local_a50;
  CMatrix3x4f local_a20;
  CMatrix3x4f local_9f0;
  CMatrix3x4f local_9c0;
  CMatrix3x4f local_990;
  float local_960 [12];
  CMatrix3x4f local_930;
  CMatrix3x4f local_900;
  CMatrix3x4f local_8d0;
  CMatrix3x4f local_8a0;
  CMatrix3x4f local_870;
  CMatrix3x4f local_840;
  CMatrix3x4f local_810;
  float local_7e0 [12];
  CMatrix3x4f local_7b0;
  CMatrix3x4f local_780;
  CMatrix3x4f local_750;
  CMatrix3x4f local_720;
  CMatrix3x4f local_6f0;
  CMatrix3x4f local_6c0;
  CMatrix3x4f local_690;
  CMatrix3x4f local_660;
  float local_630 [12];
  CMatrix3x4f local_600;
  CMatrix3x4f local_5d0;
  CMatrix3x4f local_5a0;
  CMatrix3x4f local_570;
  CMatrix3x4f local_540;
  CMatrix3x4f local_510;
  CMatrix3x4f local_4e0;
  CMatrix3x4f local_4b0;
  CMatrix3x4f local_480;
  CMatrix3x4f local_450;
  CMatrix3x4f local_420;
  CMatrix3x4f local_3f0;
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
  float local_2fc [2];
  CVector3f local_2f4;
  uint local_2e8;
  float local_2e4 [2];
  CVector3f local_2dc;
  CVector3f local_2d0;
  float local_2c4;
  float local_2c0 [2];
  CVector3f local_2b8;
  uint local_2ac;
  float local_2a8 [2];
  CVector3f local_2a0;
  CVector3f local_294;
  float local_288;
  float local_284 [4];
  float local_274;
  CVector3f local_270;
  float local_264;
  float local_260 [2];
  CDemonActor *local_258;
  float afStack_254 [2];
  CVector3f local_24c;
  float local_240;
  float local_23c [5];
  CVector3f local_228;
  CVector3f local_21c;
  uint local_210;
  float local_20c [2];
  CVector3f local_204;
  CVector3f local_1f8;
  CVector3f local_1ec;
  CVector3f local_1e0;
  float local_1d4;
  float local_1d0 [2];
  CVector3f local_1c8;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  float local_18c;
  float local_188 [2];
  CVector3f local_180;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  float local_144;
  float local_140 [2];
  CVector3f local_138;
  CDemonActor *local_12c;
  float afStack_128 [5];
  CVector3f local_114;
  uint local_108;
  float local_104 [2];
  CVector3f local_fc;
  CVector3f local_f0;
  float local_e4;
  float local_e0 [2];
  CVector3f local_d8;
  CVector3f local_cc;
  CVector3f local_c0;
  uint local_b4;
  float local_b0 [5];
  CVector3f local_9c;
  uint local_90;
  float local_8c [2];
  CVector3f local_84;
  float local_78;
  float local_74 [4];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  float local_38 [5];
  
  bVar14 = 0;
  iVar3 = param_1->carry_hands[(int)param_3].bone_index;
  local_270.x = (float)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                 (param_2,g_CWeaponClassInfo.name_hash);
  if ((CDemonActor *)local_270.x != (CDemonActor *)0x0) {
    pCVar5 = (param_1->model).bone_transform.bone_model_matrices + iVar3;
    iVar3 = ((CDemonActor *)((int)local_270.x + 0x2b4))->particle_systems[0].stop_after_fade;
    if (iVar3 == 1) {
      local_108 = 0x3e44330d;
      local_104[1] = 0.969617;
      local_104[0] = 2.2981;
      local_204.x = 0.53949;
      local_198.x = 0.191601;
      *(float *)((int)&local_198 + (uint)bVar14 * -8 + 4) = local_104[(uint)bVar14 * -2];
      *(float *)((int)&local_198 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      local_204.y = -0.235855;
      local_204.z = -0.412366;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_9f0,&local_204,&local_198);
      local_2e8 = 0xbed430d3;
      local_2e4[1] = 1.83791;
      pCVar15 = &local_2a0;
      local_2e4[0] = 0.934256;
      local_2a0.x = -0.414435;
      *(float *)((int)&local_2a0 + (uint)bVar14 * -8 + 4) = local_2e4[(uint)bVar14 * -2];
      *(float *)((int)&local_2a0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_2e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      local_138.z = 0.26139;
      local_138.x = 0.40292;
      local_138.y = 0.095011;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_bd0,&local_138,pCVar15);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_9f0,&local_bd0,1.0 - fVar1);
      pfVar6 = local_cf0;
      pCVar9 = &local_7b0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar9->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar14 * -2 + 1;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_7b0,pCVar5,&local_c90);
      pCVar5 = &local_c90;
    }
    else if (iVar3 == 2) {
      pCVar15 = &local_180;
      local_90 = 0x3e3b65aa;
      local_8c[1] = 1.66375;
      local_8c[0] = 2.24986;
      local_2f4.y = -0.0957868;
      local_180.x = 0.183005;
      *(float *)((int)&local_180 + (uint)bVar14 * -8 + 4) = local_8c[(uint)bVar14 * -2];
      *(float *)((int)&local_180 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_8c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      local_2f4.z = -0.233186;
      local_2f4.x = 0.412537;
      local_b0[1] = 1.72744;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_660,&local_2f4,pCVar15);
      local_b0[0] = 1.34731;
      pCVar16 = &local_1f8;
      local_b4 = 0xbe93c947;
      local_84.x = 0.483848;
      pCVar15 = &local_84;
      local_84.y = 0.0729828;
      pCVar9 = &local_540;
      local_1f8.x = -0.288645;
      *(float *)((int)&local_1f8 + (uint)bVar14 * -8 + 4) = local_b0[(uint)bVar14 * -2];
      *(float *)((int)&local_1f8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      local_84.z = 0.0731532;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(pCVar9,pCVar15,pCVar16);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_660,&local_540,1.0 - fVar1);
      pfVar6 = local_960;
      pCVar9 = &local_a20;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar9->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar14 * -2 + 1;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_a20,pCVar5,&local_900);
      pCVar5 = &local_900;
    }
    else if (iVar3 == 4) {
      afStack_128[2] = 0.192169;
      afStack_128[4] = 1.6361;
      afStack_128[3] = 2.30755;
      local_15c.x = 0.334258;
      local_15c.y = -0.18522;
      local_2d0.x = 0.192169;
      *(float *)((int)&local_2d0 + (uint)bVar14 * -8 + 4) = afStack_128[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_2d0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_128[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_15c.z = -0.409418;
      local_38[2] = -0.464445;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_8d0,&local_15c,&local_2d0);
      local_38[4] = 1.77515;
      local_38[3] = 1.15525;
      local_294.x = 0.381162;
      local_21c.x = local_38[2];
      *(float *)((int)&local_21c + (uint)bVar14 * -8 + 4) = local_38[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_21c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_38[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_294.y = 0.0692056;
      local_294.z = -0.225393;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_3f0,&local_294,&local_21c);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_8d0,&local_3f0,1.0 - fVar1);
      pfVar6 = local_ba0;
      pCVar9 = &local_c60;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar9->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar14 * -2 + 1;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_c60,pCVar5,&local_420);
      pCVar5 = &local_420;
    }
    else if (iVar3 == 3) {
      local_1b0.x = 0.238337;
      local_1b0.y = -0.0656786;
      local_1b0.z = 0.0335054;
      local_210 = 0xbf3e6506;
      local_20c[1] = -0.808348;
      pCVar15 = &local_1ec;
      pCVar16 = &local_1b0;
      pCVar9 = &local_b10;
      local_20c[0] = 0.693486;
      local_1ec.x = -0.743729;
      *(float *)((int)&local_1ec + (uint)bVar14 * -8 + 4) = local_20c[(uint)bVar14 * -2];
      *(float *)((int)&local_1ec + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_20c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(pCVar9,pCVar16,pCVar15);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_b10,pCVar5,&local_720);
      pCVar5 = &local_720;
    }
    else if (iVar3 == 5) {
      local_1c8.x = 0.62;
      local_1c8.y = 0.0;
      local_1c8.z = 0.217;
      local_b0[3] = 1.57;
      pCVar15 = &local_d8;
      local_b0[4] = -1.57;
      pCVar16 = &local_1c8;
      pCVar9 = &local_5a0;
      local_b0[2] = 0.0;
      local_d8.x = 0.0;
      *(float *)((int)&local_d8 + (uint)bVar14 * -8 + 4) = local_b0[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_d8 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(pCVar9,pCVar16,pCVar15);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_5a0,pCVar5,&local_8a0);
      pCVar5 = &local_8a0;
    }
    else if (iVar3 == 7) {
      local_23c[2] = -0.0900813;
      local_23c[4] = 0.649052;
      local_23c[3] = -0.242916;
      local_168.x = 0.414782;
      local_168.y = -0.161673;
      local_2dc.x = -0.0900813;
      *(float *)((int)&local_2dc + (uint)bVar14 * -8 + 4) = local_23c[(uint)bVar14 * -2 + 3];
      *(float *)((int)&local_2dc + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_23c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      local_168.z = -0.489897;
      local_3c = 0.30057;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_870,&local_168,&local_2dc);
      local_38[1] = 0.64525;
      local_38[0] = -0.133049;
      local_1e0.x = 0.303704;
      local_fc.x = local_3c;
      *(float *)((int)&local_fc + (uint)bVar14 * -8 + 4) = local_38[(uint)bVar14 * -2];
      *(float *)((int)&local_fc + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           local_38[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      local_1e0.y = 0.0649791;
      local_1e0.z = -0.273446;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_840,&local_1e0,&local_fc);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_870,&local_840,1.0 - fVar1);
      pfVar6 = local_630;
      pCVar9 = &local_c30;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar9->m[0].w = *pfVar6;
        pfVar6 = pfVar6 + (uint)bVar14 * -2 + 1;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_c30,pCVar5,&local_510);
      pCVar5 = &local_510;
    }
    else if (param_3 == 0.0) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_ae0,(CVector3f *)&DAT_0264be20,(CVector3f *)&DAT_0265370c);
      pCVar9 = &local_ae0;
      core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_6f0);
      pCVar8 = &local_3c0;
      pCVar7 = &local_6f0;
      pCVar11 = &local_3c0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar11->m[0].w = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_6c0);
      pCVar7 = &local_6c0;
      pCVar11 = &local_570;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar11->m[0].w = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_570,pCVar8,&local_690);
      pCVar8 = &local_690;
      pCVar7 = &local_780;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar7->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_780,pCVar9,&local_450);
      pCVar9 = &local_450;
      pCVar8 = &local_750;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar9->m[0].w;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_750,pCVar5,&local_930);
      pCVar5 = &local_930;
    }
    else {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_4e0,(CVector3f *)&DAT_0264be14,(CVector3f *)&DAT_0265370c);
      pCVar9 = &local_4e0;
      core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_e10);
      pCVar8 = (CMatrix3x4f *)&stack0xfffff160;
      pCVar7 = &local_e10;
      pfVar6 = (float *)&stack0xfffff160;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar6 = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
        pfVar6 = pfVar6 + (uint)bVar14 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_de0);
      pCVar7 = &local_de0;
      pCVar11 = &local_600;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar11->m[0].w = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_600,pCVar8,&local_db0);
      pCVar8 = &local_db0;
      pCVar7 = &local_e70;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar7->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_e70,pCVar9,&local_d80);
      pCVar9 = &local_d80;
      pCVar8 = &local_e40;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar9->m[0].w;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_e40,pCVar5,&local_d50);
      pCVar5 = &local_d50;
    }
    iVar3 = 0xc;
    pfVar6 = local_ab0;
    goto LAB_005686a7;
  }
  local_54.y = 0.0;
  local_270.y = local_270.x;
  local_270.z = local_270.x;
  local_54.x = local_270.x;
  local_54.z = local_270.x;
  if (param_1->layer_action_index == 0xe) {
    core_xform_cpp_transformVector3x4_FUN_00591530
              ((CVector3f *)&DAT_0265370c,
               (param_1->model).bone_transform.bone_model_matrices + _DAT_0264be68,&local_24c);
    local_18c = local_24c.x;
    local_188[(uint)bVar14 * -2] = *(float *)((int)&local_24c + (uint)bVar14 * -8 + 4);
    local_188[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         *(float *)((int)&local_24c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    core_xform_cpp_transformVector3x4_FUN_00591530
              ((CVector3f *)&DAT_0265370c,
               (param_1->model).bone_transform.bone_model_matrices + _DAT_0264be64,&local_228);
    local_74[2] = local_228.x;
    local_74[(uint)bVar14 * -2 + 3] = *(float *)((int)&local_228 + (uint)bVar14 * -8 + 4);
    local_74[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         *(float *)((int)&local_228 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    local_264 = local_74[2] + local_18c;
    local_260[0] = local_74[3] + local_188[0];
    local_260[1] = local_64 + local_188[1];
    local_240 = local_74[2] + local_18c;
    local_23c[(uint)bVar14 * -2] = local_260[(uint)bVar14 * -2];
    local_23c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         local_260[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    local_e4 = local_240 * _DAT_005eb955;
    local_e0[0] = local_23c[0] * _DAT_005eb955;
    local_e0[1] = local_23c[1] * _DAT_005eb955;
    local_288 = local_240 * _DAT_005eb955;
    local_284[(uint)bVar14 * -2] = local_e0[(uint)bVar14 * -2];
    local_284[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         local_e0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffff160);
    puVar10 = local_348;
    puVar13 = &local_360;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
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
      pCVar9 = &local_9c0;
      pCVar8 = &local_5d0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar8->m[0].w = pCVar9->m[0].w;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_5d0,pCVar5,&local_990);
      pCVar5 = &local_990;
      pCVar9 = &local_c00;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar9->m[0].w = pCVar5->m[0].w;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar14 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
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
    pfVar12 = &local_330;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar12 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar14 * -2 + 1;
      pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
    }
    local_1d4 = local_330 + local_324;
    local_1d0[0] = local_32c + (float)local_320;
    local_1d0[1] = local_328 + local_31c;
    local_284[2] = local_330 + local_324;
    local_284[(uint)bVar14 * -2 + 3] = local_1d0[(uint)bVar14 * -2];
    local_284[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         local_1d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    local_300 = (CDemonActor *)(local_284[2] * _DAT_005eb955);
    local_2fc[0] = local_284[3] * _DAT_005eb955;
    local_2fc[1] = local_274 * _DAT_005eb955;
    local_1a4.x = local_284[2] * _DAT_005eb955;
    *(float *)((int)&local_1a4 + (uint)bVar14 * -8 + 4) = local_2fc[(uint)bVar14 * -2];
    *(float *)((int)&local_1a4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         local_2fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    if (&local_270 != &local_1a4) {
      local_270.x = local_1a4.x;
      local_270.y = local_1a4.y;
      local_270.z = local_1a4.z;
    }
    fVar1 = pCVar2[2].particle_systems[4].position.z;
    if (fVar1 != 2.8026e-45) {
      if (fVar1 == 1.4013e-45) {
        if (param_3 == 0.0) {
          core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_d20);
          pCVar5 = &local_d20;
LAB_00569474:
          pCVar9 = &local_810;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar9->m[0].w = pCVar5->m[0].w;
            pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar14 * -2 + 1) * 4);
            pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
          }
        }
        else {
          if (param_3 == 1.4013e-45) {
            core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_cc0);
            pCVar5 = &local_cc0;
            goto LAB_00569474;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(&local_810);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&local_810,(param_1->model).bone_transform.bone_model_matrices + iVar3,&local_390
                  );
        pCVar5 = &local_390;
        pCVar9 = &local_810;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar9->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar14 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_810,in_stack_fffff168);
        local_2b8.x = (float)local_258;
        *(float *)((int)&local_2b8 + (uint)bVar14 * -8 + 4) = afStack_254[(uint)bVar14 * -2];
        *(float *)((int)&local_2b8 + ((uint)bVar14 * -2 + (uint)bVar14 * -2) * 4 + 8) =
             afStack_254[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        if (&local_54 != &local_2b8) {
          local_54.x = local_2b8.x;
          local_54.y = local_2b8.y;
          local_54.z = local_2b8.z;
        }
        local_270.z = local_31c * (float)_DAT_005eb965 + local_328 * (float)_DAT_005eb95d;
        goto LAB_00568f2d;
      }
      if (fVar1 != 4.2039e-45) {
        _DAT_01d046a0 = "..\\core\\stranger.cpp";
        _DAT_01d046a4 = 0xc40;
        core_main_c_displayErrorAndQuit_FUN_004e4500("Don't know how to carry light %s");
        goto LAB_00568f2d;
      }
    }
    local_270.y = (float)local_320;
  }
LAB_00568f2d:
  iVar4 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar4 != 0) {
    local_2ac = 0xbdb87c8b;
    local_2a8[1] = 0.649052;
    local_2a8[0] = -0.242916;
    local_114.x = 0.414782;
    local_114.y = -0.161673;
    local_9c.x = -0.0900813;
    *(float *)((int)&local_9c + (uint)bVar14 * -8 + 4) = local_2a8[(uint)bVar14 * -2];
    *(float *)((int)&local_9c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         local_2a8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    local_114.z = -0.489897;
    local_144 = 0.30057;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_a80,&local_114,&local_9c);
    local_140[1] = 0.64525;
    local_140[0] = -0.133049;
    local_f0.x = 0.385392;
    local_174.x = local_144;
    *(float *)((int)&local_174 + (uint)bVar14 * -8 + 4) = local_140[(uint)bVar14 * -2];
    *(float *)((int)&local_174 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         local_140[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    local_f0.y = -0.0122009;
    local_f0.z = -0.49418;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_a50,&local_f0,&local_174);
    pCVar9 = (param_1->model).bone_transform.bone_model_matrices + iVar3;
    core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_a80);
    pfVar6 = local_7e0;
    pCVar5 = &local_480;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar5->m[0].w = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar14 * -2 + 1;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar14 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_480,pCVar9,&local_b70);
    pCVar5 = &local_b70;
    pCVar9 = &local_4b0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar9->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar14 * -2 + 1) * 4);
      pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_4b0,in_stack_fffff16c);
    local_150.x = (float)local_12c;
    *(float *)((int)&local_150 + (uint)bVar14 * -8 + 4) = afStack_128[(uint)bVar14 * -2];
    *(float *)((int)&local_150 + ((uint)bVar14 * -2 + (uint)bVar14 * -2) * 4 + 8) =
         afStack_128[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    if (&local_54 != &local_150) {
      local_54.x = local_150.x;
      local_54.y = local_150.y;
      local_54.z = local_150.z;
    }
  }
  if (param_3 == 0.0) {
    local_cc.y = param_3;
    local_cc.z = param_3;
    local_cc.x = -0.4;
    if (&local_1bc != &local_cc) {
      local_1bc.y = 0.0;
      local_1bc.z = 0.0;
      local_1bc.x = -0.4;
    }
  }
  else if (param_3 == 1.4013e-45) {
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
            (&local_1bc,(param_1->model).bone_transform.bone_model_matrices + iVar3);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(&local_b40,&local_1bc,&local_54)
  ;
  core_xform_cpp_transformVector3x4_FUN_00591530(&local_270,&local_b40,&local_48);
  local_78 = local_48.x;
  local_74[(uint)bVar14 * -2] = *(float *)((int)&local_48 + (uint)bVar14 * -8 + 4);
  local_74[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
       *(float *)((int)&local_48 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
  iVar3 = 0xc;
  local_60 = local_1bc.x - local_78;
  local_5c = local_1bc.y - local_74[0];
  local_58 = local_1bc.z - local_74[1];
  local_2c4 = local_1bc.x - local_78;
  local_2c0[(uint)bVar14 * -2] = local_74[(uint)bVar14 * -2 + 6];
  local_2c0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
       local_74[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
  pfVar6 = local_ab0;
  pCVar5 = &local_b40;
  local_b40.m[0].z = local_b40.m[0].z + local_2c4;
  local_b40.m[1].z = local_b40.m[1].z + local_2c0[0];
  local_b40.m[2].z = local_b40.m[2].z + local_2c0[1];
LAB_005686a7:
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar14 * -2 + 1) * 4);
    pfVar6 = pfVar6 + (uint)bVar14 * -2 + 1;
  }
  pfVar6 = local_ab0;
  pfVar12 = unaff_ESI;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar12 = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar14 * -2 + 1;
    pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
  }
  return unaff_ESI;
}
