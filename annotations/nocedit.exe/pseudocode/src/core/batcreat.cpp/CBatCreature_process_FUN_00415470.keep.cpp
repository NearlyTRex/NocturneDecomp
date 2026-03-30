// Name: core_batcreat.cpp_CBatCreature_process_FUN_00415470
// Address: 00415470
// MANUAL RECONSTRUCTION
// Address Range: [[00415470, 00415d68]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00415470(CBatCreature *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00415470(CBatCreature *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_01;
  float fVar1;
  CCharacter *pCVar4;
  float fVar5;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar6;
  CPathMap *path_map;
  int iVar7;
  uint uVar9;
  uint uVar8;
  int iVar10;
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
  CDeformableModelInstance *this_ptr_00;
  CLocation *pCVar1;
  float fVar10;
  float fVar9;
  float max_distance;
  SDamageInfo *damage_info;
  CCharacter *pCVar3;
  CVector3f *pCVar2;
  
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
  while (0.0 < local_2c) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&(this_ptr->base).base.model.motion_controller,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar10);
  }
  fVar1 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  this_ptr_01 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar1;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_01->motion_controller);
  iVar10 = pSVar5->state_index;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar10) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar10 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,1,1);
        }
        break;
      }
      local_f4.x = (pCVar4->base).location.position.x -
                   (this_ptr->base).base.base.location.position.x;
      local_f4.y = (pCVar4->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
      local_f4.z = (pCVar4->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
      local_28 = SQRT(local_f4.z * local_f4.z + local_f4.x * local_f4.x + local_f4.y * local_f4.y);
      local_1c = local_28;
      if (local_28 < 3.5f) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_b8,&local_f4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_b8.y - (this_ptr->base).base.base.orient.vec.y);
        if (ABS(local_14) < (float)0.52359877558333301) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,3,1);
          iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
          if ((iVar10 == 0) &&
             (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[2]),
             iVar10 == 0)) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"batman-attack?.wav");
            this_ptr->sfx_handles[2] = uVar9;
          }
        }
      }
      if ((this_ptr->base).guard_distance <= local_1c) break;
      if (local_1c < 10.0f) {
        iVar10 = 1;
        (this_ptr->base).attack_cooldown = 0.0;
      }
      else {
        (this_ptr->base).attack_cooldown = 0.0;
        iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar10 != 0) {
          pCVar4 = (this_ptr->base).victim;
          local_e8.x = (pCVar4->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_e8.y = (pCVar4->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_e8.z = (pCVar4->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_64,&local_e8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_64.y - (this_ptr->base).base.base.orient.vec.y);
          if ((ABS(local_14) < (float)0.52359877558333301) &&
             (ABS((((this_ptr->base).victim)->base).location.position.y -
                  (this_ptr->base).base.base.location.position.y) < (float)2)) {
            iVar10 = 2;
            goto LAB_004158fb;
          }
        }
        iVar10 = 1;
      }
LAB_004158fb:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar10,1);
      if ((((this_ptr->alert_played == 0) &&
           (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]),
           iVar10 == 0)) &&
          (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[2]),
          iVar10 == 0)) &&
         (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]),
         iVar10 == 0)) {
        uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"batman-alert.wav");
        this_ptr->alert_played = 1;
        this_ptr->sfx_handles[0] = uVar9;
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar1 = 3.5f;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar10 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,1,1);
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
        local_7c.z = fVar1;
        pCVar6 = &local_7c;
        local_7c.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar6,
                           fVar10,max_distance);
        if (-1 < iVar7) {
          pCVar1 = &(this_ptr->base).base.base.location;
          pCVar4 = (this_ptr->base).victim;
          fVar1 = (pCVar1->position).x - (pCVar4->base).location.position.x;
          fVar5 = (this_ptr->base).base.base.location.position.z -
                  (pCVar4->base).location.position.z;
          local_20 = SQRT(fVar5 * fVar5 + fVar1 * fVar1);
          local_18 = local_20;
          if ((10.0f < local_20) && ((this_ptr->base).attack_cooldown = 0.0, iVar10 == 1))
          {
            pCVar4 = (this_ptr->base).victim;
            local_94.x = (pCVar4->base).location.position.x - (pCVar1->position).x;
            local_94.y = (pCVar4->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_94.z = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_dc,&local_94);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_dc.y - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(local_14) < (float)0.52359877558333301) &&
               (ABS((((this_ptr->base).victim)->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y) < (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_01->motion_controller,2,1);
              uVar9 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 0.0;
              iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar9);
              if ((iVar10 == 0) &&
                 (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[2]),
                 iVar10 == 0)) {
                uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar9;
              }
            }
          }
          if ((local_20 <= local_24) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar4 = (this_ptr->base).victim;
            local_88.x = (pCVar4->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            local_88.y = (pCVar4->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_88.z = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_d0,&local_88);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_d0.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,3,1);
              uVar9 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar9);
              if ((iVar10 == 0) &&
                 (iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[2]),
                 iVar10 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar8;
              }
            }
          }
          if ((this_ptr->base).guard_distance < local_20) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_13c);
      local_13c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      damage_info = &local_13c;
      local_13c.attacker = (CDemonActor *)this_ptr;
      local_13c.wielder = (CDemonActor *)this_ptr;
      fVar9 = 0.4;
      local_14 = local_13c.damage_amount;
      pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_ac,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          g_BatCreatureIndices[2]);
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_40,pCVar6);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar6,fVar9,damage_info);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_01,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_100,pCVar7);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_100,0);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00415d62_caseD_2;
  }
  uVar9 = (this_ptr->base).base.is_walking;
  if (uVar9 < 2) {
    if (uVar9 == 1) {
LAB_00415540:
      iVar10 = 1;
    }
    else {
LAB_004156d6:
      iVar10 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar10,1);
  }
  else {
    if (uVar9 < 3) goto LAB_00415540;
    if (uVar9 != 3) goto LAB_004156d6;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr->base.base.base.actor_name);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00415d62_caseD_2:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar10 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar10 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar6 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_70.x = (this_ptr->base).base.velocity.x * delta_time + pCVar6->x + pCVar2->x;
    local_70.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_70.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar6->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_70);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
