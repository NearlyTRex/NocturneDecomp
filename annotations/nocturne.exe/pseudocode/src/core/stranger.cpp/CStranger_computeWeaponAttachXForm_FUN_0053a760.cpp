// Name: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760
// Address: 0053a760
// Address Range: [[0053a760, 0053b60b]]
// Convention: unknown
// Signature: undefined4 * core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  uint *unaff_ESI;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint local_d5c [12];
  byte local_d2c [48];
  byte local_cfc [48];
  byte local_ccc [48];
  uint local_c9c [12];
  uint local_c6c [12];
  uint local_c3c [12];
  byte local_c0c [48];
  byte local_bdc [48];
  uint local_bac [12];
  uint local_b7c [12];
  uint local_b4c [12];
  uint local_b1c [12];
  byte local_aec [48];
  uint local_abc [12];
  uint local_a8c [12];
  uint local_a5c [3];
  float local_a50;
  float local_a40;
  float local_a30;
  uint local_a2c [12];
  uint local_9fc [12];
  uint local_9cc [12];
  uint local_99c [12];
  uint local_96c [12];
  uint local_93c [12];
  uint local_90c [12];
  uint local_8dc [12];
  uint local_8ac [12];
  byte local_87c [48];
  uint local_84c [12];
  byte local_81c [48];
  byte local_7ec [48];
  uint local_7bc [12];
  uint local_78c [12];
  byte local_75c [48];
  uint local_72c [12];
  uint local_6fc [12];
  byte local_6cc [48];
  uint local_69c [12];
  uint local_66c [12];
  uint local_63c [12];
  uint local_60c [12];
  uint local_5dc [12];
  uint local_5ac [12];
  uint local_57c [12];
  uint local_54c [12];
  uint local_51c [12];
  uint local_4ec [12];
  uint local_4bc [12];
  uint local_48c [12];
  uint local_45c [12];
  uint local_42c [12];
  uint local_3fc [12];
  byte local_3cc [48];
  uint local_39c [12];
  uint local_36c [12];
  byte local_33c [48];
  uint local_30c [12];
  uint local_2dc [12];
  uint local_2ac [3];
  float local_2a0;
  float local_290;
  float local_280;
  byte local_27c [48];
  uint local_24c [12];
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  byte local_204 [4];
  float local_200;
  float local_1f4;
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
  float local_180;
  float local_17c;
  float local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144 [4];
  float local_134;
  float local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  byte local_114 [12];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  byte local_d8 [12];
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  byte local_90 [12];
  float local_84;
  float local_80;
  float local_7c;
  byte local_78 [12];
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
  byte local_3c [12];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  bVar9 = 0;
  iVar1 = *(int *)(param_1 + 0x24a4 + param_3 * 0x44);
  iVar6 = param_1 + 0xfd0;
  local_180 = (float)core_actor_cpp_castToClassHash_FUN_0040d890
                               (param_2,g_CWeaponActorType_02ddf970.name_hash);
  if (local_180 != 0.0) {
    iVar2 = *(int *)((int)local_180 + 0x2d8);
    iVar6 = iVar1 * 0x30 + iVar6;
    if (iVar2 == 1) {
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
      fVar3 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                               (param_1,3,iVar6);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_87c,local_6cc,1.0 - fVar3);
      puVar8 = local_51c;
      puVar7 = local_a8c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_a8c);
      puVar7 = local_3fc;
    }
    else if (iVar2 == 2) {
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
      fVar3 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                               (param_1,3,iVar6);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_3cc,local_ccc,1.0 - fVar3);
      puVar8 = local_7bc;
      puVar7 = local_b1c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_b1c);
      puVar7 = local_9fc;
    }
    else if (iVar2 == 4) {
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
      fVar3 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                               (param_1,3,iVar6);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_27c,local_81c,1.0 - fVar3);
      puVar8 = local_5dc;
      puVar7 = local_63c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_63c);
      puVar7 = local_57c;
    }
    else if (iVar2 == 3) {
      local_c0 = 0x3e740e9d;
      local_24 = 0xbf3e6506;
      local_bc = 0xbd868280;
      local_b8 = 0x3d093cf5;
      local_1c = 0xbf4eefe5;
      local_20 = 0x3f31884c;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_7ec,&local_c0,&local_24);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_7ec,iVar6);
      puVar7 = local_8dc;
    }
    else if (iVar2 == 5) {
      local_174 = 0x3f1eb852;
      local_160 = 0xbfc8f5c3;
      local_170 = 0;
      local_16c = 0x3e5e353f;
      local_168 = 0;
      local_164 = 0x3fc8f5c3;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_33c,&local_174,&local_168);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_33c,iVar6);
      puVar7 = local_c3c;
    }
    else if (iVar2 == 7) {
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
      fVar3 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                               (param_1,0,iVar6);
      core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_c0c,local_bdc,1.0 - fVar3);
      puVar8 = local_54c;
      puVar7 = local_8ac;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_8ac);
      puVar7 = local_78c;
    }
    else if (param_3 == 0) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_75c,&CVector3f_02dc9f40,&DAT_02dd1184);
      core_xform_cpp_buildRotationX_FUN_0055c730(0x3fc90fdb,local_75c,iVar6);
      puVar8 = local_66c;
      puVar7 = local_c6c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_0055c7b0(0xbfc90fdb,local_c6c);
      puVar8 = local_bac;
      puVar7 = local_c9c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_c9c);
      puVar8 = local_b7c;
      puVar7 = local_6fc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_6fc);
      puVar8 = local_b4c;
      puVar7 = local_69c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_69c);
      puVar7 = local_5ac;
    }
    else {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (local_aec,&CVector3f_02dc9f34,&DAT_02dd1184);
      core_xform_cpp_buildRotationX_FUN_0055c730(0x3fc90fdb,local_aec,iVar6);
      puVar8 = local_72c;
      puVar7 = local_36c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_0055c7b0(0x3fc90fdb,local_36c);
      puVar8 = local_60c;
      puVar7 = local_abc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_abc);
      puVar8 = local_42c;
      puVar7 = local_4ec;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_4ec);
      puVar8 = local_39c;
      puVar7 = local_4bc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_4bc);
      puVar7 = local_24c;
    }
    iVar6 = 0xc;
    puVar8 = local_a2c;
    goto LAB_0053a8f6;
  }
  local_17c = local_180;
  local_178 = local_180;
  local_84 = local_180;
  local_80 = local_180;
  local_7c = local_180;
  if (*(int *)(param_1 + 0x2a84) == 0xe) {
    pfVar4 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                (local_d8,&DAT_02dd1184,_DAT_02dc9f88 * 0x30 + iVar6);
    pfVar5 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                (local_90,&DAT_02dd1184,_DAT_02dc9f84 * 0x30 + iVar6);
    local_198 = *pfVar5 + *pfVar4;
    local_194 = pfVar5[1] + pfVar4[1];
    local_108 = local_198 * 0.5f;
    local_190 = pfVar5[2] + pfVar4[2];
    local_104 = local_194 * 0.5f;
    local_100 = local_190 * 0.5f;
    (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,local_204);
    local_100 = local_100 + 0.333f;
    local_104 = local_104 - (local_1f4 - local_200);
    fVar3 = (float)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(param_2);
    local_104 = fVar3 + local_104;
    core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(local_2ac);
    local_2a0 = local_108;
    local_290 = local_104;
    local_280 = local_100;
    if (*(int *)(param_1 + 0x1faf0) != 0) {
      core_xform_cpp_buildRotationY_FUN_0055c7b0(0x40490fdb,local_2ac);
      puVar8 = local_93c;
      puVar7 = local_96c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_96c);
      puVar8 = local_90c;
      puVar7 = local_2ac;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
    }
    iVar6 = 0xc;
    puVar8 = local_a2c;
    puVar7 = local_2ac;
    goto LAB_0053a8f6;
  }
  iVar6 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (param_2,g_CLightActorActorType_00764a9c.name_hash);
  if (iVar6 != 0) {
    (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,&local_21c);
    local_144[3] = local_21c + local_210;
    local_150 = local_144[3] * 0.5f;
    local_134 = local_218 + local_20c;
    local_130 = local_214 + local_208;
    local_14c = local_134 * 0.5f;
    local_148 = local_130 * 0.5f;
    if (&local_180 != &local_150) {
      local_180 = local_150;
      local_17c = local_14c;
      local_178 = local_148;
    }
    iVar2 = *(int *)(iVar6 + 0x664);
    if (iVar2 != 2) {
      if (iVar2 == 1) {
        if (param_3 == 0) {
          core_xform_cpp_buildRotationY_FUN_0055c7b0(0xbfc90fdb);
          puVar8 = local_30c;
LAB_0053b4b4:
          puVar7 = local_45c;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar8;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          }
        }
        else {
          if (param_3 == 1) {
            core_xform_cpp_buildRotationY_FUN_0055c7b0(0x3fc90fdb);
            puVar8 = local_2dc;
            goto LAB_0053b4b4;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(local_45c);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_45c,iVar1 * 0x30 + param_1 + 0xfd0);
        puVar8 = local_48c;
        puVar7 = local_45c;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar8;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        }
        pfVar4 = (float *)core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_45c,local_3c);
        if (&local_84 != pfVar4) {
          local_84 = *pfVar4;
          local_80 = pfVar4[1];
          local_7c = pfVar4[2];
        }
        local_178 = local_208 * (float)0.29999999999999999 + local_214 * (float)0.69999999999999996;
        goto LAB_0053b05b;
      }
      if (iVar2 != 3) {
        PTR_01cc4800 = "..\\core\\stranger.cpp";
        INT_01cc4804 = 0xc44;
        core_main_c_FUN_004c8440("Don't know how to carry light %s",iVar6);
        goto LAB_0053b05b;
      }
    }
    local_17c = local_20c;
  }
LAB_0053b05b:
  iVar6 = (**(code **)(*(int *)(param_2 + 0x14c) + 0x6c))(param_2);
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
    fVar3 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                             (param_1,0,iVar1 * 0x30 + param_1 + 0xfd0);
    core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(local_d2c,local_cfc,1.0 - fVar3);
    puVar8 = local_84c;
    puVar7 = local_99c;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_99c);
    puVar8 = local_d5c;
    puVar7 = local_9cc;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    pfVar4 = (float *)core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_9cc,local_78);
    if (&local_84 != pfVar4) {
      local_84 = *pfVar4;
      local_80 = pfVar4[1];
      local_7c = pfVar4[2];
    }
  }
  if (param_3 == 0) {
    local_b0 = param_3;
    local_ac = param_3;
    local_b4 = -0.4;
    if (&local_e4 != &local_b4) {
      local_e4 = -0.4;
      local_e0 = 0.0;
      local_dc = 0.0;
    }
  }
  else if (param_3 == 1) {
    local_144[0] = 0.4;
    local_144[1] = 0.0;
    local_144[2] = 0.0;
    if (&local_e4 != local_144) {
      local_e0 = 0.0;
      local_dc = 0.0;
      local_e4 = 0.4;
    }
  }
  else {
    local_e0 = 0.0;
    local_e4 = 0.0;
    local_dc = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_0055a910(&local_e4,iVar1 * 0x30 + param_1 + 0xfd0);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_a5c,&local_e4,&local_84);
  puVar8 = local_a2c;
  puVar7 = local_a5c;
  pfVar4 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_114,&local_180,local_a5c);
  iVar6 = 0xc;
  local_fc = local_e4 - *pfVar4;
  local_f8 = local_e0 - pfVar4[1];
  local_f4 = local_dc - pfVar4[2];
  local_a50 = local_a50 + (local_e4 - *pfVar4);
  local_a40 = local_a40 + (local_e0 - pfVar4[1]);
  local_a30 = local_a30 + (local_dc - pfVar4[2]);
LAB_0053a8f6:
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  puVar8 = local_a2c;
  puVar7 = unaff_ESI;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  return unaff_ESI;
}
