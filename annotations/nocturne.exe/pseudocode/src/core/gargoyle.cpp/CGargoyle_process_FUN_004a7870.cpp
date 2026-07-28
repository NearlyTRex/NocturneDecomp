// Name: core_gargoyle.cpp_CGargoyle_process_FUN_004a7870
// Address: 004a7870
// Address Range: [[004a7870, 004a8251]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_CGargoyle_process_FUN_004a7870(CGargoyle *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gargoyle_cpp_CGargoyle_process_FUN_004a7870(CGargoyle *param_1,float param_2)

{
  CDeformableModelInstance *pCVar1;
  CCharacter *pCVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CVector3f *pCVar7;
  uint uVar8;
  CPathMap *pCVar9;
  float fVar10;
  SDamageInfo *damage_info;
  CVector3f *in_stack_fffffefc;
  CVector3f *pCVar11;
  float in_stack_ffffff08;
  CVector3f local_bc;
  CVector3f local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  int local_80;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(param_1->base).base.model.motion_controller);
    if (pSVar5->state_index == 8) {
      return;
    }
    if (pSVar5->state_index == 5) {
      return;
    }
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  local_2c = param_2 * (param_1->base).speed;
  pCVar1 = &(param_1->base).base.model;
  while (0.0 < local_2c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,iVar4);
  }
  fVar10 = (param_1->base).speed;
  fVar3 = (float)3.1415926535000001;
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.turn_speed = param_2 * fVar3 * fVar10;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  iVar4 = pSVar5->state_index;
  local_28 = iVar4;
  iVar6 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)param_1,(int)param_2,in_stack_fffffefc);
      iVar4 = core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(param_1);
      if (iVar4 == 0) {
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
        param_1->petrify_timer = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,5,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)param_1,"gargoyle-stone.wav");
          param_1->sfx_handles[1] = uVar8;
        }
      }
      else {
        if (param_1->returning_home == 0) {
          pCVar2 = (param_1->base).victim;
          if (pCVar2 == (CCharacter *)0x0) {
            iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
            if (iVar4 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,1,1);
            }
            break;
          }
          local_a4 = (pCVar2->base).location.position.x -
                     (param_1->base).base.base.location.position.x;
          local_a0 = (pCVar2->base).location.position.y -
                     (param_1->base).base.base.location.position.y;
          local_9c = (pCVar2->base).location.position.z -
                     (param_1->base).base.base.location.position.z;
          local_1c = SQRT(local_9c * local_9c + local_a4 * local_a4 + local_a0 * local_a0);
          local_18 = local_1c;
          if (local_1c < 3.0f) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,3,1);
            }
          }
          if ((param_1->base).guard_distance <= local_1c) break;
          pCVar1 = &(param_1->base).base.model;
          if (10.0f <= local_1c) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.1);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,4,1);
            }
            break;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)param_1,(int)param_2,in_stack_fffffefc);
      iVar4 = core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(param_1);
      pCVar1 = &(param_1->base).base.model;
      if (iVar4 == 0) {
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
        param_1->petrify_timer = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,5,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)param_1,"gargoyle-stone.wav");
          param_1->sfx_handles[1] = uVar8;
        }
      }
      else {
        iVar4 = param_1->returning_home;
        pCVar7 = &(param_1->base).base.model.accumulated_root_motion;
        if (iVar4 == 0) {
          if ((param_1->base).victim == (CCharacter *)0x0) {
            iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,0,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,1,1);
            }
          }
          else {
            fVar10 = 0.17453292;
            pCVar11 = (CVector3f *)0x3f000000;
            (param_1->base).base.model.accumulated_root_motion.z = 0.0;
            local_78 = 3.0f;
            (param_1->base).base.model.accumulated_root_motion.y =
                 (param_1->base).base.model.accumulated_root_motion.z;
            pCVar7->x = (param_1->base).base.model.accumulated_root_motion.y;
            pCVar2 = (param_1->base).victim;
            local_20 = local_78;
            local_80 = iVar4;
            local_7c = iVar4;
            pCVar9 = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                              ((CCharacter *)param_1,
                               &(((param_1->base).victim)->base).location.position,pCVar9,pCVar11,
                               fVar10,in_stack_ffffff08);
            if (-1 < iVar6) {
              pCVar2 = (param_1->base).victim;
              local_5c = (param_1->base).base.base.location.position.x -
                         (pCVar2->base).location.position.x;
              local_54 = (param_1->base).base.base.location.position.z -
                         (pCVar2->base).location.position.z;
              local_30 = SQRT(local_54 * local_54 + local_5c * local_5c);
              local_58 = iVar4;
              local_24 = local_30;
              if (10.0f < local_30) {
                iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.1);
                if (iVar4 == 0) {
                  fVar10 = 2.8026e-45;
                }
                else {
                  fVar10 = 5.60519e-45;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&pCVar1->motion_controller,(int)fVar10,1);
              }
              if ((local_24 <= local_20) && ((param_1->base).attack_cooldown <= 0.0)) {
                pCVar2 = (param_1->base).victim;
                local_50 = (pCVar2->base).location.position.x -
                           (param_1->base).base.base.location.position.x;
                local_4c = (pCVar2->base).location.position.y -
                           (param_1->base).base.base.location.position.y;
                local_48 = (pCVar2->base).location.position.z -
                           (param_1->base).base.base.location.position.z;
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
                local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
                if (ABS(local_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (&(param_1->base).base.model.motion_controller,3,1);
                  (param_1->base).attack_cooldown = 1.0;
                }
              }
              if ((param_1->base).guard_distance < local_24) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(param_1->base).base.model.motion_controller,0,1);
              }
            }
          }
        }
        else {
          fVar10 = 0.17453292;
          pCVar11 = (CVector3f *)0x3f000000;
          (param_1->base).base.model.accumulated_root_motion.z = 0.0;
          (param_1->base).base.model.accumulated_root_motion.y =
               (param_1->base).base.model.accumulated_root_motion.z;
          pCVar7->x = (param_1->base).base.model.accumulated_root_motion.y;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          pCVar9 = (*((param_1->home_base->vtable)._ub)->getPathMap)(param_1->home_base);
          core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                    ((CCharacter *)param_1,&(param_1->home_base->location).position,pCVar9,pCVar11,
                     fVar10,in_stack_ffffff08);
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffefc);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40400000,0x40a00000);
      damage_info = (SDamageInfo *)&stack0xfffffefc;
      fVar10 = 0.4;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_8c,(CVector3f *)&DAT_02dd1184,
                          (CMatrix3x4f *)
                          (param_1->base).base.model.bone_transform.bone_world_matrices
                          [_DAT_01c78b20].m);
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_bc,pCVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar7,fVar10,damage_info);
      break;
    case 5:
      (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)param_1,(int)param_2,in_stack_fffffefc);
      iVar4 = core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(param_1);
      if ((iVar4 != 0) &&
         (fVar10 = param_1->petrify_timer - param_2, param_1->petrify_timer = fVar10, fVar10 < 0.0))
      {
        param_1->petrify_timer = 0.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar8 = (*((param_1->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)param_1,"gargoyle-alive?.wav");
          param_1->sfx_handles[1] = uVar8;
        }
      }
    }
    goto switchD_004a818f_caseD_4;
  }
  uVar8 = (param_1->base).base.is_walking;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
LAB_004a7972:
      iVar4 = 1;
    }
    else {
LAB_004a7bc7:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar4,1);
  }
  else {
    if (uVar8 < 3) goto LAB_004a7972;
    if (uVar8 != 3) goto LAB_004a7bc7;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
switchD_004a818f_caseD_4:
  if (0.0 < (param_1->base).attack_cooldown) {
    (param_1->base).attack_cooldown = (param_1->base).attack_cooldown - param_2;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)param_1);
  if (iVar4 != 0) {
    (param_1->base).base.velocity.y =
         (param_1->base).base.velocity.y - param_2 * (float)32;
    local_98 = (param_1->base).base.velocity.x * param_2;
    local_94 = (param_1->base).base.velocity.y * param_2;
    pCVar7 = &(param_1->base).base.position_delta;
    local_90 = param_2 * (param_1->base).base.velocity.z;
    pCVar11 = &(param_1->base).base.model.accumulated_root_motion;
    local_74 = local_98 + pCVar7->x;
    local_70 = local_94 + (param_1->base).base.position_delta.y;
    local_6c = local_90 + (param_1->base).base.position_delta.z;
    local_b0.x = local_74 + pCVar11->x;
    local_b0.y = local_70 + (param_1->base).base.model.accumulated_root_motion.y;
    local_b0.z = local_6c + (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar7->x = (param_1->base).base.position_delta.y;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar11->x = (param_1->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_b0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(param_1->base).base.model);
  iVar4 = local_28;
  core_charactr_cpp_FUN_0042a150();
  if (iVar4 == 5) {
    (param_1->target_scale).x = param_1->stone_red << 8;
    (param_1->target_scale).y = param_1->stone_green << 8;
    (param_1->target_scale).z = param_1->stone_blue << 8;
  }
  else {
    (param_1->target_scale).y = 0xffff;
    (param_1->target_scale).z = 0xffff;
    (param_1->target_scale).x = 0xffff;
  }
  iVar4 = (param_1->target_scale).x;
  iVar6 = (param_1->base).base.base.scale.x;
  if (iVar6 < iVar4) {
    iVar6 = (param_1->base).base.base.scale.x + _DAT_01bd1d80;
    iVar4 = (param_1->target_scale).x;
    (param_1->base).base.base.scale.x = iVar6;
    if (iVar4 < iVar6) {
      (param_1->base).base.base.scale.x = iVar4;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (param_1->base).base.base.scale.x - _DAT_01bd1d80;
    iVar4 = (param_1->target_scale).x;
    (param_1->base).base.base.scale.x = iVar6;
    if (iVar6 < iVar4) {
      (param_1->base).base.base.scale.x = iVar4;
    }
  }
  iVar4 = (param_1->target_scale).y;
  iVar6 = (param_1->base).base.base.scale.y;
  if (iVar6 < iVar4) {
    iVar6 = (param_1->base).base.base.scale.y + _DAT_01bd1d80;
    iVar4 = (param_1->target_scale).y;
    (param_1->base).base.base.scale.y = iVar6;
    if (iVar4 < iVar6) {
      (param_1->base).base.base.scale.y = iVar4;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (param_1->base).base.base.scale.y - _DAT_01bd1d80;
    iVar4 = (param_1->target_scale).y;
    (param_1->base).base.base.scale.y = iVar6;
    if (iVar6 < iVar4) {
      (param_1->base).base.base.scale.y = iVar4;
    }
  }
  iVar4 = (param_1->target_scale).z;
  iVar6 = (param_1->base).base.base.scale.z;
  if (iVar6 < iVar4) {
    iVar6 = (param_1->base).base.base.scale.z + _DAT_01bd1d80;
    iVar4 = (param_1->target_scale).z;
    (param_1->base).base.base.scale.z = iVar6;
    if (iVar4 < iVar6) {
      (param_1->base).base.base.scale.z = iVar4;
      return;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (param_1->base).base.base.scale.z - _DAT_01bd1d80;
    iVar4 = (param_1->target_scale).z;
    (param_1->base).base.base.scale.z = iVar6;
    if (iVar6 < iVar4) {
      (param_1->base).base.base.scale.z = iVar4;
      return;
    }
  }
  return;
}
