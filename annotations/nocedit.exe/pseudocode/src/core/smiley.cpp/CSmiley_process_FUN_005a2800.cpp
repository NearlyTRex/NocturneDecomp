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
  float fVar3;
  int iVar4;
  uint uVar5;
  SMotion *pSVar6;
  int iVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  CSmiley *pCVar10;
  float fVar11;
  SDamageInfo local_190;
  SDamageInfo local_154;
  SDamageInfo local_118;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  uint local_94;
  uint local_90;
  float local_8c;
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
  
  fVar11 = *(float *)(this_ptr->unk2 + 0x34) - delta_time;
  *(float *)(this_ptr->unk2 + 0x34) = fVar11;
  if (fVar11 < 0.0) {
    this_ptr->unk2[0x34] = '\0';
    this_ptr->unk2[0x35] = '\0';
    this_ptr->unk2[0x36] = '\0';
    this_ptr->unk2[0x37] = '\0';
  }
  if (((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk2 + 0x28)] == 0) &&
     (iVar4 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr)
     , iVar4 == 0)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe34);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,(SDamageInfo *)&stack0xfffffe34);
  }
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar4 == 0) {
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
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (uVar5 < 0x66) {
      if (uVar5 == 0x65) {
        iVar4 = *(int *)((this_ptr->base).unk2 + 4);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x100))();
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      }
    }
    else if (uVar5 < 0x67) {
      iVar4 = *(int *)((this_ptr->base).unk2 + 4);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x104))();
      }
    }
    else if (uVar5 == 0x67) {
      iVar4 = *(int *)(this_ptr->unk2 + 0x2c) + 1;
      *(int *)(this_ptr->unk2 + 0x2c) = iVar4;
      if (2 < iVar4) {
        if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
          (**(code **)(iRam00000154 + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_118);
          local_118.damage_type = 4;
          (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x11c))();
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
  }
  fVar11 = (this_ptr->base).speed;
  fVar3 = (float)3.1415926535000001;
  pCVar2 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar3 * fVar11;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  iVar4 = pSVar6->state_index;
  local_24 = iVar4;
  iVar7 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar7 == 0) {
    switch(iVar4) {
    case 1:
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"Capture");
      if (iVar4 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        iVar4 = *(int *)((this_ptr->base).unk2 + 4);
        if (iVar4 != 0) {
          local_58.x = *(float *)(iVar4 + 0x20) - (this_ptr->base).base.base.location.position.x;
          local_58.y = *(float *)(iVar4 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_58.z = *(float *)(iVar4 + 0x28) - (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_58.z * local_58.z +
                          local_58.x * local_58.x + local_58.y * local_58.y);
          local_18 = local_20;
          if (local_20 < 2.5f + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c4,&local_58);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_c4.y - (this_ptr->base).base.base.orient.bank);
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
    case 2:
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"Capture");
      if (iVar4 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        iVar4 = *(int *)((this_ptr->base).unk2 + 4);
        if (iVar4 != 0) {
          if (this_ptr == *(CSmiley **)(iVar4 + 0x2598)) {
            (**(code **)(*(int *)(iVar4 + 0x154) + 0x104))(iVar4);
          }
          local_8c = 2.5f;
          local_1c = 2.5f;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_94 = 0;
          local_90 = 0;
          (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
          if ((-1 < iVar4) && (0 < iVar4)) {
            iVar4 = *(int *)((this_ptr->base).unk2 + 4);
            local_a0 = *(float *)(iVar4 + 0x20) - (this_ptr->base).base.base.location.position.x;
            local_9c = *(float *)(iVar4 + 0x24) - (this_ptr->base).base.base.location.position.y;
            local_98 = *(float *)(iVar4 + 0x28) - (this_ptr->base).base.base.location.position.z;
            if ((SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) <
                 local_1c + 1.0) && (*(float *)(this_ptr->unk1 + 8) <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,6,1);
              this_ptr->unk1[8] = '\0';
              this_ptr->unk1[9] = '\0';
              this_ptr->unk1[10] = -0x80;
              this_ptr->unk1[0xb] = '?';
            }
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,1,1)
      ;
      break;
    case 6:
      if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
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
        pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_b8,&g_ZeroVector,
                            (CMatrix3x4f *)
                            (this_ptr->base).base.model.bone_transform.bone_world_matrices
                            [INT_03f48fa8].m);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_dc,pCVar9);
        core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      }
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (pCVar2,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_4c,pCVar9);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      iVar4 = *(int *)((this_ptr->base).unk2 + 4);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x2598) == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x120))(iVar4);
        if (iVar4 == 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_154);
          local_154.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          local_154.attacker = (CDemonActor *)this_ptr;
          local_154.wielder = (CDemonActor *)this_ptr;
          local_14 = local_154.damage_amount;
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_88,&g_ZeroVector,
                              (CMatrix3x4f *)
                              (this_ptr->base).base.model.bone_transform.bone_world_matrices
                              [INT_03f48fa8].m);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_d0,pCVar9);
          core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
        }
        else {
          (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 10:
      iVar4 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x120))();
      if (iVar4 != 0) {
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x104))();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
    }
    goto switchD_005a3055_caseD_7;
  }
  uVar5 = (this_ptr->base).base.field22_0x25b0;
  if (uVar5 < 2) {
    if (uVar5 == 1) {
LAB_005a2a90:
      fVar11 = 2.8026e-45;
    }
    else {
LAB_005a2b8e:
      fVar11 = 1.4013e-45;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,(int)fVar11,1);
  }
  else {
    if (uVar5 < 3) goto LAB_005a2a90;
    if (uVar5 != 3) goto LAB_005a2b8e;
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
  if (0.0 < *(float *)(this_ptr->unk1 + 8)) {
    *(float *)(this_ptr->unk1 + 8) = *(float *)(this_ptr->unk1 + 8) - delta_time;
  }
  if (local_24 == 0xb) {
    pCVar9 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar8 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       ((CDemonActor *)this_ptr,&local_70,pCVar9);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar8->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar8->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar8->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar9->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  else {
    iVar4 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar4 != 0) {
      iVar4 = *(int *)((this_ptr->base).unk2 + 4);
      if ((iVar4 != 0) &&
         (pCVar10 = (CSmiley *)(**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(), pCVar10 == this_ptr
         )) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base).unk2 + 4));
      }
      (this_ptr->base).base.field7_0x2428.y =
           (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
      local_64 = (this_ptr->base).base.field7_0x2428.x * delta_time;
      local_60 = (this_ptr->base).base.field7_0x2428.y * delta_time;
      pCVar9 = &(this_ptr->base).base.field6_0x241c;
      local_5c = delta_time * (this_ptr->base).base.field7_0x2428.z;
      pCVar8 = &(this_ptr->base).base.model.accumulated_root_motion;
      local_7c = local_64 + pCVar9->x;
      local_78 = local_60 + (this_ptr->base).base.field6_0x241c.y;
      local_74 = local_5c + (this_ptr->base).base.field6_0x241c.z;
      local_ac = local_7c + pCVar8->x;
      local_a8 = local_78 + (this_ptr->base).base.model.accumulated_root_motion.y;
      local_a4 = local_74 + (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.field6_0x241c.z = 0.0;
      (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
      pCVar9->x = (this_ptr->base).base.field6_0x241c.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar11 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar11;
      pCVar8->x = fVar11;
      core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
