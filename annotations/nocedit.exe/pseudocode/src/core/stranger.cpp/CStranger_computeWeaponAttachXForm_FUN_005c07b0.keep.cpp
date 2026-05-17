// Name: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
// Address: 005c07b0
// MANUAL RECONSTRUCTION
// Address Range: [[005c07b0, 005c165b] [03fc0000, 03fc0731] [03fc590a, 03fc595f] [03fc5a97, 03fc5ae9]]
// Convention: __stack3_esi
// Signature: CMatrix3x4f * __stack3_esi core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0(CStranger *this_ptr,CDemonActor *carried_actor,int hand_index,CMatrix3x4f *output_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack3_esi core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0(CStranger *this_ptr,CDemonActor *carried_actor,int hand_index,CMatrix3x4f *output_matrix)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  CLightActor *pCVar2;
  int iVar12;
  CVector3f *pCVar3;
  CVector3f *pCVar13;
  CVector3f *pCVar4;
  float fVar14;
  CMatrix3x4f *pCVar15;
  CMatrix3x4f local_d5c;
  CMatrix3x4f local_d2c;
  CMatrix3x4f local_cfc;
  CMatrix3x4f local_ccc;
  CMatrix3x4f local_c3c;
  CMatrix3x4f local_c0c;
  CMatrix3x4f local_bdc;
  CMatrix3x4f local_bac;
  CMatrix3x4f local_b7c;
  CMatrix3x4f local_b4c;
  CMatrix3x4f local_b1c;
  CMatrix3x4f local_aec;
  CMatrix3x4f local_a8c;
  CMatrix3x4f local_a5c;
  CMatrix3x4f local_9fc;
  CMatrix3x4f local_9cc;
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
  CMatrix3x4f local_6cc;
  CMatrix3x4f local_66c;
  CMatrix3x4f local_63c;
  CMatrix3x4f local_60c;
  CMatrix3x4f local_5dc;
  CMatrix3x4f local_5ac;
  CMatrix3x4f local_57c;
  CMatrix3x4f local_54c;
  CMatrix3x4f local_51c;
  CMatrix3x4f local_48c;
  CMatrix3x4f local_45c;
  CMatrix3x4f local_42c;
  CMatrix3x4f local_3fc;
  CMatrix3x4f local_3cc;
  CMatrix3x4f local_39c;
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
  CVector3f local_18c;
  CWeapon *local_180_weapon;
  CVector3f local_180;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  CVector3f local_12c;
  CVector3f local_120;
  CVector3f local_114;
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
  ELightActorType EVar1;

  iVar1 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  local_180_weapon = (CWeapon *)
              core_actor_cpp_castToClassHash_FUN_0040c790
                        (carried_actor,g_CWeaponClassInfo.name_hash);
  if (local_180_weapon != (CWeapon *)0x0) {
    iVar12 = local_180_weapon->weapon_type;
    pCVar15 = (this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar1;
    if (iVar12 == 1) {
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
      fVar11 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                         ((CCharacter *)this_ptr,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_87c,&local_6cc,1.0 - fVar11,&local_51c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_a8c,pCVar15,&local_3fc);
      pCVar15 = &local_3fc;
    }
    else if (iVar12 == 2) {
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
      fVar11 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                         ((CCharacter *)this_ptr,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_3cc,&local_ccc,1.0 - fVar11,&local_7bc);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b1c,pCVar15,&local_9fc);
      pCVar15 = &local_9fc;
    }
    else if (iVar12 == 4) {
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
      fVar11 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                         ((CCharacter *)this_ptr,3);
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_27c,&local_81c,1.0 - fVar11,&local_5dc);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_63c,pCVar15,&local_57c);
      pCVar15 = &local_57c;
    }
    else if (iVar12 == 3) {
      local_c0.x = 0.238337;
      local_24.x = -0.743729;
      local_c0.y = -0.0656786;
      local_c0.z = 0.0335054;
      local_24.z = -0.808348;
      local_24.y = 0.693486;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_7ec,&local_c0,&local_24);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_7ec,pCVar15,&local_8dc);
      pCVar15 = &local_8dc;
    }
    else if (iVar12 == 5) {
      local_174.x = 0.62;
      local_168.z = -1.57;
      local_174.y = 0.0;
      local_174.z = 0.217;
      local_168.x = 0.0;
      local_168.y = 1.57;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_33c,&local_174,&local_168);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_33c,pCVar15,&local_c3c);
      pCVar15 = &local_c3c;
    }
    else if (iVar12 == 7) {
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
      fVar11 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                         ((CCharacter *)this_ptr,0);
      core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_c0c,&local_bdc,1.0 - fVar11,&local_54c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_8ac,pCVar15,&local_78c);
      pCVar15 = &local_78c;
    }
    else if (hand_index == 0) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_75c,&CVector3f_03f6babc,&g_ZeroVector.f);
      core_xform_cpp_buildRotationX_FUN_005f6c40(1.5707964,&local_66c);
      core_xform_cpp_buildRotationY_FUN_005f6cc0(-1.5707964,&local_bac);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_bac,&local_66c,&local_b7c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b7c,&local_75c,&local_b4c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b4c,pCVar15,&local_5ac);
      pCVar15 = &local_5ac;
    }
    else {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_aec,&CVector3f_03f6bab0,&g_ZeroVector.f);
      core_xform_cpp_buildRotationX_FUN_005f6c40(1.5707964,&local_72c);
      core_xform_cpp_buildRotationY_FUN_005f6cc0(1.5707964,&local_60c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_60c,&local_72c,&local_42c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_42c,&local_aec,&local_39c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_39c,pCVar15,&local_24c);
      pCVar15 = &local_24c;
    }
    goto LAB_005c0946;
  }
  local_180.x = 0.0f;
  local_180.y = 0.0f;
  local_180.z = 0.0f;
  local_84.x = 0.0f;
  local_84.y = 0.0f;
  local_84.z = 0.0f;
  if ((this_ptr->base).base.layer_action_index == 0xe) {
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_d8,&g_ZeroVector.f,
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                         g_StrangerIndices[0xe]);
    pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_90,&g_ZeroVector.f,
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                        g_StrangerIndices[0xd]);
    fVar11 = (pCVar4->x + pCVar13->x) * 0.5f;
    fVar2 = (pCVar4->y + pCVar13->y) * 0.5f;
    fVar3 = (pCVar4->z + pCVar13->z) * 0.5f;
    (*((carried_actor->vtable)._ub)->getBoundingBox)(carried_actor,&local_204);
    fVar3 = fVar3 + 0.333f;
    fVar14 = core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005bb010(carried_actor);
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_2ac);
    local_2ac.m[0].z = fVar11;
    local_2ac.m[1].z = fVar14 + (fVar2 - (local_204.max.y - local_204.min.y));
    local_2ac.m[2].z = fVar3;
    if (this_ptr->pickup_facing_reversed != 0) {
      pCVar15 = &local_2ac;
      core_xform_cpp_buildRotationY_FUN_005f6cc0(3.1415927,&local_93c);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_96c,pCVar15,&local_90c);
      local_2ac = local_90c;
    }
    pCVar15 = &local_2ac;
    goto LAB_005c0946;
  }
  pCVar2 = (CLightActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (carried_actor,g_CLightActorClassInfo.name_hash);
  if (pCVar2 != (CLightActor *)0x0) {
    (*((carried_actor->vtable)._ub)->getBoundingBox)(carried_actor,&local_21c);
    local_150.x = (local_21c.min.x + local_21c.max.x) * 0.5f;
    local_150.y = (local_21c.min.y + local_21c.max.y) * 0.5f;
    local_150.z = (local_21c.min.z + local_21c.max.z) * 0.5f;
    if (&local_180 != &local_150) {
      local_180.x = local_150.x;
      local_180.y = local_150.y;
      local_180.z = local_150.z;
    }
    EVar1 = pCVar2->light_actor_type;
    if (EVar1 != LIGHT_TYPE_LANTERN) {
      if (EVar1 == LIGHT_TYPE_FLASHLIGHT) {
        if (hand_index == 0) {
          core_xform_cpp_buildRotationY_FUN_005f6cc0(-1.5707964,&local_30c);
          pCVar15 = &local_30c;
LAB_005c1504:
          local_45c = *pCVar15;
        }
        else {
          if (hand_index == 1) {
            core_xform_cpp_buildRotationY_FUN_005f6cc0(1.5707964,&local_2dc);
            pCVar15 = &local_2dc;
            goto LAB_005c1504;
          }
          core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&local_45c);
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&local_45c,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar1
                   ,&local_48c);
        pCVar13 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                            (&local_45c,&local_3c);
        if (&local_84 != pCVar13) {
          local_84.x = pCVar13->x;
          local_84.y = pCVar13->y;
          local_84.z = pCVar13->z;
        }
        local_180.z =
                      (local_21c.max.z * (float)0.29999999999999999 +
                      local_21c.min.z * (float)0.69999999999999996);
        goto LAB_005c10ab;
      }
      if (EVar1 != LIGHT_TYPE_GLOBE) {
        g_CurrentFilename = "..\\core\\stranger.cpp";
        g_CurrentLineNumber = 0xc4d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s",pCVar2->base.base.actor_name);
        goto LAB_005c10ab;
      }
    }
    local_180.y = local_21c.max.y;
  }
LAB_005c10ab:
  iVar12 = (*((carried_actor->vtable)._ub)->getAllowedMeleeAttackTypes)(carried_actor);
  if (iVar12 != 0) {
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
    pCVar15 = (this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar1;
    fVar11 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                       ((CCharacter *)this_ptr,0);
    core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_d2c,&local_cfc,1.0 - fVar11,&local_84c);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_99c,pCVar15,&local_d5c);
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
            (&local_e4,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar1);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_a5c,&local_e4,&local_84);
  pCVar15 = &local_a5c;
  pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                      (&local_114,(CVector3f *)&local_180,&local_a5c);
  local_a5c.m[0].z = local_a5c.m[0].z + (local_e4.x - pCVar13->x);
  local_a5c.m[1].z = local_a5c.m[1].z + (local_e4.y - pCVar13->y);
  local_a5c.m[2].z = local_a5c.m[2].z + (local_e4.z - pCVar13->z);
LAB_005c0946:
  fVar11 = pCVar15->m[0].x;
  fVar2 = pCVar15->m[0].y;
  fVar3 = pCVar15->m[0].z;
  fVar14 = pCVar15->m[1].w;
  fVar4 = pCVar15->m[1].x;
  fVar5 = pCVar15->m[1].y;
  fVar6 = pCVar15->m[1].z;
  fVar7 = pCVar15->m[2].w;
  fVar8 = pCVar15->m[2].x;
  fVar9 = pCVar15->m[2].y;
  fVar10 = pCVar15->m[2].z;
  output_matrix->m[0].w = pCVar15->m[0].w;
  output_matrix->m[0].x = fVar11;
  output_matrix->m[0].y = fVar2;
  output_matrix->m[0].z = fVar3;
  output_matrix->m[1].w = fVar14;
  output_matrix->m[1].x = fVar4;
  output_matrix->m[1].y = fVar5;
  output_matrix->m[1].z = fVar6;
  output_matrix->m[2].w = fVar7;
  output_matrix->m[2].x = fVar8;
  output_matrix->m[2].y = fVar9;
  output_matrix->m[2].z = fVar10;
  return output_matrix;
}
