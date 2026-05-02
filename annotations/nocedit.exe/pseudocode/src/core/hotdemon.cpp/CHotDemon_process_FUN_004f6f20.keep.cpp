// Name: core_hotdemon.cpp_CHotDemon_process_FUN_004f6f20
// Address: 004f6f20
// MANUAL RECONSTRUCTION
// Address Range: [[004f6f20, 004f765a]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004f6f20(CHotDemon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004f6f20(CHotDemon *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar4;
  float fVar5;
  CCharacter *pCVar6;
  float fVar7;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  uint uVar9;
  int iVar10;
  CPathMap *path_map;
  uint uVar8;
  int iVar11;
  SDamageInfo local_10c;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_88;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_4c;
  CVector3f local_40;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  CVector3f *pCVar2;
  float fVar10;
  SDamageInfo *damage_info;
  float max_distance;
  float fVar9;
  float local_18;
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
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
    iVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&pCVar4->motion_controller,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar11);
  }
  fVar5 = (this_ptr->base).speed;
  fVar7 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar7 * fVar5;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar4->motion_controller);
  iVar11 = pSVar5->state_index;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 != 0) {
    uVar9 = (this_ptr->base).base.is_walking;
    if (uVar9 < 2) {
      if (uVar9 == 1) {
LAB_004f6fec:
        iVar11 = 1;
      }
      else {
LAB_004f7178:
        iVar11 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar11,1);
    }
    else {
      if (uVar9 < 3) goto LAB_004f6fec;
      if (uVar9 != 3) goto LAB_004f7178;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr->base.base.base.actor_name);
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto switchD_004f7654_caseD_e;
  }
  switch(iVar11) {
  case 0:
  case 6:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar6 = (this_ptr->base).victim;
    if (pCVar6 != (CCharacter *)0x0) {
      local_c4.x = (pCVar6->base).location.position.x -
                   (this_ptr->base).base.base.location.position.x;
      local_c4.y = (pCVar6->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
      local_c4.z = (pCVar6->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
      local_28 = SQRT(local_c4.z * local_c4.z + local_c4.x * local_c4.x + local_c4.y * local_c4.y);
      local_24 = local_28;
      if (local_28 < 2.0f) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_40,&local_c4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_40.y - (this_ptr->base).base.base.orient.vec.y);
        if (ABS(local_14) < (float)0.52359877558333301) {
          if (iVar11 == 0) {
            iVar11 = 2;
          }
          else {
            iVar11 = 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,iVar11,1);
          iVar11 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
          if (iVar11 == 0) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
            this_ptr->sfx_handles[0] = uVar9;
          }
        }
      }
      if (local_24 < (this_ptr->base).guard_distance) {
        pCVar4 = &(this_ptr->base).base.model;
        if (10.0f <= local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,7,1);
          (this_ptr->base).attack_cooldown = 0.0;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,1,1);
          (this_ptr->base).attack_cooldown = 0.0;
        }
      }
      break;
    }
    iVar11 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
    if (iVar11 == 0) break;
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
      pCVar8 = &local_64;
      local_64.y = 0.0;
      pCVar6 = (this_ptr->base).victim;
      path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
      iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                         ((CCharacter *)this_ptr,
                          &(((this_ptr->base).victim)->base).location.position,path_map,pCVar8,
                          fVar10,max_distance);
      if (-1 < iVar10) {
        pCVar6 = (this_ptr->base).victim;
        fVar5 = (this_ptr->base).base.base.location.position.x - (pCVar6->base).location.position.x;
        fVar7 = (this_ptr->base).base.base.location.position.z - (pCVar6->base).location.position.z;
        local_20 = SQRT(fVar7 * fVar7 + fVar5 * fVar5);
        local_18 = local_20;
        if ((10.0f < local_20) && (iVar11 != 7)) {
          (this_ptr->base).attack_cooldown = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,7,1);
        }
        if ((local_20 <= local_1c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          pCVar6 = (this_ptr->base).victim;
          local_70.x = (pCVar6->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_70.y = (pCVar6->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_70.z = (pCVar6->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_88,&local_70);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_88.y - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(local_14) < (float)0.52359877558333301) {
            if (iVar11 == 7) {
              iVar10 = 8;
            }
            else {
              iVar10 = 2;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,iVar10,1);
            iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]);
            if (iVar10 == 0) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
              this_ptr->sfx_handles[0] = uVar8;
            }
            (this_ptr->base).attack_cooldown = 2.0;
          }
        }
        if ((this_ptr->base).guard_distance < local_20) {
          pCVar4 = &(this_ptr->base).base.model;
          if (iVar11 == 7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar4->motion_controller,6,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar4->motion_controller,0,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
        }
      }
      break;
    }
    iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
    if (iVar10 == 0) {
      if (iVar11 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar4->motion_controller,0,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar4->motion_controller,6,1);
      }
      break;
    }
LAB_004f73d5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,1,1);
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
    pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_4c,&g_ZeroVector.f,
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                        g_HotDemonIndices[2]);
    pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       ((CDemonActor *)this_ptr,&local_d0,pCVar8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar8,fVar9,damage_info);
    break;
  case 5:
  case 0xb:
    if (((this_ptr->base).pool_me == 0) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (&(this_ptr->base).base.model,&local_ac,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_b8,pCVar7);
      core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_b8,0);
      (this_ptr->base).pool_me = 1;
    }
  }
switchD_004f7654_caseD_e:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar11 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar11 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar8 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_a0.x = (this_ptr->base).base.velocity.x * delta_time + pCVar8->x + pCVar2->x;
    local_a0.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_a0.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar8->x = (this_ptr->base).base.position_delta.y;
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
