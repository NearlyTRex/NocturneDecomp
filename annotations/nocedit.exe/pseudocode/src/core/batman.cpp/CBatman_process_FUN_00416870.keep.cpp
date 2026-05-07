// Name: core_batman.cpp_CBatman_process_FUN_00416870
// Address: 00416870
// MANUAL RECONSTRUCTION
// Address Range: [[00416870, 004173ab]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar6;
  float fVar7;
  CCharacter *pCVar8;
  float fVar9;
  float fVar10;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  EDeathState EVar9;
  UOrientationVector *pUVar11;
  CVector3f *pCVar10;
  uint uVar11;
  CVector3f *pCVar14;
  CBatman *pCVar13;
  CPathMap *path_map;
  uint uVar15;
  CLocation *pCVar12;
  int iVar17;
  SDamageInfo local_188;
  CVector3f local_14c;
  CVector3f local_134;
  CVector3f local_128;
  CVector3f local_11c;
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  CSkeleton *local_24;
  CSkeleton *local_20;
  int local_18;
  float local_14;
  CDemonActor_vtable *pCVar4;
  CVector3f *pCVar3;
  CBatman *this_ptr_00;
  SDamageInfo *damage_info;
  float max_distance;
  float fVar13;
  float fVar14;
  UOrientationVector *pUVar1;
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
  local_3c = delta_time * (this_ptr->base).speed;
  while (0.0 < local_3c) {
    iVar17 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&(this_ptr->base).base.model.motion_controller,&local_3c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar17);
  }
  fVar7 = (this_ptr->base).speed;
  fVar9 = (float)3.1415926535000001;
  pCVar6 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar9 * fVar7;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar6->motion_controller);
  iVar17 = pSVar7->state_index;
  local_28 = iVar17;
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar17) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar17 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar17 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar6->motion_controller,1,1);
        }
      }
      else {
        iVar17 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if ((iVar17 != 0) &&
           (iVar17 = core_actor_cpp_isOfClass_FUN_0040c6d0
                               (&((this_ptr->base).victim)->base,"CHero"), iVar17 != 0)) {
          iVar17 = 0;
          while ((iVar17 < g_CDemonSetPtr->enemy_count &&
                 ((pCVar13 = (CBatman *)
                             core_actor_cpp_castToClassHash_FUN_0040c790
                                       ((CDemonActor *)g_CDemonSetPtr->enemies[iVar17],
                                        g_CBatmanClassInfo.name_hash), pCVar13 == (CBatman *)0x0 ||
                  (pCVar13->mist_state == 0))))) {
            iVar17 = iVar17 + 1;
          }
          if (iVar17 == g_CDemonSetPtr->enemy_count) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0xd,1);
            pCVar8 = (this_ptr->base).victim;
            pCVar12 = &(pCVar8->base).location;
            this_ptr->mist_state = 1;
            if ((CLocation *)&this_ptr->new_pos != pCVar12) {
              (this_ptr->new_pos).x = (pCVar12->position).x;
              (this_ptr->new_pos).y = (pCVar8->base).location.position.y;
              (this_ptr->new_pos).z = (pCVar8->base).location.position.z;
            }
            pCVar4 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->vanish_timer = 0.0;
            local_28 = 0xd;
            (*pCVar4->playSound)((CDemonActor *)this_ptr,"batman-disappear.wav");
            break;
          }
        }
        pCVar8 = (this_ptr->base).victim;
        local_c8.x = (pCVar8->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        local_c8.y = (pCVar8->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        local_c8.z = (pCVar8->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        if (SQRT(local_c8.z * local_c8.z + local_c8.x * local_c8.x + local_c8.y * local_c8.y) <
            3.5f) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_80,&local_c8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_80.y - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(local_14) < (float)0.52359877558333301) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,3,1);
          }
        }
        core_batman_cpp_CBatman_pickRandomMovementState_FUN_004167f0(this_ptr);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar7 = 3.5f;
      pCVar6 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar17 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar17 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar6->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar6->motion_controller,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        local_2c = 3.5f;
        fVar14 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
        (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
        local_110.x = 0.0;
        local_110.z = fVar7;
        pCVar14 = &local_110;
        local_110.y = 0.0;
        pCVar8 = (this_ptr->base).victim;
        path_map = (*((pCVar8->base).vtable._ub)->getPathMap)(&pCVar8->base);
        iVar17 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                           ((CCharacter *)this_ptr,
                            &(((this_ptr->base).victim)->base).location.position,path_map,pCVar14,
                            fVar14,max_distance);
        if (-1 < iVar17) {
          pCVar1 = &(this_ptr->base).base.base.location;
          pCVar8 = (this_ptr->base).victim;
          fVar7 = (pCVar1->position).x - (pCVar8->base).location.position.x;
          fVar9 = (this_ptr->base).base.base.location.position.z -
                  (pCVar8->base).location.position.z;
          local_38 = SQRT(fVar9 * fVar9 + fVar7 * fVar7);
          local_34 = local_38;
          if ((local_38 <= local_2c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar8 = (this_ptr->base).victim;
            local_5c.x = (pCVar8->base).location.position.x - (pCVar1->position).x;
            local_5c.y = (pCVar8->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_5c.z = (pCVar8->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_98,&local_5c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_98.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar6->motion_controller,3,1);
              uVar15 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar17 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar15);
              if ((iVar17 == 0) &&
                 (iVar17 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[2]),
                 iVar17 == 0)) {
                uVar15 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar15;
              }
            }
          }
          if ((this_ptr->base).guard_distance < local_34) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_188);
      local_188.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
      damage_info = &local_188;
      local_188.attacker = (CDemonActor *)this_ptr;
      local_188.wielder = (CDemonActor *)this_ptr;
      fVar13 = 0.4;
      local_14 = local_188.damage_amount;
      pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_104,&g_ZeroVector.f,
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                           g_BatmanIndices[2]);
      pCVar14 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_f8,pCVar14);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                (&this_ptr->base,pCVar14,fVar13,damage_info);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar6,&local_ec,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_74,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_74,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if (((this_ptr->base).victim != (CCharacter *)0x0) ||
         (iVar17 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                             (g_CEventListPtr,this_ptr->fall_event), iVar17 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xb,1);
        iVar17 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
        if ((iVar17 == 0) &&
           ((iVar17 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[2]),
            iVar17 == 0 &&
            (iVar17 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]),
            iVar17 == 0)))) {
          uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"batman-alert.wav");
          this_ptr->sfx_handles[0] = uVar11;
        }
      }
      break;
    case 0xb:
      if ((this_ptr->base).base.base.location.position.y <
          (this_ptr->base).base.closest_distance_threshold + 1.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar6->motion_controller,0xc,1);
      }
      break;
    case 0xd:
      switch(this_ptr->mist_state) {
      case 0:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar6->motion_controller,0,1);
        break;
      case 1:
        fVar7 = this_ptr->vanish_timer + delta_time;
        this_ptr->vanish_timer = fVar7;
        if (1.0f < fVar7) {
          this_ptr->mist_state = 2;
          this_ptr->vanish_timer = 1.0f;
        }
        pCVar6 = &(this_ptr->base).base.model;
        iVar17 = 0;
        local_bc.x = 0.0;
        local_bc.y = 3.0;
        local_bc.z = 0.0;
        local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar6);
        if (0 < local_20->bone_count) {
          do {
            pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                                (pCVar6,&local_11c,iVar17);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_14c,pCVar14);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                      (g_CFireEffectPtr,&local_14c,0.5,&local_bc,0xffff);
            iVar17 = iVar17 + 1;
          } while (iVar17 < local_20->bone_count);
        }
        break;
      case 2:
        local_30 = 1;
        for (local_18 = 0; fVar7 = 1.0f, local_18 < g_CDemonSetPtr->character_count;
            local_18 = local_18 + 1) {
          this_ptr_00 = (CBatman *)g_CDemonSetPtr->characters[local_18];
          if ((((this_ptr_00 != (CBatman *)0x0) && (this_ptr_00 != this_ptr)) &&
              (EVar9 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).getDeathState)
                                 ((CCharacter *)this_ptr_00), (int)EVar9 < 1)) &&
             (fVar7 = (this_ptr_00->base).base.base.location.position.x - (this_ptr->new_pos).x,
             fVar9 = (this_ptr_00->base).base.base.location.position.y - (this_ptr->new_pos).y,
             fVar10 = (this_ptr_00->base).base.base.location.position.z - (this_ptr->new_pos).z,
             SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9) < (float)5))
          goto switchD_004173a5_caseD_4;
        }
        if (local_30 != 0) {
          this_ptr->mist_state = 3;
          pCVar1 = &(this_ptr->base).base.base.location;
          this_ptr->vanish_timer = fVar7;
          (pCVar1->position).x = (this_ptr->new_pos).x;
          (this_ptr->base).base.base.location.position.y = (this_ptr->new_pos).y;
          (this_ptr->base).base.base.location.position.z = (this_ptr->new_pos).z;
          pCVar8 = (this_ptr->base).victim;
          if (pCVar8 != (CCharacter *)0x0) {
            local_a4.x = (pCVar8->base).location.position.x - (pCVar1->position).x;
            local_a4.y = (pCVar8->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_a4.z = (pCVar8->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            pUVar1 = &(this_ptr->base).base.base.orient;
            pUVar11 = (UOrientationVector *)
                      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&local_b0,&local_a4);
            if (pUVar1 != pUVar11) {
              (pUVar1->vec).x = (pUVar11->vec).x;
              (this_ptr->base).base.base.orient.vec.y = (pUVar11->vec).y;
              (this_ptr->base).base.base.orient.vec.z = (pUVar11->vec).z;
            }
            (this_ptr->base).base.base.orient.vec.z = 0.0;
            (this_ptr->base).base.base.orient.vec.x = 0.0;
          }
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"batman-disappear.wav");
        }
        break;
      case 3:
        iVar17 = 0;
        local_68.x = 0.0;
        local_68.y = 3.0;
        local_68.z = 0.0;
        local_24 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar6);
        if (0 < local_24->bone_count) {
          do {
            pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                                (pCVar6,&local_128,iVar17);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_134,pCVar14);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                      (g_CFireEffectPtr,&local_134,0.5,&local_68,0xffff);
            iVar17 = iVar17 + 1;
          } while (iVar17 < local_24->bone_count);
        }
        fVar7 = this_ptr->vanish_timer - delta_time;
        this_ptr->vanish_timer = fVar7;
        if (fVar7 < 0.0) {
          this_ptr->vanish_timer = 0.0;
          this_ptr->mist_state = 0;
          core_batman_cpp_CBatman_pickRandomMovementState_FUN_004167f0(this_ptr);
        }
      }
    }
    goto switchD_004173a5_caseD_4;
  }
  uVar15 = (this_ptr->base).base.is_walking;
  if (uVar15 < 2) {
    if (uVar15 == 1) {
LAB_00416943:
      iVar17 = 1;
    }
    else {
LAB_00416b03:
      iVar17 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar17,1);
  }
  else {
    if (uVar15 < 3) goto LAB_00416943;
    if (uVar15 != 3) goto LAB_00416b03;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr->base.base.base.actor_name);
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
switchD_004173a5_caseD_4:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar17 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar17 != 0) && (local_28 != 9)) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar14 = &(this_ptr->base).base.position_delta;
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_d4.x = (this_ptr->base).base.velocity.x * delta_time + pCVar14->x + pCVar3->x;
    local_d4.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_d4.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.x = 0.0f;
    (this_ptr->base).base.position_delta.y = 0.0f;
    (this_ptr->base).base.position_delta.z = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_d4);
  }
  if (local_28 != 0xd) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
