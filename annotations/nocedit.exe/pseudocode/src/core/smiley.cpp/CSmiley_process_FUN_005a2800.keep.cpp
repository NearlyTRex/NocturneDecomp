// Name: core_smiley.cpp_CSmiley_process_FUN_005a2800
// Address: 005a2800
// MANUAL RECONSTRUCTION
// Address Range: [[005a2800, 005a3159]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_process_FUN_005a2800(CSmiley *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_smiley_cpp_CSmiley_process_FUN_005a2800(CSmiley *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar4;
  CVector3f *pCVar5;
  CCharacter *pCVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  EDeathState EVar4;
  int iVar5;
  uint uVar6;
  int iVar10;
  SMotion *pSVar7;
  int iVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  CVector3f *pCVar12;
  EDeathState EVar13;
  CPathMap *path_map;
  CSmiley *pCVar11;
  float fVar15;
  SDamageInfo *damage_info;
  SDamageInfo local_1cc;
  SDamageInfo local_190;
  SDamageInfo local_154;
  SDamageInfo local_118;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_70;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40 [2];
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_14;
  float fVar12;
  float fVar14;
  SDamageInfo *pSVar13;
  CLocation *pCVar1;
  CCharacter *pCVar3;
  float local_18;
  
  fVar15 = this_ptr->dismember_cooldown - delta_time;
  this_ptr->dismember_cooldown = fVar15;
  if (fVar15 < 0.0) {
    this_ptr->dismember_cooldown = 0.0;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) &&
     (EVar4 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), EVar4 == DEATH_STATE_ALIVE)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1cc);
    local_1cc.damage_type = DAMAGE_TYPE_GENERIC;
    local_1cc.attacker = (CDemonActor *)this_ptr;
    local_1cc.wielder = (CDemonActor *)this_ptr;
    local_1cc.damage_amount = 9999.9;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&local_1cc);
  }
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_28 = delta_time * (this_ptr->base).speed;
  pCVar4 = &(this_ptr->base).base.model;
  while (0.0 < local_28) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar4->motion_controller,&local_28);
    if (uVar6 < 0x66) {
      if (uVar6 == 0x65) {
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,1,1);
        }
        else {
          iVar10 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                             (pCVar3,(CDemonActor *)this_ptr,0);
          if (iVar10 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar4->motion_controller,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar6);
      }
    }
    else if (uVar6 < 0x67) {
      pCVar6 = (this_ptr->base).victim;
      if (pCVar6 != (CCharacter *)0x0) {
        (*(((pCVar6->base).vtable._uc)->_uc).releaseFromGrab)(pCVar6);
      }
    }
    else if (uVar6 == 0x67) {
      iVar10 = this_ptr->attack_hit_count + 1;
      this_ptr->attack_hit_count = iVar10;
      if (2 < iVar10) {
        pCVar6 = (this_ptr->base).victim;
        if (pCVar6 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,1,1);
        }
        else {
          (*(((pCVar6->base).vtable._uc)->_uc).releaseFromGrab)(pCVar6);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_118);
          local_118.damage_type = DAMAGE_TYPE_SHATTER;
          (*(((pCVar6->base).vtable._uc)->_uc).processDamage)(pCVar6,&local_118);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar6);
    }
  }
  fVar15 = (this_ptr->base).speed;
  fVar8 = (float)3.1415926535000001;
  pCVar4 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar8 * fVar15;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar4->motion_controller);
  iVar10 = pSVar7->state_index;
  local_24 = iVar10;
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar10) {
    case 1:
      iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (g_CEventListPtr,"Capture");
      if (iVar10 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar6 = (this_ptr->base).victim;
        if (pCVar6 != (CCharacter *)0x0) {
          local_58.x = (pCVar6->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_58.y = (pCVar6->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_58.z = (pCVar6->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_58.z * local_58.z +
                          local_58.x * local_58.x + local_58.y * local_58.y);
          local_18 = local_20;
          if (local_20 < 2.5f + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c4,&local_58);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_c4.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              this_ptr->attack_hit_count = 0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar4->motion_controller,9,1);
            }
          }
          if (local_20 < this_ptr->guard_distance) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,2,1);
          }
        }
      }
      break;
    case 2:
      iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (g_CEventListPtr,"Capture");
      if (iVar10 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar6 = (this_ptr->base).victim;
        if (pCVar6 != (CCharacter *)0x0) {
          if (this_ptr == (CSmiley *)pCVar6->grabbed_by) {
            (*(((pCVar6->base).vtable._uc)->_uc).releaseFromGrab)(pCVar6);
          }
          local_94.z = 2.5f;
          fVar14 = 0.17453292;
          local_1c = 2.5f;
          fVar15 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_94.x = 0.0;
          pCVar12 = &local_94;
          local_94.y = 0.0;
          pCVar6 = (this_ptr->base).victim;
          path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
          iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                             ((CCharacter *)this_ptr,
                              &(((this_ptr->base).victim)->base).location.position,path_map,pCVar12,
                              fVar15,fVar14);
          if ((((-1 < iVar10) && (0 < iVar10)) &&
              (pCVar6 = (this_ptr->base).victim,
              fVar15 = (pCVar6->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x,
              fVar8 = (pCVar6->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y,
              fVar9 = (pCVar6->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z,
              SQRT(fVar9 * fVar9 + fVar15 * fVar15 + fVar8 * fVar8) < local_1c + 1.0)) &&
             (this_ptr->attack_cooldown <= 0.0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,6,1);
            this_ptr->attack_cooldown = 1.0;
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar4->motion_controller,1,1)
      ;
      break;
    case 6:
      pCVar6 = (this_ptr->base).victim;
      if (pCVar6 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar4->motion_controller,1,1);
      }
      else {
        (*(((pCVar6->base).vtable._uc)->_uc).releaseFromGrab)(pCVar6);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_190);
        local_190.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
        damage_info = &local_190;
        local_190.attacker = (CDemonActor *)this_ptr;
        local_190.wielder = (CDemonActor *)this_ptr;
        fVar15 = 1.0;
        local_14 = local_190.damage_amount;
        pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_b8,&g_ZeroVector.f,
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                             g_SmileyIndices[2]);
        pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((CDemonActor *)this_ptr,&local_dc,pCVar12);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                  (&this_ptr->base,pCVar12,fVar15,damage_info);
      }
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar4,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_4c,pCVar12);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_4c,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar6 = (this_ptr->base).victim;
      if ((pCVar6 == (CCharacter *)0x0) || (pCVar6->grabbed_by == (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar4->motion_controller,1,1);
      }
      else {
        EVar13 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6);
        if (EVar13 == DEATH_STATE_ALIVE) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_154);
          local_154.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
          pSVar13 = &local_154;
          local_154.attacker = (CDemonActor *)this_ptr;
          local_154.wielder = (CDemonActor *)this_ptr;
          fVar12 = 1.0;
          local_14 = local_154.damage_amount;
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_88,&g_ZeroVector.f,
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                               g_SmileyIndices[2]);
          pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((CDemonActor *)this_ptr,&local_d0,pCVar10);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                    (&this_ptr->base,pCVar12,fVar12,pSVar13);
        }
        else {
          pCVar6 = (this_ptr->base).victim;
          (*(((pCVar6->base).vtable._uc)->_uc).releaseFromGrab)(pCVar6);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,1,1);
        }
      }
      break;
    case 10:
      pCVar6 = (this_ptr->base).victim;
      EVar13 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6);
      if (EVar13 != DEATH_STATE_ALIVE) {
        pCVar6 = (this_ptr->base).victim;
        (*(((pCVar6->base).vtable._uc)->_uc).releaseFromGrab)(pCVar6);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar4->motion_controller,1,1);
      }
    }
    goto switchD_005a3055_caseD_7;
  }
  uVar7 = (this_ptr->base).base.is_walking;
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_005a2a90:
      iVar10 = 2;
    }
    else {
LAB_005a2b8e:
      iVar10 = 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar10,1);
  }
  else {
    if (uVar7 < 3) goto LAB_005a2a90;
    if (uVar7 != 3) goto LAB_005a2b8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,1,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",(this_ptr->base).base.base.actor_name);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_005a3055_caseD_7:
  if (0.0 < this_ptr->attack_cooldown) {
    this_ptr->attack_cooldown = this_ptr->attack_cooldown - delta_time;
  }
  if (local_24 == 0xb) {
    pCVar12 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       ((CDemonActor *)this_ptr,&local_70,pCVar12);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar9->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar9->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar9->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar12->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  else {
    iVar10 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar10 != 0) {
      pCVar6 = (this_ptr->base).victim;
      if ((pCVar6 != (CCharacter *)0x0) &&
         (pCVar11 = (CSmiley *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
         pCVar11 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
      }
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
      pCVar12 = &(this_ptr->base).base.position_delta;
      pCVar5 = &(this_ptr->base).base.model.accumulated_root_motion;
      local_ac.x = (this_ptr->base).base.velocity.x * delta_time + pCVar12->x + pCVar5->x;
      local_ac.y = (this_ptr->base).base.velocity.y * delta_time +
                   (this_ptr->base).base.position_delta.y +
                   (this_ptr->base).base.model.accumulated_root_motion.y;
      local_ac.z = delta_time * (this_ptr->base).base.velocity.z +
                   (this_ptr->base).base.position_delta.z +
                   (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar12->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar15 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar15;
      pCVar5->x = fVar15;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_ac);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
