// Name: core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0
// Address: 0050fba0
// Address Range: [[0050fba0, 00510525]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_0050fba0(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_0050fba0(CMimic *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  CHero *pCVar3;
  SMotion *pSVar4;
  EDeathState EVar5;
  uint uVar6;
  int iVar7;
  CMatrix3x4f *pCVar8;
  float *pfVar9;
  CMatrix3x4f *pCVar10;
  float *pfVar11;
  bool bVar12;
  byte bVar13;
  float afStackY_11d8 [961];
  CMimic *pCVar14;
  CVector3f *pCVar15;
  CLocation *target_pos;
  CDemonSet *this_ptr_00;
  float fVar16;
  CPathMap *path_map;
  EBloodType blood_type;
  CVector3f *start_pos;
  SDamageInfo *damage_info;
  CBoundingBox3D *in_stack_fffffd48;
  CMatrix3x4f local_280;
  CMatrix3x4f local_250;
  float local_220 [6];
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  CVector3f local_1f0;
  CVector3f local_1e4;
  float local_1d8;
  float local_1d4 [2];
  CVector3f local_1cc;
  float local_1c0;
  float afStack_1bc [2];
  CVector3f local_1b4;
  float local_1a8;
  float local_1a4 [2];
  CVector3f local_19c;
  float local_190;
  float local_18c [2];
  CVector3f local_184;
  CVector3f local_178;
  CVector3f local_16c;
  CVector3f local_160;
  float local_154;
  float local_150 [4];
  float local_140;
  CVector3f local_13c;
  CVector3f local_130;
  CVector3f local_124;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  float local_b8;
  float local_b4 [2];
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  float local_70;
  float local_6c [2];
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  double local_40;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  CMimic *local_20;
  uint local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  bVar13 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
            (&(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).model,0,&local_ac);
  pCVar15 = &local_16c;
  pCVar3 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
  local_16c.x = local_ac.x;
  *(uint *)((int)&local_16c + (uint)bVar13 * -8 + 4) =
       *(uint *)((int)&local_ac + (uint)bVar13 * -8 + 4);
  *(uint *)((int)&local_16c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
       *(uint *)((int)&local_ac + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)pCVar3,pCVar15,&local_1f0);
  pCVar3 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
  local_1e4.x = local_1f0.x;
  *(uint *)((int)&local_1e4 + (uint)bVar13 * -8 + 4) =
       *(uint *)((int)&local_1f0 + (uint)bVar13 * -8 + 4);
  *(uint *)((int)&local_1e4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
       *(uint *)((int)&local_1f0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
  local_1e4.y = (pCVar3->base).base.location.position.y;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
            ((CDemonActor *)this_ptr,&local_1e4,&local_10c);
  local_1c0 = local_10c.x;
  afStack_1bc[(uint)bVar13 * -2] = *(float *)((int)&local_10c + (uint)bVar13 * -8 + 4);
  afStack_1bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       *(float *)((int)&local_10c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
  local_d0.x = local_1c0;
  local_d0.y = 0.0;
  local_d0.z = afStack_1bc[1];
  local_20 = (CMimic *)&(this_ptr->base).base.model;
  local_24 = -1.0;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)local_20);
  uVar6 = pSVar4->state_index;
  if (uVar6 < 2) {
    if (uVar6 == 0) {
      EVar5 = (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uc)->_uc).
                getDeathState)(&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base);
      if (((EVar5 == DEATH_STATE_ALIVE) && (g_CGamePtr->freeze_enemies_enabled == 0)) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position.y) <=
          (float)15)) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_d0,&local_88);
        local_1a8 = local_88.x;
        local_1a4[(uint)bVar13 * -2] = *(float *)((int)&local_88 + (uint)bVar13 * -8 + 4);
        local_1a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             *(float *)((int)&local_88 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_1a4[0]);
        if (SQRT(local_d0.z * local_d0.z + local_d0.x * local_d0.x + local_d0.y * local_d0.y) <
            (1.0 - ABS(local_14) * (float)0.63661977238577705) * (float)25 +
            (float)30) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30
                    ((CDeformableModelInstance *)local_20,g_INT_ARRAY_01d22424[0],&local_250);
          local_100.z = 0.3;
          pCVar8 = &local_250;
          pCVar10 = &local_280;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            pCVar10->m[0].w = pCVar8->m[0].w;
            pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar13 * -2 + 1) * 4);
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
          }
          local_100.y = 0.7;
          local_100.x = 0.0;
          core_xform_cpp_transformVector3x4_FUN_005b5080(&local_100,&local_280,&local_184);
          pCVar15 = &local_130;
          local_130.x = local_184.x;
          *(uint *)((int)&local_130 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&local_184 + (uint)bVar13 * -8 + 4);
          *(uint *)((int)&local_130 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&local_184 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                    ((CDemonActor *)this_ptr,pCVar15,&local_a0);
          pCVar15 = &local_1e4;
          start_pos = &local_118;
          local_118.x = local_a0.x;
          *(uint *)((int)&local_118 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&local_a0 + (uint)bVar13 * -8 + 4);
          this_ptr_00 = g_CDemonSetPtr;
          *(uint *)((int)&local_118 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&local_a0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          iVar7 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0
                            (this_ptr_00,start_pos,pCVar15);
          if (iVar7 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)local_20,2,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_0050fccf;
    }
LAB_0050fc98:
    target_pos = (CLocation *)0x50fcb1;
    EVar5 = (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uc)->_uc).
              getDeathState)(&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base);
    if ((EVar5 != DEATH_STATE_ALIVE) || (g_CGamePtr->freeze_enemies_enabled != 0)) {
      path_map = (CPathMap *)0x0;
      goto LAB_0050fcc0;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
              (this_ptr->mirror_plane_actor,&(this_ptr->base).base.base.location.position,&local_160
              );
    local_150[2] = local_160.x;
    local_150[(uint)bVar13 * -2 + 3] = *(float *)((int)&local_160 + (uint)bVar13 * -8 + 4);
    local_150[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         *(float *)((int)&local_160 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,in_stack_fffffd48);
    pfVar9 = local_220;
    pfVar11 = &local_208;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
      pfVar11 = pfVar11 + (uint)bVar13 * -2 + 1;
    }
    local_b8 = local_1fc - local_208;
    local_b4[0] = local_1f8 - local_204;
    local_b4[1] = local_1f4 - local_200;
    local_154 = local_1fc - local_208;
    local_150[(uint)bVar13 * -2] = local_b4[(uint)bVar13 * -2];
    local_150[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         local_b4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    local_150[0] = 0.0;
    if (-local_140 <= SQRT(local_150[1] * local_150[1] + local_154 * local_154)) {
      pCVar1 = &(this_ptr->base).base.model;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar1->base,1)
      ;
      (this_ptr->base).base.walk_step_speed = local_14 * 4.242857f;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&pCVar1->base,2)
      ;
      fVar16 = (this_ptr->base).speed;
      fVar2 = (this_ptr->base).speed;
      (this_ptr->base).base.walk_step_speed =
           local_14 * 12.22222f + (this_ptr->base).base.walk_step_speed;
      (this_ptr->base).base.walk_step_speed =
           fVar16 * delta_time * (this_ptr->base).base.walk_step_speed;
      core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320
                ((CCharacter *)this_ptr,delta_time * fVar2);
      local_58.z = 2.5f;
      path_map = &g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->path_map;
      target_pos = &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location;
      local_58.x = 0.0;
      local_58.y = 0.0;
      pCVar14 = this_ptr;
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)this_ptr,&target_pos->position,path_map,&local_58,1.0,
                         0.17453292);
      if ((-1 < iVar7) && (0 < iVar7)) {
        core_mimic_cpp_CMimic_beginMorph_FUN_00510b00(this_ptr);
        goto LAB_0050fccf;
      }
      goto LAB_0050fcc7;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_00510b00(this_ptr);
  }
  else {
    if (uVar6 < 3) goto LAB_0050fc98;
    if (0xb < uVar6) {
      if (0xc < uVar6) {
        if (uVar6 != 0x13) goto LAB_0051029c;
        if ((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).grabbed_by == (CDemonActor *)0x0) {
          local_28 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020
                               ((CMotionController *)local_20);
          pCVar14 = local_20;
          local_40 = (double)local_28;
          local_14 = local_28;
          if (local_28 <= (float)2) {
            local_24 = 2.5f;
            if (1.0 <= local_40) {
              local_34 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
              local_14 = local_34;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                        ((CDeformableModelInstance *)pCVar14,g_INT_ARRAY_01d22424[8],&local_7c);
              local_64.x = local_7c.x;
              *(uint *)((int)&local_64 + (uint)bVar13 * -8 + 4) =
                   *(uint *)((int)&local_7c + (uint)bVar13 * -8 + 4);
              *(uint *)((int)&local_64 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                   *(uint *)((int)&local_7c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              local_64.x = -local_64.x;
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffd44);
              damage_info = (SDamageInfo *)&stack0xfffffd44;
              fVar16 = 0.2;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                        ((CDemonActor *)this_ptr,&local_64,&local_13c);
              pCVar15 = &local_94;
              local_94.x = local_13c.x;
              *(uint *)((int)&local_94 + (uint)bVar13 * -8 + 4) =
                   *(uint *)((int)&local_13c + (uint)bVar13 * -8 + 4);
              pCVar14 = this_ptr;
              *(uint *)((int)&local_94 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                   *(uint *)((int)&local_13c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              iVar7 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                                (&pCVar14->base,pCVar15,fVar16,damage_info);
              if (iVar7 != 0) {
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_0050fccf;
        }
        path_map = (CPathMap *)0x1;
        target_pos = (CLocation *)0x0;
        pCVar14 = local_20;
        goto LAB_0050fcc7;
      }
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  ((CDeformableModelInstance *)local_20,0,&local_dc);
        pCVar15 = &local_e8;
        local_e8.x = local_dc.x;
        *(uint *)((int)&local_e8 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&local_dc + (uint)bVar13 * -8 + 4);
        *(uint *)((int)&local_e8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             *(uint *)((int)&local_dc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar15,&local_c4);
        blood_type = BLOOD_TYPE_RED;
        local_f4.x = local_c4.x;
        *(uint *)((int)&local_f4 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&local_c4 + (uint)bVar13 * -8 + 4);
        *(uint *)((int)&local_f4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             *(uint *)((int)&local_c4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&local_f4,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      goto LAB_0050fccf;
    }
LAB_0051029c:
    path_map = (CPathMap *)0x1;
    target_pos = (CLocation *)0x2;
LAB_0050fcc0:
    pCVar14 = (CMimic *)&(this_ptr->base).base.model;
LAB_0050fcc7:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)pCVar14,(int)target_pos,(int)path_map);
  }
LAB_0050fccf:
  if (0.0 <= local_24) {
    fVar16 = (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = (this_ptr->base).speed * delta_time;
    core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320
              ((CCharacter *)this_ptr,delta_time * fVar16);
    local_4c.z = local_24;
    local_4c.x = 0.0;
    local_4c.y = 0.0;
    iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                      ((CCharacter *)this_ptr,
                       &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position,
                       &g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->path_map,&local_4c,3.0,0.5235988
                      );
    if (iVar7 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,2,1);
    }
  }
  local_18 = &(this_ptr->base).base.model;
  local_2c = delta_time * (this_ptr->base).speed;
  while (pCVar1 = local_18, 0.0 < local_2c) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270(&local_18->base,&local_2c);
    if (uVar6 != 0) {
      if (uVar6 < 2) {
        if ((this_ptr->base).base.is_on_ground != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (local_18,g_INT_ARRAY_01d22424[7],&local_1cc);
          local_124.x = local_1cc.x;
          *(uint *)((int)&local_124 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&local_1cc + (uint)bVar13 * -8 + 4);
          *(uint *)((int)&local_124 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               *(uint *)((int)&local_1cc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          local_124.x = -local_124.x;
          (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                    ((CDemonActor *)this_ptr,&local_124,1.0);
        }
      }
      else if ((uVar6 == 7) && ((this_ptr->base).base.is_on_ground != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (pCVar1,g_INT_ARRAY_01d22424[8],&local_19c);
        local_1b4.x = local_19c.x;
        *(uint *)((int)&local_1b4 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&local_19c + (uint)bVar13 * -8 + 4);
        *(uint *)((int)&local_1b4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             *(uint *)((int)&local_19c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        local_1b4.x = -local_1b4.x;
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&local_1b4,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&local_18->base);
  local_1c = pSVar4->state_index;
  if (((local_1c == 0xc) || (local_1c == 0)) &&
     ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) goto LAB_005104af;
  core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700((CCharacter *)this_ptr,delta_time);
  local_190 = (this_ptr->base).base.velocity.x * delta_time;
  local_18c[0] = (this_ptr->base).base.velocity.y * delta_time;
  local_18c[1] = (this_ptr->base).base.velocity.z * delta_time;
  local_70 = local_190;
  local_6c[(uint)bVar13 * -2] = local_18c[(uint)bVar13 * -2];
  local_6c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       local_18c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  local_1d8 = local_70 + (this_ptr->base).base.position_delta.x;
  local_1d4[0] = local_6c[0] + (this_ptr->base).base.position_delta.y;
  local_1d4[1] = local_6c[1] + (this_ptr->base).base.position_delta.z;
  local_178.x = local_1d8;
  *(float *)((int)&local_178 + (uint)bVar13 * -8 + 4) = local_1d4[(uint)bVar13 * -2];
  *(float *)((int)&local_178 + ((uint)bVar13 * -2 + (uint)bVar13 * -2) * 4 + 8) =
       local_1d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  if (local_1c < 3) {
    if (local_1c == 0) {
      bVar12 = true;
LAB_00510467:
      if (!bVar12) {
LAB_00510469:
        local_178.x = local_178.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_178.y = local_178.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_178.z = local_178.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
    }
  }
  else if (3 < local_1c) {
    if (local_1c < 0x11) {
      bVar12 = local_1c == 0x10;
      goto LAB_00510467;
    }
    if (0x11 < local_1c) {
      if (local_1c < 0x14) goto LAB_00510469;
      if (0x14 < local_1c) {
        bVar12 = local_1c == 0x15;
        goto LAB_00510467;
      }
    }
  }
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&local_178);
LAB_005104af:
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(pCVar1);
  core_cloth_cpp_CCloth_process_FUN_00440610
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar1);
  return;
}
