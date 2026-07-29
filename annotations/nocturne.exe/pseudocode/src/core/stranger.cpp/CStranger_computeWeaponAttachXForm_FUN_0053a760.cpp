// Name: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760
// Address: 0053a760
// Address Range: [[0053a760, 0053b60b]]
// Convention: unknown
// Signature: float * core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760(CCharacter *param_1,CDemonActor *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760(CCharacter *param_1,CDemonActor *param_2,float param_3)

{
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  float *unaff_ESI;
  CMatrix3x4f *pCVar7;
  uint *puVar8;
  float *pfVar9;
  float *pfVar10;
  uint *puVar11;
  byte bVar12;
  float local_d5c [12];
  CMatrix3x4f local_d2c;
  CMatrix3x4f local_cfc;
  CMatrix3x4f local_ccc;
  uint local_c9c [12];
  uint local_c6c [12];
  CMatrix3x4f local_c3c;
  CMatrix3x4f local_c0c;
  CMatrix3x4f local_bdc;
  uint local_bac [12];
  uint local_b7c [12];
  uint local_b4c [12];
  uint local_b1c [12];
  CMatrix3x4f local_aec;
  uint local_abc [12];
  uint local_a8c [12];
  CMatrix3x4f local_a5c;
  float local_a2c [12];
  CMatrix3x4f local_9fc;
  CMatrix3x4f local_9cc;
  uint local_99c [12];
  uint local_96c [12];
  uint local_93c [12];
  float local_90c [12];
  CMatrix3x4f local_8dc;
  uint local_8ac [12];
  CMatrix3x4f local_87c;
  uint local_84c [12];
  CMatrix3x4f local_81c;
  CMatrix3x4f local_7ec;
  uint local_7bc [12];
  CMatrix3x4f local_78c;
  CMatrix3x4f local_75c;
  uint local_72c [12];
  uint local_6fc [12];
  CMatrix3x4f local_6cc;
  uint local_69c [12];
  uint local_66c [12];
  uint local_63c [12];
  uint local_60c [12];
  uint local_5dc [12];
  CMatrix3x4f local_5ac;
  CMatrix3x4f local_57c;
  uint local_54c [12];
  uint local_51c [12];
  uint local_4ec [12];
  uint local_4bc [12];
  float local_48c [12];
  CMatrix3x4f local_45c;
  uint local_42c [12];
  CMatrix3x4f local_3fc;
  CMatrix3x4f local_3cc;
  uint local_39c [12];
  uint local_36c [12];
  CMatrix3x4f local_33c;
  float local_30c [12];
  float local_2dc [12];
  CMatrix3x4f local_2ac;
  CMatrix3x4f local_27c;
  CMatrix3x4f local_24c;
  CBoundingBox3D local_21c;
  CBoundingBox3D local_204;
  CVector3f local_1ec;
  CVector3f local_1e0;
  CVector3f local_1d4;
  CVector3f local_1c8;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  float local_198;
  float local_194;
  float local_190;
  CVector3f local_18c;
  CVector3f local_180;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  float local_138;
  float local_134;
  float local_130;
  CVector3f local_12c;
  CVector3f local_120;
  CVector3f local_114;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  CVector3f local_f0;
  CVector3f local_e4;
  CVector3f local_d8;
  CVector3f local_cc;
  CVector3f local_c0;
  CVector3f local_b4;
  CVector3f local_a8;
  CVector3f local_9c;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  
  bVar12 = 0;
  iVar6 = param_1->carry_hands[(int)param_3].bone_index;
  local_180.x = (float)core_actor_cpp_castToClassHash_FUN_0040d890
                                 (param_2,g_CWeaponActorType_02ddf970.name_hash);
  if ((CDemonActor *)local_180.x != (CDemonActor *)0x0) {
    fVar1 = (((CDemonActor *)((int)local_180.x + 0x2a0))->orient).vec.z;
    pCVar7 = (param_1->model).bone_transform.bone_world_matrices + iVar6;
    if (fVar1 == 1.4013e-45) {
      local_a8.z = 0.969617;
      local_a8.x = 0.191601;
      local_a8.y = 2.2981;
      local_1ec.z = -0.412366;
      local_1ec.x = 0.53949;
      local_1ec.y = -0.235855;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_87c,&local_1ec,&local_a8);
      local_30.y = 0.934256;
      local_30.x = -0.414435;
      local_30.z = 1.83791;
      local_1b0.x = 0.40292;
      local_1b0.y = 0.095011;
      local_1b0.z = 0.26139;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_6cc,&local_1b0,&local_30);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(&local_87c,&local_6cc,1.0 - fVar1,pCVar7);
      puVar8 = local_51c;
      puVar11 = local_a8c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_a8c);
      pCVar7 = &local_3fc;
    }
    else if (fVar1 == 2.8026e-45) {
      local_1bc.z = 1.66375;
      local_1bc.x = 0.183005;
      local_1bc.y = 2.24986;
      local_18c.z = -0.233186;
      local_18c.x = 0.412537;
      local_18c.y = -0.0957868;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_3cc,&local_18c,&local_1bc);
      local_1e0.y = 1.34731;
      local_1e0.x = -0.288645;
      local_1e0.z = 1.72744;
      local_48.x = 0.483848;
      local_48.y = 0.0729828;
      local_48.z = 0.0731532;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_ccc,&local_48,&local_1e0);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(&local_3cc,&local_ccc,1.0 - fVar1,pCVar7);
      puVar8 = local_7bc;
      puVar11 = local_b1c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_b1c);
      pCVar7 = &local_9fc;
    }
    else if (fVar1 == 5.60519e-45) {
      local_1c8.z = 1.6361;
      local_1c8.x = 0.192169;
      local_1c8.y = 2.30755;
      local_9c.z = -0.409418;
      local_9c.x = 0.334258;
      local_9c.y = -0.18522;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_27c,&local_9c,&local_1c8);
      local_54.y = 1.15525;
      local_54.x = -0.464445;
      local_54.z = 1.77515;
      local_cc.x = 0.381162;
      local_cc.y = 0.0692056;
      local_cc.z = -0.225393;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_81c,&local_cc,&local_54);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(&local_27c,&local_81c,1.0 - fVar1,pCVar7);
      puVar8 = local_5dc;
      puVar11 = local_63c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_63c);
      pCVar7 = &local_57c;
    }
    else if (fVar1 == 4.2039e-45) {
      local_c0.x = 0.238337;
      local_24.x = -0.743729;
      local_c0.y = -0.0656786;
      local_c0.z = 0.0335054;
      local_24.z = -0.808348;
      local_24.y = 0.693486;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_7ec,&local_c0,&local_24);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_7ec,pCVar7);
      pCVar7 = &local_8dc;
    }
    else if (fVar1 == 7.00649e-45) {
      local_174.x = 0.62;
      local_168.z = -1.57;
      local_174.y = 0.0;
      local_174.z = 0.217;
      local_168.x = 0.0;
      local_168.y = 1.57;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_33c,&local_174,&local_168);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_33c,pCVar7);
      pCVar7 = &local_c3c;
    }
    else if (fVar1 == 9.80909e-45) {
      local_60.x = -0.0900813;
      local_60.z = 0.649052;
      local_60.y = -0.242916;
      local_1a4.x = 0.414782;
      local_1a4.y = -0.161673;
      local_1a4.z = -0.489897;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_c0c,&local_1a4,&local_60);
      local_6c.z = 0.64525;
      local_6c.x = 0.30057;
      local_f0.z = -0.273446;
      local_6c.y = -0.133049;
      local_f0.x = 0.303704;
      local_f0.y = 0.0649791;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_bdc,&local_f0,&local_6c);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,0);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(&local_c0c,&local_bdc,1.0 - fVar1,pCVar7);
      puVar8 = local_54c;
      puVar11 = local_8ac;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_8ac);
      pCVar7 = &local_78c;
    }
    else if (param_3 == 0.0) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_75c,&CVector3f_02dc9f40,(CVector3f *)&DAT_02dd1184);
      core_xform_cpp_buildRotationX_FUN_0055c730(0x3fc90fdb,&local_75c,pCVar7);
      puVar8 = local_66c;
      puVar11 = local_c6c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_0055c7b0(0xbfc90fdb,local_c6c);
      puVar8 = local_bac;
      puVar11 = local_c9c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_c9c);
      puVar8 = local_b7c;
      puVar11 = local_6fc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_6fc);
      puVar8 = local_b4c;
      puVar11 = local_69c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_69c);
      pCVar7 = &local_5ac;
    }
    else {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&local_aec,&CVector3f_02dc9f34,(CVector3f *)&DAT_02dd1184);
      core_xform_cpp_buildRotationX_FUN_0055c730(0x3fc90fdb,&local_aec,pCVar7);
      puVar8 = local_72c;
      puVar11 = local_36c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_0055c7b0(0x3fc90fdb,local_36c);
      puVar8 = local_60c;
      puVar11 = local_abc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_abc);
      puVar8 = local_42c;
      puVar11 = local_4ec;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_4ec);
      puVar8 = local_39c;
      puVar11 = local_4bc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_4bc);
      pCVar7 = &local_24c;
    }
    iVar6 = 0xc;
    pfVar9 = local_a2c;
    goto LAB_0053a8f6;
  }
  local_180.y = local_180.x;
  local_180.z = local_180.x;
  local_84.x = local_180.x;
  local_84.y = local_180.x;
  local_84.z = local_180.x;
  if (param_1->layer_action_index == 0xe) {
    pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_d8,(CVector3f *)&DAT_02dd1184,
                        (param_1->model).bone_transform.bone_world_matrices + _DAT_02dc9f88);
    pCVar5 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_90,(CVector3f *)&DAT_02dd1184,
                        (param_1->model).bone_transform.bone_world_matrices + _DAT_02dc9f84);
    local_198 = pCVar5->x + pCVar4->x;
    local_194 = pCVar5->y + pCVar4->y;
    local_108 = local_198 * 0.5f;
    local_190 = pCVar5->z + pCVar4->z;
    local_104 = local_194 * 0.5f;
    local_100 = local_190 * 0.5f;
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,&local_204);
    local_100 = local_100 + 0.333f;
    local_104 = local_104 - (local_204.max.y - local_204.min.y);
    fVar1 = (float)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(param_2);
    local_104 = fVar1 + local_104;
    core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(&local_2ac);
    local_2ac.m[0].z = local_108;
    local_2ac.m[1].z = local_104;
    local_2ac.m[2].z = local_100;
    if (*(int *)(param_1[2].flames[0x1d].off_event + 0x54) != 0) {
      core_xform_cpp_buildRotationY_FUN_0055c7b0(0x40490fdb,&local_2ac);
      puVar8 = local_93c;
      puVar11 = local_96c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_96c);
      pfVar9 = local_90c;
      pCVar7 = &local_2ac;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
      }
    }
    iVar6 = 0xc;
    pfVar9 = local_a2c;
    pCVar7 = &local_2ac;
    goto LAB_0053a8f6;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (param_2,g_CLightActorActorType_00764a9c.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,&local_21c);
    local_138 = local_21c.min.x + local_21c.max.x;
    local_150.x = local_138 * 0.5f;
    local_134 = local_21c.min.y + local_21c.max.y;
    local_130 = local_21c.min.z + local_21c.max.z;
    local_150.y = local_134 * 0.5f;
    local_150.z = local_130 * 0.5f;
    if (&local_180 != &local_150) {
      local_180.x = local_150.x;
      local_180.y = local_150.y;
      local_180.z = local_150.z;
    }
    iVar3 = pCVar2[4].dead2;
    if (iVar3 != 2) {
      if (iVar3 == 1) {
        if (param_3 == 0.0) {
          core_xform_cpp_buildRotationY_FUN_0055c7b0(0xbfc90fdb);
          pfVar9 = local_30c;
LAB_0053b4b4:
          pCVar7 = &local_45c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar7->m[0].w = *pfVar9;
            pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
          }
        }
        else {
          if (param_3 == 1.4013e-45) {
            core_xform_cpp_buildRotationY_FUN_0055c7b0(0x3fc90fdb);
            pfVar9 = local_2dc;
            goto LAB_0053b4b4;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(&local_45c);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                  (&local_45c,(param_1->model).bone_transform.bone_world_matrices + iVar6);
        pfVar9 = local_48c;
        pCVar7 = &local_45c;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar7->m[0].w = *pfVar9;
          pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
        }
        pCVar4 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_45c,&local_3c);
        if (&local_84 != pCVar4) {
          local_84.x = pCVar4->x;
          local_84.y = pCVar4->y;
          local_84.z = pCVar4->z;
        }
        local_180.z = local_21c.max.z * (float)0.29999999999999999 +
                      local_21c.min.z * (float)0.69999999999999996;
        goto LAB_0053b05b;
      }
      if (iVar3 != 3) {
        PTR_01cc4800 = "..\\core\\stranger.cpp";
        INT_01cc4804 = 0xc44;
        core_main_c_FUN_004c8440("Don't know how to carry light %s",pCVar2);
        goto LAB_0053b05b;
      }
    }
    local_180.y = local_21c.max.y;
  }
LAB_0053b05b:
  iVar3 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar3 != 0) {
    local_12c.x = -0.0900813;
    local_12c.z = 0.649052;
    local_12c.y = -0.242916;
    local_1d4.x = 0.414782;
    local_1d4.y = -0.161673;
    local_1d4.z = -0.489897;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_d2c,&local_1d4,&local_12c);
    local_15c.x = 0.30057;
    local_120.z = -0.49418;
    local_120.x = 0.385392;
    local_120.y = -0.0122009;
    local_15c.z = 0.64525;
    local_15c.y = -0.133049;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_cfc,&local_120,&local_15c);
    pCVar7 = (param_1->model).bone_transform.bone_world_matrices + iVar6;
    fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(&local_d2c,&local_cfc,1.0 - fVar1,pCVar7);
    puVar8 = local_84c;
    puVar11 = local_99c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_99c);
    pfVar9 = local_d5c;
    pCVar7 = &local_9cc;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
    }
    pCVar4 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_9cc,&local_78);
    if (&local_84 != pCVar4) {
      local_84.x = pCVar4->x;
      local_84.y = pCVar4->y;
      local_84.z = pCVar4->z;
    }
  }
  if (param_3 == 0.0) {
    local_b4.y = param_3;
    local_b4.z = param_3;
    local_b4.x = -0.4;
    if (&local_e4 != &local_b4) {
      local_e4.x = -0.4;
      local_e4.y = 0.0;
      local_e4.z = 0.0;
    }
  }
  else if (param_3 == 1.4013e-45) {
    local_144.x = 0.4;
    local_144.y = 0.0;
    local_144.z = 0.0;
    if (&local_e4 != &local_144) {
      local_e4.y = 0.0;
      local_e4.z = 0.0;
      local_e4.x = 0.4;
    }
  }
  else {
    local_e4.y = 0.0;
    local_e4.x = 0.0;
    local_e4.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_0055a910
            (&local_e4,(param_1->model).bone_transform.bone_world_matrices + iVar6);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_a5c,&local_e4,&local_84);
  pfVar9 = local_a2c;
  pCVar7 = &local_a5c;
  pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_114,&local_180,&local_a5c);
  iVar6 = 0xc;
  local_fc = local_e4.x - pCVar4->x;
  local_f8 = local_e4.y - pCVar4->y;
  local_f4 = local_e4.z - pCVar4->z;
  local_a5c.m[0].z = local_a5c.m[0].z + local_fc;
  local_a5c.m[1].z = local_a5c.m[1].z + local_f8;
  local_a5c.m[2].z = local_a5c.m[2].z + local_f4;
LAB_0053a8f6:
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar9 = pCVar7->m[0].w;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar12 * -2 + 1) * 4);
    pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
  }
  pfVar9 = local_a2c;
  pfVar10 = unaff_ESI;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar12 * -2 + 1;
  }
  return unaff_ESI;
}
