// Name: core_hotdemon.cpp_CHotDemon_process_FUN_004f6f20
// Address: 004f6f20
// Address Range: [[004f6f20, 004f765a]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004f6f20(CHotDemon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004f6f20(CHotDemon *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar4;
  float fVar5;
  EWalkState EVar6;
  CCharacter *pCVar8;
  float fVar11;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar12;
  uint uVar13;
  int iVar14;
  CPathMap *path_map;
  uint uVar8;
  int iVar15;
  SDamageInfo local_10c;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  float local_94;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  float fVar10;
  SDamageInfo *damage_info;
  float max_distance;
  float fVar9;
  CCharacter *pCVar3;
  
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_00429870
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c = delta_time * (this_ptr->base).speed;
  pCVar4 = &(this_ptr->base).base.model;
  while (0.0 < local_2c) {
    iVar15 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar4->base,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar15);
  }
  fVar5 = (this_ptr->base).speed;
  fVar11 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar11 * fVar5;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(&pCVar4->base);
  iVar15 = pSVar5->state_index;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 != 0) {
    EVar6 = (this_ptr->base).base.walk_state;
    if (EVar6 < 2) {
      if (EVar6 == WALK_STATE_WALKING) {
LAB_004f6fec:
        iVar15 = 1;
      }
      else {
LAB_004f7178:
        iVar15 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.base,iVar15,1);
    }
    else {
      if (EVar6 < WALK_STATE_NO_PATH) goto LAB_004f6fec;
      if (EVar6 != WALK_STATE_NO_PATH) goto LAB_004f7178;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto switchD_004f7654_caseD_e;
  }
  switch(iVar15) {
  case 0:
  case 6:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar8 = (this_ptr->base).victim;
    if (pCVar8 != (CCharacter *)0x0) {
      local_c4.x = (pCVar8->base).location.position.x -
                   (this_ptr->base).base.base.location.position.x;
      local_c4.y = (pCVar8->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
      local_c4.z = (pCVar8->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
      local_28 = SQRT(local_c4.z * local_c4.z + local_c4.x * local_c4.x + local_c4.y * local_c4.y);
      local_24 = local_28;
      if (local_28 < 2.0f) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_40,&local_c4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_40.y - (this_ptr->base).base.base.orient.vec.y);
        if (ABS(local_14) < (float)0.52359877558333301) {
          if (iVar15 == 0) {
            iVar15 = 2;
          }
          else {
            iVar15 = 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.base,iVar15,1);
          iVar15 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
          if (iVar15 == 0) {
            uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
            this_ptr->sfx_handles[0] = uVar13;
          }
        }
      }
      if (local_24 < (this_ptr->base).guard_distance) {
        pCVar4 = &(this_ptr->base).base.model;
        if (10.0f <= local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->base,7,1);
          (this_ptr->base).attack_cooldown = 0.0;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->base,1,1);
          (this_ptr->base).attack_cooldown = 0.0;
        }
      }
      break;
    }
    iVar15 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
    if (iVar15 == 0) break;
    goto LAB_004f73d5;
  case 1:
  case 7:
  case 0xf:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    fVar5 = 2.0f;
    pCVar4 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim != (CCharacter *)0x0) {
      max_distance = 0.17453292;
      local_1c = 2.0f;
      fVar10 = 0.5;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      local_64.x = 0.0;
      local_64.z = fVar5;
      pCVar12 = &local_64;
      local_64.y = 0.0;
      pCVar8 = (this_ptr->base).victim;
      path_map = (*((pCVar8->base).vtable._ub)->getPathMap)(&pCVar8->base);
      iVar14 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                         ((CCharacter *)this_ptr,
                          &(((this_ptr->base).victim)->base).location.position,path_map,pCVar12,
                          fVar10,max_distance);
      if (-1 < iVar14) {
        pCVar8 = (this_ptr->base).victim;
        fVar5 = (this_ptr->base).base.base.location.position.x - (pCVar8->base).location.position.x;
        fVar11 = (this_ptr->base).base.base.location.position.z - (pCVar8->base).location.position.z
        ;
        local_20 = SQRT(fVar11 * fVar11 + fVar5 * fVar5);
        local_18 = local_20;
        if ((10.0f < local_20) && (iVar15 != 7)) {
          (this_ptr->base).attack_cooldown = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->base,7,1);
        }
        if ((local_20 <= local_1c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          pCVar8 = (this_ptr->base).victim;
          local_70.x = (pCVar8->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_70.y = (pCVar8->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_70.z = (pCVar8->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_88,&local_70);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_88.y - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(local_14) < (float)0.52359877558333301) {
            if (iVar15 == 7) {
              iVar14 = 8;
            }
            else {
              iVar14 = 2;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.base,iVar14,1);
            iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
            if (iVar14 == 0) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
              this_ptr->sfx_handles[0] = uVar8;
            }
            (this_ptr->base).attack_cooldown = 2.0;
          }
        }
        if ((this_ptr->base).guard_distance < local_20) {
          pCVar4 = &(this_ptr->base).base.model;
          if (iVar15 == 7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->base,6,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->base,0,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
        }
      }
      break;
    }
    iVar14 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
    if (iVar14 == 0) {
      if (iVar15 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->base,0,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->base,6,1);
      }
      break;
    }
LAB_004f73d5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.base,1,1);
    break;
  case 2:
  case 8:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_10c);
    local_10c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
    damage_info = &local_10c;
    local_10c.attacker = (CDemonActor *)this_ptr;
    local_10c.wielder = (CDemonActor *)this_ptr;
    fVar9 = 0.4;
    local_14 = local_10c.damage_amount;
    pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_4c,&g_ZeroVector.f,
                         (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                         g_HotDemonIndices[2]);
    pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_d0,pCVar12);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar12,fVar9,damage_info);
    break;
  case 5:
  case 0xb:
    if (((this_ptr->base).pool_me == 0) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0059fa20
                         (&(this_ptr->base).base.model,&local_ac,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_b8,pCVar7);
      core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_b8,BLOOD_TYPE_RED);
      (this_ptr->base).pool_me = 1;
    }
  }
switchD_004f7654_caseD_e:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar15 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar15 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar12 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_a0.x = (this_ptr->base).base.velocity.x * delta_time + pCVar12->x + pCVar2->x;
    local_a0.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_a0.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar12->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar5;
    pCVar2->x = fVar5;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_a0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
