// Name: core_mimic.cpp_CMimic_processAnimation_FUN_004d4f30
// Address: 004d4f30
// Address Range: [[004d4f30, 004d5768]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_004d4f30(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_processAnimation_FUN_004d4f30(CMimic *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  SMotion *pSVar5;
  EDeathState EVar6;
  uint uVar7;
  CBoundingBox3D *pCVar8;
  CMatrix3x4f *pCVar9;
  CMatrix3x4f *pCVar10;
  bool bVar11;
  byte bVar12;
  CDeformableModelInstance *pCVar13;
  int iVar14;
  float fVar15;
  SDamageInfo *damage_info;
  SDamageInfo local_1e4;
  CMatrix3x4f local_1a8;
  CMatrix3x4f local_178;
  CBoundingBox3D local_148;
  CVector3f local_130;
  CVector3f local_124;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  float local_dc;
  uint local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  double local_38;
  float local_2c [2];
  float local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  bVar12 = 0;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (&(g_HeroActors[g_LocalHeroIndex]->base).model,&local_10c,0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_94,pCVar4);
  local_94.y = (g_HeroActors[g_LocalHeroIndex]->base).base.location.position.y;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            ((CDemonActor *)this_ptr,&local_88,&local_94);
  local_1c = -1.0;
  local_70.x = local_88.x;
  local_70.z = local_88.z;
  local_18 = &(this_ptr->base).base.model;
  local_70.y = 0.0;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&local_18->motion_controller);
  uVar7 = pSVar5->state_index;
  if (uVar7 < 2) {
    if (uVar7 == 0) {
      EVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                        (&g_HeroActors[g_LocalHeroIndex]->base);
      if (((EVar6 == DEATH_STATE_ALIVE) && (g_CGame_PTR_005b9354->freeze_enemies_enabled == 0)) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              (g_HeroActors[g_LocalHeroIndex]->base).base.location.position.y) <=
          (float)15)) {
        pCVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                           (&local_58,&local_70);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar4->y);
        if (SQRT(local_70.z * local_70.z + local_70.x * local_70.x + local_70.y * local_70.y) <
            (1.0 - ABS(local_14) * (float)0.63661977238577705) * (float)25 +
            (float)30) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
                    (local_18,_DAT_01cc9094,&local_1a8);
          local_4c.y = 0.7;
          pCVar9 = &local_1a8;
          pCVar10 = &local_178;
          for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
            pCVar10->m[0].w = pCVar9->m[0].w;
            pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
            pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
          }
          local_4c.z = 0.3;
          local_4c.x = 0.0;
          pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_b8,&local_4c,&local_178);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)this_ptr,&local_f4,pCVar4);
          iVar14 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
                             (g_CDemonSet_PTR_005be368,&local_f4,&local_94);
          if (iVar14 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&local_18->motion_controller,2,1);
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_004d5024;
    }
LAB_004d4fed:
    EVar6 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                      (&g_HeroActors[g_LocalHeroIndex]->base);
    if ((EVar6 != DEATH_STATE_ALIVE) || (g_CGame_PTR_005b9354->freeze_enemies_enabled != 0)) {
      iVar14 = 0;
      goto LAB_004d5015;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
              (this_ptr->mirror_plane_actor,&local_118,&(this_ptr->base).base.base.location.position
              );
    pCVar8 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                       ((CDemonActor *)this_ptr,&local_148);
    local_dc = (pCVar8->max).x - (pCVar8->min).x;
    local_d4 = (pCVar8->max).z - (pCVar8->min).z;
    local_d8 = 0;
    if (-local_118.z <= SQRT(local_d4 * local_d4 + local_dc * local_dc)) {
      pCVar13 = &(this_ptr->base).base.model;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                           (&pCVar13->motion_controller,1);
      (this_ptr->base).base.walk_step_speed = local_14 * 4.242857f;
      local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                           (&pCVar13->motion_controller,2);
      fVar15 = (this_ptr->base).speed;
      fVar1 = (this_ptr->base).speed;
      fVar3 = (float)1.57079632675;
      (this_ptr->base).base.walk_step_speed =
           local_14 * 12.22222f + (this_ptr->base).base.walk_step_speed;
      local_e8.z = 2.5f;
      fVar2 = (this_ptr->base).base.walk_step_speed;
      (this_ptr->base).base.turn_speed = delta_time * fVar3 * fVar1;
      (this_ptr->base).base.walk_step_speed = fVar15 * delta_time * fVar2;
      local_e8.x = 0.0;
      local_e8.y = 0.0;
      iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                         ((CCharacter *)this_ptr,
                          &(g_HeroActors[g_LocalHeroIndex]->base).base.location.position,
                          &g_HeroActors[g_LocalHeroIndex]->path_map,&local_e8,1.0,0.17453292);
      if (iVar14 < 0) {
        iVar14 = 0;
      }
      else {
        if (0 < iVar14) {
          core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(this_ptr);
          goto LAB_004d5024;
        }
        if (ABS((this_ptr->base).base.turn_angle_accumulator) /
            (delta_time * (this_ptr->base).speed) <= (float)0.78539816337500001) {
          iVar14 = 2;
        }
        else {
          iVar14 = 1;
        }
      }
      goto LAB_004d501c;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(this_ptr);
  }
  else {
    if (uVar7 < 3) goto LAB_004d4fed;
    if (0xb < uVar7) {
      if (0xc < uVar7) {
        if (uVar7 != 0x13) goto LAB_004d5527;
        if ((g_HeroActors[g_LocalHeroIndex]->base).grabbed_by == (CDemonActor *)0x0) {
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                               (&local_18->motion_controller);
          local_38 = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)2) {
            local_1c = 2.5f;
            if (1.0 <= local_38) {
              local_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
              local_14 = local_24;
              core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                        (local_18,&local_ac,_DAT_01cc90b4);
              local_ac.x._3_1_ = local_ac.x._3_1_ ^ 0x80;
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_1e4);
              local_1e4.damage_amount = local_24;
              damage_info = &local_1e4;
              fVar15 = 0.2;
              local_1e4.attacker = (CDemonActor *)this_ptr;
              local_1e4.wielder = (CDemonActor *)this_ptr;
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                 ((CDemonActor *)this_ptr,&local_130,&local_ac);
              iVar14 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                                 (&this_ptr->base,pCVar4,fVar15,damage_info);
              if (iVar14 != 0) {
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_004d5024;
        }
        iVar14 = 0;
        pCVar13 = local_18;
        goto LAB_004d501c;
      }
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (local_18,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_7c,pCVar4);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_7c,0);
        (this_ptr->base).pool_me = 1;
      }
      goto LAB_004d5024;
    }
LAB_004d5527:
    iVar14 = 2;
LAB_004d5015:
    pCVar13 = &(this_ptr->base).base.model;
LAB_004d501c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&pCVar13->motion_controller,iVar14,1);
  }
LAB_004d5024:
  if (0.0 <= local_1c) {
    fVar15 = (this_ptr->base).speed;
    fVar1 = (float)3.1415926535000001;
    (this_ptr->base).base.walk_step_speed = fVar15 * delta_time;
    (this_ptr->base).base.turn_speed = delta_time * fVar1 * fVar15;
    local_64.z = local_1c;
    local_64.x = 0.0;
    local_64.y = 0.0;
    iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                       ((CCharacter *)this_ptr,
                        &(g_HeroActors[g_LocalHeroIndex]->base).base.location.position,
                        &g_HeroActors[g_LocalHeroIndex]->path_map,&local_64,3.0,0.5235988);
    if (iVar14 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,2,1);
    }
  }
  local_2c[0] = delta_time * (this_ptr->base).speed;
  pCVar13 = &(this_ptr->base).base.model;
  while (0.0 < local_2c[0]) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar13->motion_controller,local_2c);
    if (uVar7 != 0) {
      if (uVar7 < 2) {
        if ((this_ptr->base).base.is_on_ground != 0) {
          core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                    (pCVar13,&local_c4,_DAT_01cc90b0);
          local_c4.x._3_1_ = local_c4.x._3_1_ ^ 0x80;
          (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                    ((CDemonActor *)this_ptr,&local_c4,1.0);
        }
      }
      else if ((uVar7 == 7) && ((this_ptr->base).base.is_on_ground != 0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (pCVar13,&local_100,_DAT_01cc90b4);
        local_100.x._3_1_ = local_100.x._3_1_ ^ 0x80;
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&local_100,1.0);
      }
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar13->motion_controller);
  uVar7 = pSVar5->state_index;
  if (((uVar7 == 0xc) || (uVar7 == 0)) &&
     ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) goto LAB_004d56f2;
  (this_ptr->base).base.velocity.y =
       (this_ptr->base).base.velocity.y - delta_time * (float)32;
  local_d0 = (this_ptr->base).base.velocity.x * delta_time;
  local_cc = (this_ptr->base).base.velocity.y * delta_time;
  local_c8 = delta_time * (this_ptr->base).base.velocity.z;
  local_124.x = local_d0 + (this_ptr->base).base.position_delta.x;
  local_124.y = local_cc + (this_ptr->base).base.position_delta.y;
  local_124.z = local_c8 + (this_ptr->base).base.position_delta.z;
  if (uVar7 < 3) {
    if (uVar7 == 0) {
      bVar11 = true;
LAB_004d56aa:
      if (!bVar11) {
LAB_004d56ac:
        local_124.x = local_124.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        local_124.y = local_124.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        local_124.z = local_124.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
    }
  }
  else if (3 < uVar7) {
    if (uVar7 < 0x11) {
      bVar11 = uVar7 == 0x10;
      goto LAB_004d56aa;
    }
    if (0x11 < uVar7) {
      if (uVar7 < 0x14) goto LAB_004d56ac;
      if (0x14 < uVar7) {
        bVar11 = uVar7 == 0x15;
        goto LAB_004d56aa;
      }
    }
  }
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_124);
LAB_004d56f2:
  pCVar13 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar13);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(pCVar13);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,pCVar13);
  return;
}
