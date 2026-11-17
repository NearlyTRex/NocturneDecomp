// Name: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_00568500
// Address: 00568500
// Address Range: [[00568500, 005695f6]]
// Convention: __stack3_esi
// Signature: CMatrix3x4f * __stack3_esi core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_00568500(CStranger *this_ptr,CDemonActor *carried_actor,int hand_index,CMatrix3x4f *output_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack3_esi core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_00568500(CStranger *this_ptr,CDemonActor *carried_actor,int hand_index,CMatrix3x4f *output_matrix)

{
  float fVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  float *pfVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_12e8 [270];
  CVector3f *pCVar13;
  CVector3f *pCVar14;
  CBoundingBox3D *in_stack_fffff160;
  CVector3f *in_stack_fffff168;
  CQuaternion4f *matrix_b;
  CVector3f *in_stack_fffff16c;
  CMatrix3x4f local_e70;
  CMatrix3x4f local_e40;
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
  CMatrix3x4f local_c30;
  CMatrix3x4f local_c00;
  CMatrix3x4f local_bd0;
  CMatrix3x4f local_ba0;
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
  CMatrix3x4f local_960;
  CMatrix3x4f local_930;
  CMatrix3x4f local_900;
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
  uint local_2a8;
  uint local_2a4;
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
  CMatrix3x4f *local_24;
  CMatrix3x4f *local_20;
  int local_1c;
  CDemonActor *local_18;
  CMatrix3x4f *local_14;
  float local_10;
  
  bVar12 = 0;
  local_1c = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  local_24 = output_matrix;
  local_270.x = (float)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                 (carried_actor,g_CWeaponClassInfo.name_hash);
  local_20 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
  if ((CDemonActor *)local_270.x != (CDemonActor *)0x0) {
    iVar2 = ((CDemonActor *)((int)local_270.x + 0x2b4))->particle_systems[0].stop_after_fade;
    local_14 = local_20 + local_1c;
    if (iVar2 == 1) {
      local_108 = 0x3e44330d;
      local_104[1] = 0.969617;
      local_104[0] = 2.2981;
      local_204.x = 0.53949;
      local_198.x = 0.191601;
      *(float *)((int)&local_198 + (uint)bVar12 * -8 + 4) = local_104[(uint)bVar12 * -2];
      *(float *)((int)&local_198 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_104[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      local_204.y = -0.235855;
      local_204.z = -0.412366;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_9f0,&local_204,&local_198);
      local_2e8 = 0xbed430d3;
      local_2e4[1] = 1.83791;
      pCVar13 = &local_2a0;
      local_2e4[0] = 0.934256;
      local_2a0.x = -0.414435;
      *(float *)((int)&local_2a0 + (uint)bVar12 * -8 + 4) = local_2e4[(uint)bVar12 * -2];
      *(float *)((int)&local_2a0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_2e4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      local_138.z = 0.26139;
      local_138.x = 0.40292;
      local_138.y = 0.095011;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_bd0,&local_138,pCVar13);
      pCVar4 = local_14;
      local_10 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_9f0,&local_bd0,1.0 - local_10,&local_cf0);
      pCVar3 = &local_cf0;
      pCVar5 = &local_7b0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar5->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_7b0,pCVar4,&local_c90);
      pCVar3 = &local_c90;
    }
    else if (iVar2 == 2) {
      pCVar13 = &local_180;
      local_90 = 0x3e3b65aa;
      local_8c[1] = 1.66375;
      local_8c[0] = 2.24986;
      local_2f4.y = -0.0957868;
      local_180.x = 0.183005;
      *(float *)((int)&local_180 + (uint)bVar12 * -8 + 4) = local_8c[(uint)bVar12 * -2];
      *(float *)((int)&local_180 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      local_2f4.z = -0.233186;
      local_2f4.x = 0.412537;
      local_b0[1] = 1.72744;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_660,&local_2f4,pCVar13);
      local_b0[0] = 1.34731;
      pCVar14 = &local_1f8;
      local_b4 = 0xbe93c947;
      local_84.x = 0.483848;
      pCVar13 = &local_84;
      local_84.y = 0.0729828;
      pCVar3 = &local_540;
      local_1f8.x = -0.288645;
      *(float *)((int)&local_1f8 + (uint)bVar12 * -8 + 4) = local_b0[(uint)bVar12 * -2];
      *(float *)((int)&local_1f8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_b0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      local_84.z = 0.0731532;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(pCVar3,pCVar13,pCVar14);
      pCVar4 = local_14;
      local_10 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_660,&local_540,1.0 - local_10,&local_960);
      pCVar3 = &local_960;
      pCVar5 = &local_a20;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar5->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_a20,pCVar4,&local_900);
      pCVar3 = &local_900;
    }
    else if (iVar2 == 4) {
      afStack_128[2] = 0.192169;
      afStack_128[4] = 1.6361;
      afStack_128[3] = 2.30755;
      local_15c.x = 0.334258;
      local_15c.y = -0.18522;
      local_2d0.x = 0.192169;
      *(float *)((int)&local_2d0 + (uint)bVar12 * -8 + 4) = afStack_128[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_2d0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           afStack_128[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_15c.z = -0.409418;
      local_38[2] = -0.464445;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_8d0,&local_15c,&local_2d0);
      local_38[4] = 1.77515;
      local_38[3] = 1.15525;
      local_294.x = 0.381162;
      local_21c.x = local_38[2];
      *(float *)((int)&local_21c + (uint)bVar12 * -8 + 4) = local_38[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_21c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_38[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_294.y = 0.0692056;
      local_294.z = -0.225393;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_3f0,&local_294,&local_21c);
      pCVar4 = local_14;
      local_10 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_8d0,&local_3f0,1.0 - local_10,&local_ba0);
      pCVar3 = &local_ba0;
      pCVar5 = &local_c60;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar5->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_c60,pCVar4,&local_420);
      pCVar3 = &local_420;
    }
    else if (iVar2 == 3) {
      local_1b0.x = 0.238337;
      local_1b0.y = -0.0656786;
      local_1b0.z = 0.0335054;
      local_210 = 0xbf3e6506;
      local_20c[1] = -0.808348;
      pCVar13 = &local_1ec;
      pCVar14 = &local_1b0;
      pCVar3 = &local_b10;
      local_20c[0] = 0.693486;
      local_1ec.x = -0.743729;
      *(float *)((int)&local_1ec + (uint)bVar12 * -8 + 4) = local_20c[(uint)bVar12 * -2];
      *(float *)((int)&local_1ec + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_20c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(pCVar3,pCVar14,pCVar13);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_b10,local_14,&local_720);
      pCVar3 = &local_720;
    }
    else if (iVar2 == 5) {
      local_1c8.x = 0.62;
      local_1c8.y = 0.0;
      local_1c8.z = 0.217;
      local_b0[3] = 1.57;
      pCVar13 = &local_d8;
      local_b0[4] = -1.57;
      pCVar14 = &local_1c8;
      pCVar3 = &local_5a0;
      local_b0[2] = 0.0;
      local_d8.x = 0.0;
      *(float *)((int)&local_d8 + (uint)bVar12 * -8 + 4) = local_b0[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_d8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_b0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(pCVar3,pCVar14,pCVar13);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_5a0,local_14,&local_8a0);
      pCVar3 = &local_8a0;
    }
    else if (iVar2 == 7) {
      local_23c[2] = -0.0900813;
      local_23c[4] = 0.649052;
      local_23c[3] = -0.242916;
      local_168.x = 0.414782;
      local_168.y = -0.161673;
      local_2dc.x = -0.0900813;
      *(float *)((int)&local_2dc + (uint)bVar12 * -8 + 4) = local_23c[(uint)bVar12 * -2 + 3];
      *(float *)((int)&local_2dc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_23c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      local_168.z = -0.489897;
      local_3c = 0.30057;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_870,&local_168,&local_2dc);
      local_38[1] = 0.64525;
      local_38[0] = -0.133049;
      local_1e0.x = 0.303704;
      local_fc.x = local_3c;
      *(float *)((int)&local_fc + (uint)bVar12 * -8 + 4) = local_38[(uint)bVar12 * -2];
      *(float *)((int)&local_fc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           local_38[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      local_1e0.y = 0.0649791;
      local_1e0.z = -0.273446;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_840,&local_1e0,&local_fc);
      pCVar4 = local_14;
      local_10 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                           ((CCharacter *)this_ptr,0);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_870,&local_840,1.0 - local_10,&local_630);
      pCVar3 = &local_630;
      pCVar5 = &local_c30;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar5->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_c30,pCVar4,&local_510);
      pCVar3 = &local_510;
    }
    else if (hand_index == 0) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_ae0,&g_CVector3f_0264be20,&g_CVector3f_0265370c);
      pCVar3 = &local_ae0;
      pCVar9 = local_14;
      core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_6f0);
      pCVar5 = &local_3c0;
      pCVar4 = &local_6f0;
      pCVar8 = &local_3c0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar8->m[0].w = pCVar4->m[0].w;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_6c0);
      pCVar4 = &local_6c0;
      pCVar8 = &local_570;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar8->m[0].w = pCVar4->m[0].w;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_570,pCVar5,&local_690);
      pCVar5 = &local_690;
      pCVar4 = &local_780;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar4->m[0].w = pCVar5->m[0].w;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_780,pCVar3,&local_450);
      pCVar3 = &local_450;
      pCVar5 = &local_750;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar5->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_750,pCVar9,&local_930);
      pCVar3 = &local_930;
    }
    else {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&local_4e0,&g_CVector3f_0264be14,&g_CVector3f_0265370c);
      pCVar3 = &local_4e0;
      pCVar8 = local_14;
      core_xform_cpp_buildRotationX_FUN_00593240(1.5707964,&local_e10);
      pCVar5 = (CMatrix3x4f *)&stack0xfffff160;
      pCVar4 = &local_e10;
      pfVar6 = (float *)&stack0xfffff160;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar6 = pCVar4->m[0].w;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar12 * -2 + 1) * 4);
        pfVar6 = pfVar6 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_de0);
      pCVar4 = &local_de0;
      pCVar9 = &local_600;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar9->m[0].w = pCVar4->m[0].w;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_600,pCVar5,&local_db0);
      pCVar5 = &local_db0;
      pCVar4 = &local_e70;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar4->m[0].w = pCVar5->m[0].w;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_e70,pCVar3,&local_d80);
      pCVar3 = &local_d80;
      pCVar5 = &local_e40;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar5->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_e40,pCVar8,&local_d50);
      pCVar3 = &local_d50;
    }
    iVar2 = 0xc;
    pfVar6 = local_ab0;
    goto LAB_005686a7;
  }
  local_54.y = 0.0;
  local_270.y = local_270.x;
  local_270.z = local_270.x;
  local_54.x = local_270.x;
  local_54.z = local_270.x;
  if ((this_ptr->base).base.layer_action_index == 0xe) {
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_CVector3f_0265370c,local_20 + g_INT_ARRAY_0264be30[0xe],&local_24c);
    local_18c = local_24c.x;
    local_188[(uint)bVar12 * -2] = *(float *)((int)&local_24c + (uint)bVar12 * -8 + 4);
    local_188[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         *(float *)((int)&local_24c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_CVector3f_0265370c,local_20 + g_INT_ARRAY_0264be30[0xd],&local_228);
    local_74[2] = local_228.x;
    local_74[(uint)bVar12 * -2 + 3] = *(float *)((int)&local_228 + (uint)bVar12 * -8 + 4);
    local_74[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         *(float *)((int)&local_228 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    local_264 = local_74[2] + local_18c;
    local_260[0] = local_74[3] + local_188[0];
    local_260[1] = local_64 + local_188[1];
    local_240 = local_74[2] + local_18c;
    local_23c[(uint)bVar12 * -2] = local_260[(uint)bVar12 * -2];
    local_23c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         local_260[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    local_e4 = local_240 * 0.5f;
    local_e0[0] = local_23c[0] * 0.5f;
    local_e0[1] = local_23c[1] * 0.5f;
    local_288 = local_240 * 0.5f;
    local_284[(uint)bVar12 * -2] = local_e0[(uint)bVar12 * -2];
    local_284[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         local_e0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    (*((carried_actor->vtable)._ub)->getBoundingBox)(carried_actor,in_stack_fffff160);
    puVar7 = local_348;
    puVar11 = &local_360;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar11 = *puVar7;
      puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
    local_284[1] = local_284[1] + 0.333f;
    local_284[0] = local_284[0] - (local_350 - local_35c);
    local_10 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005626f0(carried_actor);
    local_284[0] = local_10 + local_284[0];
    core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(&local_c00);
    local_c00.m[0].z = local_288;
    local_c00.m[1].z = local_284[0];
    local_c00.m[2].z = local_284[1];
    if (this_ptr->pickup_facing_reversed != 0) {
      pCVar3 = &local_c00;
      core_xform_cpp_buildRotationY_FUN_005932c0(3.1415927,&local_9c0);
      pCVar5 = &local_9c0;
      pCVar4 = &local_5d0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar4->m[0].w = pCVar5->m[0].w;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar12 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_5d0,pCVar3,&local_990);
      pCVar3 = &local_990;
      pCVar5 = &local_c00;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar5->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
      }
    }
    iVar2 = 0xc;
    pfVar6 = local_ab0;
    pCVar3 = &local_c00;
    goto LAB_005686a7;
  }
  local_18 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (carried_actor,g_CDemonActorType_007bcc4c.name_hash);
  if (local_18 != (CDemonActor *)0x0) {
    (*((carried_actor->vtable)._ub)->getBoundingBox)(carried_actor,in_stack_fffff160);
    pfVar6 = local_318;
    pfVar10 = &local_330;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar10 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar12 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar12 * -2 + 1;
    }
    local_1d4 = local_330 + local_324;
    local_1d0[0] = local_32c + (float)local_320;
    local_1d0[1] = local_328 + local_31c;
    local_284[2] = local_330 + local_324;
    local_284[(uint)bVar12 * -2 + 3] = local_1d0[(uint)bVar12 * -2];
    local_284[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         local_1d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    local_300 = (CDemonActor *)(local_284[2] * 0.5f);
    local_2fc[0] = local_284[3] * 0.5f;
    local_2fc[1] = local_274 * 0.5f;
    local_1a4.x = local_284[2] * 0.5f;
    *(float *)((int)&local_1a4 + (uint)bVar12 * -8 + 4) = local_2fc[(uint)bVar12 * -2];
    *(float *)((int)&local_1a4 + ((uint)bVar12 * -2 + (uint)bVar12 * -2 + 1) * 4 + 4) =
         local_2fc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    if (&local_270 != &local_1a4) {
      local_270.x = local_1a4.x;
      local_270.y = local_1a4.y;
      local_270.z = local_1a4.z;
    }
    fVar1 = local_18[2].particle_systems[4].position.z;
    if (fVar1 != 2.8026e-45) {
      if (fVar1 == 1.4013e-45) {
        if (hand_index == 0) {
          core_xform_cpp_buildRotationY_FUN_005932c0(-1.5707964,&local_d20);
          pCVar3 = &local_d20;
LAB_00569474:
          pCVar5 = &local_810;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            pCVar5->m[0].w = pCVar3->m[0].w;
            pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
            pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
          }
        }
        else {
          if (hand_index == 1) {
            core_xform_cpp_buildRotationY_FUN_005932c0(1.5707964,&local_cc0);
            pCVar3 = &local_cc0;
            goto LAB_00569474;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0(&local_810);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&local_810,
                   (CMatrix3x4f *)
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices[local_1c].m,
                   &local_390);
        pCVar3 = &local_390;
        pCVar5 = &local_810;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar5->m[0].w = pCVar3->m[0].w;
          pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_810,in_stack_fffff168);
        local_2b8.x = (float)local_258;
        *(float *)((int)&local_2b8 + (uint)bVar12 * -8 + 4) = afStack_254[(uint)bVar12 * -2];
        *(float *)((int)&local_2b8 + ((uint)bVar12 * -2 + (uint)bVar12 * -2) * 4 + 8) =
             afStack_254[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        if (&local_54 != &local_2b8) {
          local_54.x = local_2b8.x;
          local_54.y = local_2b8.y;
          local_54.z = local_2b8.z;
        }
        local_270.z = local_31c * (float)0.29999999999999999 + local_328 * (float)0.69999999999999996;
        goto LAB_00568f2d;
      }
      if (fVar1 != 4.2039e-45) {
        g_CHAR_PTR_01d046a0 = "..\\core\\stranger.cpp";
        g_INT_01d046a4 = 0xc40;
        core_main_c_displayErrorAndQuit_FUN_004e4500("Don't know how to carry light %s");
        goto LAB_00568f2d;
      }
    }
    local_270.y = (float)local_320;
  }
LAB_00568f2d:
  iVar2 = (*((carried_actor->vtable)._ub)->getAllowedMeleeAttackTypes)(carried_actor);
  if (iVar2 != 0) {
    local_2ac = 0xbdb87c8b;
    local_2a4 = 0x3f262846;
    local_2a8 = 0xbe78bef9;
    local_114.x = 0.414782;
    local_114.y = -0.161673;
    local_9c.x = -0.0900813;
    *(uint *)((int)&local_9c + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&local_2b8 + ((uint)bVar12 * -2 + 2) * 4 + 8);
    *(uint *)((int)&local_9c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         *(uint *)((int)&local_2b8 + ((uint)bVar12 * -2 + (uint)bVar12 * -2 + 3) * 4 + 8);
    local_114.z = -0.489897;
    local_144 = 0.30057;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_a80,&local_114,&local_9c);
    local_140[1] = 0.64525;
    local_140[0] = -0.133049;
    local_f0.x = 0.385392;
    local_174.x = local_144;
    *(float *)((int)&local_174 + (uint)bVar12 * -8 + 4) = local_140[(uint)bVar12 * -2];
    iVar2 = local_1c;
    *(float *)((int)&local_174 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         local_140[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    local_f0.y = -0.0122009;
    local_f0.z = -0.49418;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
              (&local_a50,&local_f0,&local_174);
    matrix_b = (this_ptr->base).base.model.bone_transform.bone_model_matrices[iVar2].m;
    local_10 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                         ((CCharacter *)this_ptr,0);
    core_xform_cpp_lerpMatrix3x4_FUN_00593770(&local_a80,&local_a50,1.0 - local_10,&local_7e0);
    pCVar3 = &local_7e0;
    pCVar5 = &local_480;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar5->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_480,(CMatrix3x4f *)matrix_b,&local_b70);
    pCVar3 = &local_b70;
    pCVar5 = &local_4b0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar5->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_4b0,in_stack_fffff16c);
    local_150.x = (float)local_12c;
    *(float *)((int)&local_150 + (uint)bVar12 * -8 + 4) = afStack_128[(uint)bVar12 * -2];
    *(float *)((int)&local_150 + ((uint)bVar12 * -2 + (uint)bVar12 * -2) * 4 + 8) =
         afStack_128[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    if (&local_54 != &local_150) {
      local_54.x = local_150.x;
      local_54.y = local_150.y;
      local_54.z = local_150.z;
    }
  }
  if (hand_index == 0) {
    local_cc.y = (float)hand_index;
    local_cc.z = (float)hand_index;
    local_cc.x = -0.4;
    if (&local_1bc != &local_cc) {
      local_1bc.y = 0.0;
      local_1bc.z = 0.0;
      local_1bc.x = -0.4;
    }
  }
  else if (hand_index == 1) {
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
            (&local_1bc,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[local_1c].m);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10(&local_b40,&local_1bc,&local_54)
  ;
  core_xform_cpp_transformVector3x4_FUN_00591530(&local_270,&local_b40,&local_48);
  local_78 = local_48.x;
  local_74[(uint)bVar12 * -2] = *(float *)((int)&local_48 + (uint)bVar12 * -8 + 4);
  local_74[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       *(float *)((int)&local_48 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
  iVar2 = 0xc;
  local_60 = local_1bc.x - local_78;
  local_5c = local_1bc.y - local_74[0];
  local_58 = local_1bc.z - local_74[1];
  local_2c4 = local_1bc.x - local_78;
  local_2c0[(uint)bVar12 * -2] = local_74[(uint)bVar12 * -2 + 6];
  local_2c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
       local_74[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
  pfVar6 = local_ab0;
  pCVar3 = &local_b40;
  local_b40.m[0].z = local_b40.m[0].z + local_2c4;
  local_b40.m[1].z = local_b40.m[1].z + local_2c0[0];
  local_b40.m[2].z = local_b40.m[2].z + local_2c0[1];
LAB_005686a7:
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar6 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
    pfVar6 = pfVar6 + (uint)bVar12 * -2 + 1;
  }
  pfVar6 = local_ab0;
  pCVar3 = local_24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar12 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar12 * -2 + 1) * 4);
  }
  return local_24;
}
