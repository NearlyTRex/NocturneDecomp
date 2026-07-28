// Name: core_smiley.cpp_CSmiley_process_FUN_005200c0
// Address: 005200c0
// Address Range: [[005200c0, 00520a19]]
// Convention: unknown
// Signature: void core_smiley_cpp_CSmiley_process_FUN_005200c0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_smiley_cpp_CSmiley_process_FUN_005200c0(CEnemy *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  CDemonActor *pCVar7;
  SMotion *pSVar8;
  float *pfVar9;
  CVector3f *pCVar10;
  CEnemy *pCVar11;
  float fVar12;
  SDamageInfo *pSVar13;
  SDamageInfo *in_stack_fffffe44;
  CPathMap *in_stack_fffffe48;
  float in_stack_fffffe54;
  SDamageInfo local_190;
  SDamageInfo local_154;
  byte local_118 [60];
  CVector3f local_dc;
  CVector3f local_d0 [2];
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  UOrientationVector local_98;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40 [2];
  float local_28;
  float local_24;
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
     && (iVar5 = (*(((param_1->base).base.vtable._uc)->_uc).releaseFromGrab)(&param_1->base),
        iVar5 == 0)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffe34);
    (*(((param_1->base).base.vtable._uc)->_uc).getGrabbed)
              (&param_1->base,(CDemonActor *)&stack0xfffffe34,0x461c3f9a);
  }
  iVar5 = core_charactr_cpp_FUN_004259f0();
  if (iVar5 == 0) {
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_28 = param_2 * param_1->speed;
  this_ptr = &(param_1->base).model;
  while (0.0 < local_28) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr->motion_controller,&local_28);
    if (uVar6 < 0x66) {
      if (uVar6 == 0x65) {
        pCVar3 = param_1->victim;
        if (pCVar3 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,1,1);
        }
        else {
          pCVar7 = (*((pCVar3->base).vtable._ub)->dtor)(&pCVar3->base,(uint)param_1);
          if (pCVar7 == (CDemonActor *)0x0) {
            in_stack_fffffe48 = (CPathMap *)0x1;
            in_stack_fffffe44 = (SDamageInfo *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&this_ptr->motion_controller,1,1);
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
        (*((pCVar3->base).vtable._ub)->archive)(&pCVar3->base);
      }
    }
    else if (uVar6 == 0x67) {
      iVar5 = (int)param_1[1].base.base.orient.vec.y + 1;
      *(int *)((int)&param_1[1].base.base.orient + 4) = iVar5;
      if (2 < iVar5) {
        if (param_1->victim == (CCharacter *)0x0) {
          (**(code **)(iRam0000014c + 0xe8))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)local_118);
          local_118._48_4_ = 5.60519e-45;
          (*(((param_1->victim->base).vtable._uc)->_uc).getGrabbed)
                    (param_1->victim,(CDemonActor *)local_118,(int)in_stack_fffffe44);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,uVar6);
    }
  }
  fVar12 = param_1->speed;
  fVar4 = (float)3.1415926535000001;
  pSVar13 = (SDamageInfo *)&(param_1->base).model;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar4 * fVar12;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)pSVar13);
  fVar12 = (float)pSVar8->state_index;
  local_24 = fVar12;
  iVar5 = core_charactr_cpp_FUN_00428c00();
  if (iVar5 == 0) {
    switch(fVar12) {
    case 1.4013e-45:
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"Capture");
      if (iVar5 == 0) {
        (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                  (&param_1->base,(int)param_2,(CVector3f *)in_stack_fffffe44);
        pCVar3 = param_1->victim;
        if (pCVar3 != (CCharacter *)0x0) {
          local_58 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x;
          local_54 = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y;
          local_50 = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z;
          local_20 = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
          local_18 = local_20;
          if (local_20 < 2.5f + 1.0) {
            in_stack_fffffe44 = (SDamageInfo *)0x52076d;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
            in_stack_fffffe48 = (CPathMap *)0x520781;
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            if (ABS(local_14) < (float)0.52359877558333301) {
              in_stack_fffffe48 = (CPathMap *)0x9;
              param_1[1].base.base.orient.vec.y = 0.0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        ((CMotionController *)pSVar13,9,1);
              in_stack_fffffe44 = pSVar13;
            }
          }
          if (local_20 < *(float *)(param_1[1].base.base.actor_name + 4)) {
            in_stack_fffffe48 = (CPathMap *)0x2;
            in_stack_fffffe44 = (SDamageInfo *)&(param_1->base).model;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      ((CMotionController *)in_stack_fffffe44,2,1);
          }
        }
      }
      break;
    case 2.8026e-45:
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"Capture");
      if (iVar5 == 0) {
        (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                  (&param_1->base,(int)param_2,(CVector3f *)in_stack_fffffe44);
        pCVar3 = param_1->victim;
        if (pCVar3 != (CCharacter *)0x0) {
          if (param_1 == (CEnemy *)pCVar3->grabbed_by) {
            (*((pCVar3->base).vtable._ub)->archive)(&pCVar3->base);
          }
          local_8c = 2.5f;
          fVar12 = 0.17453292;
          local_1c = 2.5f;
          pCVar10 = (CVector3f *)0x3f000000;
          (param_1->base).model.accumulated_root_motion.z = 0.0;
          (param_1->base).model.accumulated_root_motion.y =
               (param_1->base).model.accumulated_root_motion.z;
          (param_1->base).model.accumulated_root_motion.x =
               (param_1->base).model.accumulated_root_motion.y;
          local_98.vec.y = 0.0;
          local_98.vec.z = 0.0;
          in_stack_fffffe48 =
               (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
          in_stack_fffffe44 = (SDamageInfo *)&(param_1->victim->base).location;
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (&param_1->base,(CVector3f *)in_stack_fffffe44,in_stack_fffffe48,pCVar10
                             ,fVar12,in_stack_fffffe54);
          if ((-1 < iVar5) && (0 < iVar5)) {
            pCVar3 = param_1->victim;
            local_a0 = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x
            ;
            local_9c = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y
            ;
            local_98.vec.x =
                 (pCVar3->base).location.position.z - (param_1->base).base.location.position.z;
            if ((SQRT(local_98.vec.x * local_98.vec.x + local_a0 * local_a0 + local_9c * local_9c) <
                 local_1c + 1.0) && (*(float *)param_1[1].base.base.actor_name <= 0.0)) {
              in_stack_fffffe48 = (CPathMap *)0x5208f7;
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
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)pSVar13,1,1);
      break;
    case 8.40779e-45:
      if (param_1->victim == (CCharacter *)0x0) {
        (**(code **)(iRam0000014c + 0xe8))();
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pSVar13,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_190);
        local_190.damage_amount = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
        pSVar13 = &local_190;
        local_190.attacker = (CDemonActor *)param_1;
        local_190.wielder = (CDemonActor *)param_1;
        fVar12 = 1.0;
        local_14 = local_190.damage_amount;
        pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (&local_b8,(CVector3f *)&DAT_02dd1184,
                             (CMatrix3x4f *)
                             (param_1->base).model.bone_transform.bone_world_matrices[_DAT_02da8a7c]
                             .m);
        pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                            ((CDemonActor *)param_1,&local_dc,pCVar10);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar10,fVar12,pSVar13);
      }
      break;
    case 1.12104e-44:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            ((CDeformableModelInstance *)pSVar13,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_4c,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_4c,0);
        param_1->pool_me = 1;
      }
      break;
    case 1.26117e-44:
      pCVar3 = param_1->victim;
      if ((pCVar3 == (CCharacter *)0x0) || (pCVar3->grabbed_by == (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pSVar13,1,1);
      }
      else {
        iVar5 = (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
        if (iVar5 == 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_154);
          local_154.damage_amount = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          in_stack_fffffe44 = &local_154;
          local_154.attacker = (CDemonActor *)param_1;
          local_154.wielder = (CDemonActor *)param_1;
          fVar12 = 1.0;
          local_14 = local_154.damage_amount;
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                              (&local_88,(CVector3f *)&DAT_02dd1184,
                               (CMatrix3x4f *)
                               (param_1->base).model.bone_transform.bone_world_matrices
                               [_DAT_02da8a7c].m);
          pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              ((CDemonActor *)param_1,local_d0,pCVar10);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                    (param_1,pCVar10,fVar12,in_stack_fffffe44);
        }
        else {
          (*((param_1->victim->base).vtable._ub)->archive)(&param_1->victim->base);
          in_stack_fffffe48 = (CPathMap *)0x1;
          in_stack_fffffe44 = (SDamageInfo *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    ((CMotionController *)pSVar13,1,1);
        }
      }
      break;
    case 1.4013e-44:
      iVar5 = (*(((param_1->victim->base).vtable._uc)->_uc).releaseFromGrab)(param_1->victim);
      if (iVar5 != 0) {
        (*((param_1->victim->base).vtable._ub)->archive)(&param_1->victim->base);
        in_stack_fffffe48 = (CPathMap *)0x1;
        in_stack_fffffe44 = (SDamageInfo *)0x1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  ((CMotionController *)pSVar13,1,1);
      }
    }
    goto switchD_00520915_caseD_3;
  }
  uVar6 = (param_1->base).is_walking;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_00520350:
      fVar12 = 2.8026e-45;
    }
    else {
LAB_0052044e:
      fVar12 = 1.4013e-45;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,(int)fVar12,1);
  }
  else {
    if (uVar6 < 3) goto LAB_00520350;
    if (uVar6 != 3) goto LAB_0052044e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,1,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60();
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_00520915_caseD_3:
  if (0.0 < *(float *)param_1[1].base.base.actor_name) {
    *(float *)param_1[1].base.base.actor_name = *(float *)param_1[1].base.base.actor_name - param_2;
  }
  if (local_24 == 1.54143e-44) {
    pfVar9 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200();
    pCVar1 = &(param_1->base).base.location;
    (pCVar1->position).x = *pfVar9 + (pCVar1->position).x;
    (param_1->base).base.location.position.y = pfVar9[1] + (param_1->base).base.location.position.y;
    (param_1->base).base.location.position.z = pfVar9[2] + (param_1->base).base.location.position.z;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.x =
         (param_1->base).model.accumulated_root_motion.y;
  }
  else {
    iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
    if (iVar5 != 0) {
      pCVar3 = param_1->victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (pCVar11 = (CEnemy *)
                    (*(((pCVar3->base).vtable._uc)->_uc).applyDamage)
                              (pCVar3,(int)in_stack_fffffe44,(float)in_stack_fffffe48),
         pCVar11 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->victim->base);
      }
      (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
      local_64 = (param_1->base).velocity.x * param_2;
      local_60 = (param_1->base).velocity.y * param_2;
      pCVar10 = &(param_1->base).position_delta;
      local_5c = param_2 * (param_1->base).velocity.z;
      pCVar2 = &(param_1->base).model.accumulated_root_motion;
      local_7c = local_64 + pCVar10->x;
      local_78 = local_60 + (param_1->base).position_delta.y;
      local_74 = local_5c + (param_1->base).position_delta.z;
      local_ac.x = local_7c + pCVar2->x;
      local_ac.y = local_78 + (param_1->base).model.accumulated_root_motion.y;
      local_ac.z = local_74 + (param_1->base).model.accumulated_root_motion.z;
      (param_1->base).position_delta.z = 0.0;
      (param_1->base).position_delta.y = (param_1->base).position_delta.z;
      pCVar10->x = (param_1->base).position_delta.y;
      (param_1->base).model.accumulated_root_motion.z = 0.0;
      fVar12 = (param_1->base).model.accumulated_root_motion.z;
      (param_1->base).model.accumulated_root_motion.y = fVar12;
      pCVar2->x = fVar12;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_ac);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150();
  return;
}
