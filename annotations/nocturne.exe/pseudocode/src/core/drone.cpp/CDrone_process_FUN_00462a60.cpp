// Name: core_drone.cpp_CDrone_process_FUN_00462a60
// Address: 00462a60
// Address Range: [[00462a60, 004630da]]
// Convention: unknown
// Signature: void core_drone_cpp_CDrone_process_FUN_00462a60(CEnemy *param_1,float param_2)

#include "nocturne.h"

void core_drone_cpp_CDrone_process_FUN_00462a60(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  CCharacter *this_ptr_00;
  float fVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CEnemy *pCVar7;
  CVector3f *pCVar8;
  CPathMap *path_map;
  uint uVar9;
  ulonglong uVar10;
  SDamageInfo *pSVar11;
  CVector3f *in_stack_ffffff24;
  float fVar12;
  float in_stack_ffffff30;
  float fVar13;
  float in_stack_ffffff34;
  float in_stack_ffffff38;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.base.actor_name + 0x10));
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_20 = param_2 * param_1->speed;
  this_ptr = &(param_1->base).model;
  while (0.0 < local_20) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr->motion_controller,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,iVar4);
  }
  fVar13 = param_1->speed;
  fVar3 = (float)3.1415926535000001;
  fVar2 = (float)0.5;
  fVar12 = (float)2;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z * fVar12;
  (param_1->base).turn_speed = param_2 * fVar3 * fVar13 * fVar2 * fVar12;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr->motion_controller);
  iVar4 = pSVar5->state_index;
  local_1c = iVar4;
  iVar6 = core_charactr_cpp_FUN_00428c00(param_1);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar4 == 0) {
        (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                  (&param_1->base,(int)param_2,in_stack_ffffff24);
        if (param_1->victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                (&param_1->base,(int)param_2,in_stack_ffffff24);
      fVar13 = 3.0f;
      if (param_1->victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,0,1);
        }
      }
      else {
        fVar12 = 0.17453292;
        local_18 = 3.0f;
        pCVar8 = (CVector3f *)0x3f000000;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        local_64 = 0;
        local_5c = fVar13;
        local_60 = 0;
        path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (&param_1->base,&(param_1->victim->base).location.position,path_map,pCVar8
                           ,fVar12,in_stack_ffffff30);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60();
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,0,1);
        }
        else if ((0 < iVar4) && (param_1->attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,2,1);
          uVar9 = *(uint *)(param_1[1].base.base.actor_name + 0x14);
          param_1->attack_cooldown = 1.0;
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uVar9);
          if (iVar4 == 0) {
            uVar9 = (*((param_1->base).base.vtable._ub)->playSound)
                              ((CDemonActor *)param_1,"drone-attack?.wav");
            *(uint *)(param_1[1].base.base.actor_name + 0x14) = uVar9;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff24);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000);
      pSVar11 = (SDamageInfo *)&stack0xffffff24;
      fVar13 = 0.4;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_88,(CVector3f *)&DAT_02dd1184,
                          (param_1->base).model.bone_transform.bone_world_matrices +
                          *(int *)(param_1[1].base.base.actor_name + 4));
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_58,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar8,fVar13,pSVar11);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000);
      pSVar11 = (SDamageInfo *)&stack0xffffff24;
      fVar13 = 0.4;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_4c,(CVector3f *)&DAT_02dd1184,
                          (param_1->base).model.bone_transform.bone_world_matrices +
                          *(int *)(param_1[1].base.base.actor_name + 8));
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_34,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar8,fVar13,pSVar11);
      break;
    case 8:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (this_ptr,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_94,pCVar8);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_94,1);
        param_1->pool_me = 1;
      }
      break;
    case 9:
      if ((param_1->base).is_on_ground != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr->motion_controller,10,1);
      }
    }
    goto switchD_00463074_caseD_3;
  }
  uVar9 = (param_1->base).is_walking;
  if (uVar9 < 2) {
    if (uVar9 == 1) {
LAB_00462b41:
      uVar10 = 0x100000001;
    }
    else {
LAB_00462d6a:
      uVar10 = 0x100000000;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20)
              );
  }
  else {
    if (uVar9 < 3) goto LAB_00462b41;
    if (uVar9 != 3) goto LAB_00462d6a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,0,1)
    ;
    engine_console_cpp_CConsole_printf_FUN_0043ac60();
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_00463074_caseD_3:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  if ((local_1c == 1) &&
     (iVar4 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                        ((double)(param_1->base).base.location.position.x,
                         (double)(param_1->base).base.location.position.y,
                         (double)(param_1->base).base.location.position.z,50.0), iVar4 != 0)) {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                      (*(uint *)(param_1[1].base.base.actor_name + 0x10));
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      fVar13 = 2.8026e-45;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_14,(int)fVar13);
      uVar9 = (*((param_1->base).base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)param_1,"slime.wav");
      *(uint *)(param_1[1].base.base.actor_name + 0x10) = uVar9;
      in_stack_ffffff38 = 6.445976e-39;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.base.actor_name + 0x10));
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if (iVar4 != 0) {
    this_ptr_00 = param_1->victim;
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (pCVar7 = (CEnemy *)
                 (*(((this_ptr_00->base).vtable._uc)->_uc).applyDamage)
                           (this_ptr_00,(int)in_stack_ffffff34,in_stack_ffffff38), pCVar7 == param_1
       )) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->victim->base);
    }
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_7c = (param_1->base).velocity.x * param_2;
    local_78 = (param_1->base).velocity.y * param_2;
    pCVar8 = &(param_1->base).position_delta;
    local_74 = param_2 * (param_1->base).velocity.z;
    pCVar1 = &(param_1->base).model.accumulated_root_motion;
    local_70 = local_7c + pCVar8->x;
    local_6c = local_78 + (param_1->base).position_delta.y;
    local_68 = local_74 + (param_1->base).position_delta.z;
    local_40.x = local_70 + pCVar1->x;
    local_40.y = local_6c + (param_1->base).model.accumulated_root_motion.y;
    local_40.z = local_68 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar8->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    fVar13 = (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.y = fVar13;
    pCVar1->x = fVar13;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_40);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150();
  return;
}
