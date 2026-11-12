// Name: core_stranger.cpp_FUN_0058afe0
// Address: 0058afe0
// Address Range: [[0058afe0, 0058c23a]]
// Convention: unknown
// Signature: float * core_stranger_cpp_FUN_0058afe0(CCharacter *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_stranger_cpp_FUN_0058afe0(CCharacter *param_1,CDemonActor *param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  float *unaff_ESI;
  CMatrix3x4f *pCVar6;
  float *pfVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  CMatrix3x4f *pCVar10;
  uint *puVar11;
  CMatrix3x4f *pCVar12;
  float *pfVar13;
  uint *puVar14;
  byte bVar15;
  float afStackY_1330 [171];
  CDemonActor *apCStackY_1084 [3];
  float afStackY_1078 [36];
  CVector3f *pCVar16;
  CVector3f *pCVar17;
  CBoundingBox3D *in_stack_fffff028;
  CMatrix3x4f local_fa8;
  CMatrix3x4f local_f78;
  CMatrix3x4f local_f48;
  CMatrix3x4f local_f18;
  CMatrix3x4f local_ee8;
  CMatrix3x4f local_eb8;
  CMatrix3x4f local_e88;
  CMatrix3x4f local_e58;
  CMatrix3x4f local_e28;
  CMatrix3x4f local_df8;
  CMatrix3x4f local_dc8;
  CMatrix3x4f local_d98;
  CMatrix3x4f local_d68;
  CMatrix3x4f local_d38;
  CMatrix3x4f local_d08;
  CMatrix3x4f local_cd8;
  CMatrix3x4f local_ca8;
  float local_c78 [12];
  CMatrix3x4f local_c48;
  CMatrix3x4f local_c18;
  CMatrix3x4f local_be8;
  CMatrix3x4f local_bb8;
  CMatrix3x4f local_b88;
  CMatrix3x4f local_b58;
  CMatrix3x4f local_b28;
  CMatrix3x4f local_af8;
  float local_ac8 [12];
  CMatrix3x4f local_a98;
  CMatrix3x4f local_a68;
  float local_a38 [12];
  CMatrix3x4f local_a08;
  CMatrix3x4f local_9d8;
  CMatrix3x4f local_9a8;
  CMatrix3x4f local_978;
  CMatrix3x4f local_948;
  CMatrix3x4f local_918;
  CMatrix3x4f local_8e8;
  CMatrix3x4f local_8b8;
  CMatrix3x4f local_888;
  CMatrix3x4f local_858;
  float local_828 [12];
  CMatrix3x4f local_7f8;
  CMatrix3x4f local_7c8;
  CMatrix3x4f local_798;
  CMatrix3x4f local_768;
  CMatrix3x4f local_738;
  CMatrix3x4f local_708;
  CMatrix3x4f local_6d8;
  CMatrix3x4f local_6a8;
  CMatrix3x4f local_678;
  CMatrix3x4f local_648;
  CMatrix3x4f local_618;
  CMatrix3x4f local_5e8;
  CMatrix3x4f local_5b8;
  CMatrix3x4f local_588;
  float local_558 [12];
  float local_528 [12];
  CMatrix3x4f local_4f8;
  CMatrix3x4f local_4c8;
  CMatrix3x4f local_498;
  float local_468 [12];
  CMatrix3x4f local_438;
  CMatrix3x4f local_408;
  float local_3d8 [12];
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  CDemonActor *local_398;
  float local_394;
  uint local_390 [6];
  float local_378 [6];
  uint local_360;
  float local_35c;
  float local_350;
  uint local_348;
  float local_344 [2];
  CVector3f local_33c;
  float local_330;
  float local_32c [2];
  CVector3f local_324;
  CVector3f local_318;
  CVector3f local_30c;
  float local_300;
  float local_2fc [6];
  float local_2e4;
  float local_2e0;
  CVector3f local_2dc;
  CVector3f local_2d0;
  float local_2c4;
  float afStack_2c0 [2];
  CVector3f local_2b8;
  CDemonActor *local_2ac;
  float local_2a8 [2];
  CVector3f local_2a0;
  CVector3f local_294;
  float local_288;
  float local_284 [2];
  CVector3f local_27c;
  CDemonActor *local_270;
  float afStack_26c [2];
  CVector3f local_264;
  CVector3f local_258;
  float local_24c;
  float local_248 [2];
  CVector3f local_240;
  float local_234;
  float afStack_230 [2];
  CVector3f local_228;
  float local_21c;
  float local_218 [4];
  float local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  CVector3f local_1f8;
  CVector3f local_1ec;
  uint local_1e0;
  float local_1dc [2];
  CVector3f local_1d4;
  CVector3f local_1c8;
  float local_1bc;
  float afStack_1b8 [2];
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  CDemonActor *local_18c;
  float afStack_188 [5];
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CDemonActor *local_144;
  CDemonActor *local_140;
  CDemonActor *local_13c;
  uint local_138;
  float local_134 [2];
  CVector3f local_12c;
  float local_120;
  float local_11c [5];
  CVector3f local_108;
  CVector3f local_fc;
  CVector3f local_f0;
  float local_e4;
  float local_e0 [4];
  float local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  CVector3f local_a8;
  CDemonActor *local_9c;
  CDemonActor *local_98 [2];
  CVector3f local_90;
  float local_84;
  float local_80 [4];
  float local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  CVector3f local_60;
  uint local_54;
  float local_50 [5];
  CVector3f local_3c;
  CVector3f local_30;
  
  bVar15 = 0;
  iVar4 = param_1->carry_hands[param_3].bone_index;
  local_258.x = (float)core_actor_cpp_castToClassHash_FUN_0040c600
                                 (param_2,g_CWeaponClassInfo.name_hash);
  if ((CDemonActor *)local_258.x != (CDemonActor *)0x0) {
    pCVar6 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
    fVar2 = (((CDemonActor *)((int)local_258.x + 0x2b0))->orient).vec.x;
    if (fVar2 == 1.26117e-44) {
      pCVar17 = &local_1ec;
      local_138 = 0xbedec58f;
      local_134[1] = -2.84015;
      local_134[0] = -0.263934;
      local_2b8.y = -0.253904;
      local_2b8.x = -0.170349;
      local_2b8.z = -0.326223;
      local_1ec.x = -0.435101;
      *(float *)((int)&local_1ec + (uint)bVar15 * -8 + 4) = local_134[(uint)bVar15 * -2];
      *(float *)((int)&local_1ec + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_134[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      local_e4 = 0.286436;
      local_e0[1] = 1.58751;
      core_xform_cpp_FUN_005b5760(&local_b28,&local_2b8,pCVar17);
      local_e0[0] = 1.61223;
      pCVar17 = &local_1a4;
      local_1c8.x = 0.49391;
      local_1a4.x = local_e4;
      *(float *)((int)&local_1a4 + (uint)bVar15 * -8 + 4) = local_e0[(uint)bVar15 * -2];
      *(float *)((int)&local_1a4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      local_1c8.y = -0.149521;
      local_1c8.z = 0.00338589;
      core_xform_cpp_FUN_005b5760(&local_a08,&local_1c8,pCVar17);
      fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_b28,&local_a08,1.0 - fVar2);
      pfVar7 = local_828;
      pCVar10 = &local_8e8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_8e8,pCVar6,&local_7c8);
      pCVar6 = &local_7c8;
    }
    else if (fVar2 == 1.4013e-45) {
      local_2fc[2] = 0.191601;
      local_2fc[4] = 0.969617;
      local_2fc[3] = 2.2981;
      local_12c.x = 0.53949;
      local_fc.x = 0.191601;
      *(float *)((int)&local_fc + (uint)bVar15 * -8 + 4) = local_2fc[(uint)bVar15 * -2 + 3];
      *(float *)((int)&local_fc + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_2fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      local_12c.y = -0.235855;
      local_12c.z = -0.412366;
      core_xform_cpp_FUN_005b5760(&local_798,&local_12c,&local_fc);
      local_204 = 0xbed430d3;
      local_1fc = 0x3feb40a3;
      pCVar17 = &local_318;
      local_200 = 0x3f6f2b67;
      local_318.x = -0.414435;
      *(float *)((int)&local_318 + (uint)bVar15 * -8 + 4) = local_218[(uint)bVar15 * -2 + 6];
      *(float *)((int)&local_318 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_218[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      local_f0.z = 0.26139;
      local_f0.x = 0.40292;
      local_f0.y = 0.095011;
      core_xform_cpp_FUN_005b5760(&local_678,&local_f0,pCVar17);
      fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_798,&local_678,1.0 - fVar2);
      pfVar7 = local_558;
      pCVar10 = &local_888;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_888,pCVar6,&local_5e8);
      pCVar6 = &local_5e8;
    }
    else if (fVar2 == 2.8026e-45) {
      pCVar17 = &local_90;
      local_54 = 0x3e3b65aa;
      local_50[1] = 1.66375;
      local_50[0] = 2.24986;
      local_3c.y = -0.0957868;
      local_90.x = 0.183005;
      *(float *)((int)&local_90 + (uint)bVar15 * -8 + 4) = local_50[(uint)bVar15 * -2];
      *(float *)((int)&local_90 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_50[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      local_3c.z = -0.233186;
      local_3c.x = 0.412537;
      local_11c[4] = 1.72744;
      core_xform_cpp_FUN_005b5760(&local_a98,&local_3c,pCVar17);
      local_11c[3] = 1.34731;
      pCVar17 = &local_168;
      local_11c[2] = -0.288645;
      local_2d0.x = 0.483848;
      pCVar16 = &local_2d0;
      local_2d0.y = 0.0729828;
      pCVar10 = &local_618;
      local_168.x = -0.288645;
      *(float *)((int)&local_168 + (uint)bVar15 * -8 + 4) = local_11c[(uint)bVar15 * -2 + 3];
      *(float *)((int)&local_168 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_11c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      local_2d0.z = 0.0731532;
      core_xform_cpp_FUN_005b5760(pCVar10,pCVar16,pCVar17);
      fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_a98,&local_618,1.0 - fVar2);
      pfVar7 = local_3d8;
      pCVar10 = &local_4f8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_4f8,pCVar6,&local_588);
      pCVar6 = &local_588;
    }
    else if (fVar2 == 5.60519e-45) {
      local_cc = 0x3e44c7f3;
      local_c4 = 0x3fd16bba;
      local_c8 = 0x4013aee6;
      local_108.x = 0.334258;
      local_108.y = -0.18522;
      local_33c.x = 0.192169;
      *(float *)((int)&local_33c + (uint)bVar15 * -8 + 4) = local_e0[(uint)bVar15 * -2 + 6];
      *(float *)((int)&local_33c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      local_108.z = -0.409418;
      local_50[2] = -0.464445;
      core_xform_cpp_FUN_005b5760(&local_498,&local_108,&local_33c);
      local_50[4] = 1.77515;
      local_50[3] = 1.15525;
      local_240.x = 0.381162;
      local_228.x = local_50[2];
      *(float *)((int)&local_228 + (uint)bVar15 * -8 + 4) = local_50[(uint)bVar15 * -2 + 3];
      *(float *)((int)&local_228 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_50[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      local_240.y = 0.0692056;
      local_240.z = -0.225393;
      core_xform_cpp_FUN_005b5760(&local_c18,&local_240,&local_228);
      fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_498,&local_c18,1.0 - fVar2);
      pfVar7 = local_a38;
      pCVar10 = &local_af8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_af8,pCVar6,&local_9d8);
      pCVar6 = &local_9d8;
    }
    else if (fVar2 == 4.2039e-45) {
      local_198.x = 0.238337;
      local_198.y = -0.0656786;
      local_198.z = 0.0335054;
      local_6c = 0xbf3e6506;
      local_64 = 0xbf4eefe5;
      pCVar17 = &local_30c;
      pCVar16 = &local_198;
      pCVar10 = &local_9a8;
      local_68 = 0x3f31884c;
      local_30c.x = -0.743729;
      *(float *)((int)&local_30c + (uint)bVar15 * -8 + 4) = local_80[(uint)bVar15 * -2 + 6];
      *(float *)((int)&local_30c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_80[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      core_xform_cpp_FUN_005b5760(pCVar10,pCVar16,pCVar17);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_9a8,pCVar6,&local_bb8);
      pCVar6 = &local_bb8;
    }
    else if (fVar2 == 7.00649e-45) {
      local_15c.x = 0.62;
      local_15c.y = 0.0;
      local_15c.z = 0.217;
      local_344[0] = 1.57;
      pCVar17 = &local_150;
      local_344[1] = -1.57;
      pCVar16 = &local_15c;
      pCVar10 = &local_858;
      local_348 = 0;
      local_150.x = 0.0;
      *(float *)((int)&local_150 + (uint)bVar15 * -8 + 4) = local_344[(uint)bVar15 * -2];
      *(float *)((int)&local_150 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_344[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      core_xform_cpp_FUN_005b5760(pCVar10,pCVar16,pCVar17);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_858,pCVar6,&local_738);
      pCVar6 = &local_738;
    }
    else if (fVar2 == 9.80909e-45) {
      local_b4 = 0xbdb87c8b;
      local_ac = 0x3f262846;
      local_b0 = 0xbe78bef9;
      local_30.x = 0.414782;
      local_30.y = -0.161673;
      local_27c.x = -0.0900813;
      *(float *)((int)&local_27c + (uint)bVar15 * -8 + 4) = local_e0[(uint)bVar15 * -2 + 0xc];
      *(float *)((int)&local_27c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           local_e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
      local_30.z = -0.489897;
      afStack_188[2] = 0.30057;
      core_xform_cpp_FUN_005b5760(&local_8b8,&local_30,&local_27c);
      afStack_188[4] = 0.64525;
      afStack_188[3] = -0.133049;
      local_264.x = 0.303704;
      local_294.x = afStack_188[2];
      *(float *)((int)&local_294 + (uint)bVar15 * -8 + 4) = afStack_188[(uint)bVar15 * -2 + 3];
      *(float *)((int)&local_294 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           afStack_188[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      local_264.y = 0.0649791;
      local_264.z = -0.273446;
      core_xform_cpp_FUN_005b5760(&local_6d8,&local_264,&local_294);
      fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,0);
      core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_8b8,&local_6d8,1.0 - fVar2);
      pfVar7 = local_468;
      pCVar10 = &local_b58;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_b58,pCVar6,&local_708);
      pCVar6 = &local_708;
    }
    else if (param_3 == 0) {
      core_xform_cpp_FUN_005b5760(&local_438,(CVector3f *)&DAT_02c835f0,(CVector3f *)&DAT_02c8af28);
      pCVar10 = &local_438;
      core_xform_cpp_buildRotationX_FUN_005b6d90(1.5707964,&local_f78);
      pCVar9 = &local_648;
      pCVar8 = &local_f78;
      pCVar12 = &local_648;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar12->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar15 * -2 + 1) * 4);
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_buildRotationY_FUN_005b6e10(-1.5707964,&local_f48);
      pCVar8 = &local_f48;
      pCVar12 = &local_4c8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar12->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar15 * -2 + 1) * 4);
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_4c8,pCVar9,&local_f18);
      pCVar9 = &local_f18;
      pfVar7 = (float *)&stack0xfffff028;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar7 = pCVar9->m[0].w;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar15 * -2 + 1) * 4);
        pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                ((CMatrix3x4f *)&stack0xfffff028,pCVar10,&local_ee8);
      pCVar10 = &local_ee8;
      pCVar9 = &local_fa8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar9->m[0].w = pCVar10->m[0].w;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_fa8,pCVar6,&local_eb8);
      pCVar6 = &local_eb8;
    }
    else {
      core_xform_cpp_FUN_005b5760(&local_e88,(CVector3f *)&DAT_02c835e4,(CVector3f *)&DAT_02c8af28);
      pCVar10 = &local_e88;
      core_xform_cpp_buildRotationX_FUN_005b6d90(1.5707964,&local_d98);
      pCVar9 = &local_e28;
      pCVar8 = &local_d98;
      pCVar12 = &local_e28;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar12->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar15 * -2 + 1) * 4);
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_buildRotationY_FUN_005b6e10(1.5707964,&local_d68);
      pCVar8 = &local_d68;
      pCVar12 = &local_e58;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar12->m[0].w = pCVar8->m[0].w;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar15 * -2 + 1) * 4);
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_e58,pCVar9,&local_d38);
      pCVar9 = &local_d38;
      pCVar8 = &local_df8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar8->m[0].w = pCVar9->m[0].w;
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar15 * -2 + 1) * 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_df8,pCVar10,&local_408);
      pCVar10 = &local_408;
      pCVar9 = &local_dc8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar9->m[0].w = pCVar10->m[0].w;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_dc8,pCVar6,&local_cd8);
      pCVar6 = &local_cd8;
    }
    iVar4 = 0xc;
    pfVar7 = local_ac8;
    goto LAB_0058b190;
  }
  local_258.y = 0.0;
  local_258.z = local_258.x;
  local_144 = (CDemonActor *)local_258.x;
  local_140 = (CDemonActor *)local_258.x;
  local_13c = (CDemonActor *)local_258.x;
  if (param_1->layer_action_index == 0xe) {
    core_xform_cpp_FUN_005b5080
              (&DAT_02c8af28,(param_1->model).bone_transform.bone_model_matrices + _DAT_02c83638);
    local_120 = local_234;
    local_11c[(uint)bVar15 * -2] = afStack_230[(uint)bVar15 * -2];
    local_11c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_230[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    core_xform_cpp_FUN_005b5080
              (&DAT_02c8af28,(param_1->model).bone_transform.bone_model_matrices + _DAT_02c83634);
    local_e0[2] = local_2c4;
    local_e0[(uint)bVar15 * -2 + 3] = afStack_2c0[(uint)bVar15 * -2];
    local_e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    local_2fc[5] = local_e0[2] + local_120;
    local_2e4 = local_e0[3] + local_11c[0];
    local_2e0 = local_d0 + local_11c[1];
    local_21c = local_e0[2] + local_120;
    local_218[(uint)bVar15 * -2] = local_2fc[(uint)bVar15 * -2 + 6];
    local_218[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         local_2fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    local_80[2] = local_21c * _DAT_005f6bc9;
    local_80[3] = local_218[0] * _DAT_005f6bc9;
    local_70 = local_218[1] * _DAT_005f6bc9;
    local_288 = local_21c * _DAT_005f6bc9;
    local_284[(uint)bVar15 * -2] = local_80[(uint)bVar15 * -2 + 3];
    local_284[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         local_80[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffff028);
    puVar11 = local_390;
    puVar14 = &local_360;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar14 = *puVar11;
      puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
    }
    local_284[1] = local_284[1] + _DAT_005f6be1;
    local_284[0] = local_284[0] - (local_350 - local_35c);
    fVar2 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00585170(param_2);
    local_284[0] = fVar2 + local_284[0];
    core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(&local_b88);
    local_b88.m[0].z = local_288;
    local_b88.m[1].z = local_284[0];
    local_b88.m[2].z = local_284[1];
    if (*(int *)(param_1[2].flames[0x1a].off_event + 0x1c) != 0) {
      pCVar6 = &local_b88;
      core_xform_cpp_buildRotationY_FUN_005b6e10(3.1415927,&local_948);
      pCVar10 = &local_948;
      pCVar9 = &local_ca8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar9->m[0].w = pCVar10->m[0].w;
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar15 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_ca8,pCVar6,&local_c48);
      pCVar6 = &local_c48;
      pCVar10 = &local_b88;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar10->m[0].w = pCVar6->m[0].w;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar15 * -2 + 1) * 4);
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
      }
    }
    iVar4 = 0xc;
    pfVar7 = local_ac8;
    pCVar6 = &local_b88;
    goto LAB_0058b190;
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600(param_2,DAT_007c5330);
  if (pCVar3 != (CDemonActor *)0x0) {
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffff028);
    pfVar7 = local_378;
    pfVar13 = &local_3a8;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar13 = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
      pfVar13 = pfVar13 + (uint)bVar15 * -2 + 1;
    }
    local_c0 = local_3a8 + local_39c;
    local_bc = local_3a4 + (float)local_398;
    local_b8 = local_3a0 + local_394;
    local_300 = local_3a8 + local_39c;
    local_2fc[(uint)bVar15 * -2] = local_e0[(uint)bVar15 * -2 + 9];
    local_2fc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         local_e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    local_2ac = (CDemonActor *)(local_300 * _DAT_005f6bc9);
    local_2a8[0] = local_2fc[0] * _DAT_005f6bc9;
    local_2a8[1] = local_2fc[1] * _DAT_005f6bc9;
    local_9c = (CDemonActor *)(local_300 * _DAT_005f6bc9);
    local_98[(uint)bVar15 * -2] = (CDemonActor *)local_2a8[(uint)bVar15 * -2];
    local_98[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         (CDemonActor *)local_2a8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    if (&local_144 != &local_9c) {
      local_144 = local_9c;
      local_140 = local_98[0];
      local_13c = local_98[1];
    }
    uVar1 = pCVar3[4].blood_effect_color;
    if (uVar1 != 2) {
      if (uVar1 == 1) {
        if (param_3 == 0) {
          core_xform_cpp_buildRotationY_FUN_005b6e10(-1.5707964,&local_6a8);
          pCVar6 = &local_6a8;
LAB_0058c0ac:
          pCVar10 = &local_768;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            pCVar10->m[0].w = pCVar6->m[0].w;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar15 * -2 + 1) * 4);
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
          }
        }
        else {
          if (param_3 == 1) {
            core_xform_cpp_buildRotationY_FUN_005b6e10(1.5707964,&local_978);
            pCVar6 = &local_978;
            goto LAB_0058c0ac;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(&local_768);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                  (&local_768,(param_1->model).bone_transform.bone_model_matrices + iVar4,&local_918
                  );
        pCVar6 = &local_918;
        pCVar10 = &local_768;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          pCVar10->m[0].w = pCVar6->m[0].w;
          pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar15 * -2 + 1) * 4);
          pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
        }
        core_xform_cpp_matrixToEulerAngles_FUN_005b5930();
        local_1f8.x = (float)local_270;
        *(float *)((int)&local_1f8 + (uint)bVar15 * -8 + 4) = afStack_26c[(uint)bVar15 * -2];
        *(float *)((int)&local_1f8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2) * 4 + 8) =
             afStack_26c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        if (&local_258 != &local_1f8) {
          local_258.x = local_1f8.x;
          local_258.y = local_1f8.y;
          local_258.z = local_1f8.z;
        }
        local_13c = (CDemonActor *)
                    (local_394 * (float)_DAT_005f6bd9 + local_3a0 * (float)_DAT_005f6bd1);
        goto LAB_0058bb32;
      }
      if (uVar1 != 3) {
        _DAT_01d1d400 = "..\\core\\stranger.cpp";
        _DAT_01d1d404 = 0xcb5;
        core_main_c_FUN_005030e0();
        goto LAB_0058bb32;
      }
    }
    local_140 = local_398;
  }
LAB_0058bb32:
  iVar5 = (*((param_2->vtable)._ub)->getAllowedMeleeAttackTypes)(param_2);
  if (iVar5 != 0) {
    local_1e0 = 0xbdb87c8b;
    local_1dc[1] = 0.649052;
    local_1dc[0] = -0.242916;
    local_60.x = 0.414782;
    local_60.y = -0.161673;
    local_1b0.x = -0.0900813;
    *(float *)((int)&local_1b0 + (uint)bVar15 * -8 + 4) = local_1dc[(uint)bVar15 * -2];
    *(float *)((int)&local_1b0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         local_1dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    local_60.z = -0.489897;
    local_84 = 0.30057;
    core_xform_cpp_FUN_005b5760(&local_5b8,&local_60,&local_1b0);
    local_80[1] = 0.64525;
    local_80[0] = -0.133049;
    local_324.x = 0.385392;
    local_174.x = local_84;
    *(float *)((int)&local_174 + (uint)bVar15 * -8 + 4) = local_80[(uint)bVar15 * -2];
    *(float *)((int)&local_174 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         local_80[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    local_324.y = -0.0122009;
    local_324.z = -0.49418;
    core_xform_cpp_FUN_005b5760(&local_a68,&local_324,&local_174);
    pCVar10 = (param_1->model).bone_transform.bone_model_matrices + iVar4;
    core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(param_1,0);
    core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(&local_5b8);
    pfVar7 = local_c78;
    pCVar6 = &local_7f8;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar6->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar15 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_7f8,pCVar10,&local_be8);
    pCVar6 = &local_be8;
    pfVar7 = local_528;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = pCVar6->m[0].w;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar15 * -2 + 1) * 4);
      pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930();
    local_2dc.x = (float)local_18c;
    *(float *)((int)&local_2dc + (uint)bVar15 * -8 + 4) = afStack_188[(uint)bVar15 * -2];
    *(float *)((int)&local_2dc + ((uint)bVar15 * -2 + (uint)bVar15 * -2) * 4 + 8) =
         afStack_188[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    if (&local_258 != &local_2dc) {
      local_258.x = local_2dc.x;
      local_258.y = local_2dc.y;
      local_258.z = local_2dc.z;
    }
  }
  if (param_3 == 0) {
    local_2a0.y = (float)param_3;
    local_2a0.z = (float)param_3;
    local_2a0.x = -0.4;
    if (&local_1d4 != (CVector3f *)(local_2a8 + 2)) {
      local_1d4.y = 0.0;
      local_1d4.z = 0.0;
      local_1d4.x = -0.4;
    }
  }
  else if (param_3 == 1) {
    local_a8.x = 0.4;
    local_a8.y = 0.0;
    local_a8.z = 0.0;
    if (&local_1d4 != (CVector3f *)(local_e0 + 0xe)) {
      local_1d4.y = 0.0;
      local_1d4.z = 0.0;
      local_1d4.x = 0.4;
    }
  }
  else {
    local_1d4.y = 0.0;
    local_1d4.x = 0.0;
    local_1d4.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005b5100
            (&local_1d4,(param_1->model).bone_transform.bone_model_matrices + iVar4);
  core_xform_cpp_FUN_005b5760(&local_d08,&local_1d4,&local_258);
  core_xform_cpp_FUN_005b5080();
  local_218[2] = local_1bc;
  local_218[(uint)bVar15 * -2 + 3] = afStack_1b8[(uint)bVar15 * -2];
  local_218[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
       afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
  iVar4 = 0xc;
  local_330 = local_1d4.x - local_218[2];
  local_32c[0] = local_1d4.y - local_218[3];
  local_32c[1] = local_1d4.z - local_208;
  local_24c = local_1d4.x - local_218[2];
  local_248[(uint)bVar15 * -2] = local_32c[(uint)bVar15 * -2];
  local_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
       local_32c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
  pfVar7 = local_ac8;
  pCVar6 = &local_d08;
  local_d08.m[0].z = local_d08.m[0].z + local_24c;
  local_d08.m[1].z = local_d08.m[1].z + local_248[0];
  local_d08.m[2].z = local_d08.m[2].z + local_248[1];
LAB_0058b190:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar15 * -2 + 1) * 4);
    pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
  }
  pfVar7 = local_ac8;
  pfVar13 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar13 = *pfVar7;
    pfVar7 = pfVar7 + (uint)bVar15 * -2 + 1;
    pfVar13 = pfVar13 + (uint)bVar15 * -2 + 1;
  }
  return unaff_ESI;
}
