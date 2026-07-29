// Name: core_cow.cpp_CZombieCow_process_FUN_0043bdb0
// Address: 0043bdb0
// Address Range: [[0043bdb0, 0043c2d3]]
// Convention: unknown
// Signature: void core_cow_cpp_CZombieCow_process_FUN_0043bdb0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_cow_cpp_CZombieCow_process_FUN_0043bdb0(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  CCharacter *this_ptr_00;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  int iVar5;
  CEnemy *pCVar6;
  CVector3f *pCVar7;
  uint uVar8;
  CPathMap *path_map;
  float fVar9;
  SDamageInfo *damage_info;
  float fVar10;
  SDamageInfo local_c0;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  CVector3f local_30;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = core_charactr_cpp_FUN_004259f0(&param_1->base,param_2);
  if (iVar3 == 0) {
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_1c = param_2 * param_1->speed;
  this_ptr = &(param_1->base).model;
  while (0.0 < local_1c) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr->motion_controller,&local_1c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,iVar3);
  }
  fVar9 = param_1->speed;
  fVar2 = (float)3.1415926535000001;
  fVar10 = (float)0.25;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar2 * fVar9 * fVar10;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr->motion_controller);
  iVar3 = pSVar4->state_index;
  iVar5 = core_charactr_cpp_FUN_00428c00(&param_1->base,param_2);
  if (iVar5 == 0) {
    switch(iVar3) {
    case 0:
      iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar3 == 0) {
        (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
        if (param_1->victim != (CCharacter *)0x0) {
          iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                            (0x02DC9450,*(uint *)(param_1[1].base.base.actor_name + 8));
          if (iVar3 == 0) {
            uVar8 = (*((param_1->base).base.vtable._ub)->playSound)
                              ((CDemonActor *)param_1,"cow?.wav");
            *(uint *)(param_1[1].base.base.actor_name + 8) = uVar8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      fVar9 = 4.5f;
      if (param_1->victim == (CCharacter *)0x0) {
        iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,0,1);
        }
      }
      else {
        local_18 = 4.5f;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        local_54.x = 0.0;
        local_54.y = 0.0;
        fVar10 = 0.17453292;
        local_54.z = fVar9;
        pCVar7 = &local_54;
        fVar9 = 0.5;
        path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (&param_1->base,&(param_1->victim->base).location.position,path_map,pCVar7
                           ,fVar9,fVar10);
        if (iVar3 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,0,1);
        }
        else if ((0 < iVar3) && (param_1->attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,2,1);
          param_1->attack_cooldown = 2.5;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_c0);
      local_c0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      local_c0.attacker = (CDemonActor *)param_1;
      local_c0.wielder = (CDemonActor *)param_1;
      damage_info = &local_c0;
      fVar9 = 0.7;
      local_14 = local_c0.damage_amount;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_3c,(CVector3f *)&DAT_02dd1184,
                          (param_1->base).model.bone_transform.bone_world_matrices +
                          *(int *)(param_1[1].base.base.actor_name + 4));
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_30,pCVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar7,fVar9,damage_info);
      break;
    case 5:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (this_ptr,&local_78,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_84,pCVar7);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_84,0);
        param_1->pool_me = 1;
      }
    }
    goto switchD_0043c2cd_caseD_3;
  }
  uVar8 = (param_1->base).is_walking;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
LAB_0043be80:
      iVar3 = 1;
    }
    else {
LAB_0043c040:
      iVar3 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar3,1);
  }
  else {
    if (uVar8 < 3) goto LAB_0043be80;
    if (uVar8 != 3) goto LAB_0043c040;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,0,1)
    ;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_0043c2cd_caseD_3:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if (iVar3 != 0) {
    this_ptr_00 = param_1->victim;
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (pCVar6 = (CEnemy *)(*(((this_ptr_00->base).vtable._uc)->_uc).getGrabber)(this_ptr_00),
       pCVar6 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->victim->base);
    }
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_48 = (param_1->base).velocity.x * param_2;
    local_44 = (param_1->base).velocity.y * param_2;
    pCVar7 = &(param_1->base).position_delta;
    local_40 = param_2 * (param_1->base).velocity.z;
    pCVar1 = &(param_1->base).model.accumulated_root_motion;
    local_60 = local_48 + pCVar7->x;
    local_5c = local_44 + (param_1->base).position_delta.y;
    local_58 = local_40 + (param_1->base).position_delta.z;
    local_6c.x = local_60 + pCVar1->x;
    local_6c.y = local_5c + (param_1->base).model.accumulated_root_motion.y;
    local_6c.z = local_58 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar7->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    fVar9 = (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.y = fVar9;
    pCVar1->x = fVar9;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_6c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150(&param_1->base,param_2);
  return;
}
