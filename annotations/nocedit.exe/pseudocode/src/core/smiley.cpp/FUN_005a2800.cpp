// Name: core_smiley.cpp_FUN_005a2800
// Address: 005a2800
// Address Range: [[005a2800, 005a3159]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a2800()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_005a27d0 = 005a2de7
//   TerminatedCString s_s_confused_while_walking_0064f2ca
//   TerminatedCString s_Capture_0064f2f4
//   TerminatedCString s_Capture_0064f2fc
//   undefined4 DAT_0064f30a
//   undefined4 DAT_0064f312
//   undefined4 DAT_0064f31a
//   undefined4 DAT_00662f68
//   CEventList* g_CEventListPtr = 02d05310
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   CEventList g_CEventListInstance
//   CGore g_CGoreInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03f48fa8
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_enemy.cpp_FUN_004a9880
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_smiley.cpp_FUN_005a2800(undefined4 param_1, undefined4
   param_2) */

void core_smiley_cpp_FUN_005a2800(void)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  CCharacter *pCVar9;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  SCollisionInfo *in_stack_fffffe34;
  float in_stack_fffffe3c;
  float fVar10;
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
  undefined4 local_94;
  undefined4 local_90;
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
  
  fVar10 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x5c) - in_stack_00000008;
  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x5c) = fVar10;
  if (fVar10 < 0.0) {
    pCVar9 = in_stack_00000004 + 1;
    (pCVar9->base_actor).create_event[0x5c] = '\0';
    (pCVar9->base_actor).create_event[0x5d] = '\0';
    (pCVar9->base_actor).create_event[0x5e] = '\0';
    (pCVar9->base_actor).create_event[0x5f] = '\0';
  }
  if (((in_stack_00000004->model).part_visibility_flags
       [*(int *)(in_stack_00000004[1].base_actor.create_event + 0x50)] == 0) &&
     (iVar4 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                        (&in_stack_00000004->base_actor,in_stack_fffffe34), iVar4 == 0)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe34);
    (*(in_stack_00000004->base_actor).vtable[1].playAmbientSoundWithVolume)
              (&in_stack_00000004->base_actor,(char *)0x461c3f9a,in_stack_fffffe3c);
  }
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar4 == 0) {
    return;
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  local_28 = in_stack_00000008 * *(float *)in_stack_00000004[1].base_actor.actor_name;
  pCVar2 = &in_stack_00000004->model;
  while (0.0 < local_28) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (uVar5 < 0x66) {
      if (uVar5 == 0x65) {
        iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
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
        core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      }
    }
    else if (uVar5 < 0x67) {
      iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x104))();
      }
    }
    else if (uVar5 == 0x67) {
      iVar4 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x54) + 1;
      *(int *)(in_stack_00000004[1].base_actor.create_event + 0x54) = iVar4;
      if (2 < iVar4) {
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) == 0) {
          (**(code **)(iRam00000154 + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_118);
          local_118.damage_type = 4;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) + 0x154)
                      + 0x11c))();
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  }
  fVar10 = *(float *)in_stack_00000004[1].base_actor.actor_name;
  fVar3 = (float)_DAT_0064f30a;
  pCVar2 = &in_stack_00000004->model;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar3 * fVar10;
  iVar4 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar2->motion_controller);
  iVar4 = *(int *)(iVar4 + 0x24);
  local_24 = iVar4;
  iVar6 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 1:
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"Capture");
      if (iVar4 == 0) {
        (*(in_stack_00000004->base_actor).vtable[1].getAllowedMeleeAttackTypes)
                  (&in_stack_00000004->base_actor);
        iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
        if (iVar4 != 0) {
          local_58.x = *(float *)(iVar4 + 0x20) -
                       (in_stack_00000004->base_actor).location.position.x;
          local_58.y = *(float *)(iVar4 + 0x24) -
                       (in_stack_00000004->base_actor).location.position.y;
          local_58.z = *(float *)(iVar4 + 0x28) -
                       (in_stack_00000004->base_actor).location.position.z;
          local_20 = SQRT(local_58.z * local_58.z +
                          local_58.x * local_58.x + local_58.y * local_58.y);
          local_18 = local_20;
          if (local_20 < DAT_00662f68 + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c4,&local_58);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_c4.y - (in_stack_00000004->base_actor).orient.bank);
            if (ABS(local_14) < (float)_DAT_0064f312) {
              pCVar9 = in_stack_00000004 + 1;
              (pCVar9->base_actor).create_event[0x54] = '\0';
              (pCVar9->base_actor).create_event[0x55] = '\0';
              (pCVar9->base_actor).create_event[0x56] = '\0';
              (pCVar9->base_actor).create_event[0x57] = '\0';
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,9,1);
            }
          }
          if (local_20 < *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,2,1);
          }
        }
      }
      break;
    case 2:
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"Capture");
      if (iVar4 == 0) {
        (*(in_stack_00000004->base_actor).vtable[1].getAllowedMeleeAttackTypes)
                  (&in_stack_00000004->base_actor);
        iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
        if (iVar4 != 0) {
          if (in_stack_00000004 == *(CCharacter **)(iVar4 + 0x2598)) {
            (**(code **)(*(int *)(iVar4 + 0x154) + 0x104))(iVar4);
          }
          local_8c = DAT_00662f68;
          local_1c = DAT_00662f68;
          (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
          (in_stack_00000004->model).accumulated_root_motion.y =
               (in_stack_00000004->model).accumulated_root_motion.z;
          (in_stack_00000004->model).accumulated_root_motion.x =
               (in_stack_00000004->model).accumulated_root_motion.y;
          local_94 = 0;
          local_90 = 0;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) + 0x154)
                      + 0xbc))();
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
          if ((-1 < iVar4) && (0 < iVar4)) {
            iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
            local_a0 = *(float *)(iVar4 + 0x20) -
                       (in_stack_00000004->base_actor).location.position.x;
            local_9c = *(float *)(iVar4 + 0x24) -
                       (in_stack_00000004->base_actor).location.position.y;
            local_98 = *(float *)(iVar4 + 0x28) -
                       (in_stack_00000004->base_actor).location.position.z;
            if ((SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) <
                 local_1c + 1.0) &&
               (*(float *)(in_stack_00000004[1].base_actor.create_event + 0x20) <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,6,1);
              pCVar9 = in_stack_00000004 + 1;
              (pCVar9->base_actor).create_event[0x20] = '\0';
              (pCVar9->base_actor).create_event[0x21] = '\0';
              (pCVar9->base_actor).create_event[0x22] = -0x80;
              (pCVar9->base_actor).create_event[0x23] = '?';
            }
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,1,1)
      ;
      break;
    case 6:
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) == 0) {
        (**(code **)(iRam00000154 + 0x104))();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_190);
        local_190.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
        local_190.attacker = &in_stack_00000004->base_actor;
        local_190.wielder = &in_stack_00000004->base_actor;
        local_14 = local_190.damage_amount;
        pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_b8,&g_ZeroVector,
                            (in_stack_00000004->model).bone_transform.bone_world_matrices +
                            DAT_03f48fa8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&in_stack_00000004->base_actor,&local_dc,pCVar8);
        core_enemy_cpp_FUN_004a9880();
      }
      break;
    case 8:
      if ((*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 0) &&
         ((in_stack_00000004->base_actor).field11_0xdc == 0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (pCVar2,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&in_stack_00000004->base_actor,&local_4c,pCVar8);
        core_gore_cpp_FUN_004ede30();
        pCVar9 = in_stack_00000004 + 1;
        (pCVar9->base_actor).actor_name[4] = '\x01';
        (pCVar9->base_actor).actor_name[5] = '\0';
        (pCVar9->base_actor).actor_name[6] = '\0';
        (pCVar9->base_actor).actor_name[7] = '\0';
      }
      break;
    case 9:
      iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x2598) == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x120))(iVar4);
        if (iVar4 == 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_154);
          local_154.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          local_154.attacker = &in_stack_00000004->base_actor;
          local_154.wielder = &in_stack_00000004->base_actor;
          local_14 = local_154.damage_amount;
          pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_88,&g_ZeroVector,
                              (in_stack_00000004->model).bone_transform.bone_world_matrices +
                              DAT_03f48fa8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&in_stack_00000004->base_actor,&local_d0,pCVar8);
          core_enemy_cpp_FUN_004a9880();
        }
        else {
          (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) + 0x154)
                      + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 10:
      iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) +
                                   0x154) + 0x120))();
      if (iVar4 != 0) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) + 0x154) +
                    0x104))();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
    }
    goto switchD_005a3055_caseD_7;
  }
  uVar5 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
  if (uVar5 < 2) {
    if (uVar5 == 1) {
LAB_005a2a90:
      fVar10 = 2.8026e-45;
    }
    else {
LAB_005a2b8e:
      fVar10 = 1.4013e-45;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,(int)fVar10,1);
  }
  else {
    if (uVar5 < 3) goto LAB_005a2a90;
    if (uVar5 != 3) goto LAB_005a2b8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,1,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
switchD_005a3055_caseD_7:
  if (0.0 < *(float *)(in_stack_00000004[1].base_actor.create_event + 0x20)) {
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x20) =
         *(float *)(in_stack_00000004[1].base_actor.create_event + 0x20) - in_stack_00000008;
  }
  if (local_24 == 0xb) {
    pCVar8 = &(in_stack_00000004->model).accumulated_root_motion;
    pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&in_stack_00000004->base_actor,&local_70,pCVar8);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar7->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar7->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar7->z + (in_stack_00000004->base_actor).location.position.z;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar8->x = (in_stack_00000004->model).accumulated_root_motion.y;
  }
  else {
    iVar4 = core_charactr_cpp_CCharacter_FUN_004297e0(in_stack_00000004);
    if (iVar4 != 0) {
      iVar4 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
      if ((iVar4 != 0) &&
         (pCVar9 = (CCharacter *)(**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(),
         pCVar9 == in_stack_00000004)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,
                   *(CDemonActor **)(in_stack_00000004[1].base_actor.actor_name + 0x18));
      }
      *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
           *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
           in_stack_00000008 * (float)_DAT_0064f31a;
      local_64 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
      local_60 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
      local_5c = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
      pCVar8 = &(in_stack_00000004->model).accumulated_root_motion;
      local_7c = local_64 + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
      local_78 = local_60 + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
      local_74 = local_5c + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
      local_ac = local_7c + pCVar8->x;
      local_a8 = local_78 + (in_stack_00000004->model).accumulated_root_motion.y;
      local_a4 = local_74 + (in_stack_00000004->model).accumulated_root_motion.z;
      in_stack_00000004->field2_0x240c[0x18] = '\0';
      in_stack_00000004->field2_0x240c[0x19] = '\0';
      in_stack_00000004->field2_0x240c[0x1a] = '\0';
      in_stack_00000004->field2_0x240c[0x1b] = '\0';
      *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x14) =
           *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x18);
      *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
           *(float *)(in_stack_00000004->field2_0x240c + 0x14);
      (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
      fVar10 = (in_stack_00000004->model).accumulated_root_motion.z;
      (in_stack_00000004->model).accumulated_root_motion.y = fVar10;
      pCVar8->x = fVar10;
      core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  return;
}


// Assembly code:
// 005a2800: PUSH EBX
//   Label: core_smiley.cpp_FUN_005a2800
// 005a2801: PUSH ESI
// 005a2802: PUSH EDI
// 005a2803: PUSH EBP
// 005a2804: MOV EBP,ESP
// 005a2806: SUB ESP,0x1bc
// 005a280c: SUB EBP,0x7a
// 005a280f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 005a2815: FLD float ptr [EBX + 0xbef8]
// 005a281b: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005a2821: FST float ptr [EBX + 0xbef8]
// 005a2827: FLDZ
// 005a2829: FCOMPP
// 005a282b: FNSTSW AX
// 005a282d: SAHF
// 005a282e: JA 0x005a291f
//   XREF to: 005a291f (CONDITIONAL_JUMP)
// 005a2834: MOV EAX,dword ptr [EBX + 0xbeec]
//   Label: LAB_005a2834
// 005a283a: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005a2842: JNZ 0x005a289d
//   XREF to: 005a289d (CONDITIONAL_JUMP)
// 005a2844: PUSH EBX
// 005a2845: MOV EAX,dword ptr [EBX + 0x154]
// 005a284b: CALL dword ptr [EAX + 0x120]
// 005a2851: ADD ESP,0x4
// 005a2854: TEST EAX,EAX
// 005a2856: JNZ 0x005a289d
//   XREF to: 005a289d (CONDITIONAL_JUMP)
// 005a2858: LEA EAX,[EBP + 0xfffffebe]
//   XREF to: Stack[-0x1cc] (DATA)
// 005a285e: PUSH EAX
// 005a285f: XOR ESI,ESI
// 005a2861: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005a2866: MOV ECX,0x461c3f9a
// 005a286b: LEA EAX,[EBP + 0xfffffebe]
//   XREF to: Stack[-0x1cc] (DATA)
// 005a2871: ADD ESP,0x4
// 005a2874: MOV dword ptr [EBP + 0xfffffeee],ESI
//   XREF to: Stack[-0x19c] (WRITE)
// 005a287a: MOV dword ptr [EBP + 0xfffffef2],EBX
//   XREF to: Stack[-0x198] (WRITE)
// 005a2880: PUSH EAX
// 005a2881: MOV dword ptr [EBP + 0xfffffef6],EBX
//   XREF to: Stack[-0x194] (WRITE)
// 005a2887: MOV dword ptr [EBP + 0xfffffec2],ECX
//   XREF to: Stack[-0x1c8] (WRITE)
// 005a288d: PUSH EBX
// 005a288e: MOV EDX,dword ptr [EBX + 0x154]
// 005a2894: CALL dword ptr [EDX + 0x11c]
// 005a289a: ADD ESP,0x8
// 005a289d: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005a289d
//   XREF to: Stack[0x8] (READ)
// 005a28a3: PUSH EBX
// 005a28a4: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005a28a9: ADD ESP,0x8
// 005a28ac: TEST EAX,EAX
// 005a28ae: JZ 0x005a2b50
//   XREF to: 005a2b50 (CONDITIONAL_JUMP)
// 005a28b4: LEA EAX,[EBX + 0x23ac]
// 005a28ba: MOV dword ptr [EAX + 0x8],0x0
// 005a28c1: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005a28c7: MOV EDX,dword ptr [EAX + 0x8]
// 005a28ca: MOV dword ptr [EAX + 0x4],EDX
// 005a28cd: MOV EDX,dword ptr [EAX + 0x4]
// 005a28d0: MOV dword ptr [EAX],EDX
// 005a28d2: FMUL float ptr [EBX + 0xbe24]
// 005a28d8: LEA ESI,[EBX + 0x158]
// 005a28de: FSTP float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (WRITE)
// 005a28e1: MOV EDI,0x1
// 005a28e6: FLD float ptr [EBP + 0x62]
//   Label: LAB_005a28e6
//   XREF to: Stack[-0x28] (READ)
// 005a28e9: FLDZ
// 005a28eb: FCOMPP
// 005a28ed: FNSTSW AX
// 005a28ef: SAHF
// 005a28f0: JNC 0x005a2a26
//   XREF to: 005a2a26 (CONDITIONAL_JUMP)
// 005a28f6: LEA EAX,[EBP + 0x62]
//   XREF to: Stack[-0x28] (DATA)
// 005a28f9: PUSH EAX
// 005a28fa: PUSH ESI
// 005a28fb: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005a2900: ADD ESP,0x8
// 005a2903: MOV EDX,EAX
// 005a2905: CMP EAX,0x66
// 005a2908: JNC 0x005a2a08
//   XREF to: 005a2a08 (CONDITIONAL_JUMP)
// 005a290e: CMP EAX,0x65
// 005a2911: JZ 0x005a292e
//   XREF to: 005a292e (CONDITIONAL_JUMP)
// 005a2913: PUSH EDX
// 005a2914: PUSH EBX
// 005a2915: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005a291a: ADD ESP,0x8
// 005a291d: JMP 0x005a28e6
//   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)
// 005a291f: MOV dword ptr [EBX + 0xbef8],0x0
//   Label: LAB_005a291f
// 005a2929: JMP 0x005a2834
//   XREF to: 005a2834 (UNCONDITIONAL_JUMP)
// 005a292e: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005a292e
// 005a2934: TEST EAX,EAX
// 005a2936: JNZ 0x005a2945
//   XREF to: 005a2945 (CONDITIONAL_JUMP)
// 005a2938: PUSH EDI
// 005a2939: PUSH EDI
// 005a293a: PUSH ESI
// 005a293b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2940: ADD ESP,0xc
// 005a2943: JMP 0x005a28e6
//   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)
// 005a2945: PUSH 0x0
//   Label: LAB_005a2945
// 005a2947: PUSH EBX
// 005a2948: MOV EDX,dword ptr [EAX + 0x154]
// 005a294e: PUSH EAX
// 005a294f: CALL dword ptr [EDX + 0x100]
// 005a2955: ADD ESP,0xc
// 005a2958: TEST EAX,EAX
// 005a295a: JNZ 0x005a28e6
//   XREF to: 005a28e6 (CONDITIONAL_JUMP)
// 005a295c: PUSH EDI
// 005a295d: PUSH EDI
// 005a295e: PUSH ESI
// 005a295f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2964: ADD ESP,0xc
// 005a2967: JMP 0x005a28e6
//   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)
// 005a296c: MOV ECX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005a296c
// 005a2972: TEST ECX,ECX
// 005a2974: JZ 0x005a28e6
//   XREF to: 005a28e6 (CONDITIONAL_JUMP)
// 005a297a: PUSH ECX
// 005a297b: MOV EDX,dword ptr [ECX + 0x154]
// 005a2981: CALL dword ptr [EDX + 0x104]
// 005a2987: ADD ESP,0x4
// 005a298a: JMP 0x005a28e6
//   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)
// 005a298f: MOV EDX,dword ptr [EBX + 0xbef0]
//   Label: LAB_005a298f
// 005a2995: INC EDX
// 005a2996: MOV dword ptr [EBX + 0xbef0],EDX
// 005a299c: CMP EDX,0x3
// 005a299f: JL 0x005a28e6
//   XREF to: 005a28e6 (CONDITIONAL_JUMP)
// 005a29a5: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005a29ab: TEST EAX,EAX
// 005a29ad: JZ 0x005a29e8
//   XREF to: 005a29e8 (CONDITIONAL_JUMP)
// 005a29af: LEA EAX,[EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (DATA)
// 005a29b5: PUSH EAX
// 005a29b6: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005a29bb: MOV EDX,0x4
// 005a29c0: ADD ESP,0x4
// 005a29c3: MOV dword ptr [EBP + -0x5e],EDX
//   XREF to: Stack[-0xe8] (WRITE)
// 005a29c6: LEA EDX,[EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (DATA)
// 005a29cc: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005a29d2: PUSH EDX
// 005a29d3: MOV ECX,dword ptr [EAX + 0x154]
// 005a29d9: PUSH EAX
// 005a29da: CALL dword ptr [ECX + 0x11c]
// 005a29e0: ADD ESP,0x8
// 005a29e3: JMP 0x005a28e6
//   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)
// 005a29e8: PUSH EAX
//   Label: LAB_005a29e8
// 005a29e9: MOV EDX,dword ptr [EAX + 0x154]
// 005a29ef: CALL dword ptr [EDX + 0x104]
// 005a29f5: ADD ESP,0x4
// 005a29f8: PUSH EDI
// 005a29f9: PUSH EDI
// 005a29fa: PUSH ESI
// 005a29fb: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2a00: ADD ESP,0xc
// 005a2a03: JMP 0x005a28e6
//   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)
// 005a2a08: JBE 0x005a296c
//   Label: LAB_005a2a08
//   XREF to: 005a296c (CONDITIONAL_JUMP)
// 005a2a0e: CMP EAX,0x67
// 005a2a11: JZ 0x005a298f
//   XREF to: 005a298f (CONDITIONAL_JUMP)
// 005a2a17: PUSH EDX
// 005a2a18: PUSH EBX
// 005a2a19: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005a2a1e: ADD ESP,0x8
// 005a2a21: JMP 0x005a28e6
//   XREF to: 005a28e6 (UNCONDITIONAL_JUMP)
// 005a2a26: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_005a2a26
// 005a2a2c: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005a2a32: FMUL double ptr [0x0064f30a]
//   XREF to: 0064f30a (READ)
// 005a2a38: FMULP
// 005a2a3a: FLD float ptr [EBX + 0x23b4]
// 005a2a40: LEA ESI,[EBX + 0x158]
// 005a2a46: FSTP float ptr [EBX + 0x2434]
// 005a2a4c: PUSH ESI
// 005a2a4d: FSTP float ptr [EBX + 0x2438]
// 005a2a53: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005a2a58: ADD ESP,0x4
// 005a2a5b: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005a2a61: MOV EDI,dword ptr [EAX + 0x24]
// 005a2a64: PUSH EBX
// 005a2a65: MOV dword ptr [EBP + 0x66],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005a2a68: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 005a2a6d: ADD ESP,0x8
// 005a2a70: TEST EAX,EAX
// 005a2a72: JZ 0x005a3049
//   XREF to: 005a3049 (CONDITIONAL_JUMP)
// 005a2a78: MOV EAX,dword ptr [EBX + 0x25b0]
// 005a2a7e: CMP EAX,0x2
// 005a2a81: JNC 0x005a2b83
//   XREF to: 005a2b83 (CONDITIONAL_JUMP)
// 005a2a87: CMP EAX,0x1
// 005a2a8a: JNZ 0x005a2b8e
//   XREF to: 005a2b8e (CONDITIONAL_JUMP)
// 005a2a90: PUSH 0x1
//   Label: LAB_005a2a90
// 005a2a92: PUSH 0x2
// 005a2a94: LEA EAX,[EBX + 0x158]
//   Label: LAB_005a2a94
// 005a2a9a: PUSH EAX
// 005a2a9b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2aa0: ADD ESP,0xc
//   Label: LAB_005a2aa0
// 005a2aa3: LEA EAX,[EBX + 0x23ac]
// 005a2aa9: MOV dword ptr [EAX + 0x8],0x0
// 005a2ab0: MOV EDX,dword ptr [EAX + 0x8]
// 005a2ab3: MOV dword ptr [EAX + 0x4],EDX
// 005a2ab6: MOV EDX,dword ptr [EAX + 0x4]
// 005a2ab9: MOV dword ptr [EAX],EDX
// 005a2abb: FLD float ptr [EBX + 0xbebc]
//   Label: caseD_7
// 005a2ac1: FLDZ
// 005a2ac3: FCOMPP
// 005a2ac5: FNSTSW AX
// 005a2ac7: SAHF
// 005a2ac8: JNC 0x005a2adc
//   XREF to: 005a2adc (CONDITIONAL_JUMP)
// 005a2aca: FLD float ptr [EBX + 0xbebc]
// 005a2ad0: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005a2ad6: FSTP float ptr [EBX + 0xbebc]
// 005a2adc: CMP dword ptr [EBP + 0x66],0xb
//   Label: LAB_005a2adc
//   XREF to: Stack[-0x24] (READ)
// 005a2ae0: JNZ 0x005a305c
//   XREF to: 005a305c (CONDITIONAL_JUMP)
// 005a2ae6: LEA ESI,[EBX + 0x23ac]
// 005a2aec: PUSH ESI
// 005a2aed: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x70] (DATA)
// 005a2af0: PUSH EAX
// 005a2af1: PUSH EBX
// 005a2af2: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005a2af7: MOV EDX,EAX
// 005a2af9: LEA EAX,[EBX + 0x20]
// 005a2afc: FLD float ptr [EDX]
// 005a2afe: FADD float ptr [EAX]
// 005a2b00: FSTP float ptr [EAX]
// 005a2b02: FLD float ptr [EDX + 0x4]
// 005a2b05: FADD float ptr [EAX + 0x4]
// 005a2b08: FSTP float ptr [EAX + 0x4]
// 005a2b0b: FLD float ptr [EDX + 0x8]
// 005a2b0e: FADD float ptr [EAX + 0x8]
// 005a2b11: FSTP float ptr [EAX + 0x8]
// 005a2b14: MOV dword ptr [ESI + 0x8],0x0
// 005a2b1b: ADD ESP,0xc
// 005a2b1e: MOV EAX,dword ptr [ESI + 0x8]
// 005a2b21: MOV dword ptr [ESI + 0x4],EAX
// 005a2b24: MOV EAX,dword ptr [ESI + 0x4]
// 005a2b27: MOV dword ptr [ESI],EAX
// 005a2b29: PUSH EBX
//   Label: LAB_005a2b29
// 005a2b2a: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 005a2b2f: ADD ESP,0x4
// 005a2b32: LEA EAX,[EBX + 0x158]
// 005a2b38: PUSH EAX
// 005a2b39: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005a2b3e: ADD ESP,0x4
// 005a2b41: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005a2b47: PUSH EBX
// 005a2b48: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005a2b4d: ADD ESP,0x8
// 005a2b50: LEA ESP,[EBP + 0x7a]
//   Label: LAB_005a2b50
//   XREF to: Stack[-0x10] (DATA)
// 005a2b53: POP EBP
// 005a2b54: POP EDI
// 005a2b55: POP ESI
// 005a2b56: POP EBX
// 005a2b57: RET
// 005a2b58: PUSH 0x1
//   Label: LAB_005a2b58
// 005a2b5a: PUSH 0x1
// 005a2b5c: LEA EAX,[EBX + 0x158]
// 005a2b62: PUSH EAX
// 005a2b63: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2b68: ADD ESP,0xc
// 005a2b6b: PUSH EBX
// 005a2b6c: MOV EAX,0x64f2ca
//   XREF to: 0064f2ca (DATA)
// 005a2b71: PUSH EAX
//   XREF to: 0064f2ca (DATA)
// 005a2b72: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005a2b78: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005a2b79: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005a2b7e: JMP 0x005a2aa0
//   XREF to: 005a2aa0 (UNCONDITIONAL_JUMP)
// 005a2b83: JBE 0x005a2a90
//   Label: LAB_005a2b83
//   XREF to: 005a2a90 (CONDITIONAL_JUMP)
// 005a2b89: CMP EAX,0x3
// 005a2b8c: JZ 0x005a2b58
//   XREF to: 005a2b58 (CONDITIONAL_JUMP)
// 005a2b8e: PUSH 0x1
//   Label: LAB_005a2b8e
// 005a2b90: PUSH 0x1
// 005a2b92: JMP 0x005a2a94
//   XREF to: 005a2a94 (UNCONDITIONAL_JUMP)
// 005a2b97: MOV EDX,dword ptr [EBX + 0xbe3c]
//   Label: caseD_6
// 005a2b9d: TEST EDX,EDX
// 005a2b9f: JNZ 0x005a2bc5
//   XREF to: 005a2bc5 (CONDITIONAL_JUMP)
// 005a2ba1: MOV EAX,EDX
// 005a2ba3: PUSH EAX
// 005a2ba4: MOV EDX,dword ptr [EDX + 0x154]
// 005a2baa: CALL dword ptr [EDX + 0x104]
// 005a2bb0: ADD ESP,0x4
// 005a2bb3: PUSH 0x1
// 005a2bb5: PUSH 0x1
// 005a2bb7: PUSH ESI
// 005a2bb8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2bbd: ADD ESP,0xc
// 005a2bc0: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a2bc5: LEA EAX,[EBP + 0xfffffefa]
//   Label: LAB_005a2bc5
//   XREF to: Stack[-0x190] (DATA)
// 005a2bcb: PUSH EAX
// 005a2bcc: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005a2bd1: ADD ESP,0x4
// 005a2bd4: PUSH 0x41700000
// 005a2bd9: PUSH 0x40e00000
// 005a2bde: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005a2be3: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a2be6: ADD ESP,0x8
// 005a2be9: LEA EAX,[EBP + 0xfffffefa]
//   XREF to: Stack[-0x190] (DATA)
// 005a2bef: MOV EDX,dword ptr [0x03f48fa8]
//   XREF to: 03f48fa8 (READ)
// 005a2bf5: PUSH EAX
// 005a2bf6: LEA EAX,[EDX*0x4 + 0x0]
// 005a2bfd: MOV dword ptr [EBP + 0xffffff2e],EBX
//   XREF to: Stack[-0x15c] (WRITE)
// 005a2c03: SUB EAX,EDX
// 005a2c05: MOV dword ptr [EBP + 0xffffff32],EBX
//   XREF to: Stack[-0x158] (WRITE)
// 005a2c0b: SHL EAX,0x4
// 005a2c0e: LEA EDX,[EBX + 0xfd8]
// 005a2c14: ADD EAX,EDX
// 005a2c16: PUSH 0x3f800000
// 005a2c1b: PUSH EAX
// 005a2c1c: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005a2c21: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb8] (DATA)
// 005a2c24: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005a2c27: PUSH EAX
// 005a2c28: FSTP float ptr [EBP + 0xfffffefe]
//   XREF to: Stack[-0x18c] (WRITE)
// 005a2c2e: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005a2c33: ADD ESP,0xc
// 005a2c36: PUSH EAX
// 005a2c37: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 005a2c3a: PUSH EAX
// 005a2c3b: PUSH EBX
// 005a2c3c: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005a2c41: ADD ESP,0xc
// 005a2c44: PUSH EAX
// 005a2c45: PUSH EBX
// 005a2c46: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 005a2c4b: ADD ESP,0x10
// 005a2c4e: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a2c53: MOV EDI,dword ptr [EBX + 0xbe3c]
//   Label: caseD_9
// 005a2c59: TEST EDI,EDI
// 005a2c5b: JZ 0x005a2c69
//   XREF to: 005a2c69 (CONDITIONAL_JUMP)
// 005a2c5d: MOV EDX,dword ptr [EDI + 0x2598]
// 005a2c63: MOV EAX,EDI
// 005a2c65: TEST EDX,EDX
// 005a2c67: JNZ 0x005a2c7b
//   XREF to: 005a2c7b (CONDITIONAL_JUMP)
// 005a2c69: PUSH 0x1
//   Label: LAB_005a2c69
// 005a2c6b: PUSH 0x1
// 005a2c6d: PUSH ESI
// 005a2c6e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2c73: ADD ESP,0xc
// 005a2c76: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a2c7b: PUSH EDI
//   Label: LAB_005a2c7b
// 005a2c7c: MOV EDX,dword ptr [EDI + 0x154]
// 005a2c82: CALL dword ptr [EDX + 0x120]
// 005a2c88: ADD ESP,0x4
// 005a2c8b: TEST EAX,EAX
// 005a2c8d: JZ 0x005a2cb7
//   XREF to: 005a2cb7 (CONDITIONAL_JUMP)
// 005a2c8f: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005a2c95: PUSH EAX
// 005a2c96: MOV EDX,dword ptr [EAX + 0x154]
// 005a2c9c: CALL dword ptr [EDX + 0x104]
// 005a2ca2: ADD ESP,0x4
// 005a2ca5: PUSH 0x1
// 005a2ca7: PUSH 0x1
// 005a2ca9: PUSH ESI
// 005a2caa: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2caf: ADD ESP,0xc
// 005a2cb2: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a2cb7: LEA EAX,[EBP + 0xffffff36]
//   Label: LAB_005a2cb7
//   XREF to: Stack[-0x154] (DATA)
// 005a2cbd: PUSH EAX
// 005a2cbe: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005a2cc3: ADD ESP,0x4
// 005a2cc6: PUSH 0x41700000
// 005a2ccb: PUSH 0x40e00000
// 005a2cd0: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005a2cd5: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a2cd8: ADD ESP,0x8
// 005a2cdb: LEA EAX,[EBP + 0xffffff36]
//   XREF to: Stack[-0x154] (DATA)
// 005a2ce1: MOV EDX,dword ptr [0x03f48fa8]
//   XREF to: 03f48fa8 (READ)
// 005a2ce7: PUSH EAX
// 005a2ce8: LEA EAX,[EDX*0x4 + 0x0]
// 005a2cef: SUB EAX,EDX
// 005a2cf1: MOV dword ptr [EBP + 0xffffff6a],EBX
//   XREF to: Stack[-0x120] (WRITE)
// 005a2cf7: MOV EDX,EAX
// 005a2cf9: MOV dword ptr [EBP + 0xffffff6e],EBX
//   XREF to: Stack[-0x11c] (WRITE)
// 005a2cff: SHL EDX,0x4
// 005a2d02: LEA EAX,[EBX + 0xfd8]
// 005a2d08: ADD EAX,EDX
// 005a2d0a: PUSH 0x3f800000
// 005a2d0f: PUSH EAX
// 005a2d10: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005a2d15: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x88] (DATA)
// 005a2d18: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005a2d1b: PUSH EAX
// 005a2d1c: FSTP float ptr [EBP + 0xffffff3a]
//   XREF to: Stack[-0x150] (WRITE)
// 005a2d22: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005a2d27: ADD ESP,0xc
// 005a2d2a: PUSH EAX
// 005a2d2b: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xd0] (DATA)
// 005a2d2e: PUSH EAX
// 005a2d2f: PUSH EBX
// 005a2d30: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005a2d35: ADD ESP,0xc
// 005a2d38: PUSH EAX
// 005a2d39: PUSH EBX
// 005a2d3a: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 005a2d3f: ADD ESP,0x10
// 005a2d42: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a2d47: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: caseD_a
// 005a2d4d: PUSH EAX
// 005a2d4e: MOV EDX,dword ptr [EAX + 0x154]
// 005a2d54: CALL dword ptr [EDX + 0x120]
// 005a2d5a: ADD ESP,0x4
// 005a2d5d: TEST EAX,EAX
// 005a2d5f: JZ 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a2d65: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005a2d6b: PUSH EAX
// 005a2d6c: MOV EDX,dword ptr [EAX + 0x154]
// 005a2d72: CALL dword ptr [EDX + 0x104]
// 005a2d78: ADD ESP,0x4
// 005a2d7b: PUSH 0x1
// 005a2d7d: PUSH 0x1
// 005a2d7f: PUSH ESI
// 005a2d80: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2d85: ADD ESP,0xc
// 005a2d88: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a2d8d: MOV ECX,dword ptr [EBX + 0xbe28]
//   Label: caseD_8
// 005a2d93: TEST ECX,ECX
// 005a2d95: JNZ 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a2d9b: MOV EDI,dword ptr [EBX + 0xdc]
// 005a2da1: TEST EDI,EDI
// 005a2da3: JNZ 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a2da9: PUSH ECX
// 005a2daa: LEA EAX,[EBP + 0x4a]
//   XREF to: Stack[-0x40] (DATA)
// 005a2dad: PUSH EAX
// 005a2dae: PUSH ESI
// 005a2daf: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005a2db4: ADD ESP,0xc
// 005a2db7: PUSH EAX
// 005a2db8: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x4c] (DATA)
// 005a2dbb: PUSH EAX
// 005a2dbc: PUSH EBX
// 005a2dbd: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005a2dc2: ADD ESP,0xc
// 005a2dc5: PUSH EDI
// 005a2dc6: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x4c] (DATA)
// 005a2dc9: PUSH EAX
// 005a2dca: MOV EAX,[0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 005a2dcf: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 005a2dd0: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 005a2dd5: ADD ESP,0xc
// 005a2dd8: MOV dword ptr [EBX + 0xbe28],0x1
// 005a2de2: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a2de7: PUSH 0x64f2f4
//   Label: caseD_1
//   XREF to: 0064f2f4 (DATA)
// 005a2dec: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005a2df2: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 005a2df3: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005a2df8: ADD ESP,0x8
// 005a2dfb: TEST EAX,EAX
// 005a2dfd: JNZ 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a2e03: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005a2e09: MOV EAX,dword ptr [EBX + 0x154]
// 005a2e0f: PUSH EBX
// 005a2e10: CALL dword ptr [EAX + 0x158]
// 005a2e16: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005a2e1c: ADD ESP,0x8
// 005a2e1f: TEST EAX,EAX
// 005a2e21: JZ 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a2e27: LEA EDX,[EBX + 0x20]
// 005a2e2a: FLD float ptr [EAX + 0x20]
// 005a2e2d: FSUB float ptr [EDX]
// 005a2e2f: FSTP float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (WRITE)
// 005a2e32: FLD float ptr [EAX + 0x24]
// 005a2e35: FSUB float ptr [EDX + 0x4]
// 005a2e38: FST float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (WRITE)
// 005a2e3b: FMUL float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 005a2e3e: FLD float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 005a2e41: FMUL ST0
// 005a2e43: FLD float ptr [EAX + 0x28]
// 005a2e46: FSUB float ptr [EDX + 0x8]
// 005a2e49: FXCH
// 005a2e4b: FADDP ST2,ST0
// 005a2e4d: FST float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (WRITE)
// 005a2e50: FMUL float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (READ)
// 005a2e53: FADDP
// 005a2e55: FSQRT
// 005a2e57: FLD float ptr [0x00662f68]
//   XREF to: 00662f68 (READ)
// 005a2e5d: FLD1
// 005a2e5f: FADDP
// 005a2e61: FXCH
// 005a2e63: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 005a2e66: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 005a2e69: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 005a2e6c: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a2e6f: FCOMPP
// 005a2e71: FNSTSW AX
// 005a2e73: SAHF
// 005a2e74: JC 0x005a2ea0
//   XREF to: 005a2ea0 (CONDITIONAL_JUMP)
// 005a2e76: FLD float ptr [EBP + 0x6a]
//   Label: LAB_005a2e76
//   XREF to: Stack[-0x20] (READ)
// 005a2e79: FCOMP float ptr [EBX + 0xbec0]
// 005a2e7f: FNSTSW AX
// 005a2e81: SAHF
// 005a2e82: JNC 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a2e88: PUSH 0x1
// 005a2e8a: PUSH 0x2
// 005a2e8c: LEA EAX,[EBX + 0x158]
// 005a2e92: PUSH EAX
// 005a2e93: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2e98: ADD ESP,0xc
// 005a2e9b: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a2ea0: LEA EAX,[EBP + 0x32]
//   Label: LAB_005a2ea0
//   XREF to: Stack[-0x58] (DATA)
// 005a2ea3: PUSH EAX
// 005a2ea4: LEA EAX,[EBP + -0x3a]
//   XREF to: Stack[-0xc4] (DATA)
// 005a2ea7: PUSH EAX
// 005a2ea8: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005a2ead: FLD float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (READ)
// 005a2eb0: ADD ESP,0x8
// 005a2eb3: FSUB float ptr [EBX + 0x34]
// 005a2eb6: SUB ESP,0x4
// 005a2eb9: FSTP float ptr [ESP]
// 005a2ebc: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005a2ec1: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a2ec4: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005a2ec7: FABS
// 005a2ec9: ADD ESP,0x4
// 005a2ecc: FCOMP double ptr [0x0064f312]
//   XREF to: 0064f312 (READ)
// 005a2ed2: FNSTSW AX
// 005a2ed4: SAHF
// 005a2ed5: JNC 0x005a2e76
//   XREF to: 005a2e76 (CONDITIONAL_JUMP)
// 005a2ed7: PUSH 0x1
// 005a2ed9: PUSH 0x9
// 005a2edb: PUSH ESI
// 005a2edc: MOV dword ptr [EBX + 0xbef0],0x0
// 005a2ee6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2eeb: ADD ESP,0xc
// 005a2eee: JMP 0x005a2e76
//   XREF to: 005a2e76 (UNCONDITIONAL_JUMP)
// 005a2ef0: PUSH 0x64f2fc
//   Label: caseD_2
//   XREF to: 0064f2fc (DATA)
// 005a2ef5: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005a2efb: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 005a2efc: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005a2f01: ADD ESP,0x8
// 005a2f04: TEST EAX,EAX
// 005a2f06: JZ 0x005a2f1a
//   XREF to: 005a2f1a (CONDITIONAL_JUMP)
// 005a2f08: PUSH 0x1
//   Label: LAB_005a2f08
// 005a2f0a: PUSH 0x1
// 005a2f0c: PUSH ESI
// 005a2f0d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a2f12: ADD ESP,0xc
// 005a2f15: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a2f1a: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005a2f1a
//   XREF to: Stack[0x8] (READ)
// 005a2f20: MOV EAX,dword ptr [EBX + 0x154]
// 005a2f26: PUSH EBX
// 005a2f27: CALL dword ptr [EAX + 0x158]
// 005a2f2d: MOV EDI,dword ptr [EBX + 0xbe3c]
// 005a2f33: ADD ESP,0x8
// 005a2f36: TEST EDI,EDI
// 005a2f38: JZ 0x005a2f08
//   XREF to: 005a2f08 (CONDITIONAL_JUMP)
// 005a2f3a: MOV EDX,dword ptr [EDI + 0x2598]
// 005a2f40: MOV EAX,EDI
// 005a2f42: CMP EBX,EDX
// 005a2f44: JNZ 0x005a2f56
//   XREF to: 005a2f56 (CONDITIONAL_JUMP)
// 005a2f46: PUSH EDI
// 005a2f47: MOV EDX,dword ptr [EDI + 0x154]
// 005a2f4d: CALL dword ptr [EDX + 0x104]
// 005a2f53: ADD ESP,0x4
// 005a2f56: MOV EAX,[0x00662f68]
//   Label: LAB_005a2f56
//   XREF to: 00662f68 (READ)
// 005a2f5b: PUSH 0x3e32b8c2
// 005a2f60: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a2f63: LEA EAX,[EBX + 0x23ac]
// 005a2f69: PUSH 0x3f000000
// 005a2f6e: MOV dword ptr [EAX + 0x8],0x0
// 005a2f75: XOR ECX,ECX
// 005a2f77: MOV EDX,dword ptr [EAX + 0x8]
// 005a2f7a: MOV dword ptr [EAX + 0x4],EDX
// 005a2f7d: MOV EDX,dword ptr [EAX + 0x4]
// 005a2f80: MOV dword ptr [EAX],EDX
// 005a2f82: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 005a2f85: MOV dword ptr [EBP + -0xa],ECX
//   XREF to: Stack[-0x94] (WRITE)
// 005a2f88: MOV dword ptr [EBP + -0x2],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005a2f8b: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x94] (DATA)
// 005a2f8e: MOV dword ptr [EBP + -0x6],ECX
//   XREF to: Stack[-0x90] (WRITE)
// 005a2f91: PUSH EAX
// 005a2f92: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005a2f98: PUSH EAX
// 005a2f99: MOV EDX,dword ptr [EAX + 0x154]
// 005a2f9f: CALL dword ptr [EDX + 0xbc]
// 005a2fa5: ADD ESP,0x4
// 005a2fa8: PUSH EAX
// 005a2fa9: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005a2faf: ADD EAX,0x20
// 005a2fb2: PUSH EAX
// 005a2fb3: PUSH EBX
// 005a2fb4: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 005a2fb9: ADD ESP,0x18
// 005a2fbc: TEST EAX,EAX
// 005a2fbe: JL 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a2fc4: JLE 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a2fca: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005a2fd0: LEA EAX,[EBX + 0x20]
// 005a2fd3: FLD float ptr [EDX + 0x20]
// 005a2fd6: FSUB float ptr [EAX]
// 005a2fd8: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (WRITE)
// 005a2fdb: FLD float ptr [EDX + 0x24]
// 005a2fde: FSUB float ptr [EAX + 0x4]
// 005a2fe1: FST float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 005a2fe4: FMUL float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (READ)
// 005a2fe7: FLD float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (READ)
// 005a2fea: FMUL ST0
// 005a2fec: FLD float ptr [EDX + 0x28]
// 005a2fef: FSUB float ptr [EAX + 0x8]
// 005a2ff2: FXCH
// 005a2ff4: FADDP ST2,ST0
// 005a2ff6: FST float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (WRITE)
// 005a2ff9: FMUL float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (READ)
// 005a2ffc: FADDP
// 005a2ffe: FSQRT
// 005a3000: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 005a3003: FLD1
// 005a3005: FADDP
// 005a3007: FXCH
// 005a3009: FCOMPP
// 005a300b: FNSTSW AX
// 005a300d: SAHF
// 005a300e: JNC 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a3014: FLD float ptr [EBX + 0xbebc]
// 005a301a: FLDZ
// 005a301c: FCOMPP
// 005a301e: FNSTSW AX
// 005a3020: SAHF
// 005a3021: JC 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a3027: PUSH 0x1
// 005a3029: PUSH 0x6
// 005a302b: LEA EAX,[EBX + 0x158]
// 005a3031: PUSH EAX
// 005a3032: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a3037: ADD ESP,0xc
// 005a303a: MOV dword ptr [EBX + 0xbebc],0x3f800000
// 005a3044: JMP 0x005a2abb
//   XREF to: 005a2abb (UNCONDITIONAL_JUMP)
// 005a3049: LEA EAX,[EDI + -0x1]
//   Label: LAB_005a3049
// 005a304c: CMP EAX,0x9
// 005a304f: JA 0x005a2abb
//   XREF to: 005a2abb (CONDITIONAL_JUMP)
// 005a3055: JMP dword ptr [EAX*0x4 + 0x5a27d0]
//   Label: switchD
//   XREF to: 005a2de7 (COMPUTED_JUMP)
//   XREF to: 005a2ef0 (COMPUTED_JUMP)
//   XREF to: 005a2abb (COMPUTED_JUMP)
//   XREF to: 005a2b97 (COMPUTED_JUMP)
//   XREF to: 005a2d8d (COMPUTED_JUMP)
//   XREF to: 005a2c53 (COMPUTED_JUMP)
//   XREF to: 005a2d47 (COMPUTED_JUMP)
//   XREF to: 005a27d0 (DATA)
// 005a305c: PUSH EBX
//   Label: LAB_005a305c
// 005a305d: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 005a3062: ADD ESP,0x4
// 005a3065: TEST EAX,EAX
// 005a3067: JZ 0x005a2b29
//   XREF to: 005a2b29 (CONDITIONAL_JUMP)
// 005a306d: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005a3073: TEST ESI,ESI
// 005a3075: JZ 0x005a30a0
//   XREF to: 005a30a0 (CONDITIONAL_JUMP)
// 005a3077: PUSH ESI
// 005a3078: MOV EDX,dword ptr [ESI + 0x154]
// 005a307e: CALL dword ptr [EDX + 0x108]
// 005a3084: ADD ESP,0x4
// 005a3087: CMP EAX,EBX
// 005a3089: JNZ 0x005a30a0
//   XREF to: 005a30a0 (CONDITIONAL_JUMP)
// 005a308b: MOV EDI,dword ptr [EBX + 0xbe3c]
// 005a3091: PUSH EDI
// 005a3092: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005a3097: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005a3098: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005a309d: ADD ESP,0x8
// 005a30a0: FLD float ptr [EBP + 0x92]
//   Label: LAB_005a30a0
//   XREF to: Stack[0x8] (READ)
// 005a30a6: FLD ST0
// 005a30a8: FMUL double ptr [0x0064f31a]
//   XREF to: 0064f31a (READ)
// 005a30ae: FLD float ptr [EBX + 0x242c]
// 005a30b4: FXCH
// 005a30b6: FSUBR ST0,ST1
// 005a30b8: LEA ECX,[EBX + 0x2428]
// 005a30be: FSTP ST1
// 005a30c0: FSTP float ptr [EBX + 0x242c]
// 005a30c6: FLD float ptr [ECX]
// 005a30c8: FMUL ST1
// 005a30ca: FSTP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (WRITE)
// 005a30cd: FLD float ptr [ECX + 0x4]
// 005a30d0: FMUL ST1
// 005a30d2: LEA EAX,[EBX + 0x241c]
// 005a30d8: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (WRITE)
// 005a30db: FMUL float ptr [ECX + 0x8]
// 005a30de: LEA EDX,[EBX + 0x23ac]
// 005a30e4: FLD float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 005a30e7: FXCH
// 005a30e9: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 005a30ec: FADD float ptr [EAX]
// 005a30ee: FLD float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 005a30f1: FXCH
// 005a30f3: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (WRITE)
// 005a30f6: FADD float ptr [EAX + 0x4]
// 005a30f9: FLD float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 005a30fc: FXCH
// 005a30fe: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (WRITE)
// 005a3101: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 005a3104: FLD float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 005a3107: FXCH
// 005a3109: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (WRITE)
// 005a310c: FADD float ptr [EDX]
// 005a310e: FLD float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (READ)
// 005a3111: FXCH
// 005a3113: FSTP float ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (WRITE)
// 005a3116: FADD float ptr [EDX + 0x4]
// 005a3119: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (READ)
// 005a311c: FXCH
// 005a311e: FSTP float ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa8] (WRITE)
// 005a3121: FADD float ptr [EDX + 0x8]
// 005a3124: FSTP float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (WRITE)
// 005a3127: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 005a312e: MOV ECX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 005a3131: MOV dword ptr [EAX + 0x4],ECX
// 005a3134: MOV ECX,dword ptr [EAX + 0x4]
// 005a3137: MOV dword ptr [EAX],ECX
// 005a3139: MOV dword ptr [EDX + 0x8],0x0
// 005a3140: LEA EAX,[EBP + -0x22]
//   XREF to: Stack[-0xac] (DATA)
// 005a3143: FLD float ptr [EDX + 0x8]
// 005a3146: PUSH EAX
// 005a3147: FST float ptr [EDX + 0x4]
// 005a314a: PUSH EBX
// 005a314b: FSTP float ptr [EDX]
// 005a314d: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005a3152: ADD ESP,0x8
// 005a3155: JMP 0x005a2b29
//   XREF to: 005a2b29 (UNCONDITIONAL_JUMP)
