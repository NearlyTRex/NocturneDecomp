// Name: core_smiley.cpp_CSmiley_process_FUN_005200c0
// Address: 005200c0
// Address Range: [[005200c0, 00520a19]]
// Convention: unknown
// Signature: void core_smiley_cpp_CSmiley_process_FUN_005200c0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_smiley_cpp_CSmiley_process_FUN_005200c0(CEnemy *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CCharacter *pCVar3;
  EDeathState EVar4;
  int iVar5;
  uint uVar6;
  SMotion *pSVar7;
  int iVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  CPathMap *path_map;
  CEnemy *pCVar11;
  float fVar12;
  SDamageInfo *pSVar13;
  float fVar14;
  SDamageInfo local_1cc;
  SDamageInfo local_190;
  SDamageInfo local_154;
  SDamageInfo local_118;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40 [2];
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar12 = param_1[1].base.base.orient_matrix.m[0].x - param_2;
  param_1[1].base.base.orient_matrix.m[0].x = fVar12;
  if (fVar12 < 0.0) {
    param_1[1].base.base.orient_matrix.m[0].x = 0.0;
  }
  if (((param_1->base).model.part_data.visibility_flags[*(int *)&param_1[1].base.base.orient] == 0)
     && (EVar4 = (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base),
        EVar4 == DEATH_STATE_ALIVE)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_1cc);
    local_1cc.damage_type = DAMAGE_TYPE_GENERIC;
    local_1cc.attacker = (CDemonActor *)param_1;
    local_1cc.wielder = (CDemonActor *)param_1;
    local_1cc.damage_amount = 9999.9;
    (*(((param_1->base).base.vtable._uc)->_uc).processDamage)(&param_1->base,&local_1cc);
  }
  iVar5 = core_charactr_cpp_FUN_004259f0(&param_1->base,param_2);
  if (iVar5 == 0) {
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_28 = param_2 * param_1->speed;
  pCVar2 = &(param_1->base).model;
  while (0.0 < local_28) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar2->motion_controller,&local_28);
    if (uVar6 < 0x66) {
      if (uVar6 == 0x65) {
        pCVar3 = param_1->victim;
        if (pCVar3 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          iVar5 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)(pCVar3,(CDemonActor *)param_1,0);
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,uVar6);
      }
    }
    else if (uVar6 < 0x67) {
      pCVar3 = param_1->victim;
      if (pCVar3 != (CCharacter *)0x0) {
        (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
      }
    }
    else if (uVar6 == 0x67) {
      iVar5 = (int)param_1[1].base.base.orient.vec.y + 1;
      *(int *)((int)&param_1[1].base.base.orient + 4) = iVar5;
      if (2 < iVar5) {
        if (param_1->victim == (CCharacter *)0x0) {
          (**(code **)(iRam0000014c + 0xe8))(0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_118);
          local_118.damage_type = DAMAGE_TYPE_SHATTER;
          (*(((param_1->victim->base).vtable._uc)->_uc).processDamage)(param_1->victim,&local_118);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,uVar6);
    }
  }
  fVar12 = param_1->speed;
  fVar14 = (float)3.1415926535000001;
  pCVar2 = &(param_1->base).model;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar14 * fVar12;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar2->motion_controller);
  iVar5 = pSVar7->state_index;
  local_24 = iVar5;
  iVar8 = core_charactr_cpp_FUN_00428c00(&param_1->base,param_2);
  if (iVar8 == 0) {
    switch(iVar5) {
    case 1:
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"Capture");
      if (iVar5 == 0) {
        (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
        pCVar3 = param_1->victim;
        if (pCVar3 != (CCharacter *)0x0) {
          local_58.x = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x
          ;
          local_58.y = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y
          ;
          local_58.z = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z
          ;
          local_20 = SQRT(local_58.z * local_58.z +
                          local_58.x * local_58.x + local_58.y * local_58.y);
          local_18 = local_20;
          if (local_20 < 2.5f + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_c4,&local_58);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_c4.y - (param_1->base).base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              param_1[1].base.base.orient.vec.y = 0.0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,9,1);
            }
          }
          if (local_20 < *(float *)(param_1[1].base.base.actor_name + 4)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).model.motion_controller,2,1);
          }
        }
      }
      break;
    case 2:
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"Capture");
      if (iVar5 == 0) {
        (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
        pCVar3 = param_1->victim;
        if (pCVar3 != (CCharacter *)0x0) {
          if (param_1 == (CEnemy *)pCVar3->grabbed_by) {
            (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          }
          local_94.z = 2.5f;
          fVar14 = 0.17453292;
          local_1c = 2.5f;
          fVar12 = 0.5;
          (param_1->base).model.accumulated_root_motion.z = 0.0;
          (param_1->base).model.accumulated_root_motion.y =
               (param_1->base).model.accumulated_root_motion.z;
          (param_1->base).model.accumulated_root_motion.x =
               (param_1->base).model.accumulated_root_motion.y;
          local_94.x = 0.0;
          pCVar10 = &local_94;
          local_94.y = 0.0;
          path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (&param_1->base,&(param_1->victim->base).location.position,path_map,
                             pCVar10,fVar12,fVar14);
          if ((-1 < iVar5) && (0 < iVar5)) {
            pCVar3 = param_1->victim;
            local_a0 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x
            ;
            local_9c = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y
            ;
            local_98 = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z
            ;
            if ((SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) <
                 local_1c + 1.0) && (*(float *)param_1[1].base.base.actor_name <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).model.motion_controller,6,1);
              pCVar11 = param_1 + 1;
              (pCVar11->base).base.actor_name[0] = '\0';
              (pCVar11->base).base.actor_name[1] = '\0';
              (pCVar11->base).base.actor_name[2] = -0x80;
              (pCVar11->base).base.actor_name[3] = '?';
            }
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->motion_controller,1,1)
      ;
      break;
    case 6:
      if (param_1->victim == (CCharacter *)0x0) {
        (**(code **)(iRam0000014c + 0xe8))(0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_190);
        local_190.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
        pSVar13 = &local_190;
        local_190.attacker = (CDemonActor *)param_1;
        local_190.wielder = (CDemonActor *)param_1;
        fVar12 = 1.0;
        local_14 = local_190.damage_amount;
        pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (&local_b8,(CVector3f *)&DAT_02dd1184,
                             (param_1->base).model.bone_transform.bone_world_matrices +
                             _DAT_02da8a7c);
        pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                            ((CDemonActor *)param_1,&local_dc,pCVar10);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar10,fVar12,pSVar13);
      }
      break;
    case 8:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (pCVar2,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_4c,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_4c,0);
        param_1->pool_me = 1;
      }
      break;
    case 9:
      pCVar3 = param_1->victim;
      if ((pCVar3 == (CCharacter *)0x0) || (pCVar3->grabbed_by == (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        EVar4 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (EVar4 == DEATH_STATE_ALIVE) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_154);
          local_154.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
          pSVar13 = &local_154;
          local_154.attacker = (CDemonActor *)param_1;
          local_154.wielder = (CDemonActor *)param_1;
          fVar12 = 1.0;
          local_14 = local_154.damage_amount;
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                              (&local_88,(CVector3f *)&DAT_02dd1184,
                               (param_1->base).model.bone_transform.bone_world_matrices +
                               _DAT_02da8a7c);
          pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              ((CDemonActor *)param_1,&local_d0,pCVar10);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar10,fVar12,pSVar13);
        }
        else {
          (*(((param_1->victim->base).vtable._uc)->_uc).releaseFromGrab)(param_1->victim);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 10:
      EVar4 = (*(((param_1->victim->base).vtable._uc)->_uc).getDeathState)(param_1->victim);
      if (EVar4 != DEATH_STATE_ALIVE) {
        (*(((param_1->victim->base).vtable._uc)->_uc).releaseFromGrab)(param_1->victim);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,1,1);
      }
    }
    goto switchD_00520915_caseD_3;
  }
  uVar6 = (param_1->base).is_walking;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_00520350:
      iVar5 = 2;
    }
    else {
LAB_0052044e:
      iVar5 = 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar5,1);
  }
  else {
    if (uVar6 < 3) goto LAB_00520350;
    if (uVar6 != 3) goto LAB_0052044e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,1,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_00520915_caseD_3:
  if (0.0 < *(float *)param_1[1].base.base.actor_name) {
    *(float *)param_1[1].base.base.actor_name = *(float *)param_1[1].base.base.actor_name - param_2;
  }
  if (local_24 == 0xb) {
    pCVar10 = &(param_1->base).model.accumulated_root_motion;
    pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                       ((CDemonActor *)param_1,&local_70,pCVar10);
    pCVar1 = &(param_1->base).base.location;
    (pCVar1->position).x = pCVar9->x + (pCVar1->position).x;
    (param_1->base).base.location.position.y = pCVar9->y + (param_1->base).base.location.position.y;
    (param_1->base).base.location.position.z = pCVar9->z + (param_1->base).base.location.position.z;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar10->x = (param_1->base).model.accumulated_root_motion.y;
  }
  else {
    iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
    if (iVar5 != 0) {
      pCVar3 = param_1->victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (pCVar11 = (CEnemy *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
         pCVar11 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->victim->base);
      }
      (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
      local_64 = (param_1->base).velocity.x * param_2;
      local_60 = (param_1->base).velocity.y * param_2;
      pCVar10 = &(param_1->base).position_delta;
      local_5c = param_2 * (param_1->base).velocity.z;
      pCVar9 = &(param_1->base).model.accumulated_root_motion;
      local_7c = local_64 + pCVar10->x;
      local_78 = local_60 + (param_1->base).position_delta.y;
      local_74 = local_5c + (param_1->base).position_delta.z;
      local_ac.x = local_7c + pCVar9->x;
      local_ac.y = local_78 + (param_1->base).model.accumulated_root_motion.y;
      local_ac.z = local_74 + (param_1->base).model.accumulated_root_motion.z;
      (param_1->base).position_delta.z = 0.0;
      (param_1->base).position_delta.y = (param_1->base).position_delta.z;
      pCVar10->x = (param_1->base).position_delta.y;
      (param_1->base).model.accumulated_root_motion.z = 0.0;
      fVar12 = (param_1->base).model.accumulated_root_motion.z;
      (param_1->base).model.accumulated_root_motion.y = fVar12;
      pCVar9->x = fVar12;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_ac);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150(&param_1->base,param_2);
  return;
}
