// Name: core_stranger.cpp_CStranger_FUN_005c07b0
// Address: 005c07b0
// Address Range: [[005c07b0, 005c165b]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c07b0()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c07b0(CStranger* param_1,
   uint param_2, uint param_3) */

float * core_stranger_cpp_CStranger_FUN_005c07b0(void)

{
  int iVar1;
  float fVar2;
  CDemonActor *pCVar3;
  CMatrix3x4f *pCVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  int iVar7;
  float *unaff_ESI;
  CMatrix3x4f *pCVar8;
  float *pfVar9;
  float *pfVar10;
  CMatrix3x4f *pCVar11;
  CMatrix3x4f *pCVar12;
  byte bVar13;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float in_stack_0000000c;
  CMatrix3x4f *in_stack_fffff2a4;
  CMatrix3x4f *in_stack_fffff2ac;
  CMatrix3x4f *in_stack_fffff2b0;
  CMatrix3x4f local_d2c;
  CMatrix3x4f local_cfc;
  CMatrix3x4f local_ccc;
  CMatrix3x4f local_c9c;
  CMatrix3x4f local_c6c;
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
  float local_72c [12];
  CMatrix3x4f local_6fc;
  CMatrix3x4f local_6cc;
  CMatrix3x4f local_69c;
  float local_66c [12];
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
  CMatrix3x4f local_36c;
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
  iVar7 = in_stack_00000004 + 0xfd8;
  local_180.x = (float)core_actor_cpp_castToClassHash_FUN_0040c790
                                 (in_stack_00000008,g_CWeaponClassInfo.name_hash);
  if ((CDemonActor *)local_180.x != (CDemonActor *)0x0) {
    fVar2 = (((CDemonActor *)((int)local_180.x + 0x2b0))->orient).pitch;
    pCVar8 = (CMatrix3x4f *)(iVar1 * 0x30 + iVar7);
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
      pCVar4 = &local_a8c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar4->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_a8c,pCVar8,in_stack_fffff2a4);
      pCVar8 = &local_3fc;
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
      pCVar4 = &local_b1c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar4->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b1c,pCVar8,in_stack_fffff2a4);
      pCVar8 = &local_9fc;
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
      pCVar4 = &local_63c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar4->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_63c,pCVar8,in_stack_fffff2a4);
      pCVar8 = &local_57c;
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
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_7ec,pCVar8,in_stack_fffff2a4);
      pCVar8 = &local_8dc;
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
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_33c,pCVar8,in_stack_fffff2a4);
      pCVar8 = &local_c3c;
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
      pCVar4 = &local_8ac;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar4->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_8ac,pCVar8,in_stack_fffff2a4);
      pCVar8 = &local_78c;
    }
    else if (in_stack_0000000c == 0.0) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_75c,(CVector3f *)&DAT_03f6babc,&g_ZeroVector);
      pCVar4 = &local_75c;
      core_xform_cpp_buildRotationX_FUN_005f6c40((CMatrix3x4f *)0x3fc90fdb,(float)pCVar4);
      pCVar12 = &local_c6c;
      pfVar9 = local_66c;
      pCVar11 = &local_c6c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar11->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0xbfc90fdb,(float)pCVar12);
      pfVar9 = local_bac;
      pCVar11 = &local_c9c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar11->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_c9c,pCVar12,pCVar4);
      pfVar9 = local_b7c;
      pCVar12 = &local_6fc;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar12->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_6fc,pCVar4,pCVar8);
      pfVar9 = local_b4c;
      pCVar4 = &local_69c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar4->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_69c,pCVar8,in_stack_fffff2a4);
      pCVar8 = &local_5ac;
    }
    else {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_aec,(CVector3f *)&DAT_03f6bab0,&g_ZeroVector);
      pCVar4 = &local_aec;
      core_xform_cpp_buildRotationX_FUN_005f6c40((CMatrix3x4f *)0x3fc90fdb,(float)pCVar4);
      pCVar12 = &local_36c;
      pfVar9 = local_72c;
      pCVar11 = &local_36c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar11->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,(float)pCVar12);
      pfVar9 = local_60c;
      pCVar11 = &local_abc;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar11->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_abc,pCVar12,pCVar4);
      pfVar9 = local_42c;
      pCVar12 = &local_4ec;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar12->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_4ec,pCVar4,pCVar8);
      pfVar9 = local_39c;
      pCVar4 = &local_4bc;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar4->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_4bc,pCVar8,in_stack_fffff2a4);
      pCVar8 = &local_24c;
    }
    iVar7 = 0xc;
    pfVar9 = local_a2c;
    goto LAB_005c0946;
  }
  local_180.y = local_180.x;
  local_180.z = local_180.x;
  local_84.x = local_180.x;
  local_84.y = local_180.x;
  local_84.z = local_180.x;
  if (*(int *)(in_stack_00000004 + 0x2a8c) == 0xe) {
    pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_d8,&g_ZeroVector,(CMatrix3x4f *)(DAT_03f6bb04 * 0x30 + iVar7));
    pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_90,&g_ZeroVector,(CMatrix3x4f *)(DAT_03f6bb00 * 0x30 + iVar7));
    local_198 = pCVar6->x + pCVar5->x;
    local_194 = pCVar6->y + pCVar5->y;
    local_108 = local_198 * 0.5f;
    local_190 = pCVar6->z + pCVar5->z;
    local_104 = local_194 * 0.5f;
    local_100 = local_190 * 0.5f;
    (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,&local_204);
    local_100 = local_100 + 0.333f;
    local_104 = local_104 - (local_204.max.y - local_204.min.y);
    fVar2 = (float)core_stranger_cpp_FUN_005bb010();
    local_104 = fVar2 + local_104;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_2ac);
    local_2ac.m[0].z = local_108;
    local_2ac.m[1].z = local_104;
    local_2ac.m[2].z = local_100;
    if (*(int *)(in_stack_00000004 + 0x1fc88) != 0) {
      pCVar8 = &local_2ac;
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x40490fdb,(float)pCVar8);
      pfVar9 = local_93c;
      pCVar4 = &local_96c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar4->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_96c,pCVar8,in_stack_fffff2ac);
      pfVar9 = local_90c;
      pCVar8 = &local_2ac;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar8->m[0].w = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
      }
    }
    iVar7 = 0xc;
    pfVar9 = local_a2c;
    pCVar8 = &local_2ac;
    goto LAB_005c0946;
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000008,g_CLightActorClassInfo.name_hash);
  if (pCVar3 != (CDemonActor *)0x0) {
    (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,&local_21c);
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
    iVar7 = pCVar3[4].scale.y;
    if (iVar7 != 2) {
      if (iVar7 == 1) {
        if (in_stack_0000000c == 0.0) {
          core_xform_cpp_buildRotationY_FUN_005f6cc0
                    ((CMatrix3x4f *)0xbfc90fdb,(float)in_stack_fffff2ac);
          pfVar9 = local_30c;
LAB_005c1504:
          pCVar8 = &local_45c;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            pCVar8->m[0].w = *pfVar9;
            pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
          }
        }
        else {
          if (in_stack_0000000c == 1.4013e-45) {
            core_xform_cpp_buildRotationY_FUN_005f6cc0
                      ((CMatrix3x4f *)0x3fc90fdb,(float)in_stack_fffff2ac);
            pfVar9 = local_2dc;
            goto LAB_005c1504;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_45c);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&local_45c,(CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000004 + 0xfd8),
                   in_stack_fffff2ac);
        pfVar9 = local_48c;
        pCVar8 = &local_45c;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          pCVar8->m[0].w = *pfVar9;
          pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
        }
        pCVar5 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CVector3f *)&local_45c,&local_3c);
        if (&local_84 != pCVar5) {
          local_84.x = pCVar5->x;
          local_84.y = pCVar5->y;
          local_84.z = pCVar5->z;
        }
        local_180.z = local_21c.max.z * (float)0.29999999999999999 +
                      local_21c.min.z * (float)0.69999999999999996;
        goto LAB_005c10ab;
      }
      if (iVar7 != 3) {
        g_CurrentFilename = "..\\core\\stranger.cpp";
        g_CurrentLineNumber = 0xc4d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s");
        goto LAB_005c10ab;
      }
    }
    local_180.y = local_21c.max.y;
  }
LAB_005c10ab:
  iVar7 = (*in_stack_00000008->vtable->getAllowedMeleeAttackTypes)(in_stack_00000008);
  if (iVar7 != 0) {
    local_12c.x = -0.0900813;
    local_12c.z = 0.649052;
    local_12c.y = -0.242916;
    local_1d4.x = 0.414782;
    local_1d4.y = -0.161673;
    local_1d4.z = -0.489897;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_d2c,&local_1d4,&local_12c);
    local_15c.x = 0.30057;
    local_120.z = -0.49418;
    local_120.x = 0.385392;
    local_120.y = -0.0122009;
    local_15c.z = 0.64525;
    local_15c.y = -0.133049;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_cfc,&local_120,&local_15c);
    pCVar4 = (CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000004 + 0xfd8);
    fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
    core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_d2c,&local_cfc,1.0 - fVar2);
    pfVar9 = local_84c;
    pCVar8 = &local_99c;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      pCVar8->m[0].w = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_99c,pCVar4,in_stack_fffff2b0);
    pfVar9 = (float *)&stack0xfffff2a4;
    pCVar5 = local_9cc;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      pCVar5->x = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
      pCVar5 = (CVector3f *)((int)pCVar5 + ((uint)bVar13 * -2 + 1) * 4);
    }
    pCVar5 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_9cc,&local_78);
    if (&local_84 != pCVar5) {
      local_84.x = pCVar5->x;
      local_84.y = pCVar5->y;
      local_84.z = pCVar5->z;
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
  pCVar8 = &local_a5c;
  pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_114,&local_180,&local_a5c);
  iVar7 = 0xc;
  local_fc = local_e4.x - pCVar5->x;
  local_f8 = local_e4.y - pCVar5->y;
  local_f4 = local_e4.z - pCVar5->z;
  local_a5c.m[0].z = local_a5c.m[0].z + local_fc;
  local_a5c.m[1].z = local_a5c.m[1].z + local_f8;
  local_a5c.m[2].z = local_a5c.m[2].z + local_f4;
LAB_005c0946:
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = pCVar8->m[0].w;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
    pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
  }
  pfVar9 = local_a2c;
  pfVar10 = unaff_ESI;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
  }
  return unaff_ESI;
}
