// Name: core_batcreat.cpp_CBatCreature_process_FUN_00412480
// Address: 00412480
// Address Range: [[00412480, 00412d78]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00412480(CBatCreature *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00412480(CBatCreature *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
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
  SDamageInfo local_13c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  uint local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
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
  
  iVar4 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c = delta_time * (this_ptr->base).speed;
  while (0.0 < local_2c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(this_ptr->base).base.model.motion_controller,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar4);
  }
  fVar9 = (this_ptr->base).speed;
  fVar10 = (float)3.1415926535000001;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar10 * fVar9;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr_00->motion_controller);
  iVar4 = pSVar5->state_index;
  iVar6 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,1,1);
        }
        break;
      }
      local_f4.x = (pCVar3->base).location.position.x -
                   (this_ptr->base).base.base.location.position.x;
      local_f4.y = (pCVar3->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
      local_f4.z = (pCVar3->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
      local_28 = SQRT(local_f4.z * local_f4.z + local_f4.x * local_f4.x + local_f4.y * local_f4.y);
      local_1c = local_28;
      if (local_28 < 3.5f) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_b8,&local_f4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                             (local_b8.y - (this_ptr->base).base.base.orient.vec.y);
        if (ABS(local_14) < (float)0.52359877558333301) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,3,1);
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]);
          if ((iVar4 == 0) &&
             (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[2]),
             iVar4 == 0)) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"batman-attack?.wav");
            this_ptr->sfx_handles[2] = uVar8;
          }
        }
      }
      if ((this_ptr->base).guard_distance <= local_1c) break;
      if (local_1c < 10.0f) {
        iVar4 = 1;
        (this_ptr->base).attack_cooldown = 0.0;
      }
      else {
        (this_ptr->base).attack_cooldown = 0.0;
        iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.1);
        if (iVar4 != 0) {
          pCVar3 = (this_ptr->base).victim;
          local_e8.x = (pCVar3->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_e8.y = (pCVar3->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_e8.z = (pCVar3->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_64,&local_e8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (local_64.y - (this_ptr->base).base.base.orient.vec.y);
          if ((ABS(local_14) < (float)0.52359877558333301) &&
             (ABS((((this_ptr->base).victim)->base).location.position.y -
                  (this_ptr->base).base.base.location.position.y) < (float)2)) {
            iVar4 = 2;
            goto LAB_0041290b;
          }
        }
        iVar4 = 1;
      }
LAB_0041290b:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(this_ptr->base).base.model.motion_controller,iVar4,1);
      if ((((this_ptr->alert_played == 0) &&
           (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]),
           iVar4 == 0)) &&
          (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[2]), iVar4 == 0
          )) && (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]),
                iVar4 == 0)) {
        uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"batman-alert.wav");
        this_ptr->alert_played = 1;
        this_ptr->sfx_handles[0] = uVar8;
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar9 = 3.5f;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        local_24 = 3.5f;
        fVar10 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_7c.x = 0.0;
        local_7c.z = fVar9;
        pCVar7 = &local_7c;
        local_7c.y = 0.0;
        pCVar3 = (this_ptr->base).victim;
        path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar7,
                           fVar10,max_distance);
        if (-1 < iVar6) {
          pCVar1 = &(this_ptr->base).base.base.location;
          pCVar3 = (this_ptr->base).victim;
          local_a0 = (pCVar1->position).x - (pCVar3->base).location.position.x;
          local_98 = (this_ptr->base).base.base.location.position.z -
                     (pCVar3->base).location.position.z;
          local_9c = 0;
          local_20 = SQRT(local_98 * local_98 + local_a0 * local_a0);
          local_18 = local_20;
          if ((10.0f < local_20) && ((this_ptr->base).attack_cooldown = 0.0, iVar4 == 1)) {
            pCVar3 = (this_ptr->base).victim;
            local_94.x = (pCVar3->base).location.position.x - (pCVar1->position).x;
            local_94.y = (pCVar3->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_94.z = (pCVar3->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_dc,&local_94);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_dc.y - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(local_14) < (float)0.52359877558333301) &&
               (ABS((((this_ptr->base).victim)->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y) < (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&this_ptr_00->motion_controller,2,1);
              uVar8 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 0.0;
              iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uVar8);
              if ((iVar4 == 0) &&
                 (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[2]),
                 iVar4 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar8;
              }
            }
          }
          if ((local_20 <= local_24) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar3 = (this_ptr->base).victim;
            local_88.x = (pCVar3->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            local_88.y = (pCVar3->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_88.z = (pCVar3->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_d0,&local_88);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_d0.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,3,1);
              uVar8 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uVar8);
              if ((iVar4 == 0) &&
                 (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[2]),
                 iVar4 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar8;
              }
            }
          }
          if ((this_ptr->base).guard_distance < local_20) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_13c);
      local_13c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      damage_info = &local_13c;
      local_13c.attacker = (CDemonActor *)this_ptr;
      local_13c.wielder = (CDemonActor *)this_ptr;
      fVar9 = 0.4;
      local_14 = local_13c.damage_amount;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_ac,(CVector3f *)&DAT_02dd1184,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          DAT_007645a4);
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)this_ptr,&local_40,pCVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar7,fVar9,damage_info);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (this_ptr_00,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_100,pCVar7);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_100,0);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00412d72_caseD_2;
  }
  uVar8 = (this_ptr->base).base.is_walking;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
LAB_00412550:
      iVar4 = 1;
    }
    else {
LAB_004126e6:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
  }
  else {
    if (uVar8 < 3) goto LAB_00412550;
    if (uVar8 != 3) goto LAB_004126e6;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00412d72_caseD_2:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_c4 = (this_ptr->base).base.velocity.x * delta_time;
    local_c0 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar7 = &(this_ptr->base).base.position_delta;
    local_bc = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_58 = local_c4 + pCVar7->x;
    local_54 = local_c0 + (this_ptr->base).base.position_delta.y;
    local_50 = local_bc + (this_ptr->base).base.position_delta.z;
    local_70.x = local_58 + pCVar2->x;
    local_70.y = local_54 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_70.z = local_50 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar7->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_70);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
