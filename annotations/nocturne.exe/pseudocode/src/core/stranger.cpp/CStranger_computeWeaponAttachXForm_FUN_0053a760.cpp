// Name: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760
// Address: 0053a760
// Address Range: [[0053a760, 0053b60b]]
// Convention: unknown
// Signature: float * core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760(int param_1,CDemonActor *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760(int param_1,CDemonActor *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  float *unaff_ESI;
  int iVar6;
  CMatrix3x4f *pCVar7;
  uint *puVar8;
  float *pfVar9;
  float *pfVar10;
  uint *puVar11;
  byte bVar12;
  float local_d5c [12];
  byte local_d2c [48];
  byte local_cfc [48];
  byte local_ccc [48];
  uint local_c9c [12];
  uint local_c6c [12];
  CMatrix3x4f local_c3c;
  byte local_c0c [48];
  byte local_bdc [48];
  uint local_bac [12];
  uint local_b7c [12];
  uint local_b4c [12];
  uint local_b1c [12];
  byte local_aec [48];
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
  byte local_87c [48];
  uint local_84c [12];
  byte local_81c [48];
  byte local_7ec [48];
  uint local_7bc [12];
  CMatrix3x4f local_78c;
  byte local_75c [48];
  uint local_72c [12];
  uint local_6fc [12];
  byte local_6cc [48];
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
  byte local_3cc [48];
  uint local_39c [12];
  uint local_36c [12];
  byte local_33c [48];
  float local_30c [12];
  float local_2dc [12];
  CMatrix3x4f local_2ac;
  byte local_27c [48];
  CMatrix3x4f local_24c;
  CBoundingBox3D local_21c;
  CBoundingBox3D local_204;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  float local_198;
  float local_194;
  float local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  CVector3f local_180;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  CVector3f local_150;
  CVector3f local_144;
  float local_138;
  float local_134;
  float local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  CVector3f local_114;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  CVector3f local_e4;
  CVector3f local_d8;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  CVector3f local_b4;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3f local_3c;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  bVar12 = 0;
  iVar1 = *(int *)(param_1 + 0x24a4 + (int)param_3 * 0x44);
  iVar6 = param_1 + 0xfd0;
  local_180.x = (float)core_actor_cpp_castToClassHash_FUN_0040d890
                                 (param_2,g_CWeaponActorType_02ddf970.name_hash);
  if ((CDemonActor *)local_180.x != (CDemonActor *)0x0) {
    fVar2 = (((CDemonActor *)((int)local_180.x + 0x2a0))->orient).vec.z;
    iVar6 = iVar1 * 0x30 + iVar6;
    if (fVar2 == 1.4013e-45) {
      local_a0 = 0x3f7838d2;
      local_a8 = 0x3e44330d;
      local_a4 = 0x40131412;
      local_1e4 = 0xbed321a3;
      local_1ec = 0x3f0a1c04;
      local_1e8 = 0xbe7183f9;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_87c,&local_1ec,&local_a8);
      local_2c = 0x3f6f2b67;
      local_30 = 0xbed430d3;
      local_28 = 0x3feb40a3;
      local_1b0 = 0x3ece4b88;
      local_1ac = 0x3dc29521;
      local_1a8 = 0x3e85d4e9;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_6cc,&local_1b0,&local_30);
      fVar2 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                               (param_1,3,iVar6);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_87c,local_6cc,1.0 - fVar2);
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
    else if (fVar2 == 2.8026e-45) {
      local_1b4 = 0x3fd4f5c3;
      local_1bc = 0x3e3b65aa;
      local_1b8 = 0x400ffdb5;
      local_184 = 0xbe6ec850;
      local_18c = 0x3ed3380d;
      local_188 = 0xbdc42bdf;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_3cc,&local_18c,&local_1bc);
      local_1dc = 0x3fac74a7;
      local_1e0 = 0xbe93c947;
      local_1d8 = 0x3fdd1cc1;
      local_48 = 0x3ef7baed;
      local_44 = 0x3d957802;
      local_40 = 0x3d95d158;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_ccc,&local_48,&local_1e0);
      fVar2 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                               (param_1,3,iVar6);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_3cc,local_ccc,1.0 - fVar2);
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
    else if (fVar2 == 5.60519e-45) {
      local_1c0 = 0x3fd16bba;
      local_1c8 = 0x3e44c7f3;
      local_1c4 = 0x4013aee6;
      local_94 = 0xbed19f3c;
      local_9c = 0x3eab23dd;
      local_98 = 0xbe3daa50;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_27c,&local_9c,&local_1c8);
      local_50 = 0x3f93df3b;
      local_54 = 0xbeedcbbc;
      local_4c = 0x3fe3381d;
      local_cc = 0x3ec327aa;
      local_c8 = 0x3d8dbbaa;
      local_c4 = 0xbe66cd6c;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_81c,&local_cc,&local_54);
      fVar2 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                               (param_1,3,iVar6);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_27c,local_81c,1.0 - fVar2);
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
    else if (fVar2 == 4.2039e-45) {
      local_c0 = 0x3e740e9d;
      local_24 = 0xbf3e6506;
      local_bc = 0xbd868280;
      local_b8 = 0x3d093cf5;
      local_1c = 0xbf4eefe5;
      local_20 = 0x3f31884c;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_7ec,&local_c0,&local_24);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_7ec,iVar6);
      pCVar7 = &local_8dc;
    }
    else if (fVar2 == 7.00649e-45) {
      local_174 = 0x3f1eb852;
      local_160 = 0xbfc8f5c3;
      local_170 = 0;
      local_16c = 0x3e5e353f;
      local_168 = 0;
      local_164 = 0x3fc8f5c3;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_33c,&local_174,&local_168);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_33c,iVar6);
      pCVar7 = &local_c3c;
    }
    else if (fVar2 == 9.80909e-45) {
      local_60 = 0xbdb87c8b;
      local_58 = 0x3f262846;
      local_5c = 0xbe78bef9;
      local_1a4 = 0x3ed45e4e;
      local_1a0 = 0xbe258d9b;
      local_19c = 0xbefad3c8;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_c0c,&local_1a4,&local_60);
      local_64 = 0x3f252f1b;
      local_6c = 0x3e99e450;
      local_e8 = 0xbe8c011d;
      local_68 = 0xbe083dff;
      local_f0 = 0x3e9b7f17;
      local_ec = 0x3d8513c3;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_bdc,&local_f0,&local_6c);
      fVar2 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                               (param_1,0,iVar6);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_c0c,local_bdc,1.0 - fVar2);
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
                (local_75c,&CVector3f_02dc9f40,&DAT_02dd1184);
      core_xform_cpp_buildRotationX_FUN_0055c730(0x3fc90fdb,local_75c,iVar6);
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
                (local_aec,&CVector3f_02dc9f34,&DAT_02dd1184);
      core_xform_cpp_buildRotationX_FUN_0055c730(0x3fc90fdb,local_aec,iVar6);
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
  if (*(int *)(param_1 + 0x2a84) == 0xe) {
    pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_d8,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)(_DAT_02dc9f88 * 0x30 + iVar6));
    pCVar5 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_90,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)(_DAT_02dc9f84 * 0x30 + iVar6));
    local_198 = pCVar5->x + pCVar4->x;
    local_194 = pCVar5->y + pCVar4->y;
    local_108 = local_198 * 0.5f;
    local_190 = pCVar5->z + pCVar4->z;
    local_104 = local_194 * 0.5f;
    local_100 = local_190 * 0.5f;
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,&local_204);
    local_100 = local_100 + 0.333f;
    local_104 = local_104 - (local_204.max.y - local_204.min.y);
    fVar2 = (float)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(param_2);
    local_104 = fVar2 + local_104;
    core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(&local_2ac);
    local_2ac.m[0].z = local_108;
    local_2ac.m[1].z = local_104;
    local_2ac.m[2].z = local_100;
    if (*(int *)(param_1 + 0x1faf0) != 0) {
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
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (param_2,g_CLightActorActorType_00764a9c.name_hash);
  if (pCVar3 != (CDemonActor *)0x0) {
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
    iVar6 = pCVar3[4].dead2;
    if (iVar6 != 2) {
      if (iVar6 == 1) {
        if (param_3 == 0.0) {
          core_xform_cpp_buildRotationY_FUN_0055c7b0(0xbfc90fdb);
          pfVar9 = local_30c;
LAB_0053b4b4:
          pCVar7 = &local_45c;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
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
        core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_45c,iVar1 * 0x30 + param_1 + 0xfd0);
        pfVar9 = local_48c;
        pCVar7 = &local_45c;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
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
      if (iVar6 != 3) {
        PTR_01cc4800 = "..\\core\\stranger.cpp";
        INT_01cc4804 = 0xc44;
        core_main_c_FUN_004c8440("Don't know how to carry light %s",pCVar3);
        goto LAB_0053b05b;
      }
    }
    local_180.y = local_21c.max.y;
  }
LAB_0053b05b:
  iVar6 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar6 != 0) {
    local_12c = 0xbdb87c8b;
    local_124 = 0x3f262846;
    local_128 = 0xbe78bef9;
    local_1d4 = 0x3ed45e4e;
    local_1d0 = 0xbe258d9b;
    local_1cc = 0xbefad3c8;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_d2c,&local_1d4,&local_12c);
    local_15c = 0x3e99e450;
    local_118 = 0xbefd0529;
    local_120 = 0x3ec5521a;
    local_11c = 0xbc47e649;
    local_154 = 0x3f252f1b;
    local_158 = 0xbe083dff;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_cfc,&local_120,&local_15c);
    fVar2 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                             (param_1,0,iVar1 * 0x30 + param_1 + 0xfd0);
    core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_d2c,local_cfc,1.0 - fVar2);
    puVar8 = local_84c;
    puVar11 = local_99c;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_99c);
    pfVar9 = local_d5c;
    pCVar7 = &local_9cc;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
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
            (&local_e4,(CMatrix3x4f *)(iVar1 * 0x30 + param_1 + 0xfd0));
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
