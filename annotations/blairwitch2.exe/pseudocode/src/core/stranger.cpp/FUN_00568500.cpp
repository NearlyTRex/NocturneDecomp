// Name: core_stranger.cpp_FUN_00568500
// Address: 00568500
// Address Range: [[00568500, 005695f6]]
// Convention: unknown
// Signature: undefined4 * core_stranger_cpp_FUN_00568500(CCharacter *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * core_stranger_cpp_FUN_00568500(CCharacter *param_1,CDemonActor *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *unaff_ESI;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_12e8 [270];
  byte *puVar9;
  CQuaternion4f *pCVar10;
  CBoundingBox3D *in_stack_fffff160;
  float local_bf4;
  float local_be4;
  float local_bd4;
  byte local_bd0 [48];
  uint local_ba0 [12];
  uint local_b70 [12];
  uint local_b40 [3];
  float local_b34;
  float local_b24;
  float local_b14;
  byte local_b10 [48];
  byte local_ae0 [48];
  uint local_ab0 [12];
  byte local_a80 [96];
  uint local_a20 [12];
  byte local_9f0 [48];
  uint local_9c0 [12];
  uint local_990 [12];
  uint local_960 [12];
  uint local_930 [12];
  uint local_900 [12];
  byte local_8d0 [48];
  uint local_8a0 [12];
  byte local_870 [48];
  byte local_840 [48];
  uint local_810 [12];
  uint local_7e0 [12];
  uint local_7b0 [12];
  uint local_780 [12];
  uint local_750 [12];
  uint local_720 [12];
  uint local_6f0 [12];
  uint local_6c0 [12];
  uint local_690 [12];
  byte local_660 [48];
  uint local_630 [12];
  uint local_600 [12];
  uint local_5d0 [12];
  byte local_5a0 [48];
  uint local_570 [12];
  byte local_540 [48];
  uint local_510 [12];
  byte local_4e0 [48];
  uint local_4b0 [12];
  uint local_480 [12];
  uint local_450 [12];
  uint local_420 [12];
  byte local_3f0 [48];
  uint local_3c0 [12];
  uint local_390 [12];
  uint local_360;
  float local_35c;
  float local_350;
  uint local_348 [6];
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318 [6];
  float local_300;
  float local_2fc [11];
  float local_2d0 [3];
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  float local_2a0 [3];
  float local_294 [4];
  float local_284 [4];
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260 [5];
  float local_24c;
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
  float local_1d0 [12];
  float local_1a0 [5];
  float local_18c;
  float local_188;
  float local_184;
  float local_180 [3];
  uint local_174;
  float local_168 [7];
  float local_14c [9];
  float afStack_128 [14];
  uint local_f0;
  uint local_ec;
  uint local_e8;
  float local_e4;
  float local_e0 [5];
  float local_cc;
  int local_c8;
  int local_c4;
  float local_c0 [12];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  float local_78;
  float local_74 [4];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float afStack_44 [8];
  
  bVar8 = 0;
  iVar2 = param_1->carry_hands[param_3].bone_index;
  local_270 = (float)core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (param_2,g_CWeaponClassInfo.name_hash);
  if (local_270 != 0.0) {
    pCVar10 = (param_1->model).bone_transform.bone_model_matrices[iVar2].m;
    iVar2 = *(int *)((int)local_270 + 0x43c);
    if (iVar2 == 1) {
      afStack_128[8] = 0.191601;
      afStack_128[10] = 0.969617;
      afStack_128[9] = 2.2981;
      local_204[0] = 0.53949;
      local_1a0[2] = 0.191601;
      local_1a0[(uint)bVar8 * -2 + 3] = afStack_128[(uint)bVar8 * -2 + 9];
      local_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_128[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
      local_204[1] = -0.235855;
      local_204[2] = -0.412366;
      core_xform_cpp_FUN_00591c10(local_9f0,local_260 + 0x17,local_1a0 + 2);
      local_2fc[5] = -0.414435;
      local_2fc[7] = 1.83791;
      pfVar6 = local_2fc + 0x17;
      local_2fc[6] = 0.934256;
      local_2a0[0] = -0.414435;
      local_2fc[(uint)bVar8 * -2 + 0x18] = local_2fc[(uint)bVar8 * -2 + 6];
      local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
           local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      local_14c[7] = 0.26139;
      local_14c[5] = 0.40292;
      local_14c[6] = 0.095011;
      core_xform_cpp_FUN_00591c10(local_bd0,local_14c + 5,pfVar6);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_9f0,local_bd0,1.0 - fVar1,pCVar10);
      puVar5 = (uint *)&stack0xfffff310;
      puVar4 = local_7b0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_7b0);
      puVar4 = (uint *)&stack0xfffff370;
    }
    else if (iVar2 == 2) {
      pfVar6 = local_1a0 + 8;
      local_90 = 0x3e3b65aa;
      local_88 = 0x3fd4f5c3;
      local_8c = 0x400ffdb5;
      local_2fc[3] = -0.0957868;
      local_180[0] = 0.183005;
      local_1a0[(uint)bVar8 * -2 + 9] = local_c0[(uint)bVar8 * -2 + 0xd];
      local_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
           local_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xe];
      local_2fc[4] = -0.233186;
      local_2fc[2] = 0.412537;
      local_c0[5] = 1.72744;
      core_xform_cpp_FUN_00591c10(local_660,local_2fc + 2,pfVar6);
      local_c0[4] = 1.34731;
      pfVar6 = local_260 + 0x1a;
      local_c0[3] = -0.288645;
      local_84 = 0x3ef7baed;
      puVar5 = &local_84;
      local_80 = 0x3d957802;
      puVar9 = local_540;
      local_204[3] = -0.288645;
      local_260[(uint)bVar8 * -2 + 0x1b] = local_c0[(uint)bVar8 * -2 + 4];
      local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c] =
           local_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
      local_7c = 0x3d95d158;
      core_xform_cpp_FUN_00591c10(puVar9,puVar5,pfVar6);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_660,local_540,1.0 - fVar1,pCVar10);
      puVar5 = local_960;
      puVar4 = local_a20;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_a20);
      puVar4 = local_900;
    }
    else if (iVar2 == 4) {
      afStack_128[2] = 0.192169;
      afStack_128[4] = 1.6361;
      afStack_128[3] = 2.30755;
      local_168[3] = 0.334258;
      local_168[4] = -0.18522;
      local_2d0[0] = 0.192169;
      local_2fc[(uint)bVar8 * -2 + 0xc] = afStack_128[(uint)bVar8 * -2 + 3];
      local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
           afStack_128[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      local_168[5] = -0.409418;
      afStack_44[5] = -0.464445;
      core_xform_cpp_FUN_00591c10(local_8d0,local_1a0 + 0x11,local_2fc + 0xb);
      afStack_44[7] = 1.77515;
      afStack_44[6] = 1.15525;
      local_294[0] = 0.381162;
      local_21c[0] = afStack_44[5];
      local_260[(uint)bVar8 * -2 + 0x12] = afStack_44[(uint)bVar8 * -2 + 6];
      local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
           afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      local_294[1] = 0.0692056;
      local_294[2] = -0.225393;
      core_xform_cpp_FUN_00591c10(local_3f0,local_2fc + 0x1a,local_260 + 0x11);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_8d0,local_3f0,1.0 - fVar1,pCVar10);
      puVar5 = local_ba0;
      puVar4 = (uint *)&stack0xfffff3a0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffff3a0);
      puVar4 = local_420;
    }
    else if (iVar2 == 3) {
      local_1d0[8] = 0.238337;
      local_1d0[9] = -0.0656786;
      local_1d0[10] = 0.0335054;
      local_210 = 0xbf3e6506;
      local_208 = 0xbf4eefe5;
      pfVar6 = local_260 + 0x1d;
      pfVar7 = local_1d0 + 8;
      puVar9 = local_b10;
      local_20c = 0x3f31884c;
      local_1ec[0] = -0.743729;
      local_260[(uint)bVar8 * -2 + 0x1e] = local_260[(uint)bVar8 * -2 + 0x15];
      local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
           local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
      core_xform_cpp_FUN_00591c10(puVar9,pfVar7,pfVar6);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_b10,pCVar10);
      puVar4 = local_720;
    }
    else if (iVar2 == 5) {
      local_1d0[2] = 0.62;
      local_1d0[3] = 0.0;
      local_1d0[4] = 0.217;
      local_c0[7] = 1.57;
      pfVar6 = local_e0 + 2;
      local_c0[8] = -1.57;
      pfVar7 = local_1d0 + 2;
      puVar9 = local_5a0;
      local_c0[6] = 0.0;
      local_e0[2] = 0.0;
      local_e0[(uint)bVar8 * -2 + 3] = local_c0[(uint)bVar8 * -2 + 7];
      local_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           local_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 8];
      core_xform_cpp_FUN_00591c10(puVar9,pfVar7,pfVar6);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_5a0,pCVar10);
      puVar4 = local_8a0;
    }
    else if (iVar2 == 7) {
      local_234 = 0xbdb87c8b;
      local_22c = 0x3f262846;
      local_230 = 0xbe78bef9;
      local_168[0] = 0.414782;
      local_168[1] = -0.161673;
      local_2fc[8] = -0.0900813;
      local_2fc[(uint)bVar8 * -2 + 9] = local_260[(uint)bVar8 * -2 + 0xc];
      local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
           local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
      local_168[2] = -0.489897;
      afStack_44[2] = 0.30057;
      core_xform_cpp_FUN_00591c10(local_870,local_1a0 + 0xe,local_2fc + 8);
      afStack_44[4] = 0.64525;
      afStack_44[3] = -0.133049;
      local_1e0[0] = 0.303704;
      afStack_128[0xb] = afStack_44[2];
      afStack_128[(uint)bVar8 * -2 + 0xc] = afStack_44[(uint)bVar8 * -2 + 3];
      afStack_128[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
           afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      local_1e0[1] = 0.0649791;
      local_1e0[2] = -0.273446;
      core_xform_cpp_FUN_00591c10(local_840,local_260 + 0x20,afStack_128 + 0xb);
      fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
      core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_870,local_840,1.0 - fVar1,pCVar10);
      puVar5 = local_630;
      puVar4 = (uint *)&stack0xfffff3d0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffff3d0);
      puVar4 = local_510;
    }
    else if (param_3 == 0) {
      core_xform_cpp_FUN_00591c10(local_ae0,&DAT_0264be20,&DAT_0265370c);
      core_xform_cpp_buildRotationX_FUN_00593240(0x3fc90fdb,local_ae0,pCVar10);
      puVar5 = local_6f0;
      puVar4 = local_3c0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005932c0(0xbfc90fdb,local_3c0);
      puVar5 = local_6c0;
      puVar4 = local_570;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_570);
      puVar5 = local_690;
      puVar4 = local_780;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_780);
      puVar5 = local_450;
      puVar4 = local_750;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_750);
      puVar4 = local_930;
    }
    else {
      core_xform_cpp_FUN_00591c10(local_4e0,&DAT_0264be14,&DAT_0265370c);
      core_xform_cpp_buildRotationX_FUN_00593240(0x3fc90fdb,local_4e0,pCVar10);
      puVar5 = (uint *)&stack0xfffff1f0;
      puVar4 = (uint *)&stack0xfffff160;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005932c0(0x3fc90fdb,&stack0xfffff160);
      puVar5 = (uint *)&stack0xfffff220;
      puVar4 = local_600;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_600);
      puVar5 = (uint *)&stack0xfffff250;
      puVar4 = (uint *)&stack0xfffff190;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffff190);
      puVar5 = (uint *)&stack0xfffff280;
      puVar4 = (uint *)&stack0xfffff1c0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffff1c0);
      puVar4 = (uint *)&stack0xfffff2b0;
    }
    iVar2 = 0xc;
    puVar5 = local_ab0;
    goto LAB_005686a7;
  }
  local_50 = 0.0;
  local_26c = local_270;
  local_268 = local_270;
  local_54 = local_270;
  local_4c = local_270;
  if (param_1->layer_action_index == 0xe) {
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,(param_1->model).bone_transform.bone_model_matrices[_DAT_0264be68].m);
    local_18c = local_24c;
    local_1a0[(uint)bVar8 * -2 + 6] = local_260[(uint)bVar8 * -2 + 6];
    local_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,(param_1->model).bone_transform.bone_model_matrices[_DAT_0264be64].m);
    local_74[2] = local_228;
    local_74[(uint)bVar8 * -2 + 3] = local_260[(uint)bVar8 * -2 + 0xf];
    local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
    local_264 = local_74[2] + local_18c;
    local_260[0] = local_74[3] + local_188;
    local_260[1] = local_64 + local_184;
    local_240 = local_74[2] + local_18c;
    local_260[(uint)bVar8 * -2 + 9] = local_260[(uint)bVar8 * -2];
    local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    local_e4 = local_240 * _DAT_005eb955;
    local_e0[0] = local_23c * _DAT_005eb955;
    local_e0[1] = local_238 * _DAT_005eb955;
    local_294[3] = local_240 * _DAT_005eb955;
    local_284[(uint)bVar8 * -2] = local_e0[(uint)bVar8 * -2];
    local_284[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_e0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffff160);
    puVar5 = local_348;
    puVar4 = &local_360;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
    }
    local_284[1] = local_284[1] + _DAT_005eb96d;
    local_284[0] = local_284[0] - (local_350 - local_35c);
    fVar1 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005626f0(param_2);
    local_284[0] = fVar1 + local_284[0];
    core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0();
    local_bf4 = local_294[3];
    local_be4 = local_284[0];
    local_bd4 = local_284[1];
    if (*(int *)(param_1[2].flames[2].base.actor_name + 0x14) != 0) {
      core_xform_cpp_buildRotationY_FUN_005932c0();
      puVar5 = local_9c0;
      puVar4 = local_5d0;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0();
      puVar5 = local_990;
      puVar4 = (uint *)&stack0xfffff400;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      }
    }
    iVar2 = 0xc;
    puVar5 = local_ab0;
    puVar4 = (uint *)&stack0xfffff400;
    goto LAB_005686a7;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,DAT_007bcc84);
  if (iVar2 != 0) {
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffff160);
    pfVar6 = local_318;
    pfVar7 = &local_330;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
      pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
    }
    local_1e0[3] = local_330 + local_324;
    local_1d0[0] = local_32c + local_320;
    local_1d0[1] = local_328 + local_31c;
    local_284[2] = local_330 + local_324;
    local_284[(uint)bVar8 * -2 + 3] = local_1d0[(uint)bVar8 * -2];
    local_284[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         local_1d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    local_300 = local_284[2] * _DAT_005eb955;
    local_2fc[0] = local_284[3] * _DAT_005eb955;
    local_2fc[1] = local_274 * _DAT_005eb955;
    local_1d0[0xb] = local_284[2] * _DAT_005eb955;
    local_1a0[(uint)bVar8 * -2] = local_2fc[(uint)bVar8 * -2];
    local_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (local_284 + 5 != local_1d0 + 0xb) {
      local_270 = local_1d0[0xb];
      local_26c = local_1a0[0];
      local_268 = local_1a0[1];
    }
    iVar2 = *(int *)(iVar2 + 0x7d4);
    if (iVar2 != 2) {
      if (iVar2 == 1) {
        if (param_3 == 0) {
          core_xform_cpp_buildRotationY_FUN_005932c0();
          puVar5 = (uint *)&stack0xfffff2e0;
LAB_00569474:
          puVar4 = local_810;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar5;
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
          }
        }
        else {
          if (param_3 == 1) {
            core_xform_cpp_buildRotationY_FUN_005932c0();
            puVar5 = (uint *)&stack0xfffff340;
            goto LAB_00569474;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005918a0();
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0();
        puVar5 = local_390;
        puVar4 = local_810;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
        local_2b8 = local_260[2];
        local_2fc[(uint)bVar8 * -2 + 0x12] = local_260[(uint)bVar8 * -2 + 3];
        local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
             local_260[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        if (local_74 + 8 != local_2fc + 0x11) {
          local_54 = local_2b8;
          local_50 = local_2b4;
          local_4c = local_2b0;
        }
        local_268 = local_31c * (float)_DAT_005eb965 + local_328 * (float)_DAT_005eb95d;
        goto LAB_00568f2d;
      }
      if (iVar2 != 3) {
        _DAT_01d046a0 = "..\\core\\stranger.cpp";
        _DAT_01d046a4 = 0xc40;
        core_main_c_FUN_004e4500();
        goto LAB_00568f2d;
      }
    }
    local_26c = local_320;
  }
LAB_00568f2d:
  iVar2 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar2 != 0) {
    local_2ac = 0xbdb87c8b;
    local_2a4 = 0x3f262846;
    local_2a8 = 0xbe78bef9;
    afStack_128[5] = 0.414782;
    afStack_128[6] = -0.161673;
    local_c0[9] = -0.0900813;
    local_c0[(uint)bVar8 * -2 + 10] = local_2fc[(uint)bVar8 * -2 + 0x15];
    local_c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xb] =
         local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
    afStack_128[7] = -0.489897;
    local_14c[2] = 0.30057;
    core_xform_cpp_FUN_00591c10();
    local_14c[4] = 0.64525;
    local_14c[3] = -0.133049;
    local_f0 = 0x3ec5521a;
    local_174 = local_14c[2];
    local_1a0[(uint)bVar8 * -2 + 0xc] = local_14c[(uint)bVar8 * -2 + 3];
    local_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         local_14c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    local_ec = 0xbc47e649;
    local_e8 = 0xbefd0529;
    core_xform_cpp_FUN_00591c10();
    core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_00593770(local_a80);
    puVar5 = local_7e0;
    puVar4 = local_480;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0();
    puVar5 = local_b70;
    puVar4 = local_4b0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
    local_168[6] = local_14c[8];
    local_14c[(uint)bVar8 * -2] = afStack_128[(uint)bVar8 * -2];
    local_14c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_128[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (local_74 + 8 != local_1a0 + 0x14) {
      local_54 = local_168[6];
      local_50 = local_14c[0];
      local_4c = local_14c[1];
    }
  }
  if (param_3 == 0) {
    local_c8 = param_3;
    local_c4 = param_3;
    local_cc = -0.4;
    if (local_1d0 + 5 != local_e0 + 5) {
      local_1d0[6] = 0.0;
      local_1d0[7] = 0.0;
      local_1d0[5] = -0.4;
    }
  }
  else if (param_3 == 1) {
    local_c0[1] = 0.0;
    local_c0[2] = 0.0;
    local_c0[0] = 0.4;
    if (local_1d0 + 5 != local_c0) {
      local_1d0[6] = 0.0;
      local_1d0[7] = 0.0;
      local_1d0[5] = 0.4;
    }
  }
  else {
    local_1d0[6] = 0.0;
    local_1d0[5] = 0.0;
    local_1d0[7] = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005915b0();
  core_xform_cpp_FUN_00591c10();
  core_xform_cpp_FUN_00591530();
  local_78 = local_48;
  local_74[(uint)bVar8 * -2] = afStack_44[(uint)bVar8 * -2];
  local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  iVar2 = 0xc;
  local_60 = local_1d0[5] - local_78;
  local_5c = local_1d0[6] - local_74[0];
  local_58 = local_1d0[7] - local_74[1];
  local_2c4 = local_1d0[5] - local_78;
  local_2fc[(uint)bVar8 * -2 + 0xf] = local_74[(uint)bVar8 * -2 + 6];
  local_2fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
       local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  puVar5 = local_ab0;
  puVar4 = local_b40;
  local_b34 = local_b34 + local_2c4;
  local_b24 = local_b24 + local_2c0;
  local_b14 = local_b14 + local_2bc;
LAB_005686a7:
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
  }
  puVar5 = local_ab0;
  puVar4 = unaff_ESI;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
  }
  return unaff_ESI;
}
