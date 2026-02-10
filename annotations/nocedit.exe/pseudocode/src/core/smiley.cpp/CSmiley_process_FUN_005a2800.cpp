// Name: core_smiley.cpp_CSmiley_process_FUN_005a2800
// Address: 005a2800
// Address Range: [[005a2800, 005a3159]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_process_FUN_005a2800(CSmiley *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_smiley_cpp_CSmiley_process_FUN_005a2800(CSmiley *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CCharacter *pCVar3;
  CDemonActor *pCVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  SMotion *pSVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  CPathMap *path_map;
  CSmiley *pCVar11;
  float fVar12;
  CDemonActor *in_stack_fffffe40;
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
  char local_94 [8];
  float local_8c;
  CVector3f local_88;
  float local_7c;
  CPlatform *local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40 [2];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar12 = *(float *)(this_ptr->unk2 + 0x34) - delta_time;
  *(float *)(this_ptr->unk2 + 0x34) = fVar12;
  if (fVar12 < 0.0) {
    this_ptr->unk2[0x34] = '\0';
    this_ptr->unk2[0x35] = '\0';
    this_ptr->unk2[0x36] = '\0';
    this_ptr->unk2[0x37] = '\0';
  }
  if (((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk2 + 0x28)] == 0) &&
     (iVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), iVar6 == 0)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe34);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,(SDamageInfo *)&stack0xfffffe34);
  }
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
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
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (uVar7 < 0x66) {
      if (uVar7 == 0x65) {
        pCVar3 = (CCharacter *)(this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)(pCVar3,(CDemonActor *)this_ptr,0)
          ;
          if (iVar6 == 0) {
            in_stack_fffffe40 = (CDemonActor *)pCVar2;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar7);
      }
    }
    else if (uVar7 < 0x67) {
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar3 != (CCharacter *)0x0) {
        (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
      }
    }
    else if (uVar7 == 0x67) {
      iVar6 = *(int *)(this_ptr->unk2 + 0x2c) + 1;
      *(int *)(this_ptr->unk2 + 0x2c) = iVar6;
      if (2 < iVar6) {
        if ((this_ptr->base).victim == (CDemonActor *)0x0) {
          (**(code **)(iRam00000154 + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_118);
          local_118.damage_type = 4;
          pCVar3 = (CCharacter *)(this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&local_118);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar7);
    }
  }
  fVar12 = (this_ptr->base).speed;
  fVar5 = (float)3.1415926535000001;
  pCVar2 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar12;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  fVar12 = (float)pSVar8->state_index;
  local_24 = fVar12;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(fVar12) {
    case 1.4013e-45:
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"Capture");
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 != (CDemonActor *)0x0) {
          local_58.x = (pCVar4->location).position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_58.y = (pCVar4->location).position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_58.z = (pCVar4->location).position.z -
                       (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_58.z * local_58.z +
                          local_58.x * local_58.x + local_58.y * local_58.y);
          local_18 = local_20;
          if (local_20 < 2.5f + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c4,&local_58);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_c4.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              this_ptr->unk2[0x2c] = '\0';
              this_ptr->unk2[0x2d] = '\0';
              this_ptr->unk2[0x2e] = '\0';
              this_ptr->unk2[0x2f] = '\0';
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,9,1);
            }
          }
          if (local_20 < this_ptr->guard_distance) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,2,1);
          }
        }
      }
      break;
    case 2.8026e-45:
      iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"Capture");
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        pCVar3 = (CCharacter *)(this_ptr->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          if (this_ptr == (CSmiley *)pCVar3->grabbed_by) {
            (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          }
          local_8c = 2.5f;
          fVar12 = 0.17453292;
          local_1c = 2.5f;
          pCVar10 = (CVector3f *)0x3f000000;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_94[0] = '\0';
          local_94[1] = '\0';
          local_94[2] = '\0';
          local_94[3] = '\0';
          local_94[4] = '\0';
          local_94[5] = '\0';
          local_94[6] = '\0';
          local_94[7] = '\0';
          pCVar4 = (this_ptr->base).victim;
          path_map = (*((pCVar4->vtable)._ub)->getPathMap)(pCVar4);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                             path_map,pCVar10,fVar12,(float)in_stack_fffffe40);
          if ((-1 < iVar6) && (0 < iVar6)) {
            pCVar4 = (this_ptr->base).victim;
            local_a0 = (pCVar4->location).position.x -
                       (this_ptr->base).base.base.location.position.x;
            local_9c = (pCVar4->location).position.y -
                       (this_ptr->base).base.base.location.position.y;
            local_98 = (pCVar4->location).position.z -
                       (this_ptr->base).base.base.location.position.z;
            if ((SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) <
                 local_1c + 1.0) && ((float)this_ptr->unk1 <= 0.0)) {
              in_stack_fffffe40 = (CDemonActor *)0x1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,6,1);
              this_ptr->unk1 = 0x3f800000;
            }
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,1,1)
      ;
      break;
    case 8.40779e-45:
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        (**(code **)(iRam00000154 + 0x104))();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_190);
        local_190.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
        local_190.attacker = (CDemonActor *)this_ptr;
        local_190.wielder = (CDemonActor *)this_ptr;
        local_14 = local_190.damage_amount;
        pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_b8,&g_ZeroVector,
                             (CMatrix3x4f *)
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices
                             [INT_03f48fa8].m);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_dc,pCVar10);
        core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      }
      break;
    case 1.12104e-44:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_4c,pCVar10);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 1.26117e-44:
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar3 == (CCharacter *)0x0) || (pCVar3->grabbed_by == (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (iVar6 == 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_154);
          local_154.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          in_stack_fffffe40 = (CDemonActor *)&local_154;
          local_154.attacker = (CDemonActor *)this_ptr;
          local_154.wielder = (CDemonActor *)this_ptr;
          local_14 = local_154.damage_amount;
          pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                              (&local_88,&g_ZeroVector,
                               (CMatrix3x4f *)
                               (this_ptr->base).base.model.bone_transform.bone_world_matrices
                               [INT_03f48fa8].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_d0,pCVar10);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
        }
        else {
          pCVar3 = (CCharacter *)(this_ptr->base).victim;
          (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
          in_stack_fffffe40 = (CDemonActor *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 1.4013e-44:
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
      if (iVar6 != 0) {
        pCVar3 = (CCharacter *)(this_ptr->base).victim;
        (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
        in_stack_fffffe40 = (CDemonActor *)0x1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
    }
    goto switchD_005a3055_caseD_7;
  }
  uVar7 = (this_ptr->base).base.is_walking;
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_005a2a90:
      fVar12 = 2.8026e-45;
    }
    else {
LAB_005a2b8e:
      fVar12 = 1.4013e-45;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,(int)fVar12,1);
  }
  else {
    if (uVar7 < 3) goto LAB_005a2a90;
    if (uVar7 != 3) goto LAB_005a2b8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,1,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_005a3055_caseD_7:
  if (0.0 < (float)this_ptr->unk1) {
    this_ptr->unk1 = (int)((float)this_ptr->unk1 - delta_time);
  }
  if (local_24 == 1.54143e-44) {
    pCVar10 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
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
    iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar6 != 0) {
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (pCVar11 = (CSmiley *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
         pCVar11 == this_ptr)) {
        in_stack_fffffe40 = (this_ptr->base).victim;
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_fffffe40);
      }
      (this_ptr->base).base.field7_0x2428.y =
           (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
      local_64 = (this_ptr->base).base.field7_0x2428.x * delta_time;
      local_60 = (this_ptr->base).base.field7_0x2428.y * delta_time;
      pCVar10 = &(this_ptr->base).base.field6_0x241c;
      local_5c = delta_time * (this_ptr->base).base.field7_0x2428.z;
      pCVar9 = &(this_ptr->base).base.model.accumulated_root_motion;
      local_7c = local_64 + pCVar10->x;
      local_78 = (CPlatform *)(local_60 + (this_ptr->base).base.field6_0x241c.y);
      local_74 = local_5c + (this_ptr->base).base.field6_0x241c.z;
      local_ac.x = local_7c + pCVar9->x;
      local_ac.y = (float)local_78 + (this_ptr->base).base.model.accumulated_root_motion.y;
      local_ac.z = local_74 + (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.field6_0x241c.z = 0.0;
      (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
      pCVar10->x = (this_ptr->base).base.field6_0x241c.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar12 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar12;
      pCVar9->x = fVar12;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_ac);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_fffffe40);
  return;
}
