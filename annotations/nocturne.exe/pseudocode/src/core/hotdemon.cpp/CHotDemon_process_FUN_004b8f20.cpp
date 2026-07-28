// Name: core_hotdemon.cpp_CHotDemon_process_FUN_004b8f20
// Address: 004b8f20
// Address Range: [[004b8f20, 004b965a]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_CHotDemon_process_FUN_004b8f20(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_CHotDemon_process_FUN_004b8f20(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CPathMap *path_map;
  uint uVar7;
  SDamageInfo *damage_info;
  CVector3f *in_stack_fffffef4;
  CVector3f *pCVar8;
  float fVar9;
  float fVar10;
  float in_stack_ffffff00;
  CVector3f local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  float local_94;
  uint local_90;
  float local_8c;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c [2];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_2c = param_2 * param_1->speed;
  pCVar1 = &(param_1->base).model;
  while (0.0 < local_2c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,iVar4);
  }
  fVar10 = param_1->speed;
  fVar9 = (float)3.1415926535000001;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar9 * fVar10;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  iVar4 = pSVar5->state_index;
  iVar6 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar6 != 0) {
    uVar7 = (param_1->base).is_walking;
    if (uVar7 < 2) {
      if (uVar7 == 1) {
LAB_004b8fec:
        iVar4 = 1;
      }
      else {
LAB_004b9178:
        iVar4 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).model.motion_controller,iVar4,1);
    }
    else {
      if (uVar7 < 3) goto LAB_004b8fec;
      if (uVar7 != 3) goto LAB_004b9178;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
    }
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.x =
         (param_1->base).model.accumulated_root_motion.y;
    goto switchD_004b9654_caseD_3;
  }
  switch(iVar4) {
  case 0:
  case 6:
    (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
              (&param_1->base,(int)param_2,in_stack_fffffef4);
    pCVar3 = param_1->victim;
    if (pCVar3 != (CCharacter *)0x0) {
      local_c4 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x;
      local_c0 = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y;
      local_bc = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z;
      local_28 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0);
      local_24 = local_28;
      if (local_28 < 2.0f) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
        if (ABS(local_14) < (float)0.52359877558333301) {
          if (iVar4 == 0) {
            fVar10 = 2.8026e-45;
          }
          else {
            fVar10 = 1.12104e-44;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,(int)fVar10,1);
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                            (*(uint *)param_1[1].base.base.actor_name);
          if (iVar4 == 0) {
            uVar7 = (*((param_1->base).base.vtable._ub)->playSound)
                              ((CDemonActor *)param_1,"hotdemon-attack.wav");
            *(uint *)param_1[1].base.base.actor_name = uVar7;
          }
        }
      }
      if (local_24 < param_1->guard_distance) {
        pCVar1 = &(param_1->base).model;
        if (10.0f <= local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,7,1);
          param_1->attack_cooldown = 0.0;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,1,1);
          param_1->attack_cooldown = 0.0;
        }
      }
      break;
    }
    iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
    if (iVar4 == 0) break;
    goto LAB_004b93d5;
  case 1:
  case 7:
  case 0xf:
    (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
              (&param_1->base,(int)param_2,in_stack_fffffef4);
    fVar10 = 2.0f;
    pCVar1 = &(param_1->base).model;
    if (param_1->victim != (CCharacter *)0x0) {
      fVar9 = 0.17453292;
      local_1c = 2.0f;
      pCVar8 = (CVector3f *)0x3f000000;
      (param_1->base).model.accumulated_root_motion.z = 0.0;
      (param_1->base).model.accumulated_root_motion.y =
           (param_1->base).model.accumulated_root_motion.z;
      (param_1->base).model.accumulated_root_motion.x =
           (param_1->base).model.accumulated_root_motion.y;
      local_64 = 0;
      local_5c = fVar10;
      local_60 = 0;
      path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        (&param_1->base,&(param_1->victim->base).location.position,path_map,pCVar8,
                         fVar9,in_stack_ffffff00);
      if (-1 < iVar6) {
        local_94 = (param_1->base).base.location.position.x -
                   (param_1->victim->base).location.position.x;
        local_8c = (param_1->base).base.location.position.z -
                   (param_1->victim->base).location.position.z;
        local_90 = 0;
        local_20 = SQRT(local_8c * local_8c + local_94 * local_94);
        local_18 = local_20;
        if ((10.0f < local_20) && (iVar4 != 7)) {
          param_1->attack_cooldown = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,7,1);
        }
        if ((local_20 <= local_1c) && (param_1->attack_cooldown <= 0.0)) {
          pCVar3 = param_1->victim;
          local_70 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x;
          local_6c = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y;
          local_68 = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z;
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
          local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
          if (ABS(local_14) < (float)0.52359877558333301) {
            if (iVar4 == 7) {
              fVar10 = 1.12104e-44;
            }
            else {
              fVar10 = 2.8026e-45;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).model.motion_controller,(int)fVar10,1);
            iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                              (*(uint *)param_1[1].base.base.actor_name);
            if (iVar6 == 0) {
              uVar7 = (*((param_1->base).base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"hotdemon-attack.wav");
              *(uint *)param_1[1].base.base.actor_name = uVar7;
            }
            param_1->attack_cooldown = 2.0;
          }
        }
        if (param_1->guard_distance < local_20) {
          pCVar1 = &(param_1->base).model;
          if (iVar4 == 7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,6,1);
            param_1->attack_cooldown = 0.0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,0,1);
            param_1->attack_cooldown = 0.0;
          }
        }
      }
      break;
    }
    iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
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
              (&(param_1->base).model.motion_controller,1,1);
    break;
  case 2:
  case 8:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffef4);
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    damage_info = (SDamageInfo *)&stack0xfffffef4;
    fVar10 = 0.4;
    pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (local_4c,(CVector3f *)&DAT_02dd1184,
                        (CMatrix3x4f *)
                        (param_1->base).model.bone_transform.bone_world_matrices[_DAT_01cae1e8].m);
    pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       ((CDemonActor *)param_1,&local_d0,pCVar8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar8,fVar10,damage_info);
    break;
  case 5:
  case 0xb:
    if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
      pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         (&(param_1->base).model,&local_ac,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_b8,pCVar8);
      core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_b8,0);
      param_1->pool_me = 1;
    }
  }
switchD_004b9654_caseD_3:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if (iVar4 != 0) {
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_58 = (param_1->base).velocity.x * param_2;
    local_54 = (param_1->base).velocity.y * param_2;
    pCVar8 = &(param_1->base).position_delta;
    local_50 = param_2 * (param_1->base).velocity.z;
    pCVar2 = &(param_1->base).model.accumulated_root_motion;
    local_7c = local_58 + pCVar8->x;
    local_78 = local_54 + (param_1->base).position_delta.y;
    local_74 = local_50 + (param_1->base).position_delta.z;
    local_a0.x = local_7c + pCVar2->x;
    local_a0.y = local_78 + (param_1->base).model.accumulated_root_motion.y;
    local_a0.z = local_74 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar8->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    fVar10 = (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.y = fVar10;
    pCVar2->x = fVar10;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_a0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150();
  return;
}
