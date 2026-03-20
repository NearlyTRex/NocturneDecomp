// Name: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
// Address: 005c07b0
// Address Range: [[005c07b0, 005c165b]]
// Convention: __stack3_esi
// Signature: CMatrix3x4f * __stack3_esi core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0(CStranger *this_ptr,CDemonActor *carried_actor,int hand_index,CMatrix3x4f *output_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack3_esi core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0(CStranger *this_ptr,CDemonActor *carried_actor,int hand_index,CMatrix3x4f *output_matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CLightActor *pCVar2;
  int iVar4;
  CVector3f *pCVar3;
  CVector3f *pCVar5;
  CVector3f *pCVar4;
  float fVar6;
  int iVar5;
  int iVar7;
  CMatrix3x4f *pCVar13;
  CMatrix3x4f *pCVar14;
  CMatrix3x4f *pCVar15;
  CMatrix3x4f *pCVar6;
  float *pfVar7;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *pCVar9;
  CMatrix3x4f *pCVar10;
  CMatrix3x4f *pCVar16;
  CMatrix3x4f *pCVar17;
  float *pfVar18;
  CMatrix3x4f *pCVar11;
  CMatrix3x3f *pCVar12;
  byte bVar13;
  CMatrix3x4f local_d5c;
  CMatrix3x4f local_d2c;
  CMatrix3x4f local_cfc;
  CMatrix3x4f local_ccc;
  CMatrix3x4f local_c9c;
  CMatrix3x4f local_c6c;
  CMatrix3x4f local_c3c;
  CMatrix3x4f local_c0c;
  CMatrix3x4f local_bdc;
  CMatrix3x4f local_bac;
  CMatrix3x4f local_b7c;
  CMatrix3x4f local_b4c;
  CMatrix3x4f local_b1c;
  CMatrix3x4f local_aec;
  CMatrix3x4f local_abc;
  CMatrix3x4f local_a8c;
  CMatrix3x4f local_a5c;
  float local_a2c [12];
  CMatrix3x4f local_9fc;
  CMatrix3x3f local_9cc;
  CMatrix3x4f local_99c;
  CMatrix3x4f local_96c;
  CMatrix3x4f local_93c;
  CMatrix3x4f local_90c;
  CMatrix3x4f local_8dc;
  CMatrix3x4f local_8ac;
  CMatrix3x4f local_87c;
  CMatrix3x4f local_84c;
  CMatrix3x4f local_81c;
  CMatrix3x4f local_7ec;
  CMatrix3x4f local_7bc;
  CMatrix3x4f local_78c;
  CMatrix3x4f local_75c;
  CMatrix3x4f local_72c;
  CMatrix3x4f local_6fc;
  CMatrix3x4f local_6cc;
  CMatrix3x4f local_69c;
  CMatrix3x4f local_66c;
  CMatrix3x4f local_63c;
  CMatrix3x4f local_60c;
  CMatrix3x4f local_5dc;
  CMatrix3x4f local_5ac;
  CMatrix3x4f local_57c;
  CMatrix3x4f local_54c;
  CMatrix3x4f local_51c;
  CMatrix3x4f local_4ec;
  CMatrix3x4f local_4bc;
  CMatrix3x4f local_48c;
  CMatrix3x4f local_45c;
  CMatrix3x4f local_42c;
  CMatrix3x4f local_3fc;
  CMatrix3x4f local_3cc;
  CMatrix3x4f local_39c;
  CMatrix3x4f local_36c;
  CMatrix3x4f local_33c;
  CMatrix3x4f local_30c;
  CMatrix3x4f local_2dc;
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
  CWeapon *local_180;
  CWeapon *pCStack_17c;
  CWeapon *pCStack_178;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CWeapon *local_150;
  CWeapon *local_14c;
  CWeapon *local_148;
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
  CMatrix3x4f *local_18;
  int local_14;
  float local_10;
  ELightActorType EVar1;
  
  bVar13 = 0;
  iVar7 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  local_180 = (CWeapon *)
              core_actor_cpp_castToClassHash_FUN_0040c790
                        (carried_actor,g_CWeaponClassInfo.name_hash);
  if (local_180 != (CWeapon *)0x0) {
    iVar4 = local_180->weapon_type;
    pCVar16 = (this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar7;
    if (iVar4 == 1) {
      local_a8.z = 0.969617;
      local_a8.x = 0.191601;
      local_a8.y = 2.2981;
      local_1ec.z = -0.412366;
      local_1ec.x = 0.53949;
      local_1ec.y = -0.235855;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_87c,&local_1ec,&local_a8);
      local_30.y = 0.934256;
      local_30.x = -0.414435;
      local_30.z = 1.83791;
      local_1b0.x = 0.40292;
      local_1b0.y = 0.095011;
      local_1b0.z = 0.26139;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_6cc,&local_1b0,&local_30);
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                        ((CCharacter *)this_ptr,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_87c,&local_6cc,1.0 - fVar3,&local_51c);
      pCVar15 = &local_51c;
      pCVar14 = &local_a8c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar14->m[0].w = pCVar15->m[0].w;
        pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_a8c,pCVar16,&local_3fc);
      pCVar6 = &local_3fc;
    }
    else if (iVar4 == 2) {
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
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                        ((CCharacter *)this_ptr,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_3cc,&local_ccc,1.0 - fVar3,&local_7bc);
      pCVar15 = &local_7bc;
      pCVar14 = &local_b1c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar14->m[0].w = pCVar15->m[0].w;
        pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b1c,pCVar16,&local_9fc);
      pCVar6 = &local_9fc;
    }
    else if (iVar4 == 4) {
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
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                        ((CCharacter *)this_ptr,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_27c,&local_81c,1.0 - fVar3,&local_5dc);
      pCVar15 = &local_5dc;
      pCVar14 = &local_63c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar14->m[0].w = pCVar15->m[0].w;
        pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_63c,pCVar16,&local_57c);
      pCVar6 = &local_57c;
    }
    else if (iVar4 == 3) {
      local_c0.x = 0.238337;
      local_24.x = -0.743729;
      local_c0.y = -0.0656786;
      local_c0.z = 0.0335054;
      local_24.z = -0.808348;
      local_24.y = 0.693486;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_7ec,&local_c0,&local_24);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_7ec,pCVar16,&local_8dc);
      pCVar6 = &local_8dc;
    }
    else if (iVar4 == 5) {
      local_174.x = 0.62;
      local_168.z = -1.57;
      local_174.y = 0.0;
      local_174.z = 0.217;
      local_168.x = 0.0;
      local_168.y = 1.57;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_33c,&local_174,&local_168);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_33c,pCVar16,&local_c3c);
      pCVar6 = &local_c3c;
    }
    else if (iVar4 == 7) {
      local_60.x = -0.0900813;
      local_60.z = 0.649052;
      local_60.y = -0.242916;
      local_1a4.x = 0.414782;
      local_1a4.y = -0.161673;
      local_1a4.z = -0.489897;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_c0c,&local_1a4,&local_60);
      local_6c.z = 0.64525;
      local_6c.x = 0.30057;
      local_f0.z = -0.273446;
      local_6c.y = -0.133049;
      local_f0.x = 0.303704;
      local_f0.y = 0.0649791;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_bdc,&local_f0,&local_6c);
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                        ((CCharacter *)this_ptr,0);
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_c0c,&local_bdc,1.0 - fVar3,&local_54c);
      pCVar15 = &local_54c;
      pCVar14 = &local_8ac;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar14->m[0].w = pCVar15->m[0].w;
        pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_8ac,pCVar16,&local_78c);
      pCVar6 = &local_78c;
    }
    else if (hand_index == 0) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_75c,&CVector3f_03f6babc,&g_ZeroVector.f);
      pCVar15 = &local_75c;
      core_xform_cpp_buildRotationX_FUN_005f6c40(1.5707964,&local_66c);
      pCVar14 = &local_c6c;
      pCVar13 = &local_66c;
      pCVar17 = &local_c6c;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        pCVar17->m[0].w = pCVar13->m[0].w;
        pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_buildRotationY_FUN_005f6cc0(-1.5707964,&local_bac);
      pCVar13 = &local_bac;
      pCVar17 = &local_c9c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar17->m[0].w = pCVar13->m[0].w;
        pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_c9c,pCVar14,&local_b7c);
      pCVar14 = &local_b7c;
      pCVar13 = &local_6fc;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar13->m[0].w = pCVar14->m[0].w;
        pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_6fc,pCVar15,&local_b4c);
      pCVar15 = &local_b4c;
      pCVar14 = &local_69c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar14->m[0].w = pCVar15->m[0].w;
        pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_69c,pCVar16,&local_5ac);
      pCVar6 = &local_5ac;
    }
    else {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_aec,&CVector3f_03f6bab0,&g_ZeroVector.f);
      pCVar15 = &local_aec;
      core_xform_cpp_buildRotationX_FUN_005f6c40(1.5707964,&local_72c);
      pCVar14 = &local_36c;
      pCVar13 = &local_72c;
      pCVar17 = &local_36c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar17->m[0].w = pCVar13->m[0].w;
        pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_buildRotationY_FUN_005f6cc0(1.5707964,&local_60c);
      pCVar8 = &local_60c;
      pCVar11 = &local_abc;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar11 = (CMatrix3x4f *)((int)pCVar11 + (uint)bVar13 * -8 + 4);
        pCVar8 = (CMatrix3x4f *)((int)pCVar8 + (uint)bVar13 * -8 + 4);
        pCVar11->m[0].w = pCVar8->m[0].w;
        pCVar8 = pCVar8;
        pCVar11 = pCVar11;
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_abc,pCVar14,&local_42c);
      pCVar9 = &local_42c;
      pCVar14 = &local_4ec;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar9 = (CMatrix3x4f *)((int)pCVar9 + (uint)bVar13 * -8 + 4);
        pCVar14->m[0].w = pCVar9->m[0].w;
        pCVar9 = pCVar9;
        pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_4ec,pCVar15,&local_39c);
      pCVar10 = &local_39c;
      pCVar15 = &local_4bc;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar10 = (CMatrix3x4f *)((int)pCVar10 + (uint)bVar13 * -8 + 4);
        pCVar15->m[0].w = pCVar10->m[0].w;
        pCVar10 = pCVar10;
        pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_4bc,pCVar16,&local_24c);
      pCVar6 = &local_24c;
    }
    iVar7 = 0xc;
    pfVar18 = local_a2c;
    goto LAB_005c0946;
  }
  pCStack_17c = local_180;
  pCStack_178 = local_180;
  local_84.x = (float)local_180;
  local_84.y = (float)local_180;
  local_84.z = (float)local_180;
  if ((this_ptr->base).base.layer_action_index == 0xe) {
    pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_d8,&g_ZeroVector.f,
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                        g_StrangerIndices[0xe]);
    pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_90,&g_ZeroVector.f,
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                        g_StrangerIndices[0xd]);
    fVar3 = (pCVar4->x + pCVar5->x) * 0.5f;
    fVar1 = (pCVar4->y + pCVar5->y) * 0.5f;
    fVar2 = (pCVar4->z + pCVar5->z) * 0.5f;
    (*((carried_actor->vtable)._ub)->getBoundingBox)(carried_actor,&local_204);
    fVar2 = fVar2 + 0.333f;
    fVar6 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005bb010(carried_actor);
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_2ac);
    local_2ac.m[0].z = fVar3;
    local_2ac.m[1].z = fVar6 + (fVar1 - (local_204.max.y - local_204.min.y));
    local_2ac.m[2].z = fVar2;
    if (this_ptr->pickup_facing_reversed != 0) {
      pCVar16 = &local_2ac;
      core_xform_cpp_buildRotationY_FUN_005f6cc0(3.1415927,&local_93c);
      pCVar15 = &local_93c;
      pCVar14 = &local_96c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar14->m[0].w = pCVar15->m[0].w;
        pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar13 * -2 + 1) * 4);
      }
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_96c,pCVar16,&local_90c);
      pCVar16 = &local_90c;
      pCVar15 = &local_2ac;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pCVar15->m[0].w = pCVar16->m[0].w;
        pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar13 * -2 + 1) * 4);
        pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
      }
    }
    iVar7 = 0xc;
    pfVar18 = local_a2c;
    pCVar6 = &local_2ac;
    goto LAB_005c0946;
  }
  pCVar2 = (CLightActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (carried_actor,g_CLightActorClassInfo.name_hash);
  if (pCVar2 != (CLightActor *)0x0) {
    (*((carried_actor->vtable)._ub)->getBoundingBox)(carried_actor,&local_21c);
    local_150 = (CWeapon *)((local_21c.min.x + local_21c.max.x) * 0.5f);
    local_14c = (CWeapon *)((local_21c.min.y + local_21c.max.y) * 0.5f);
    local_148 = (CWeapon *)((local_21c.min.z + local_21c.max.z) * 0.5f);
    if (&local_180 != &local_150) {
      local_180 = local_150;
      pCStack_17c = local_14c;
      pCStack_178 = local_148;
    }
    EVar1 = pCVar2->light_actor_type;
    if (EVar1 != LIGHT_TYPE_LANTERN) {
      if (EVar1 == LIGHT_TYPE_FLASHLIGHT) {
        if (hand_index == 0) {
          core_xform_cpp_buildRotationY_FUN_005f6cc0(-1.5707964,&local_30c);
          pCVar16 = &local_30c;
LAB_005c1504:
          pCVar15 = &local_45c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar15->m[0].w = pCVar16->m[0].w;
            pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar13 * -2 + 1) * 4);
            pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
          }
        }
        else {
          if (hand_index == 1) {
            core_xform_cpp_buildRotationY_FUN_005f6cc0(1.5707964,&local_2dc);
            pCVar16 = &local_2dc;
            goto LAB_005c1504;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_45c);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&local_45c,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar7
                   ,&local_48c);
        pCVar16 = &local_48c;
        pCVar15 = &local_45c;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          pCVar15->m[0].w = pCVar16->m[0].w;
          pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar13 * -2 + 1) * 4);
          pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
        }
        pCVar5 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                           ((CMatrix3x3f *)&local_45c,&local_3c);
        if (&local_84 != pCVar5) {
          local_84.x = pCVar5->x;
          local_84.y = pCVar5->y;
          local_84.z = pCVar5->z;
        }
        pCStack_178 = (CWeapon *)
                      (local_21c.max.z * (float)0.29999999999999999 +
                      local_21c.min.z * (float)0.69999999999999996);
        goto LAB_005c10ab;
      }
      if (EVar1 != LIGHT_TYPE_GLOBE) {
        g_CurrentFilename = "..\\core\\stranger.cpp";
        g_CurrentLineNumber = 0xc4d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s",pCVar2);
        goto LAB_005c10ab;
      }
    }
    pCStack_17c = (CWeapon *)local_21c.max.y;
  }
LAB_005c10ab:
  iVar4 = (*((carried_actor->vtable)._ub)->getAllowedMeleeAttackTypes)(carried_actor);
  if (iVar4 != 0) {
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
    pCVar14 = (this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar7;
    fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                      ((CCharacter *)this_ptr,0);
    core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_d2c,&local_cfc,1.0 - fVar3,&local_84c);
    pCVar16 = &local_84c;
    pCVar15 = &local_99c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar15->m[0].w = pCVar16->m[0].w;
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar13 * -2 + 1) * 4);
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar13 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_99c,pCVar14,&local_d5c);
    pCVar16 = &local_d5c;
    pCVar12 = &local_9cc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar12 = (CMatrix3x3f *)((int)pCVar12 + (uint)bVar13 * -8 + 4);
      pCVar12->m[0].x = pCVar16->m[0].w;
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar13 * -2 + 1) * 4);
      pCVar12 = pCVar12;
    }
    pCVar3 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_9cc,&local_78);
    if (&local_84 != pCVar3) {
      local_84.x = pCVar3->x;
      local_84.y = pCVar3->y;
      local_84.z = pCVar3->z;
    }
  }
  if (hand_index == 0) {
    local_b4.y = (float)hand_index;
    local_b4.z = (float)hand_index;
    local_b4.x = -0.4;
    if (&local_e4 != &local_b4) {
      local_e4.x = -0.4;
      local_e4.y = 0.0;
      local_e4.z = 0.0;
    }
  }
  else if (hand_index == 1) {
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
            (&local_e4,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar7);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_a5c,&local_e4,&local_84);
  pfVar18 = local_a2c;
  pCVar6 = &local_a5c;
  pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_114,(CVector3f *)&local_180,&local_a5c);
  iVar7 = 0xc;
  local_a5c.m[0].z = local_a5c.m[0].z + (local_e4.x - pCVar5->x);
  local_a5c.m[1].z = local_a5c.m[1].z + (local_e4.y - pCVar5->y);
  local_a5c.m[2].z = local_a5c.m[2].z + (local_e4.z - pCVar5->z);
LAB_005c0946:
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar18 = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar13 * -2 + 1) * 4);
    pfVar18 = pfVar18 + (uint)bVar13 * -2 + 1;
  }
  pfVar7 = local_a2c;
  pCVar16 = output_matrix;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
    pCVar16->m[0].w = *pfVar7;
    pfVar7 = pfVar7;
    pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar13 * -2 + 1) * 4);
  }
  return output_matrix;
}
