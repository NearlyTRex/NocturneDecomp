// Name: core_hotdemon.cpp_CHotDemon_process_FUN_004b8f20
// Address: 004b8f20
// Address Range: [[004b8f20, 004b965a]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004b8f20(CHotDemon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004b8f20(CHotDemon *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CVector3f *pCVar7;
  CPathMap *path_map;
  uint uVar8;
  float fVar9;
  float fVar10;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo local_10c;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  float local_94;
  uint local_90;
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
  
  iVar4 = core_charactr_cpp_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < local_2c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar4);
  }
  fVar9 = (this_ptr->base).speed;
  fVar10 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar10 * fVar9;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  iVar4 = pSVar5->state_index;
  iVar6 = core_charactr_cpp_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar6 != 0) {
    uVar8 = (this_ptr->base).base.is_walking;
    if (uVar8 < 2) {
      if (uVar8 == 1) {
LAB_004b8fec:
        iVar4 = 1;
      }
      else {
LAB_004b9178:
        iVar4 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,iVar4,1);
    }
    else {
      if (uVar8 < 3) goto LAB_004b8fec;
      if (uVar8 != 3) goto LAB_004b9178;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto switchD_004b9654_caseD_3;
  }
  switch(iVar4) {
  case 0:
  case 6:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar3 = (this_ptr->base).victim;
    if (pCVar3 != (CCharacter *)0x0) {
      local_c4.x = (pCVar3->base).location.position.x -
                   (this_ptr->base).base.base.location.position.x;
      local_c4.y = (pCVar3->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
      local_c4.z = (pCVar3->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
      local_28 = SQRT(local_c4.z * local_c4.z + local_c4.x * local_c4.x + local_c4.y * local_c4.y);
      local_24 = local_28;
      if (local_28 < 2.0f) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_40,&local_c4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                             (local_40.y - (this_ptr->base).base.base.orient.vec.y);
        if (ABS(local_14) < (float)0.52359877558333301) {
          if (iVar4 == 0) {
            iVar4 = 2;
          }
          else {
            iVar4 = 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,iVar4,1);
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
          if (iVar4 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
            this_ptr->sfx_handles[0] = uVar8;
          }
        }
      }
      if (local_24 < (this_ptr->base).guard_distance) {
        pCVar1 = &(this_ptr->base).base.model;
        if (10.0f <= local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,7,1);
          (this_ptr->base).attack_cooldown = 0.0;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,1,1);
          (this_ptr->base).attack_cooldown = 0.0;
        }
      }
      break;
    }
    iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
    if (iVar4 == 0) break;
    goto LAB_004b93d5;
  case 1:
  case 7:
  case 0xf:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    fVar9 = 2.0f;
    pCVar1 = &(this_ptr->base).base.model;
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
      local_64.z = fVar9;
      pCVar7 = &local_64;
      local_64.y = 0.0;
      pCVar3 = (this_ptr->base).victim;
      path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,path_map,pCVar7,fVar10,max_distance);
      if (-1 < iVar6) {
        pCVar3 = (this_ptr->base).victim;
        local_94 = (this_ptr->base).base.base.location.position.x -
                   (pCVar3->base).location.position.x;
        local_8c = (this_ptr->base).base.base.location.position.z -
                   (pCVar3->base).location.position.z;
        local_90 = 0;
        local_20 = SQRT(local_8c * local_8c + local_94 * local_94);
        local_18 = local_20;
        if ((10.0f < local_20) && (iVar4 != 7)) {
          (this_ptr->base).attack_cooldown = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,7,1);
        }
        if ((local_20 <= local_1c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          pCVar3 = (this_ptr->base).victim;
          local_70.x = (pCVar3->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_70.y = (pCVar3->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_70.z = (pCVar3->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_88,&local_70);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (local_88.y - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(local_14) < (float)0.52359877558333301) {
            if (iVar4 == 7) {
              iVar6 = 8;
            }
            else {
              iVar6 = 2;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,iVar6,1);
            iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
            if (iVar6 == 0) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
              this_ptr->sfx_handles[0] = uVar8;
            }
            (this_ptr->base).attack_cooldown = 2.0;
          }
        }
        if ((this_ptr->base).guard_distance < local_20) {
          pCVar1 = &(this_ptr->base).base.model;
          if (iVar4 == 7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,6,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,0,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
        }
      }
      break;
    }
    iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
    if (iVar6 == 0) {
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,6,1);
      }
      break;
    }
LAB_004b93d5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,1,1);
    break;
  case 2:
  case 8:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_10c);
    local_10c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
    damage_info = &local_10c;
    local_10c.attacker = (CDemonActor *)this_ptr;
    local_10c.wielder = (CDemonActor *)this_ptr;
    fVar9 = 0.4;
    local_14 = local_10c.damage_amount;
    pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (&local_4c,(CVector3f *)&DAT_02dd1184,
                        (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                        _DAT_01cae1e8);
    pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       ((CDemonActor *)this_ptr,&local_d0,pCVar7);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar7,fVar9,damage_info);
    break;
  case 5:
  case 0xb:
    if (((this_ptr->base).pool_me == 0) &&
       ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         (&(this_ptr->base).base.model,&local_ac,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)this_ptr,&local_b8,pCVar7);
      core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_b8,0);
      (this_ptr->base).pool_me = 1;
    }
  }
switchD_004b9654_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_58 = (this_ptr->base).base.velocity.x * delta_time;
    local_54 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar7 = &(this_ptr->base).base.position_delta;
    local_50 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_7c = local_58 + pCVar7->x;
    local_78 = local_54 + (this_ptr->base).base.position_delta.y;
    local_74 = local_50 + (this_ptr->base).base.position_delta.z;
    local_a0.x = local_7c + pCVar2->x;
    local_a0.y = local_78 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_a0.z = local_74 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar7->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar9 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar9;
    pCVar2->x = fVar9;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_a0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
