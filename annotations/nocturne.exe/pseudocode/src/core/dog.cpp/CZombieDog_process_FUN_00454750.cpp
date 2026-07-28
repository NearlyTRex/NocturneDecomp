// Name: core_dog.cpp_CZombieDog_process_FUN_00454750
// Address: 00454750
// Address Range: [[00454750, 00454db9]]
// Convention: unknown
// Signature: void core_dog_cpp_CZombieDog_process_FUN_00454750(CEnemy *param_1,float param_2)

#include "nocturne.h"

void core_dog_cpp_CZombieDog_process_FUN_00454750(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  float fVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  CEnemy *pCVar8;
  uint uVar9;
  CVector3f *pCVar10;
  CPathMap *path_map;
  float fVar11;
  SDamageInfo *damage_info;
  CVector3f *in_stack_ffffff20;
  float in_stack_ffffff2c;
  float in_stack_ffffff30;
  float in_stack_ffffff34;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_20 = param_2 * param_1->speed;
  pCVar1 = &(param_1->base).model;
  while (0.0 < local_20) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,iVar5);
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  fVar11 = param_1->speed;
  fVar4 = (float)3.1415926535000001;
  iVar5 = pSVar6->state_index;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar4 * fVar11;
  if (iVar5 == 2) {
    (param_1->base).turn_speed = (param_1->base).turn_speed * (float)2;
  }
  iVar7 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      pCVar1 = &(param_1->base).model;
      if (iVar5 == 0) {
        (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                  (&param_1->base,(int)param_2,in_stack_ffffff20);
        pCVar3 = param_1->victim;
        if (pCVar3 != (CCharacter *)0x0) {
          local_74 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x;
          local_70 = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y;
          local_6c = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z;
          local_24 = local_6c * local_6c + local_74 * local_74 + local_70 * local_70;
          local_18 = (float)(((int)local_24 >> 1) + (int)CVector3f_01c70708.y);
          if (local_18 < 8.0f) {
            fVar11 = 1.4013e-45;
          }
          else {
            fVar11 = 2.8026e-45;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,(int)fVar11,1);
          iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                            (0x02DC9450,*(uint *)(param_1[1].base.base.actor_name + 8));
          if (iVar5 == 0) {
            uVar9 = (*((param_1->base).base.vtable._ub)->playSound)
                              ((CDemonActor *)param_1,"dog5.wav");
            *(uint *)(param_1[1].base.base.actor_name + 8) = uVar9;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                (&param_1->base,(int)param_2,in_stack_ffffff20);
      pCVar3 = param_1->victim;
      pCVar1 = &(param_1->base).model;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        local_5c = (param_1->base).base.location.position.x - (pCVar3->base).location.position.x;
        local_58 = (param_1->base).base.location.position.y - (pCVar3->base).location.position.y;
        local_54 = (param_1->base).base.location.position.z - (pCVar3->base).location.position.z;
        if ((8.0f < SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58))
           && (iVar5 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,2,1);
        }
        fVar11 = 0.17453292;
        local_1c = 3.0f;
        pCVar10 = (CVector3f *)0x3f000000;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (&param_1->base,&(param_1->victim->base).location.position,path_map,
                           pCVar10,fVar11,in_stack_ffffff2c);
        pCVar1 = &(param_1->base).model;
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60();
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0,1);
        }
        else if ((0 < iVar5) && (param_1->attack_cooldown <= 0.0)) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          if ((float)0.5 < local_14) {
            fVar11 = 4.2039e-45;
          }
          else {
            fVar11 = 5.60519e-45;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,(int)fVar11,1);
          param_1->attack_cooldown = 2.5;
        }
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffff20);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
      damage_info = (SDamageInfo *)&stack0xffffff20;
      fVar11 = 0.7;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                          (&local_98,(CVector3f *)&DAT_02dd1184,
                           (CMatrix3x4f *)
                           (param_1->base).model.bone_transform.bone_world_matrices
                           [*(int *)(param_1[1].base.base.actor_name + 4)].m);
      pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          ((CDemonActor *)param_1,&local_8c,pCVar10);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar10,fVar11,damage_info);
      iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                        (0x02DC9450,*(uint *)(param_1[1].base.base.actor_name + 8));
      if (iVar5 == 0) {
        uVar9 = (*((param_1->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)param_1,"dog5.wav");
        *(uint *)(param_1[1].base.base.actor_name + 8) = uVar9;
      }
      break;
    case 7:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (&(param_1->base).model,&local_50,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_44,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_44,0);
        param_1->pool_me = 1;
      }
    }
    goto switchD_00454db3_caseD_5;
  }
  uVar9 = (param_1->base).is_walking;
  if (uVar9 < 2) {
    if (uVar9 == 1) {
LAB_00454837:
      iVar5 = 1;
    }
    else {
LAB_004549fd:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar5,1);
  }
  else {
    if (uVar9 < 3) goto LAB_00454837;
    if (uVar9 != 3) goto LAB_004549fd;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_00454db3_caseD_5:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if (iVar5 != 0) {
    pCVar3 = param_1->victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar8 = (CEnemy *)
                 (*(((pCVar3->base).vtable._uc)->_uc).applyDamage)
                           (pCVar3,(int)in_stack_ffffff30,in_stack_ffffff34), pCVar8 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->victim->base);
    }
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_68 = (param_1->base).velocity.x * param_2;
    local_64 = (param_1->base).velocity.y * param_2;
    pCVar10 = &(param_1->base).position_delta;
    local_60 = param_2 * (param_1->base).velocity.z;
    pCVar2 = &(param_1->base).model.accumulated_root_motion;
    local_38 = local_68 + pCVar10->x;
    local_34 = local_64 + (param_1->base).position_delta.y;
    local_30 = local_60 + (param_1->base).position_delta.z;
    local_80.x = local_38 + pCVar2->x;
    local_80.y = local_34 + (param_1->base).model.accumulated_root_motion.y;
    local_80.z = local_30 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar10->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    fVar11 = (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.y = fVar11;
    pCVar2->x = fVar11;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_80);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150();
  return;
}
