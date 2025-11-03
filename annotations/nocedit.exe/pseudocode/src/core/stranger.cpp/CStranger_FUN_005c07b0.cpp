// Name: core_stranger.cpp_CStranger_FUN_005c07b0
// Address: 005c07b0
// Address Range: [[005c07b0, 005c165b]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c07b0()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c06b0 (005c06b0) at 005c0706 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005c5170 (005c5170) at 005c5196 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_stranger_cpp_0065394c
//   TerminatedCString s_Don_t_know_how_to_carry__00653961
//   float FLOAT_00653984 = 0.5
//   double DOUBLE_0065398c = 0.700000000000000
//   double DOUBLE_00653994 = 0.300000000000000
//   float FLOAT_0065399c = 0.3330000
//   undefined4 g_CLightActorClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f6bab0
//   undefined4 DAT_03f6babc
//   undefined4 DAT_03f6bb00
//   undefined4 DAT_03f6bb04
//   CVector3f g_ZeroVector
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_stranger.cpp_FUN_005bb010
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_buildRotationX_FUN_005f6c40
//   core_xform.cpp_buildRotationY_FUN_005f6cc0
//   core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c07b0(CStranger* param_1,
   undefined4 param_2, undefined4 param_3) */

float * core_stranger_cpp_CStranger_FUN_005c07b0(void)

{
  int iVar1;
  float fVar2;
  CDemonActor *pCVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  CMatrix3x4f *pCVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  CMatrix3x4f *pCVar12;
  byte bVar13;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float in_stack_0000000c;
  CMatrix3x4f *in_stack_fffff2ac;
  CMatrix3x4f *in_stack_fffff2b0;
  CMatrix3x4f *in_stack_fffff2b4;
  CMatrix3x4f *in_stack_fffff2b8;
  CMatrix3x4f *in_stack_fffff2bc;
  float in_stack_fffff2c0;
  CMatrix3x4f *in_stack_fffff2cc;
  CMatrix3x4f *in_stack_fffff2d0;
  CMatrix3x4f *in_stack_fffff2dc;
  CMatrix3x4f *in_stack_fffff2e0;
  CMatrix3x4f local_cfc;
  CMatrix3x4f local_ccc;
  CMatrix3x4f local_c9c;
  undefined4 local_c6c [12];
  CMatrix3x4f local_c3c;
  CMatrix3x4f local_c0c;
  CMatrix3x4f local_bdc;
  float local_bac [12];
  float local_b7c [12];
  float local_b4c [12];
  CMatrix3x4f local_b1c;
  CMatrix3x4f local_aec;
  CMatrix3x4f local_abc;
  CMatrix3x4f local_a8c;
  CMatrix3x4f local_a5c;
  float local_a2c [12];
  CMatrix3x4f local_9fc;
  CVector3f local_9cc [4];
  CMatrix3x4f local_99c;
  CMatrix3x4f local_96c;
  float local_93c [12];
  float local_90c [12];
  CMatrix3x4f local_8dc;
  CMatrix3x4f local_8ac;
  CMatrix3x4f local_87c;
  float local_84c [12];
  CMatrix3x4f local_81c;
  CMatrix3x4f local_7ec;
  float local_7bc [12];
  CMatrix3x4f local_78c;
  CMatrix3x4f local_75c;
  undefined4 local_72c [12];
  CMatrix3x4f local_6fc;
  CMatrix3x4f local_6cc;
  CMatrix3x4f local_69c;
  undefined4 local_66c [12];
  CMatrix3x4f local_63c;
  float local_60c [12];
  float local_5dc [12];
  CMatrix3x4f local_5ac;
  CMatrix3x4f local_57c;
  float local_54c [12];
  float local_51c [12];
  CMatrix3x4f local_4ec;
  CMatrix3x4f local_4bc;
  float local_48c [12];
  CMatrix3x4f local_45c;
  float local_42c [12];
  CMatrix3x4f local_3fc;
  CMatrix3x4f local_3cc;
  float local_39c [12];
  undefined4 local_36c [12];
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
  CMatrix3x3f local_78;
  CVector3f local_54;
  CVector3f local_48;
  CMatrix3x3f local_3c;
  
  bVar13 = 0;
  iVar1 = *(int *)(in_stack_00000004 + 0x24ac + (int)in_stack_0000000c * 0x44);
  iVar6 = in_stack_00000004 + 0xfd8;
  local_180.x = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                 (in_stack_00000008,g_CWeaponClassInfo.name_hash);
  if ((CDemonActor *)local_180.x != (CDemonActor *)0x0) {
    fVar2 = (((CDemonActor *)((int)local_180.x + 0x2b0))->orient).pitch;
    pCVar7 = (CMatrix3x4f *)(iVar1 * 0x30 + iVar6);
    if (fVar2 == 1.4013e-45) {
      local_a8.z = 0.969617;
      local_a8.x = 0.191601;
      local_a8.y = 2.2981;
      local_1ec.z = -0.412366;
      local_1ec.x = 0.53949;
      local_1ec.y = -0.235855;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_87c,&local_1ec,&local_a8);
      local_3c.m[1].y = 0.934256;
      local_3c.m[1].x = -0.414435;
      local_3c.m[1].z = 1.83791;
      local_1b0.x = 0.40292;
      local_1b0.y = 0.095011;
      local_1b0.z = 0.26139;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_6cc,&local_1b0,local_3c.m + 1);
      fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_87c,&local_6cc,1.0 - fVar2);
      pfVar9 = local_51c;
      pCVar7 = &local_a8c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_a8c,in_stack_fffff2b4,in_stack_fffff2b8);
      pCVar7 = &local_3fc;
    }
    else if (fVar2 == 2.8026e-45) {
      local_1bc.z = 1.66375;
      local_1bc.x = 0.183005;
      local_1bc.y = 2.24986;
      local_18c.z = -0.233186;
      local_18c.x = 0.412537;
      local_18c.y = -0.0957868;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_3cc,&local_18c,&local_1bc);
      local_1e0.y = 1.34731;
      local_1e0.x = -0.288645;
      local_1e0.z = 1.72744;
      local_48.x = 0.483848;
      local_48.y = 0.0729828;
      local_48.z = 0.0731532;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_ccc,&local_48,&local_1e0);
      fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_3cc,&local_ccc,1.0 - fVar2);
      pfVar9 = local_7bc;
      pCVar7 = &local_b1c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b1c,in_stack_fffff2b4,in_stack_fffff2b8);
      pCVar7 = &local_9fc;
    }
    else if (fVar2 == 5.60519e-45) {
      local_1c8.z = 1.6361;
      local_1c8.x = 0.192169;
      local_1c8.y = 2.30755;
      local_9c.z = -0.409418;
      local_9c.x = 0.334258;
      local_9c.y = -0.18522;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_27c,&local_9c,&local_1c8);
      local_54.y = 1.15525;
      local_54.x = -0.464445;
      local_54.z = 1.77515;
      local_cc.x = 0.381162;
      local_cc.y = 0.0692056;
      local_cc.z = -0.225393;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_81c,&local_cc,&local_54);
      fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_27c,&local_81c,1.0 - fVar2);
      pfVar9 = local_5dc;
      pCVar7 = &local_63c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_63c,in_stack_fffff2b4,in_stack_fffff2b8);
      pCVar7 = &local_57c;
    }
    else if (fVar2 == 4.2039e-45) {
      local_c0.x = 0.238337;
      local_3c.m[2].x = -0.743729;
      local_c0.y = -0.0656786;
      local_c0.z = 0.0335054;
      local_3c.m[2].z = -0.808348;
      local_3c.m[2].y = 0.693486;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_7ec,&local_c0,local_3c.m + 2);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_7ec,pCVar7,in_stack_fffff2ac);
      pCVar7 = &local_8dc;
    }
    else if (fVar2 == 7.00649e-45) {
      local_174.x = 0.62;
      local_168.z = -1.57;
      local_174.y = 0.0;
      local_174.z = 0.217;
      local_168.x = 0.0;
      local_168.y = 1.57;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_33c,&local_174,&local_168);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_33c,pCVar7,in_stack_fffff2ac);
      pCVar7 = &local_c3c;
    }
    else if (fVar2 == 9.80909e-45) {
      local_78.m[2].x = -0.0900813;
      local_78.m[2].z = 0.649052;
      local_78.m[2].y = -0.242916;
      local_1a4.x = 0.414782;
      local_1a4.y = -0.161673;
      local_1a4.z = -0.489897;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_c0c,&local_1a4,local_78.m + 2);
      local_78.m[1].z = 0.64525;
      local_78.m[1].x = 0.30057;
      local_f0.z = -0.273446;
      local_78.m[1].y = -0.133049;
      local_f0.x = 0.303704;
      local_f0.y = 0.0649791;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_bdc,&local_f0,local_78.m + 1);
      fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_c0c,&local_bdc,1.0 - fVar2);
      pfVar9 = local_54c;
      pCVar7 = &local_8ac;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_8ac,in_stack_fffff2b4,in_stack_fffff2b8);
      pCVar7 = &local_78c;
    }
    else if (in_stack_0000000c == 0.0) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_75c,(CVector3f *)&DAT_03f6babc,&g_ZeroVector);
      core_xform_cpp_buildRotationX_FUN_005f6c40((CMatrix3x4f *)0x3fc90fdb,(float)&local_75c);
      puVar8 = local_66c;
      puVar11 = local_c6c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar13 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0xbfc90fdb,(float)local_c6c);
      pfVar9 = local_bac;
      pCVar12 = &local_c9c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar12->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_c9c,pCVar7,in_stack_fffff2ac);
      pfVar9 = local_b7c;
      pCVar7 = &local_6fc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_6fc,in_stack_fffff2b0,in_stack_fffff2b4);
      pfVar9 = local_b4c;
      pCVar7 = &local_69c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_69c,in_stack_fffff2b8,in_stack_fffff2bc);
      pCVar7 = &local_5ac;
    }
    else {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_aec,(CVector3f *)&DAT_03f6bab0,&g_ZeroVector);
      core_xform_cpp_buildRotationX_FUN_005f6c40((CMatrix3x4f *)0x3fc90fdb,(float)&local_aec);
      puVar8 = local_72c;
      puVar11 = local_36c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + (uint)bVar13 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      }
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,(float)local_36c);
      pfVar9 = local_60c;
      pCVar12 = &local_abc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar12->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_abc,pCVar7,in_stack_fffff2ac);
      pfVar9 = local_42c;
      pCVar7 = &local_4ec;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_4ec,in_stack_fffff2b0,in_stack_fffff2b4);
      pfVar9 = local_39c;
      pCVar7 = &local_4bc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_4bc,in_stack_fffff2b8,in_stack_fffff2bc);
      pCVar7 = &local_24c;
    }
    iVar6 = 0xc;
    pfVar9 = local_a2c;
    goto LAB_005c0946;
  }
  local_180.y = local_180.x;
  local_180.z = local_180.x;
  local_84.x = local_180.x;
  local_84.y = local_180.x;
  local_84.z = local_180.x;
  if (*(int *)(in_stack_00000004 + 0x2a8c) == 0xe) {
    pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_d8,&g_ZeroVector,(CMatrix3x4f *)(DAT_03f6bb04 * 0x30 + iVar6));
    pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_90,&g_ZeroVector,(CMatrix3x4f *)(DAT_03f6bb00 * 0x30 + iVar6));
    local_198 = pCVar5->x + pCVar4->x;
    local_194 = pCVar5->y + pCVar4->y;
    local_108 = local_198 * FLOAT_00653984;
    local_190 = pCVar5->z + pCVar4->z;
    local_104 = local_194 * FLOAT_00653984;
    local_100 = local_190 * FLOAT_00653984;
    (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,&local_204);
    local_100 = local_100 + FLOAT_0065399c;
    local_104 = local_104 - (local_204.max.y - local_204.min.y);
    fVar2 = (float)core_stranger_cpp_FUN_005bb010();
    local_104 = fVar2 + local_104;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_2ac);
    local_2ac.m[0].z = local_108;
    local_2ac.m[1].z = local_104;
    local_2ac.m[2].z = local_100;
    if (*(int *)(in_stack_00000004 + 0x1fc88) != 0) {
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x40490fdb,(float)&local_2ac);
      pfVar9 = local_93c;
      pCVar7 = &local_96c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_96c,in_stack_fffff2cc,in_stack_fffff2d0);
      pfVar9 = local_90c;
      pCVar7 = &local_2ac;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        pCVar7->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
      }
    }
    iVar6 = 0xc;
    pfVar9 = local_a2c;
    pCVar7 = &local_2ac;
    goto LAB_005c0946;
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000008,g_CLightActorClassInfo.name_hash);
  if (pCVar3 != (CDemonActor *)0x0) {
    (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,&local_21c);
    local_138 = local_21c.min.x + local_21c.max.x;
    local_150.x = local_138 * FLOAT_00653984;
    local_134 = local_21c.min.y + local_21c.max.y;
    local_130 = local_21c.min.z + local_21c.max.z;
    local_150.y = local_134 * FLOAT_00653984;
    local_150.z = local_130 * FLOAT_00653984;
    if (&local_180 != &local_150) {
      local_180.x = local_150.x;
      local_180.y = local_150.y;
      local_180.z = local_150.z;
    }
    iVar6 = pCVar3[4].scale.y;
    if (iVar6 != 2) {
      if (iVar6 == 1) {
        if (in_stack_0000000c == 0.0) {
          pCVar7 = (CMatrix3x4f *)0xbfc90fdb;
          core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0xbfc90fdb,in_stack_fffff2c0);
          pfVar9 = local_30c;
LAB_005c1504:
          pCVar12 = &local_45c;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            pCVar12->m[0].w = *pfVar9;
            pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
            pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
          }
        }
        else {
          if (in_stack_0000000c == 1.4013e-45) {
            pCVar7 = (CMatrix3x4f *)0x3fc90fdb;
            core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,in_stack_fffff2c0);
            pfVar9 = local_2dc;
            goto LAB_005c1504;
          }
          pCVar7 = &local_45c;
          core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(pCVar7);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&local_45c,(CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000004 + 0xfd8),pCVar7);
        pfVar9 = local_48c;
        pCVar7 = &local_45c;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          pCVar7->m[0].w = *pfVar9;
          pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
        }
        pCVar4 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CVector3f *)&local_45c,&local_3c);
        if (&local_84 != pCVar4) {
          local_84.x = pCVar4->x;
          local_84.y = pCVar4->y;
          local_84.z = pCVar4->z;
        }
        local_180.z = local_21c.max.z * (float)DOUBLE_00653994 +
                      local_21c.min.z * (float)DOUBLE_0065398c;
        goto LAB_005c10ab;
      }
      if (iVar6 != 3) {
        g_CurrentFilename = "..\\core\\stranger.cpp";
        g_CurrentLineNumber = 0xc4d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s");
        goto LAB_005c10ab;
      }
    }
    local_180.y = local_21c.max.y;
  }
LAB_005c10ab:
  iVar6 = (*in_stack_00000008->vtable->getAllowedMeleeAttackTypes)(in_stack_00000008);
  if (iVar6 != 0) {
    local_12c.x = -0.0900813;
    local_12c.z = 0.649052;
    local_12c.y = -0.242916;
    local_1d4.x = 0.414782;
    local_1d4.y = -0.161673;
    local_1d4.z = -0.489897;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xfffff2d4,&local_1d4,&local_12c);
    local_15c.x = 0.30057;
    local_120.z = -0.49418;
    local_120.x = 0.385392;
    local_120.y = -0.0122009;
    local_15c.z = 0.64525;
    local_15c.y = -0.133049;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_cfc,&local_120,&local_15c);
    fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    core_xform_cpp_lerpMatrix3x4_FUN_005f7140
              ((CMatrix3x4f *)&stack0xfffff2d4,&local_cfc,1.0 - fVar2);
    pfVar9 = local_84c;
    pCVar7 = &local_99c;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar7->m[0].w = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_99c,in_stack_fffff2dc,in_stack_fffff2e0);
    pfVar9 = (float *)&stack0xfffff2a4;
    pCVar4 = local_9cc;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar4->x = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
      pCVar4 = (CVector3f *)((int)pCVar4 + ((uint)bVar13 * -2 + 1) * 4);
    }
    pCVar4 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_9cc,&local_78);
    if (&local_84 != pCVar4) {
      local_84.x = pCVar4->x;
      local_84.y = pCVar4->y;
      local_84.z = pCVar4->z;
    }
  }
  if (in_stack_0000000c == 0.0) {
    local_b4.y = in_stack_0000000c;
    local_b4.z = in_stack_0000000c;
    local_b4.x = -0.4;
    if (&local_e4 != &local_b4) {
      local_e4.x = -0.4;
      local_e4.y = 0.0;
      local_e4.z = 0.0;
    }
  }
  else if (in_stack_0000000c == 1.4013e-45) {
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
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (&local_e4,(CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000004 + 0xfd8));
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_a5c,&local_e4,&local_84);
  pfVar9 = local_a2c;
  pCVar7 = &local_a5c;
  pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_114,&local_180,&local_a5c);
  iVar6 = 0xc;
  local_fc = local_e4.x - pCVar4->x;
  local_f8 = local_e4.y - pCVar4->y;
  local_f4 = local_e4.z - pCVar4->z;
  local_a5c.m[0].z = local_a5c.m[0].z + local_fc;
  local_a5c.m[1].z = local_a5c.m[1].z + local_f8;
  local_a5c.m[2].z = local_a5c.m[2].z + local_f4;
LAB_005c0946:
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar9 = pCVar7->m[0].w;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
    pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
  }
  pfVar9 = local_a2c;
  pfVar10 = unaff_ESI;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
  }
  return unaff_ESI;
}


// Assembly code:
// 005c07b0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c07b0
// 005c07b1: PUSH EDI
// 005c07b2: PUSH EBP
// 005c07b3: MOV EBP,ESP
// 005c07b5: SUB ESP,0xd50
// 005c07bb: SUB EBP,0x7a
// 005c07be: MOV EBX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 005c07c4: MOV dword ptr [EBP + 0x6e],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005c07c7: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 005c07cd: MOV EAX,EDX
// 005c07cf: SHL EAX,0x4
// 005c07d2: ADD EAX,EDX
// 005c07d4: MOV EDX,dword ptr [0x03f95d78]
//   XREF to: 03f95d78 (READ)
// 005c07da: PUSH EDX
// 005c07db: MOV ECX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c07e1: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24ac]
// 005c07e8: PUSH ECX
// 005c07e9: LEA EDI,[EBX + 0xfd8]
// 005c07ef: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c07f2: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c07f7: ADD ESP,0x8
// 005c07fa: TEST EAX,EAX
// 005c07fc: JZ 0x005c0f96
//   XREF to: 005c0f96 (CONDITIONAL_JUMP)
// 005c0802: MOV EDX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x14] (READ)
// 005c0805: LEA ESI,[EDX*0x4 + 0x0]
// 005c080c: SUB ESI,EDX
// 005c080e: SHL ESI,0x4
// 005c0811: MOV EDX,dword ptr [EAX + 0x2e0]
// 005c0817: ADD ESI,EDI
// 005c0819: CMP EDX,0x1
// 005c081c: JZ 0x005c0962
//   XREF to: 005c0962 (CONDITIONAL_JUMP)
// 005c0822: CMP EDX,0x2
// 005c0825: JZ 0x005c0a7b
//   XREF to: 005c0a7b (CONDITIONAL_JUMP)
// 005c082b: CMP EDX,0x4
// 005c082e: JZ 0x005c0ba0
//   XREF to: 005c0ba0 (CONDITIONAL_JUMP)
// 005c0834: CMP EDX,0x3
// 005c0837: JZ 0x005c0cad
//   XREF to: 005c0cad (CONDITIONAL_JUMP)
// 005c083d: CMP EDX,0x5
// 005c0840: JZ 0x005c0d1d
//   XREF to: 005c0d1d (CONDITIONAL_JUMP)
// 005c0846: CMP EDX,0x7
// 005c0849: JZ 0x005c0d9d
//   XREF to: 005c0d9d (CONDITIONAL_JUMP)
// 005c084f: CMP dword ptr [EBP + 0x92],0x0
//   XREF to: Stack[0xc] (READ)
// 005c0856: JNZ 0x005c0eaa
//   XREF to: 005c0eaa (CONDITIONAL_JUMP)
// 005c085c: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005c0861: PUSH 0x3f6babc
//   XREF to: 03f6babc (DATA)
// 005c0866: LEA EAX,[EBP + 0xfffff92a]
//   XREF to: Stack[-0x75c] (DATA)
// 005c086c: PUSH EAX
// 005c086d: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0872: ADD ESP,0xc
// 005c0875: PUSH ESI
// 005c0876: LEA EAX,[EBP + 0xfffff92a]
//   XREF to: Stack[-0x75c] (DATA)
// 005c087c: PUSH EAX
// 005c087d: LEA ESI,[EBP + 0xfffffa1a]
//   XREF to: Stack[-0x66c] (DATA)
// 005c0883: PUSH 0x3fc90fdb
// 005c0888: LEA EDI,[EBP + 0xfffff41a]
//   XREF to: Stack[-0xc6c] (DATA)
// 005c088e: CALL core_xform.cpp_buildRotationX_FUN_005f6c40
//   XREF to: 005f6c40 (UNCONDITIONAL_CALL)
// 005c0893: MOV ECX,0xc
// 005c0898: ADD ESP,0x4
// 005c089b: LEA EAX,[EBP + 0xfffff41a]
//   XREF to: Stack[-0xc6c] (DATA)
// 005c08a1: LEA ESI,[EBP + 0xfffffa1a]
//   XREF to: Stack[-0x66c] (DATA)
// 005c08a7: PUSH EAX
// 005c08a8: MOVSD.REP ES:EDI,ESI
// 005c08aa: PUSH 0xbfc90fdb
// 005c08af: LEA ESI,[EBP + 0xfffff4da]
//   XREF to: Stack[-0xbac] (DATA)
// 005c08b5: LEA EDI,[EBP + 0xfffff3ea]
//   XREF to: Stack[-0xc9c] (DATA)
// 005c08bb: CALL core_xform.cpp_buildRotationY_FUN_005f6cc0
//   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)
// 005c08c0: MOV ECX,0xc
// 005c08c5: LEA ESI,[EBP + 0xfffff4da]
//   XREF to: Stack[-0xbac] (DATA)
// 005c08cb: LEA EAX,[EBP + 0xfffff3ea]
//   XREF to: Stack[-0xc9c] (DATA)
// 005c08d1: ADD ESP,0x4
// 005c08d4: MOVSD.REP ES:EDI,ESI
// 005c08d6: PUSH EAX
// 005c08d7: LEA ESI,[EBP + 0xfffff50a]
//   XREF to: Stack[-0xb7c] (DATA)
// 005c08dd: LEA EDI,[EBP + 0xfffff98a]
//   XREF to: Stack[-0x6fc] (DATA)
// 005c08e3: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c08e8: MOV ECX,0xc
// 005c08ed: LEA ESI,[EBP + 0xfffff50a]
//   XREF to: Stack[-0xb7c] (DATA)
// 005c08f3: LEA EAX,[EBP + 0xfffff98a]
//   XREF to: Stack[-0x6fc] (DATA)
// 005c08f9: ADD ESP,0x8
// 005c08fc: MOVSD.REP ES:EDI,ESI
// 005c08fe: PUSH EAX
// 005c08ff: LEA ESI,[EBP + 0xfffff53a]
//   XREF to: Stack[-0xb4c] (DATA)
// 005c0905: LEA EDI,[EBP + 0xfffff9ea]
//   XREF to: Stack[-0x69c] (DATA)
// 005c090b: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0910: MOV ECX,0xc
// 005c0915: LEA ESI,[EBP + 0xfffff53a]
//   XREF to: Stack[-0xb4c] (DATA)
// 005c091b: LEA EAX,[EBP + 0xfffff9ea]
//   XREF to: Stack[-0x69c] (DATA)
// 005c0921: ADD ESP,0x8
// 005c0924: MOVSD.REP ES:EDI,ESI
// 005c0926: PUSH EAX
// 005c0927: LEA ESI,[EBP + 0xfffffada]
//   XREF to: Stack[-0x5ac] (DATA)
// 005c092d: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c0933: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0938: MOV ECX,0xc
// 005c093d: LEA ESI,[EBP + 0xfffffada]
//   XREF to: Stack[-0x5ac] (DATA)
// 005c0943: ADD ESP,0x8
//   Label: LAB_005c0943
// 005c0946: MOVSD.REP ES:EDI,ESI
//   Label: LAB_005c0946
// 005c0948: MOV ECX,0xc
// 005c094d: MOV EDI,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x18] (READ)
// 005c0950: LEA ESI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c0956: MOVSD.REP ES:EDI,ESI
// 005c0958: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x18] (READ)
// 005c095b: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0xc] (DATA)
// 005c095e: POP EBP
// 005c095f: POP EDI
// 005c0960: POP EBX
// 005c0961: RET
// 005c0962: MOV EDI,0x3e44330d
//   Label: LAB_005c0962
// 005c0967: MOV EAX,0x3f7838d2
// 005c096c: MOV EDX,0x40131412
// 005c0971: MOV ECX,0x3f0a1c04
// 005c0976: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005c0979: LEA EAX,[EBP + -0x22]
//   XREF to: Stack[-0xa8] (DATA)
// 005c097c: MOV dword ptr [EBP + -0x22],EDI
//   XREF to: Stack[-0xa8] (WRITE)
// 005c097f: PUSH EAX
// 005c0980: MOV EAX,0xbed321a3
// 005c0985: MOV dword ptr [EBP + -0x1e],EDX
//   XREF to: Stack[-0xa4] (WRITE)
// 005c0988: MOV dword ptr [EBP + 0xfffffea2],EAX
//   XREF to: Stack[-0x1e4] (WRITE)
// 005c098e: LEA EAX,[EBP + 0xfffffe9a]
//   XREF to: Stack[-0x1ec] (DATA)
// 005c0994: MOV dword ptr [EBP + 0xfffffe9a],ECX
//   XREF to: Stack[-0x1ec] (WRITE)
// 005c099a: PUSH EAX
// 005c099b: LEA EAX,[EBP + 0xfffff80a]
//   XREF to: Stack[-0x87c] (DATA)
// 005c09a1: MOV EDI,0xbe7183f9
// 005c09a6: PUSH EAX
// 005c09a7: MOV dword ptr [EBP + 0xfffffe9e],EDI
//   XREF to: Stack[-0x1e8] (WRITE)
// 005c09ad: MOV EDI,0x3f6f2b67
// 005c09b2: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c09b7: MOV EDX,0xbed430d3
// 005c09bc: MOV ECX,0x3feb40a3
// 005c09c1: LEA EAX,[EBP + 0x56]
//   XREF to: Stack[-0x30] (DATA)
// 005c09c4: ADD ESP,0xc
// 005c09c7: MOV dword ptr [EBP + 0x5a],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 005c09ca: MOV dword ptr [EBP + 0x56],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005c09cd: PUSH EAX
// 005c09ce: MOV EAX,0x3ece4b88
// 005c09d3: MOV dword ptr [EBP + 0x5e],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005c09d6: MOV dword ptr [EBP + 0xfffffed6],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 005c09dc: LEA EAX,[EBP + 0xfffffed6]
//   XREF to: Stack[-0x1b0] (DATA)
// 005c09e2: MOV EDX,0x3dc29521
// 005c09e7: PUSH EAX
// 005c09e8: LEA EAX,[EBP + 0xfffff9ba]
//   XREF to: Stack[-0x6cc] (DATA)
// 005c09ee: MOV ECX,0x3e85d4e9
// 005c09f3: PUSH EAX
// 005c09f4: MOV dword ptr [EBP + 0xfffffeda],EDX
//   XREF to: Stack[-0x1ac] (WRITE)
// 005c09fa: MOV dword ptr [EBP + 0xfffffede],ECX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005c0a00: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0a05: ADD ESP,0xc
// 005c0a08: PUSH ESI
// 005c0a09: PUSH 0x3
// 005c0a0b: PUSH EBX
// 005c0a0c: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c0a11: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005c0a14: ADD ESP,0x8
// 005c0a17: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x10] (READ)
// 005c0a1a: SUB ESP,0x4
// 005c0a1d: FLD1
// 005c0a1f: FSUBRP
// 005c0a21: LEA EAX,[EBP + 0xfffff9ba]
//   XREF to: Stack[-0x6cc] (DATA)
// 005c0a27: FSTP float ptr [ESP]
//   XREF to: Stack[-0xd64] (DATA)
// 005c0a2a: PUSH EAX
// 005c0a2b: LEA EAX,[EBP + 0xfffff80a]
//   XREF to: Stack[-0x87c] (DATA)
// 005c0a31: PUSH EAX
// 005c0a32: LEA ESI,[EBP + 0xfffffb6a]
//   XREF to: Stack[-0x51c] (DATA)
// 005c0a38: LEA EDI,[EBP + 0xfffff5fa]
//   XREF to: Stack[-0xa8c] (DATA)
// 005c0a3e: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 005c0a43: MOV ECX,0xc
// 005c0a48: LEA ESI,[EBP + 0xfffffb6a]
//   XREF to: Stack[-0x51c] (DATA)
// 005c0a4e: LEA EAX,[EBP + 0xfffff5fa]
//   XREF to: Stack[-0xa8c] (DATA)
// 005c0a54: ADD ESP,0xc
// 005c0a57: MOVSD.REP ES:EDI,ESI
// 005c0a59: PUSH EAX
// 005c0a5a: LEA ESI,[EBP + 0xfffffc8a]
//   XREF to: Stack[-0x3fc] (DATA)
// 005c0a60: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c0a66: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0a6b: MOV ECX,0xc
// 005c0a70: LEA ESI,[EBP + 0xfffffc8a]
//   XREF to: Stack[-0x3fc] (DATA)
// 005c0a76: JMP 0x005c0943
//   XREF to: 005c0943 (UNCONDITIONAL_JUMP)
// 005c0a7b: MOV EDI,0x3e3b65aa
//   Label: LAB_005c0a7b
// 005c0a80: MOV EAX,0x3fd4f5c3
// 005c0a85: MOV EDX,0x400ffdb5
// 005c0a8a: MOV ECX,0x3ed3380d
// 005c0a8f: MOV dword ptr [EBP + 0xfffffed2],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 005c0a95: LEA EAX,[EBP + 0xfffffeca]
//   XREF to: Stack[-0x1bc] (DATA)
// 005c0a9b: MOV dword ptr [EBP + 0xfffffeca],EDI
//   XREF to: Stack[-0x1bc] (WRITE)
// 005c0aa1: PUSH EAX
// 005c0aa2: MOV EAX,0xbe6ec850
// 005c0aa7: MOV dword ptr [EBP + 0xfffffece],EDX
//   XREF to: Stack[-0x1b8] (WRITE)
// 005c0aad: MOV dword ptr [EBP + 0xffffff02],EAX
//   XREF to: Stack[-0x184] (WRITE)
// 005c0ab3: LEA EAX,[EBP + 0xfffffefa]
//   XREF to: Stack[-0x18c] (DATA)
// 005c0ab9: MOV dword ptr [EBP + 0xfffffefa],ECX
//   XREF to: Stack[-0x18c] (WRITE)
// 005c0abf: PUSH EAX
// 005c0ac0: LEA EAX,[EBP + 0xfffffcba]
//   XREF to: Stack[-0x3cc] (DATA)
// 005c0ac6: MOV EDI,0xbdc42bdf
// 005c0acb: PUSH EAX
// 005c0acc: MOV dword ptr [EBP + 0xfffffefe],EDI
//   XREF to: Stack[-0x188] (WRITE)
// 005c0ad2: MOV EDI,0x3fac74a7
// 005c0ad7: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0adc: MOV EDX,0xbe93c947
// 005c0ae1: MOV ECX,0x3fdd1cc1
// 005c0ae6: LEA EAX,[EBP + 0xfffffea6]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c0aec: ADD ESP,0xc
// 005c0aef: MOV dword ptr [EBP + 0xfffffeaa],EDI
//   XREF to: Stack[-0x1dc] (WRITE)
// 005c0af5: MOV dword ptr [EBP + 0xfffffea6],EDX
//   XREF to: Stack[-0x1e0] (WRITE)
// 005c0afb: PUSH EAX
// 005c0afc: MOV EAX,0x3ef7baed
// 005c0b01: MOV dword ptr [EBP + 0xfffffeae],ECX
//   XREF to: Stack[-0x1d8] (WRITE)
// 005c0b07: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005c0b0a: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x48] (DATA)
// 005c0b0d: MOV EDX,0x3d957802
// 005c0b12: PUSH EAX
// 005c0b13: LEA EAX,[EBP + 0xfffff3ba]
//   XREF to: Stack[-0xccc] (DATA)
// 005c0b19: MOV ECX,0x3d95d158
// 005c0b1e: PUSH EAX
// 005c0b1f: MOV dword ptr [EBP + 0x42],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 005c0b22: MOV dword ptr [EBP + 0x46],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 005c0b25: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0b2a: ADD ESP,0xc
// 005c0b2d: PUSH ESI
// 005c0b2e: PUSH 0x3
// 005c0b30: PUSH EBX
// 005c0b31: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c0b36: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005c0b39: ADD ESP,0x8
// 005c0b3c: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x10] (READ)
// 005c0b3f: SUB ESP,0x4
// 005c0b42: FLD1
// 005c0b44: FSUBRP
// 005c0b46: LEA EAX,[EBP + 0xfffff3ba]
//   XREF to: Stack[-0xccc] (DATA)
// 005c0b4c: FSTP float ptr [ESP]
//   XREF to: Stack[-0xd64] (DATA)
// 005c0b4f: PUSH EAX
// 005c0b50: LEA EAX,[EBP + 0xfffffcba]
//   XREF to: Stack[-0x3cc] (DATA)
// 005c0b56: PUSH EAX
// 005c0b57: LEA ESI,[EBP + 0xfffff8ca]
//   XREF to: Stack[-0x7bc] (DATA)
// 005c0b5d: LEA EDI,[EBP + 0xfffff56a]
//   XREF to: Stack[-0xb1c] (DATA)
// 005c0b63: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 005c0b68: MOV ECX,0xc
// 005c0b6d: LEA ESI,[EBP + 0xfffff8ca]
//   XREF to: Stack[-0x7bc] (DATA)
// 005c0b73: LEA EAX,[EBP + 0xfffff56a]
//   XREF to: Stack[-0xb1c] (DATA)
// 005c0b79: ADD ESP,0xc
// 005c0b7c: MOVSD.REP ES:EDI,ESI
// 005c0b7e: PUSH EAX
// 005c0b7f: LEA ESI,[EBP + 0xfffff68a]
//   XREF to: Stack[-0x9fc] (DATA)
// 005c0b85: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c0b8b: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0b90: MOV ECX,0xc
// 005c0b95: LEA ESI,[EBP + 0xfffff68a]
//   XREF to: Stack[-0x9fc] (DATA)
// 005c0b9b: JMP 0x005c0943
//   XREF to: 005c0943 (UNCONDITIONAL_JUMP)
// 005c0ba0: MOV EDI,0x3e44c7f3
//   Label: LAB_005c0ba0
// 005c0ba5: MOV EAX,0x3fd16bba
// 005c0baa: MOV EDX,0x4013aee6
// 005c0baf: MOV ECX,0x3eab23dd
// 005c0bb4: MOV dword ptr [EBP + 0xfffffec6],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 005c0bba: LEA EAX,[EBP + 0xfffffebe]
//   XREF to: Stack[-0x1c8] (DATA)
// 005c0bc0: MOV dword ptr [EBP + 0xfffffebe],EDI
//   XREF to: Stack[-0x1c8] (WRITE)
// 005c0bc6: PUSH EAX
// 005c0bc7: MOV EAX,0xbed19f3c
// 005c0bcc: MOV dword ptr [EBP + 0xfffffec2],EDX
//   XREF to: Stack[-0x1c4] (WRITE)
// 005c0bd2: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005c0bd5: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0x9c] (DATA)
// 005c0bd8: MOV dword ptr [EBP + -0x16],ECX
//   XREF to: Stack[-0x9c] (WRITE)
// 005c0bdb: PUSH EAX
// 005c0bdc: LEA EAX,[EBP + 0xfffffe0a]
//   XREF to: Stack[-0x27c] (DATA)
// 005c0be2: MOV EDI,0xbe3daa50
// 005c0be7: PUSH EAX
// 005c0be8: MOV dword ptr [EBP + -0x12],EDI
//   XREF to: Stack[-0x98] (WRITE)
// 005c0beb: MOV EDI,0x3f93df3b
// 005c0bf0: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0bf5: MOV EDX,0xbeedcbbc
// 005c0bfa: MOV ECX,0x3fe3381d
// 005c0bff: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x54] (DATA)
// 005c0c02: ADD ESP,0xc
// 005c0c05: MOV dword ptr [EBP + 0x36],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 005c0c08: MOV dword ptr [EBP + 0x32],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 005c0c0b: PUSH EAX
// 005c0c0c: MOV EAX,0x3ec327aa
// 005c0c11: MOV dword ptr [EBP + 0x3a],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 005c0c14: MOV dword ptr [EBP + -0x46],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 005c0c17: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xcc] (DATA)
// 005c0c1a: MOV EDX,0x3d8dbbaa
// 005c0c1f: PUSH EAX
// 005c0c20: LEA EAX,[EBP + 0xfffff86a]
//   XREF to: Stack[-0x81c] (DATA)
// 005c0c26: MOV ECX,0xbe66cd6c
// 005c0c2b: PUSH EAX
// 005c0c2c: MOV dword ptr [EBP + -0x42],EDX
//   XREF to: Stack[-0xc8] (WRITE)
// 005c0c2f: MOV dword ptr [EBP + -0x3e],ECX
//   XREF to: Stack[-0xc4] (WRITE)
// 005c0c32: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0c37: ADD ESP,0xc
// 005c0c3a: PUSH ESI
// 005c0c3b: PUSH 0x3
// 005c0c3d: PUSH EBX
// 005c0c3e: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c0c43: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005c0c46: ADD ESP,0x8
// 005c0c49: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x10] (READ)
// 005c0c4c: SUB ESP,0x4
// 005c0c4f: FLD1
// 005c0c51: FSUBRP
// 005c0c53: LEA EAX,[EBP + 0xfffff86a]
//   XREF to: Stack[-0x81c] (DATA)
// 005c0c59: FSTP float ptr [ESP]
//   XREF to: Stack[-0xd64] (DATA)
// 005c0c5c: PUSH EAX
// 005c0c5d: LEA EAX,[EBP + 0xfffffe0a]
//   XREF to: Stack[-0x27c] (DATA)
// 005c0c63: PUSH EAX
// 005c0c64: LEA ESI,[EBP + 0xfffffaaa]
//   XREF to: Stack[-0x5dc] (DATA)
// 005c0c6a: LEA EDI,[EBP + 0xfffffa4a]
//   XREF to: Stack[-0x63c] (DATA)
// 005c0c70: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 005c0c75: MOV ECX,0xc
// 005c0c7a: LEA ESI,[EBP + 0xfffffaaa]
//   XREF to: Stack[-0x5dc] (DATA)
// 005c0c80: LEA EAX,[EBP + 0xfffffa4a]
//   XREF to: Stack[-0x63c] (DATA)
// 005c0c86: ADD ESP,0xc
// 005c0c89: MOVSD.REP ES:EDI,ESI
// 005c0c8b: PUSH EAX
// 005c0c8c: LEA ESI,[EBP + 0xfffffb0a]
//   XREF to: Stack[-0x57c] (DATA)
// 005c0c92: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c0c98: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0c9d: MOV ECX,0xc
// 005c0ca2: LEA ESI,[EBP + 0xfffffb0a]
//   XREF to: Stack[-0x57c] (DATA)
// 005c0ca8: JMP 0x005c0943
//   XREF to: 005c0943 (UNCONDITIONAL_JUMP)
// 005c0cad: MOV ECX,0x3e740e9d
//   Label: LAB_005c0cad
// 005c0cb2: MOV EBX,0xbd868280
// 005c0cb7: MOV EDI,0x3d093cf5
// 005c0cbc: MOV EAX,0xbf3e6506
// 005c0cc1: MOV EDX,0xbf4eefe5
// 005c0cc6: MOV dword ptr [EBP + -0x3a],ECX
//   XREF to: Stack[-0xc0] (WRITE)
// 005c0cc9: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005c0ccc: LEA EAX,[EBP + 0x62]
//   XREF to: Stack[-0x24] (DATA)
// 005c0ccf: MOV dword ptr [EBP + -0x36],EBX
//   XREF to: Stack[-0xbc] (WRITE)
// 005c0cd2: PUSH EAX
// 005c0cd3: LEA EAX,[EBP + -0x3a]
//   XREF to: Stack[-0xc0] (DATA)
// 005c0cd6: MOV dword ptr [EBP + -0x32],EDI
//   XREF to: Stack[-0xb8] (WRITE)
// 005c0cd9: PUSH EAX
// 005c0cda: LEA EAX,[EBP + 0xfffff89a]
//   XREF to: Stack[-0x7ec] (DATA)
// 005c0ce0: MOV ECX,0x3f31884c
// 005c0ce5: PUSH EAX
// 005c0ce6: MOV dword ptr [EBP + 0x6a],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c0ce9: MOV dword ptr [EBP + 0x66],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005c0cec: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0cf1: ADD ESP,0xc
// 005c0cf4: PUSH ESI
// 005c0cf5: LEA EAX,[EBP + 0xfffff89a]
//   XREF to: Stack[-0x7ec] (DATA)
// 005c0cfb: PUSH EAX
// 005c0cfc: LEA ESI,[EBP + 0xfffff7aa]
//   XREF to: Stack[-0x8dc] (DATA)
// 005c0d02: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c0d08: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0d0d: MOV ECX,0xc
// 005c0d12: LEA ESI,[EBP + 0xfffff7aa]
//   XREF to: Stack[-0x8dc] (DATA)
// 005c0d18: JMP 0x005c0943
//   XREF to: 005c0943 (UNCONDITIONAL_JUMP)
// 005c0d1d: MOV EDX,0x3f1eb852
//   Label: LAB_005c0d1d
// 005c0d22: MOV EBX,0x3e5e353f
// 005c0d27: MOV EAX,0xbfc8f5c3
// 005c0d2c: XOR ECX,ECX
// 005c0d2e: MOV dword ptr [EBP + 0xffffff12],EDX
//   XREF to: Stack[-0x174] (WRITE)
// 005c0d34: MOV dword ptr [EBP + 0xffffff26],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 005c0d3a: LEA EAX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x168] (DATA)
// 005c0d40: MOV dword ptr [EBP + 0xffffff16],ECX
//   XREF to: Stack[-0x170] (WRITE)
// 005c0d46: PUSH EAX
// 005c0d47: LEA EAX,[EBP + 0xffffff12]
//   XREF to: Stack[-0x174] (DATA)
// 005c0d4d: MOV dword ptr [EBP + 0xffffff1a],EBX
//   XREF to: Stack[-0x16c] (WRITE)
// 005c0d53: PUSH EAX
// 005c0d54: LEA EAX,[EBP + 0xfffffd4a]
//   XREF to: Stack[-0x33c] (DATA)
// 005c0d5a: MOV EDX,0x3fc8f5c3
// 005c0d5f: PUSH EAX
// 005c0d60: MOV dword ptr [EBP + 0xffffff1e],ECX
//   XREF to: Stack[-0x168] (WRITE)
// 005c0d66: MOV dword ptr [EBP + 0xffffff22],EDX
//   XREF to: Stack[-0x164] (WRITE)
// 005c0d6c: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0d71: ADD ESP,0xc
// 005c0d74: PUSH ESI
// 005c0d75: LEA EAX,[EBP + 0xfffffd4a]
//   XREF to: Stack[-0x33c] (DATA)
// 005c0d7b: PUSH EAX
// 005c0d7c: LEA ESI,[EBP + 0xfffff44a]
//   XREF to: Stack[-0xc3c] (DATA)
// 005c0d82: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c0d88: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0d8d: MOV ECX,0xc
// 005c0d92: LEA ESI,[EBP + 0xfffff44a]
//   XREF to: Stack[-0xc3c] (DATA)
// 005c0d98: JMP 0x005c0943
//   XREF to: 005c0943 (UNCONDITIONAL_JUMP)
// 005c0d9d: MOV EDX,0xbdb87c8b
//   Label: LAB_005c0d9d
// 005c0da2: MOV ECX,0x3f262846
// 005c0da7: MOV EDI,0xbe78bef9
// 005c0dac: LEA EAX,[EBP + 0x26]
//   XREF to: Stack[-0x60] (DATA)
// 005c0daf: MOV dword ptr [EBP + 0x26],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 005c0db2: MOV dword ptr [EBP + 0x2e],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 005c0db5: MOV dword ptr [EBP + 0x2a],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 005c0db8: PUSH EAX
// 005c0db9: MOV EAX,0x3ed45e4e
// 005c0dbe: MOV EDX,0xbe258d9b
// 005c0dc3: MOV dword ptr [EBP + 0xfffffee2],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005c0dc9: LEA EAX,[EBP + 0xfffffee2]
//   XREF to: Stack[-0x1a4] (DATA)
// 005c0dcf: MOV ECX,0xbefad3c8
// 005c0dd4: PUSH EAX
// 005c0dd5: LEA EAX,[EBP + 0xfffff47a]
//   XREF to: Stack[-0xc0c] (DATA)
// 005c0ddb: MOV EDI,0x3e99e450
// 005c0de0: PUSH EAX
// 005c0de1: MOV dword ptr [EBP + 0xfffffee6],EDX
//   XREF to: Stack[-0x1a0] (WRITE)
// 005c0de7: MOV dword ptr [EBP + 0xfffffeea],ECX
//   XREF to: Stack[-0x19c] (WRITE)
// 005c0ded: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0df2: MOV EAX,0x3f252f1b
// 005c0df7: MOV EDX,0xbe083dff
// 005c0dfc: ADD ESP,0xc
// 005c0dff: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005c0e02: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x6c] (DATA)
// 005c0e05: MOV ECX,0x3e9b7f17
// 005c0e0a: PUSH EAX
// 005c0e0b: MOV EAX,0xbe8c011d
// 005c0e10: MOV dword ptr [EBP + 0x1a],EDI
//   XREF to: Stack[-0x6c] (WRITE)
// 005c0e13: MOV dword ptr [EBP + -0x62],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005c0e16: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf0] (DATA)
// 005c0e19: MOV EDI,0x3d8513c3
// 005c0e1e: PUSH EAX
// 005c0e1f: LEA EAX,[EBP + 0xfffff4aa]
//   XREF to: Stack[-0xbdc] (DATA)
// 005c0e25: MOV dword ptr [EBP + 0x1e],EDX
//   XREF to: Stack[-0x68] (WRITE)
// 005c0e28: PUSH EAX
// 005c0e29: MOV dword ptr [EBP + -0x6a],ECX
//   XREF to: Stack[-0xf0] (WRITE)
// 005c0e2c: MOV dword ptr [EBP + -0x66],EDI
//   XREF to: Stack[-0xec] (WRITE)
// 005c0e2f: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0e34: ADD ESP,0xc
// 005c0e37: PUSH ESI
// 005c0e38: PUSH 0x0
// 005c0e3a: PUSH EBX
// 005c0e3b: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c0e40: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005c0e43: ADD ESP,0x8
// 005c0e46: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x10] (READ)
// 005c0e49: SUB ESP,0x4
// 005c0e4c: FLD1
// 005c0e4e: FSUBRP
// 005c0e50: LEA EAX,[EBP + 0xfffff4aa]
//   XREF to: Stack[-0xbdc] (DATA)
// 005c0e56: FSTP float ptr [ESP]
//   XREF to: Stack[-0xd64] (DATA)
// 005c0e59: PUSH EAX
// 005c0e5a: LEA EAX,[EBP + 0xfffff47a]
//   XREF to: Stack[-0xc0c] (DATA)
// 005c0e60: PUSH EAX
// 005c0e61: LEA ESI,[EBP + 0xfffffb3a]
//   XREF to: Stack[-0x54c] (DATA)
// 005c0e67: LEA EDI,[EBP + 0xfffff7da]
//   XREF to: Stack[-0x8ac] (DATA)
// 005c0e6d: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 005c0e72: MOV ECX,0xc
// 005c0e77: LEA ESI,[EBP + 0xfffffb3a]
//   XREF to: Stack[-0x54c] (DATA)
// 005c0e7d: LEA EAX,[EBP + 0xfffff7da]
//   XREF to: Stack[-0x8ac] (DATA)
// 005c0e83: ADD ESP,0xc
// 005c0e86: MOVSD.REP ES:EDI,ESI
// 005c0e88: PUSH EAX
// 005c0e89: LEA ESI,[EBP + 0xfffff8fa]
//   XREF to: Stack[-0x78c] (DATA)
// 005c0e8f: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c0e95: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0e9a: MOV ECX,0xc
// 005c0e9f: LEA ESI,[EBP + 0xfffff8fa]
//   XREF to: Stack[-0x78c] (DATA)
// 005c0ea5: JMP 0x005c0943
//   XREF to: 005c0943 (UNCONDITIONAL_JUMP)
// 005c0eaa: PUSH 0x3f87558
//   Label: LAB_005c0eaa
//   XREF to: 03f87558 (DATA)
// 005c0eaf: PUSH 0x3f6bab0
//   XREF to: 03f6bab0 (DATA)
// 005c0eb4: LEA EAX,[EBP + 0xfffff59a]
//   XREF to: Stack[-0xaec] (DATA)
// 005c0eba: PUSH EAX
// 005c0ebb: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0ec0: ADD ESP,0xc
// 005c0ec3: PUSH ESI
// 005c0ec4: LEA EAX,[EBP + 0xfffff59a]
//   XREF to: Stack[-0xaec] (DATA)
// 005c0eca: PUSH EAX
// 005c0ecb: LEA ESI,[EBP + 0xfffff95a]
//   XREF to: Stack[-0x72c] (DATA)
// 005c0ed1: PUSH 0x3fc90fdb
// 005c0ed6: LEA EDI,[EBP + 0xfffffd1a]
//   XREF to: Stack[-0x36c] (DATA)
// 005c0edc: CALL core_xform.cpp_buildRotationX_FUN_005f6c40
//   XREF to: 005f6c40 (UNCONDITIONAL_CALL)
// 005c0ee1: MOV ECX,0xc
// 005c0ee6: ADD ESP,0x4
// 005c0ee9: LEA EAX,[EBP + 0xfffffd1a]
//   XREF to: Stack[-0x36c] (DATA)
// 005c0eef: LEA ESI,[EBP + 0xfffff95a]
//   XREF to: Stack[-0x72c] (DATA)
// 005c0ef5: PUSH EAX
// 005c0ef6: MOVSD.REP ES:EDI,ESI
// 005c0ef8: PUSH 0x3fc90fdb
// 005c0efd: LEA ESI,[EBP + 0xfffffa7a]
//   XREF to: Stack[-0x60c] (DATA)
// 005c0f03: LEA EDI,[EBP + 0xfffff5ca]
//   XREF to: Stack[-0xabc] (DATA)
// 005c0f09: CALL core_xform.cpp_buildRotationY_FUN_005f6cc0
//   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)
// 005c0f0e: MOV ECX,0xc
// 005c0f13: LEA ESI,[EBP + 0xfffffa7a]
//   XREF to: Stack[-0x60c] (DATA)
// 005c0f19: LEA EAX,[EBP + 0xfffff5ca]
//   XREF to: Stack[-0xabc] (DATA)
// 005c0f1f: ADD ESP,0x4
// 005c0f22: MOVSD.REP ES:EDI,ESI
// 005c0f24: PUSH EAX
// 005c0f25: LEA ESI,[EBP + 0xfffffc5a]
//   XREF to: Stack[-0x42c] (DATA)
// 005c0f2b: LEA EDI,[EBP + 0xfffffb9a]
//   XREF to: Stack[-0x4ec] (DATA)
// 005c0f31: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0f36: MOV ECX,0xc
// 005c0f3b: LEA ESI,[EBP + 0xfffffc5a]
//   XREF to: Stack[-0x42c] (DATA)
// 005c0f41: LEA EAX,[EBP + 0xfffffb9a]
//   XREF to: Stack[-0x4ec] (DATA)
// 005c0f47: ADD ESP,0x8
// 005c0f4a: MOVSD.REP ES:EDI,ESI
// 005c0f4c: PUSH EAX
// 005c0f4d: LEA ESI,[EBP + 0xfffffcea]
//   XREF to: Stack[-0x39c] (DATA)
// 005c0f53: LEA EDI,[EBP + 0xfffffbca]
//   XREF to: Stack[-0x4bc] (DATA)
// 005c0f59: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0f5e: MOV ECX,0xc
// 005c0f63: LEA ESI,[EBP + 0xfffffcea]
//   XREF to: Stack[-0x39c] (DATA)
// 005c0f69: LEA EAX,[EBP + 0xfffffbca]
//   XREF to: Stack[-0x4bc] (DATA)
// 005c0f6f: ADD ESP,0x8
// 005c0f72: MOVSD.REP ES:EDI,ESI
// 005c0f74: PUSH EAX
// 005c0f75: LEA ESI,[EBP + 0xfffffe3a]
//   XREF to: Stack[-0x24c] (DATA)
// 005c0f7b: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c0f81: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0f86: MOV ECX,0xc
// 005c0f8b: LEA ESI,[EBP + 0xfffffe3a]
//   XREF to: Stack[-0x24c] (DATA)
// 005c0f91: JMP 0x005c0943
//   XREF to: 005c0943 (UNCONDITIONAL_JUMP)
// 005c0f96: MOV dword ptr [EBP + 0x6],EAX
//   Label: LAB_005c0f96
//   XREF to: Stack[-0x80] (WRITE)
// 005c0f99: MOV dword ptr [EBP + 0x2],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005c0f9c: MOV dword ptr [EBP + 0xffffff0e],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005c0fa2: MOV dword ptr [EBP + 0xffffff0a],EAX
//   XREF to: Stack[-0x17c] (WRITE)
// 005c0fa8: MOV dword ptr [EBP + 0xffffff06],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005c0fae: MOV dword ptr [EBP + 0xa],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005c0fb1: CMP dword ptr [EBX + 0x2a8c],0xe
// 005c0fb8: JZ 0x005c1339
//   XREF to: 005c1339 (CONDITIONAL_JUMP)
// 005c0fbe: MOV ECX,dword ptr [0x00822c84]
//   XREF to: 00822c84 (READ)
// 005c0fc4: PUSH ECX
// 005c0fc5: MOV ESI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c0fcb: PUSH ESI
// 005c0fcc: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c0fd1: ADD ESP,0x8
// 005c0fd4: MOV ESI,EAX
// 005c0fd6: TEST EAX,EAX
// 005c0fd8: JZ 0x005c10ab
//   XREF to: 005c10ab (CONDITIONAL_JUMP)
// 005c0fde: LEA EAX,[EBP + 0xfffffe6a]
//   XREF to: Stack[-0x21c] (DATA)
// 005c0fe4: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c0fea: PUSH EAX
// 005c0feb: MOV EDI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c0ff1: MOV EDX,dword ptr [EDX + 0x154]
// 005c0ff7: PUSH EDI
// 005c0ff8: CALL dword ptr [EDX + 0x14]
// 005c0ffb: FLD float ptr [EBP + 0xfffffe6a]
//   XREF to: Stack[-0x21c] (READ)
// 005c1001: FADD float ptr [EBP + 0xfffffe76]
//   XREF to: Stack[-0x210] (READ)
// 005c1007: FST float ptr [EBP + 0xffffff4e]
//   XREF to: Stack[-0x138] (WRITE)
// 005c100d: FLD float ptr [0x00653984]
//   XREF to: 00653984 (READ)
// 005c1013: FXCH
// 005c1015: FMUL ST1
// 005c1017: FLD float ptr [EBP + 0xfffffe72]
//   XREF to: Stack[-0x214] (READ)
// 005c101d: FLD float ptr [EBP + 0xfffffe6e]
//   XREF to: Stack[-0x218] (READ)
// 005c1023: FADD float ptr [EBP + 0xfffffe7a]
//   XREF to: Stack[-0x20c] (READ)
// 005c1029: FXCH
// 005c102b: FADD float ptr [EBP + 0xfffffe7e]
//   XREF to: Stack[-0x208] (READ)
// 005c1031: FXCH
// 005c1033: FST float ptr [EBP + 0xffffff52]
//   XREF to: Stack[-0x134] (WRITE)
// 005c1039: FMUL ST3
// 005c103b: FXCH
// 005c103d: FST float ptr [EBP + 0xffffff56]
//   XREF to: Stack[-0x130] (WRITE)
// 005c1043: FMULP ST3
// 005c1045: LEA EAX,[EBP + 0xffffff36]
//   XREF to: Stack[-0x150] (DATA)
// 005c104b: LEA EDX,[EBP + 0xffffff06]
//   XREF to: Stack[-0x180] (DATA)
// 005c1051: ADD ESP,0x8
// 005c1054: FXCH
// 005c1056: FSTP float ptr [EBP + 0xffffff36]
//   XREF to: Stack[-0x150] (WRITE)
// 005c105c: FSTP float ptr [EBP + 0xffffff3a]
//   XREF to: Stack[-0x14c] (WRITE)
// 005c1062: FSTP float ptr [EBP + 0xffffff3e]
//   XREF to: Stack[-0x148] (WRITE)
// 005c1068: CMP EDX,EAX
// 005c106a: JZ 0x005c1090
//   XREF to: 005c1090 (CONDITIONAL_JUMP)
// 005c106c: MOV EAX,dword ptr [EBP + 0xffffff36]
//   XREF to: Stack[-0x150] (DATA)
// 005c1072: MOV dword ptr [EBP + 0xffffff06],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005c1078: MOV EAX,dword ptr [EBP + 0xffffff3a]
//   XREF to: Stack[-0x14c] (READ)
// 005c107e: MOV dword ptr [EBP + 0xffffff0a],EAX
//   XREF to: Stack[-0x17c] (WRITE)
// 005c1084: MOV EAX,dword ptr [EBP + 0xffffff3e]
//   XREF to: Stack[-0x148] (READ)
// 005c108a: MOV dword ptr [EBP + 0xffffff0e],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005c1090: MOV EAX,dword ptr [ESI + 0x66c]
//   Label: LAB_005c1090
// 005c1096: CMP EAX,0x2
// 005c1099: JNZ 0x005c14cc
//   XREF to: 005c14cc (CONDITIONAL_JUMP)
// 005c109f: MOV EAX,dword ptr [EBP + 0xfffffe7a]
//   Label: LAB_005c109f
//   XREF to: Stack[-0x20c] (READ)
// 005c10a5: MOV dword ptr [EBP + 0xffffff0a],EAX
//   XREF to: Stack[-0x17c] (WRITE)
// 005c10ab: MOV ESI,dword ptr [EBP + 0x8e]
//   Label: LAB_005c10ab
//   XREF to: Stack[0x8] (READ)
// 005c10b1: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c10b7: PUSH ESI
// 005c10b8: MOV EAX,dword ptr [EAX + 0x154]
// 005c10be: CALL dword ptr [EAX + 0x6c]
// 005c10c1: ADD ESP,0x4
// 005c10c4: TEST EAX,EAX
// 005c10c6: JZ 0x005c1241
//   XREF to: 005c1241 (CONDITIONAL_JUMP)
// 005c10cc: MOV EDI,0xbdb87c8b
// 005c10d1: MOV EAX,0x3f262846
// 005c10d6: MOV EDX,0xbe78bef9
// 005c10db: MOV ECX,0x3ed45e4e
// 005c10e0: MOV ESI,0xbe258d9b
// 005c10e5: MOV dword ptr [EBP + 0xffffff5a],EDI
//   XREF to: Stack[-0x12c] (WRITE)
// 005c10eb: MOV dword ptr [EBP + 0xffffff62],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 005c10f1: MOV dword ptr [EBP + 0xffffff5e],EDX
//   XREF to: Stack[-0x128] (WRITE)
// 005c10f7: MOV dword ptr [EBP + 0xfffffeb2],ECX
//   XREF to: Stack[-0x1d4] (WRITE)
// 005c10fd: LEA EAX,[EBP + 0xffffff5a]
//   XREF to: Stack[-0x12c] (DATA)
// 005c1103: MOV dword ptr [EBP + 0xfffffeb6],ESI
//   XREF to: Stack[-0x1d0] (WRITE)
// 005c1109: PUSH EAX
// 005c110a: LEA EAX,[EBP + 0xfffffeb2]
//   XREF to: Stack[-0x1d4] (DATA)
// 005c1110: MOV EDI,0xbefad3c8
// 005c1115: PUSH EAX
// 005c1116: LEA EAX,[EBP + 0xfffff35a]
//   XREF to: Stack[-0xd2c] (DATA)
// 005c111c: MOV ESI,0x3ec5521a
// 005c1121: PUSH EAX
// 005c1122: MOV dword ptr [EBP + 0xfffffeba],EDI
//   XREF to: Stack[-0x1cc] (WRITE)
// 005c1128: MOV EDI,0xbc47e649
// 005c112d: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c1132: MOV EAX,0x3e99e450
// 005c1137: ADD ESP,0xc
// 005c113a: MOV dword ptr [EBP + 0xffffff2a],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 005c1140: LEA EAX,[EBP + 0xffffff2a]
//   XREF to: Stack[-0x15c] (DATA)
// 005c1146: MOV EDX,0x3f252f1b
// 005c114b: PUSH EAX
// 005c114c: MOV EAX,0xbefd0529
// 005c1151: MOV ECX,0xbe083dff
// 005c1156: MOV dword ptr [EBP + 0xffffff6e],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 005c115c: LEA EAX,[EBP + 0xffffff66]
//   XREF to: Stack[-0x120] (DATA)
// 005c1162: MOV dword ptr [EBP + 0xffffff66],ESI
//   XREF to: Stack[-0x120] (WRITE)
// 005c1168: PUSH EAX
// 005c1169: LEA EAX,[EBP + 0xfffff38a]
//   XREF to: Stack[-0xcfc] (DATA)
// 005c116f: MOV dword ptr [EBP + 0xffffff6a],EDI
//   XREF to: Stack[-0x11c] (WRITE)
// 005c1175: PUSH EAX
// 005c1176: MOV dword ptr [EBP + 0xffffff32],EDX
//   XREF to: Stack[-0x154] (WRITE)
// 005c117c: MOV dword ptr [EBP + 0xffffff2e],ECX
//   XREF to: Stack[-0x158] (WRITE)
// 005c1182: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c1187: MOV EDX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x14] (READ)
// 005c118a: LEA EAX,[EDX*0x4 + 0x0]
// 005c1191: SUB EAX,EDX
// 005c1193: SHL EAX,0x4
// 005c1196: LEA EDX,[EBX + 0xfd8]
// 005c119c: ADD ESP,0xc
// 005c119f: ADD EAX,EDX
// 005c11a1: PUSH EAX
// 005c11a2: PUSH 0x0
// 005c11a4: PUSH EBX
// 005c11a5: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c11aa: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005c11ad: ADD ESP,0x8
// 005c11b0: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x10] (READ)
// 005c11b3: SUB ESP,0x4
// 005c11b6: FLD1
// 005c11b8: FSUBRP
// 005c11ba: LEA EAX,[EBP + 0xfffff38a]
//   XREF to: Stack[-0xcfc] (DATA)
// 005c11c0: FSTP float ptr [ESP]
// 005c11c3: PUSH EAX
// 005c11c4: LEA EAX,[EBP + 0xfffff35a]
//   XREF to: Stack[-0xd2c] (DATA)
// 005c11ca: PUSH EAX
// 005c11cb: LEA ESI,[EBP + 0xfffff83a]
//   XREF to: Stack[-0x84c] (DATA)
// 005c11d1: LEA EDI,[EBP + 0xfffff6ea]
//   XREF to: Stack[-0x99c] (DATA)
// 005c11d7: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 005c11dc: MOV ECX,0xc
// 005c11e1: LEA ESI,[EBP + 0xfffff83a]
//   XREF to: Stack[-0x84c] (DATA)
// 005c11e7: LEA EAX,[EBP + 0xfffff6ea]
//   XREF to: Stack[-0x99c] (DATA)
// 005c11ed: ADD ESP,0xc
// 005c11f0: MOVSD.REP ES:EDI,ESI
// 005c11f2: PUSH EAX
// 005c11f3: LEA ESI,[EBP + 0xfffff32a]
//   XREF to: Stack[-0xd5c] (DATA)
// 005c11f9: LEA EDI,[EBP + 0xfffff6ba]
//   XREF to: Stack[-0x9cc] (DATA)
// 005c11ff: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c1204: ADD ESP,0x8
// 005c1207: LEA EAX,[EBP + 0xe]
//   XREF to: Stack[-0x78] (DATA)
// 005c120a: MOV ECX,0xc
// 005c120f: PUSH EAX
// 005c1210: LEA EAX,[EBP + 0xfffff6ba]
//   XREF to: Stack[-0x9cc] (DATA)
// 005c1216: LEA ESI,[EBP + 0xfffff32a]
//   XREF to: Stack[-0xd5c] (DATA)
// 005c121c: PUSH EAX
// 005c121d: MOVSD.REP ES:EDI,ESI
// 005c121f: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005c1224: MOV ESI,EAX
// 005c1226: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x84] (DATA)
// 005c1229: ADD ESP,0x8
// 005c122c: CMP EAX,ESI
// 005c122e: JZ 0x005c1241
//   XREF to: 005c1241 (CONDITIONAL_JUMP)
// 005c1230: MOV EAX,dword ptr [ESI]
// 005c1232: MOV dword ptr [EBP + 0x2],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005c1235: MOV EAX,dword ptr [ESI + 0x4]
// 005c1238: MOV dword ptr [EBP + 0x6],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005c123b: MOV EAX,dword ptr [ESI + 0x8]
// 005c123e: MOV dword ptr [EBP + 0xa],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005c1241: MOV EDX,dword ptr [EBP + 0x92]
//   Label: LAB_005c1241
//   XREF to: Stack[0xc] (READ)
// 005c1247: TEST EDX,EDX
// 005c1249: JNZ 0x005c160a
//   XREF to: 005c160a (CONDITIONAL_JUMP)
// 005c124f: MOV ECX,0xbecccccd
// 005c1254: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb4] (DATA)
// 005c1257: MOV dword ptr [EBP + -0x2a],EDX
//   XREF to: Stack[-0xb0] (WRITE)
// 005c125a: MOV dword ptr [EBP + -0x26],EDX
//   XREF to: Stack[-0xac] (WRITE)
// 005c125d: LEA EDX,[EBP + -0x5e]
//   XREF to: Stack[-0xe4] (DATA)
// 005c1260: MOV dword ptr [EBP + -0x2e],ECX
//   XREF to: Stack[-0xb4] (WRITE)
// 005c1263: CMP EDX,EAX
// 005c1265: JZ 0x005c1272
//   XREF to: 005c1272 (CONDITIONAL_JUMP)
// 005c1267: XOR EDX,EDX
// 005c1269: MOV dword ptr [EBP + -0x5e],ECX
//   XREF to: Stack[-0xe4] (WRITE)
// 005c126c: MOV dword ptr [EBP + -0x5a],EDX
//   XREF to: Stack[-0xe0] (WRITE)
// 005c126f: MOV dword ptr [EBP + -0x56],EDX
//   XREF to: Stack[-0xdc] (WRITE)
// 005c1272: MOV ESI,dword ptr [EBP + 0x72]
//   Label: LAB_005c1272
//   XREF to: Stack[-0x14] (READ)
// 005c1275: LEA EAX,[ESI*0x4 + 0x0]
// 005c127c: SUB EAX,ESI
// 005c127e: ADD EBX,0xfd8
// 005c1284: SHL EAX,0x4
// 005c1287: ADD EAX,EBX
// 005c1289: PUSH EAX
// 005c128a: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe4] (DATA)
// 005c128d: PUSH EAX
// 005c128e: CALL core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
//   XREF to: 005f4e20 (UNCONDITIONAL_CALL)
// 005c1293: ADD ESP,0x8
// 005c1296: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x84] (DATA)
// 005c1299: PUSH EAX
// 005c129a: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe4] (DATA)
// 005c129d: PUSH EAX
// 005c129e: LEA EAX,[EBP + 0xfffff62a]
//   XREF to: Stack[-0xa5c] (DATA)
// 005c12a4: PUSH EAX
// 005c12a5: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c12aa: ADD ESP,0xc
// 005c12ad: LEA EAX,[EBP + 0xfffff62a]
//   XREF to: Stack[-0xa5c] (DATA)
// 005c12b3: PUSH EAX
// 005c12b4: LEA EAX,[EBP + 0xffffff06]
//   XREF to: Stack[-0x180] (DATA)
// 005c12ba: PUSH EAX
// 005c12bb: LEA EAX,[EBP + 0xffffff72]
//   XREF to: Stack[-0x114] (DATA)
// 005c12c1: PUSH EAX
// 005c12c2: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c12c8: LEA ESI,[EBP + 0xfffff62a]
//   XREF to: Stack[-0xa5c] (DATA)
// 005c12ce: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005c12d3: FLD float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe4] (READ)
// 005c12d6: FLD float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe0] (READ)
// 005c12d9: FLD float ptr [EBP + -0x56]
//   XREF to: Stack[-0xdc] (READ)
// 005c12dc: FLD float ptr [EBP + 0xfffff636]
//   XREF to: Stack[-0xa50] (READ)
// 005c12e2: FLD float ptr [EBP + 0xfffff646]
//   XREF to: Stack[-0xa40] (READ)
// 005c12e8: FLD float ptr [EBP + 0xfffff656]
//   XREF to: Stack[-0xa30] (READ)
// 005c12ee: MOV ECX,0xc
// 005c12f3: FXCH ST5
// 005c12f5: FSUB float ptr [EAX]
// 005c12f7: ADD ESP,0xc
// 005c12fa: FSTP float ptr [EBP + -0x76]
//   XREF to: Stack[-0xfc] (WRITE)
// 005c12fd: FXCH ST3
// 005c12ff: FSUB float ptr [EAX + 0x4]
// 005c1302: FXCH
// 005c1304: FADD float ptr [EBP + -0x76]
//   XREF to: Stack[-0xfc] (READ)
// 005c1307: FXCH
// 005c1309: FSTP float ptr [EBP + -0x72]
//   XREF to: Stack[-0xf8] (WRITE)
// 005c130c: FXCH
// 005c130e: FSUB float ptr [EAX + 0x8]
// 005c1311: FXCH ST2
// 005c1313: FADD float ptr [EBP + -0x72]
//   XREF to: Stack[-0xf8] (READ)
// 005c1316: FXCH ST2
// 005c1318: FSTP float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xf4] (WRITE)
// 005c131b: FSTP float ptr [EBP + 0xfffff636]
//   XREF to: Stack[-0xa50] (WRITE)
// 005c1321: FXCH
// 005c1323: FADD float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xf4] (READ)
// 005c1326: FXCH
// 005c1328: FSTP float ptr [EBP + 0xfffff646]
//   XREF to: Stack[-0xa40] (WRITE)
// 005c132e: FSTP float ptr [EBP + 0xfffff656]
//   XREF to: Stack[-0xa30] (WRITE)
// 005c1334: JMP 0x005c0946
//   XREF to: 005c0946 (UNCONDITIONAL_JUMP)
// 005c1339: MOV EDX,dword ptr [0x03f6bb04]
//   Label: LAB_005c1339
//   XREF to: 03f6bb04 (READ)
// 005c133f: LEA EAX,[EDX*0x4 + 0x0]
// 005c1346: SUB EAX,EDX
// 005c1348: SHL EAX,0x4
// 005c134b: ADD EAX,EDI
// 005c134d: PUSH EAX
// 005c134e: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005c1353: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xd8] (DATA)
// 005c1356: PUSH EAX
// 005c1357: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005c135c: MOV EDX,dword ptr [0x03f6bb00]
//   XREF to: 03f6bb00 (READ)
// 005c1362: MOV ESI,EAX
// 005c1364: LEA EAX,[EDX*0x4 + 0x0]
// 005c136b: SUB EAX,EDX
// 005c136d: SHL EAX,0x4
// 005c1370: ADD ESP,0xc
// 005c1373: ADD EAX,EDI
// 005c1375: PUSH EAX
// 005c1376: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005c137b: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x90] (DATA)
// 005c137e: PUSH EAX
// 005c137f: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005c1384: FLD float ptr [EAX]
// 005c1386: FADD float ptr [ESI]
// 005c1388: FST float ptr [EBP + 0xfffffeee]
//   XREF to: Stack[-0x198] (WRITE)
// 005c138e: FLD float ptr [EAX + 0x4]
// 005c1391: FADD float ptr [ESI + 0x4]
// 005c1394: FXCH
// 005c1396: FLD float ptr [0x00653984]
//   XREF to: 00653984 (READ)
// 005c139c: FXCH
// 005c139e: FMUL ST1
// 005c13a0: FXCH ST2
// 005c13a2: FST float ptr [EBP + 0xfffffef2]
//   XREF to: Stack[-0x194] (WRITE)
// 005c13a8: FLD float ptr [EAX + 0x8]
// 005c13ab: FADD float ptr [ESI + 0x8]
// 005c13ae: FXCH
// 005c13b0: FMUL ST2
// 005c13b2: FXCH
// 005c13b4: FST float ptr [EBP + 0xfffffef6]
//   XREF to: Stack[-0x190] (WRITE)
// 005c13ba: FMULP ST2
// 005c13bc: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c13c2: ADD ESP,0xc
// 005c13c5: LEA EAX,[EBP + 0xfffffe82]
//   XREF to: Stack[-0x204] (DATA)
// 005c13cb: FXCH ST2
// 005c13cd: FSTP float ptr [EBP + 0xffffff7e]
//   XREF to: Stack[-0x108] (WRITE)
// 005c13d3: PUSH EAX
// 005c13d4: MOV ESI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 005c13da: FXCH
// 005c13dc: FSTP float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x104] (WRITE)
// 005c13df: PUSH ESI
// 005c13e0: FSTP float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x100] (WRITE)
// 005c13e3: MOV EDX,dword ptr [EDX + 0x154]
// 005c13e9: CALL dword ptr [EDX + 0x14]
// 005c13ec: FLD float ptr [EBP + 0xfffffe92]
//   XREF to: Stack[-0x1f4] (READ)
// 005c13f2: FLD float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x100] (READ)
// 005c13f5: ADD ESP,0x8
// 005c13f8: FXCH
// 005c13fa: FSUB float ptr [EBP + 0xfffffe86]
//   XREF to: Stack[-0x200] (READ)
// 005c1400: PUSH ESI
// 005c1401: FXCH
// 005c1403: FADD float ptr [0x0065399c]
//   XREF to: 0065399c (READ)
// 005c1409: FXCH
// 005c140b: FSUBR float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x104] (READ)
// 005c140e: FXCH
// 005c1410: FSTP float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x100] (WRITE)
// 005c1413: FSTP float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x104] (WRITE)
// 005c1416: CALL core_stranger.cpp_FUN_005bb010
//   XREF to: 005bb010 (UNCONDITIONAL_CALL)
// 005c141b: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005c141e: ADD ESP,0x4
// 005c1421: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x10] (READ)
// 005c1424: LEA EAX,[EBP + 0xfffffdda]
//   XREF to: Stack[-0x2ac] (DATA)
// 005c142a: FADD float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x104] (READ)
// 005c142d: PUSH EAX
// 005c142e: FSTP float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x104] (WRITE)
// 005c1431: CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   XREF to: 005f5100 (UNCONDITIONAL_CALL)
// 005c1436: MOV EAX,dword ptr [EBP + 0xffffff7e]
//   XREF to: Stack[-0x108] (READ)
// 005c143c: MOV dword ptr [EBP + 0xfffffde6],EAX
//   XREF to: Stack[-0x2a0] (WRITE)
// 005c1442: MOV EAX,dword ptr [EBP + -0x7e]
//   XREF to: Stack[-0x104] (READ)
// 005c1445: MOV dword ptr [EBP + 0xfffffdf6],EAX
//   XREF to: Stack[-0x290] (WRITE)
// 005c144b: MOV EAX,dword ptr [EBP + -0x7a]
//   XREF to: Stack[-0x100] (READ)
// 005c144e: MOV dword ptr [EBP + 0xfffffe06],EAX
//   XREF to: Stack[-0x280] (WRITE)
// 005c1454: MOV EAX,dword ptr [EBX + 0x1fc88]
// 005c145a: ADD ESP,0x4
// 005c145d: TEST EAX,EAX
// 005c145f: JZ 0x005c14b6
//   XREF to: 005c14b6 (CONDITIONAL_JUMP)
// 005c1461: LEA EAX,[EBP + 0xfffffdda]
//   XREF to: Stack[-0x2ac] (DATA)
// 005c1467: PUSH EAX
// 005c1468: LEA ESI,[EBP + 0xfffff74a]
//   XREF to: Stack[-0x93c] (DATA)
// 005c146e: PUSH 0x40490fdb
// 005c1473: LEA EDI,[EBP + 0xfffff71a]
//   XREF to: Stack[-0x96c] (DATA)
// 005c1479: CALL core_xform.cpp_buildRotationY_FUN_005f6cc0
//   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)
// 005c147e: MOV ECX,0xc
// 005c1483: LEA ESI,[EBP + 0xfffff74a]
//   XREF to: Stack[-0x93c] (DATA)
// 005c1489: LEA EAX,[EBP + 0xfffff71a]
//   XREF to: Stack[-0x96c] (DATA)
// 005c148f: ADD ESP,0x4
// 005c1492: MOVSD.REP ES:EDI,ESI
// 005c1494: PUSH EAX
// 005c1495: LEA ESI,[EBP + 0xfffff77a]
//   XREF to: Stack[-0x90c] (DATA)
// 005c149b: LEA EDI,[EBP + 0xfffffdda]
//   XREF to: Stack[-0x2ac] (DATA)
// 005c14a1: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c14a6: MOV ECX,0xc
// 005c14ab: LEA ESI,[EBP + 0xfffff77a]
//   XREF to: Stack[-0x90c] (DATA)
// 005c14b1: ADD ESP,0x8
// 005c14b4: MOVSD.REP ES:EDI,ESI
// 005c14b6: MOV ECX,0xc
//   Label: LAB_005c14b6
// 005c14bb: LEA EDI,[EBP + 0xfffff65a]
//   XREF to: Stack[-0xa2c] (DATA)
// 005c14c1: LEA ESI,[EBP + 0xfffffdda]
//   XREF to: Stack[-0x2ac] (DATA)
// 005c14c7: JMP 0x005c0946
//   XREF to: 005c0946 (UNCONDITIONAL_JUMP)
// 005c14cc: CMP EAX,0x1
//   Label: LAB_005c14cc
// 005c14cf: JNZ 0x005c15d9
//   XREF to: 005c15d9 (CONDITIONAL_JUMP)
// 005c14d5: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 005c14db: TEST EDX,EDX
// 005c14dd: JNZ 0x005c159b
//   XREF to: 005c159b (CONDITIONAL_JUMP)
// 005c14e3: PUSH 0xbfc90fdb
// 005c14e8: LEA ESI,[EBP + 0xfffffd7a]
//   XREF to: Stack[-0x30c] (DATA)
// 005c14ee: LEA EDI,[EBP + 0xfffffc2a]
//   XREF to: Stack[-0x45c] (DATA)
// 005c14f4: CALL core_xform.cpp_buildRotationY_FUN_005f6cc0
//   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)
// 005c14f9: MOV ECX,0xc
// 005c14fe: LEA ESI,[EBP + 0xfffffd7a]
//   XREF to: Stack[-0x30c] (DATA)
// 005c1504: ADD ESP,0x4
//   Label: LAB_005c1504
// 005c1507: MOVSD.REP ES:EDI,ESI
// 005c1509: MOV ESI,dword ptr [EBP + 0x72]
//   Label: LAB_005c1509
//   XREF to: Stack[-0x14] (READ)
// 005c150c: LEA EAX,[ESI*0x4 + 0x0]
// 005c1513: SUB EAX,ESI
// 005c1515: LEA EDX,[EBX + 0xfd8]
// 005c151b: SHL EAX,0x4
// 005c151e: ADD EAX,EDX
// 005c1520: PUSH EAX
// 005c1521: LEA EAX,[EBP + 0xfffffc2a]
//   XREF to: Stack[-0x45c] (DATA)
// 005c1527: PUSH EAX
// 005c1528: LEA ESI,[EBP + 0xfffffbfa]
//   XREF to: Stack[-0x48c] (DATA)
// 005c152e: LEA EDI,[EBP + 0xfffffc2a]
//   XREF to: Stack[-0x45c] (DATA)
// 005c1534: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c1539: ADD ESP,0x8
// 005c153c: LEA EAX,[EBP + 0x4a]
//   XREF to: Stack[-0x3c] (DATA)
// 005c153f: MOV ECX,0xc
// 005c1544: PUSH EAX
// 005c1545: LEA EAX,[EBP + 0xfffffc2a]
//   XREF to: Stack[-0x45c] (DATA)
// 005c154b: LEA ESI,[EBP + 0xfffffbfa]
//   XREF to: Stack[-0x48c] (DATA)
// 005c1551: PUSH EAX
// 005c1552: MOVSD.REP ES:EDI,ESI
// 005c1554: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005c1559: MOV ESI,EAX
// 005c155b: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x84] (DATA)
// 005c155e: ADD ESP,0x8
// 005c1561: CMP EAX,ESI
// 005c1563: JZ 0x005c1576
//   XREF to: 005c1576 (CONDITIONAL_JUMP)
// 005c1565: MOV EAX,dword ptr [ESI]
// 005c1567: MOV dword ptr [EBP + 0x2],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005c156a: MOV EAX,dword ptr [ESI + 0x4]
// 005c156d: MOV dword ptr [EBP + 0x6],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005c1570: MOV EAX,dword ptr [ESI + 0x8]
// 005c1573: MOV dword ptr [EBP + 0xa],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005c1576: FLD float ptr [EBP + 0xfffffe72]
//   Label: LAB_005c1576
//   XREF to: Stack[-0x214] (READ)
// 005c157c: FMUL double ptr [0x0065398c]
//   XREF to: 0065398c (READ)
// 005c1582: FLD float ptr [EBP + 0xfffffe7e]
//   XREF to: Stack[-0x208] (READ)
// 005c1588: FMUL double ptr [0x00653994]
//   XREF to: 00653994 (READ)
// 005c158e: FADDP
// 005c1590: FSTP float ptr [EBP + 0xffffff0e]
//   XREF to: Stack[-0x178] (WRITE)
// 005c1596: JMP 0x005c10ab
//   XREF to: 005c10ab (UNCONDITIONAL_JUMP)
// 005c159b: CMP EDX,EAX
//   Label: LAB_005c159b
// 005c159d: JNZ 0x005c15c5
//   XREF to: 005c15c5 (CONDITIONAL_JUMP)
// 005c159f: PUSH 0x3fc90fdb
// 005c15a4: LEA ESI,[EBP + 0xfffffdaa]
//   XREF to: Stack[-0x2dc] (DATA)
// 005c15aa: LEA EDI,[EBP + 0xfffffc2a]
//   XREF to: Stack[-0x45c] (DATA)
// 005c15b0: CALL core_xform.cpp_buildRotationY_FUN_005f6cc0
//   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)
// 005c15b5: MOV ECX,0xc
// 005c15ba: LEA ESI,[EBP + 0xfffffdaa]
//   XREF to: Stack[-0x2dc] (DATA)
// 005c15c0: JMP 0x005c1504
//   XREF to: 005c1504 (UNCONDITIONAL_JUMP)
// 005c15c5: LEA EAX,[EBP + 0xfffffc2a]
//   Label: LAB_005c15c5
//   XREF to: Stack[-0x45c] (DATA)
// 005c15cb: PUSH EAX
// 005c15cc: CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   XREF to: 005f5100 (UNCONDITIONAL_CALL)
// 005c15d1: ADD ESP,0x4
// 005c15d4: JMP 0x005c1509
//   XREF to: 005c1509 (UNCONDITIONAL_JUMP)
// 005c15d9: CMP EAX,0x3
//   Label: LAB_005c15d9
// 005c15dc: JZ 0x005c109f
//   XREF to: 005c109f (CONDITIONAL_JUMP)
// 005c15e2: PUSH ESI
// 005c15e3: MOV EDI,0x65394c
//   XREF to: 0065394c (DATA)
// 005c15e8: MOV EAX,0xc4d
// 005c15ed: PUSH 0x653961
//   XREF to: 00653961 (DATA)
// 005c15f2: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005c15f8: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005c15fd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005c1602: ADD ESP,0x8
// 005c1605: JMP 0x005c10ab
//   XREF to: 005c10ab (UNCONDITIONAL_JUMP)
// 005c160a: CMP EDX,0x1
//   Label: LAB_005c160a
// 005c160d: JNZ 0x005c164c
//   XREF to: 005c164c (CONDITIONAL_JUMP)
// 005c160f: MOV EDX,0x3ecccccd
// 005c1614: LEA EAX,[EBP + 0xffffff42]
//   XREF to: Stack[-0x144] (DATA)
// 005c161a: XOR ECX,ECX
// 005c161c: MOV dword ptr [EBP + 0xffffff42],EDX
//   XREF to: Stack[-0x144] (WRITE)
// 005c1622: MOV dword ptr [EBP + 0xffffff46],ECX
//   XREF to: Stack[-0x140] (WRITE)
// 005c1628: LEA EDX,[EBP + -0x5e]
//   XREF to: Stack[-0xe4] (DATA)
// 005c162b: MOV dword ptr [EBP + 0xffffff4a],ECX
//   XREF to: Stack[-0x13c] (WRITE)
// 005c1631: CMP EDX,EAX
// 005c1633: JZ 0x005c1272
//   XREF to: 005c1272 (CONDITIONAL_JUMP)
// 005c1639: MOV EDI,0x3ecccccd
// 005c163e: MOV dword ptr [EBP + -0x5a],ECX
//   XREF to: Stack[-0xe0] (WRITE)
// 005c1641: MOV dword ptr [EBP + -0x56],ECX
//   XREF to: Stack[-0xdc] (WRITE)
// 005c1644: MOV dword ptr [EBP + -0x5e],EDI
//   XREF to: Stack[-0xe4] (WRITE)
// 005c1647: JMP 0x005c1272
//   XREF to: 005c1272 (UNCONDITIONAL_JUMP)
// 005c164c: XOR ESI,ESI
//   Label: LAB_005c164c
// 005c164e: MOV dword ptr [EBP + -0x5a],ESI
//   XREF to: Stack[-0xe0] (WRITE)
// 005c1651: MOV dword ptr [EBP + -0x5e],ESI
//   XREF to: Stack[-0xe4] (WRITE)
// 005c1654: MOV dword ptr [EBP + -0x56],ESI
//   XREF to: Stack[-0xdc] (WRITE)
// 005c1657: JMP 0x005c1272
//   XREF to: 005c1272 (UNCONDITIONAL_JUMP)
