// Name: core_smiley.cpp_CSmiley_process_FUN_005200c0
// Address: 005200c0
// Address Range: [[005200c0, 00520a19]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_process_FUN_005200c0(CSmiley *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_smiley_cpp_CSmiley_process_FUN_005200c0(CSmiley *this_ptr,float delta_time)

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
  CSmiley *pCVar11;
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
  
  fVar12 = this_ptr->dismember_cooldown - delta_time;
  this_ptr->dismember_cooldown = fVar12;
  if (fVar12 < 0.0) {
    this_ptr->dismember_cooldown = 0.0;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) &&
     (EVar4 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), EVar4 == DEATH_STATE_ALIVE)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_1cc);
    local_1cc.damage_type = DAMAGE_TYPE_GENERIC;
    local_1cc.attacker = (CDemonActor *)this_ptr;
    local_1cc.wielder = (CDemonActor *)this_ptr;
    local_1cc.damage_amount = 9999.9;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&local_1cc);
  }
  iVar5 = core_charactr_cpp_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_28 = delta_time * (this_ptr->base).speed;
  pCVar2 = &(this_ptr->base).base.model;
  while (0.0 < local_28) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar2->motion_controller,&local_28);
    if (uVar6 < 0x66) {
      if (uVar6 == 0x65) {
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          iVar5 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)(pCVar3,(CDemonActor *)this_ptr,0)
          ;
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,uVar6);
      }
    }
    else if (uVar6 < 0x67) {
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 != (CCharacter *)0x0) {
        (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
      }
    }
    else if (uVar6 == 0x67) {
      iVar5 = this_ptr->attack_hit_count + 1;
      this_ptr->attack_hit_count = iVar5;
      if (2 < iVar5) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          (**(code **)(iRam0000014c + 0xe8))(0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_118);
          local_118.damage_type = DAMAGE_TYPE_SHATTER;
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_118);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,uVar6);
    }
  }
  fVar12 = (this_ptr->base).speed;
  fVar14 = (float)3.1415926535000001;
  pCVar2 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar14 * fVar12;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar2->motion_controller);
  iVar5 = pSVar7->state_index;
  local_24 = iVar5;
  iVar8 = core_charactr_cpp_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar5) {
    case 1:
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"Capture");
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          local_58.x = (pCVar3->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_58.y = (pCVar3->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_58.z = (pCVar3->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_58.z * local_58.z +
                          local_58.x * local_58.x + local_58.y * local_58.y);
          local_18 = local_20;
          if (local_20 < 2.5f + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_c4,&local_58);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_c4.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              this_ptr->attack_hit_count = 0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,9,1);
            }
          }
          if (local_20 < this_ptr->guard_distance) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,2,1);
          }
        }
      }
      break;
    case 2:
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"Capture");
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          if (this_ptr == (CSmiley *)pCVar3->grabbed_by) {
            (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          }
          local_94.z = 2.5f;
          fVar14 = 0.17453292;
          local_1c = 2.5f;
          fVar12 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_94.x = 0.0;
          pCVar10 = &local_94;
          local_94.y = 0.0;
          pCVar3 = (this_ptr->base).victim;
          path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                             fVar12,fVar14);
          if ((-1 < iVar5) && (0 < iVar5)) {
            pCVar3 = (this_ptr->base).victim;
            local_a0 = (pCVar3->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
            local_9c = (pCVar3->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
            local_98 = (pCVar3->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
            if ((SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) <
                 local_1c + 1.0) && (this_ptr->attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,6,1);
              this_ptr->attack_cooldown = 1.0;
            }
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->motion_controller,1,1)
      ;
      break;
    case 6:
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        (**(code **)(iRam0000014c + 0xe8))(0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_190);
        local_190.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
        pSVar13 = &local_190;
        local_190.attacker = (CDemonActor *)this_ptr;
        local_190.wielder = (CDemonActor *)this_ptr;
        fVar12 = 1.0;
        local_14 = local_190.damage_amount;
        pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (&local_b8,(CVector3f *)&DAT_02dd1184,
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                             _DAT_02da8a7c);
        pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                            ((CDemonActor *)this_ptr,&local_dc,pCVar10);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar10,fVar12,pSVar13);
      }
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (pCVar2,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_4c,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_4c,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar3 = (this_ptr->base).victim;
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
          local_154.attacker = (CDemonActor *)this_ptr;
          local_154.wielder = (CDemonActor *)this_ptr;
          fVar12 = 1.0;
          local_14 = local_154.damage_amount;
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                              (&local_88,(CVector3f *)&DAT_02dd1184,
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                               _DAT_02da8a7c);
          pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              ((CDemonActor *)this_ptr,&local_d0,pCVar10);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                    (&this_ptr->base,pCVar10,fVar12,pSVar13);
        }
        else {
          pCVar3 = (this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 10:
      pCVar3 = (this_ptr->base).victim;
      EVar4 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
      if (EVar4 != DEATH_STATE_ALIVE) {
        pCVar3 = (this_ptr->base).victim;
        (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,1,1);
      }
    }
    goto switchD_00520915_caseD_3;
  }
  uVar6 = (this_ptr->base).base.is_walking;
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
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
  else {
    if (uVar6 < 3) goto LAB_00520350;
    if (uVar6 != 3) goto LAB_0052044e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,1,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00520915_caseD_3:
  if (0.0 < this_ptr->attack_cooldown) {
    this_ptr->attack_cooldown = this_ptr->attack_cooldown - delta_time;
  }
  if (local_24 == 0xb) {
    pCVar10 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                       ((CDemonActor *)this_ptr,&local_70,pCVar10);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar9->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar9->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar9->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar10->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  else {
    iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
    if (iVar5 != 0) {
      pCVar3 = (this_ptr->base).victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (pCVar11 = (CSmiley *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
         pCVar11 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                  (g_CDemonSet_PTR_005be368,&((this_ptr->base).victim)->base);
      }
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
      local_64 = (this_ptr->base).base.velocity.x * delta_time;
      local_60 = (this_ptr->base).base.velocity.y * delta_time;
      pCVar10 = &(this_ptr->base).base.position_delta;
      local_5c = delta_time * (this_ptr->base).base.velocity.z;
      pCVar9 = &(this_ptr->base).base.model.accumulated_root_motion;
      local_7c = local_64 + pCVar10->x;
      local_78 = local_60 + (this_ptr->base).base.position_delta.y;
      local_74 = local_5c + (this_ptr->base).base.position_delta.z;
      local_ac.x = local_7c + pCVar9->x;
      local_ac.y = local_78 + (this_ptr->base).base.model.accumulated_root_motion.y;
      local_ac.z = local_74 + (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar10->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar12 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar12;
      pCVar9->x = fVar12;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_ac);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
