// Name: core_batcreat.cpp_CBatCreature_process_FUN_00412480
// Address: 00412480
// Address Range: [[00412480, 00412d78]]
// Convention: unknown
// Signature: void core_batcreat_cpp_CBatCreature_process_FUN_00412480(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_batcreat_cpp_CBatCreature_process_FUN_00412480(CEnemy *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar2;
  uint uVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  CVector3f *pCVar8;
  CPathMap *path_map;
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
  
  iVar5 = core_charactr_cpp_FUN_004259f0(&param_1->base,param_2);
  if (iVar5 == 0) {
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_2c = param_2 * param_1->speed;
  while (0.0 < local_2c) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(param_1->base).model.motion_controller,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,iVar5);
  }
  fVar9 = param_1->speed;
  fVar10 = (float)3.1415926535000001;
  this_ptr = &(param_1->base).model;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar10 * fVar9;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr->motion_controller);
  iVar5 = pSVar6->state_index;
  iVar7 = core_charactr_cpp_FUN_00428c00(&param_1->base,param_2);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      pCVar4 = param_1->victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,1,1);
        }
        break;
      }
      local_f4.x = (pCVar4->base).location.position.x - (param_1->base).base.location.position.x;
      local_f4.y = (pCVar4->base).location.position.y - (param_1->base).base.location.position.y;
      local_f4.z = (pCVar4->base).location.position.z - (param_1->base).base.location.position.z;
      local_28 = SQRT(local_f4.z * local_f4.z + local_f4.x * local_f4.x + local_f4.y * local_f4.y);
      local_1c = local_28;
      if (local_28 < 3.5f) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_b8,&local_f4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                             (local_b8.y - (param_1->base).base.orient.vec.y);
        if (ABS(local_14) < (float)0.52359877558333301) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,3,1);
          iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                            ((uint)param_1[1].base.base.orient_matrix.m[0].x);
          if ((iVar5 == 0) &&
             (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                ((uint)param_1[1].base.base.orient_matrix.m[0].y), iVar5 == 0)) {
            fVar9 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                     ((CDemonActor *)param_1,"batman-attack?.wav");
            param_1[1].base.base.orient_matrix.m[0].y = fVar9;
          }
        }
      }
      if (param_1->guard_distance <= local_1c) break;
      if (local_1c < 10.0f) {
        iVar5 = 1;
        param_1->attack_cooldown = 0.0;
      }
      else {
        param_1->attack_cooldown = 0.0;
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.1);
        if (iVar5 != 0) {
          pCVar4 = param_1->victim;
          local_e8.x = (pCVar4->base).location.position.x - (param_1->base).base.location.position.x
          ;
          local_e8.y = (pCVar4->base).location.position.y - (param_1->base).base.location.position.y
          ;
          local_e8.z = (pCVar4->base).location.position.z - (param_1->base).base.location.position.z
          ;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_64,&local_e8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (local_64.y - (param_1->base).base.orient.vec.y);
          if ((ABS(local_14) < (float)0.52359877558333301) &&
             (ABS((param_1->victim->base).location.position.y -
                  (param_1->base).base.location.position.y) < (float)2)) {
            iVar5 = 2;
            goto LAB_0041290b;
          }
        }
        iVar5 = 1;
      }
LAB_0041290b:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).model.motion_controller,iVar5,1);
      if ((((param_1[1].base.base.orient_matrix.m[0].z == 0.0) &&
           (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                              ((uint)param_1[1].base.base.orient_matrix.m[0].x), iVar5 == 0)) &&
          (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                             ((uint)param_1[1].base.base.orient_matrix.m[0].y), iVar5 == 0)) &&
         (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                            ((uint)param_1[1].base.base.orient.vec.z), iVar5 == 0)) {
        fVar9 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                 ((CDemonActor *)param_1,"batman-alert.wav");
        param_1[1].base.base.orient_matrix.m[0].z = 1.4013e-45;
        param_1[1].base.base.orient.vec.z = fVar9;
      }
      break;
    case 1:
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      fVar9 = 3.5f;
      if (param_1->victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        local_24 = 3.5f;
        fVar10 = 0.5;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        local_7c.x = 0.0;
        local_7c.z = fVar9;
        pCVar8 = &local_7c;
        local_7c.y = 0.0;
        path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (&param_1->base,&(param_1->victim->base).location.position,path_map,pCVar8
                           ,fVar10,max_distance);
        if (-1 < iVar7) {
          pCVar1 = &(param_1->base).base.location;
          local_a0 = (pCVar1->position).x - (param_1->victim->base).location.position.x;
          local_98 = (param_1->base).base.location.position.z -
                     (param_1->victim->base).location.position.z;
          local_9c = 0;
          local_20 = SQRT(local_98 * local_98 + local_a0 * local_a0);
          local_18 = local_20;
          if ((10.0f < local_20) && (param_1->attack_cooldown = 0.0, iVar5 == 1)) {
            pCVar4 = param_1->victim;
            local_94.x = (pCVar4->base).location.position.x - (pCVar1->position).x;
            local_94.y = (pCVar4->base).location.position.y -
                         (param_1->base).base.location.position.y;
            local_94.z = (pCVar4->base).location.position.z -
                         (param_1->base).base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_dc,&local_94);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_dc.y - (param_1->base).base.orient.vec.y);
            if ((ABS(local_14) < (float)0.52359877558333301) &&
               (ABS((param_1->victim->base).location.position.y -
                    (param_1->base).base.location.position.y) < (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&this_ptr->motion_controller,2,1);
              fVar9 = param_1[1].base.base.orient_matrix.m[0].x;
              param_1->attack_cooldown = 0.0;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50((uint)fVar9);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                    ((uint)param_1[1].base.base.orient_matrix.m[0].y), iVar5 == 0))
              {
                fVar9 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                         ((CDemonActor *)param_1,"batman-attack?.wav");
                param_1[1].base.base.orient_matrix.m[0].y = fVar9;
              }
            }
          }
          if ((local_20 <= local_24) && (param_1->attack_cooldown <= 0.0)) {
            pCVar4 = param_1->victim;
            local_88.x = (pCVar4->base).location.position.x -
                         (param_1->base).base.location.position.x;
            local_88.y = (pCVar4->base).location.position.y -
                         (param_1->base).base.location.position.y;
            local_88.z = (pCVar4->base).location.position.z -
                         (param_1->base).base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_d0,&local_88);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_d0.y - (param_1->base).base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).model.motion_controller,3,1);
              fVar9 = param_1[1].base.base.orient_matrix.m[0].x;
              param_1->attack_cooldown = 1.0;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50((uint)fVar9);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                    ((uint)param_1[1].base.base.orient_matrix.m[0].y), iVar5 == 0))
              {
                fVar9 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                         ((CDemonActor *)param_1,"batman-attack?.wav");
                param_1[1].base.base.orient_matrix.m[0].y = fVar9;
              }
            }
          }
          if (param_1->guard_distance < local_20) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_13c);
      local_13c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      damage_info = &local_13c;
      local_13c.attacker = (CDemonActor *)param_1;
      local_13c.wielder = (CDemonActor *)param_1;
      fVar9 = 0.4;
      local_14 = local_13c.damage_amount;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_ac,(CVector3f *)&DAT_02dd1184,
                          (param_1->base).model.bone_transform.bone_world_matrices + DAT_007645a4);
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_40,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar8,fVar9,damage_info);
      break;
    case 8:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (this_ptr,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_100,pCVar8);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_100,0);
        param_1->pool_me = 1;
      }
    }
    goto switchD_00412d72_caseD_2;
  }
  uVar3 = (param_1->base).is_walking;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_00412550:
      iVar5 = 1;
    }
    else {
LAB_004126e6:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar5,1);
  }
  else {
    if (uVar3 < 3) goto LAB_00412550;
    if (uVar3 != 3) goto LAB_004126e6;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_00412d72_caseD_2:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if (iVar5 != 0) {
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_c4 = (param_1->base).velocity.x * param_2;
    local_c0 = (param_1->base).velocity.y * param_2;
    pCVar8 = &(param_1->base).position_delta;
    local_bc = param_2 * (param_1->base).velocity.z;
    pCVar2 = &(param_1->base).model.accumulated_root_motion;
    local_58 = local_c4 + pCVar8->x;
    local_54 = local_c0 + (param_1->base).position_delta.y;
    local_50 = local_bc + (param_1->base).position_delta.z;
    local_70.x = local_58 + pCVar2->x;
    local_70.y = local_54 + (param_1->base).model.accumulated_root_motion.y;
    local_70.z = local_50 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar8->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar2->x = (param_1->base).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_70);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150(&param_1->base,param_2);
  return;
}
