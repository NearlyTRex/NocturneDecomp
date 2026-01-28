// Name: core_smiley.cpp_FUN_005a2800
// Address: 005a2800
// Address Range: [[005a2800, 005a3159]]
// Convention: unknown
// Signature: void core_smiley_cpp_FUN_005a2800(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_smiley.cpp_FUN_005a2800(uint param_1, uint
   param_2) */

void core_smiley_cpp_FUN_005a2800(void)

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
  CCharacter *pCVar10;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
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
  
  fVar11 = *(float *)(in_stack_00000004[1].base.create_event + 0x5c) - in_stack_00000008;
  *(float *)(in_stack_00000004[1].base.create_event + 0x5c) = fVar11;
  if (fVar11 < 0.0) {
    pCVar10 = in_stack_00000004 + 1;
    (pCVar10->base).create_event[0x5c] = '\0';
    (pCVar10->base).create_event[0x5d] = '\0';
    (pCVar10->base).create_event[0x5e] = '\0';
    (pCVar10->base).create_event[0x5f] = '\0';
  }
  if (((in_stack_00000004->model).part_visibility_flags
       [*(int *)(in_stack_00000004[1].base.create_event + 0x50)] == 0) &&
     (iVar4 = (*(((in_stack_00000004->base).vtable._uc)->_uc).isDamageable)(in_stack_00000004),
     iVar4 == 0)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe34);
    (*(((in_stack_00000004->base).vtable._uc)->_uc).processDamage)
              (in_stack_00000004,(SDamageInfo *)&stack0xfffffe34);
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
  local_28 = in_stack_00000008 * *(float *)in_stack_00000004[1].base.actor_name;
  pCVar2 = &in_stack_00000004->model;
  while (0.0 < local_28) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (uVar5 < 0x66) {
      if (uVar5 == 0x65) {
        iVar4 = *(int *)(in_stack_00000004[1].base.actor_name + 0x18);
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
      iVar4 = *(int *)(in_stack_00000004[1].base.actor_name + 0x18);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x104))();
      }
    }
    else if (uVar5 == 0x67) {
      iVar4 = *(int *)(in_stack_00000004[1].base.create_event + 0x54) + 1;
      *(int *)(in_stack_00000004[1].base.create_event + 0x54) = iVar4;
      if (2 < iVar4) {
        if (*(int *)(in_stack_00000004[1].base.actor_name + 0x18) == 0) {
          (**(code **)(iRam00000154 + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_118);
          local_118.damage_type = 4;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base.actor_name + 0x18) + 0x154) +
                      0x11c))();
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  }
  fVar11 = *(float *)in_stack_00000004[1].base.actor_name;
  fVar3 = (float)3.1415926535000001;
  pCVar2 = &in_stack_00000004->model;
  *(float *)(in_stack_00000004->unk1 + 0x28) = (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->unk1 + 0x2c) = in_stack_00000008 * fVar3 * fVar11;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  iVar4 = pSVar6->state_index;
  local_24 = iVar4;
  iVar7 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar7 == 0) {
    switch(iVar4) {
    case 1:
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"Capture");
      if (iVar4 == 0) {
        (*(((in_stack_00000004->base).vtable._ue)->_ue).field_4)();
        iVar4 = *(int *)(in_stack_00000004[1].base.actor_name + 0x18);
        if (iVar4 != 0) {
          local_58.x = *(float *)(iVar4 + 0x20) - (in_stack_00000004->base).location.position.x;
          local_58.y = *(float *)(iVar4 + 0x24) - (in_stack_00000004->base).location.position.y;
          local_58.z = *(float *)(iVar4 + 0x28) - (in_stack_00000004->base).location.position.z;
          local_20 = SQRT(local_58.z * local_58.z +
                          local_58.x * local_58.x + local_58.y * local_58.y);
          local_18 = local_20;
          if (local_20 < 2.5f + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c4,&local_58);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_c4.y - (in_stack_00000004->base).orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              pCVar10 = in_stack_00000004 + 1;
              (pCVar10->base).create_event[0x54] = '\0';
              (pCVar10->base).create_event[0x55] = '\0';
              (pCVar10->base).create_event[0x56] = '\0';
              (pCVar10->base).create_event[0x57] = '\0';
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,9,1);
            }
          }
          if (local_20 < *(float *)(in_stack_00000004[1].base.create_event + 0x24)) {
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
        (*(((in_stack_00000004->base).vtable._ue)->_ue).field_4)();
        iVar4 = *(int *)(in_stack_00000004[1].base.actor_name + 0x18);
        if (iVar4 != 0) {
          if (in_stack_00000004 == *(CCharacter **)(iVar4 + 0x2598)) {
            (**(code **)(*(int *)(iVar4 + 0x154) + 0x104))(iVar4);
          }
          local_8c = 2.5f;
          local_1c = 2.5f;
          (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
          (in_stack_00000004->model).accumulated_root_motion.y =
               (in_stack_00000004->model).accumulated_root_motion.z;
          (in_stack_00000004->model).accumulated_root_motion.x =
               (in_stack_00000004->model).accumulated_root_motion.y;
          local_94 = 0;
          local_90 = 0;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base.actor_name + 0x18) + 0x154) +
                      0xbc))();
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
          if ((-1 < iVar4) && (0 < iVar4)) {
            iVar4 = *(int *)(in_stack_00000004[1].base.actor_name + 0x18);
            local_a0 = *(float *)(iVar4 + 0x20) - (in_stack_00000004->base).location.position.x;
            local_9c = *(float *)(iVar4 + 0x24) - (in_stack_00000004->base).location.position.y;
            local_98 = *(float *)(iVar4 + 0x28) - (in_stack_00000004->base).location.position.z;
            if ((SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) <
                 local_1c + 1.0) &&
               (*(float *)(in_stack_00000004[1].base.create_event + 0x20) <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,6,1);
              pCVar10 = in_stack_00000004 + 1;
              (pCVar10->base).create_event[0x20] = '\0';
              (pCVar10->base).create_event[0x21] = '\0';
              (pCVar10->base).create_event[0x22] = -0x80;
              (pCVar10->base).create_event[0x23] = '?';
            }
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,1,1)
      ;
      break;
    case 6:
      if (*(int *)(in_stack_00000004[1].base.actor_name + 0x18) == 0) {
        (**(code **)(iRam00000154 + 0x104))();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_190);
        local_190.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
        local_190.attacker = &in_stack_00000004->base;
        local_190.wielder = &in_stack_00000004->base;
        local_14 = local_190.damage_amount;
        pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_b8,&g_ZeroVector,
                            (in_stack_00000004->model).bone_transform.bone_world_matrices +
                            INT_03f48fa8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&in_stack_00000004->base,&local_dc,pCVar9);
        core_enemy_cpp_FUN_004a9880();
      }
      break;
    case 8:
      if ((*(int *)(in_stack_00000004[1].base.actor_name + 4) == 0) &&
         ((in_stack_00000004->base).unk2 == 0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (pCVar2,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  (&in_stack_00000004->base,&local_4c,pCVar9);
        core_gore_cpp_FUN_004ede30();
        pCVar10 = in_stack_00000004 + 1;
        (pCVar10->base).actor_name[4] = '\x01';
        (pCVar10->base).actor_name[5] = '\0';
        (pCVar10->base).actor_name[6] = '\0';
        (pCVar10->base).actor_name[7] = '\0';
      }
      break;
    case 9:
      iVar4 = *(int *)(in_stack_00000004[1].base.actor_name + 0x18);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x2598) == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x120))(iVar4);
        if (iVar4 == 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_154);
          local_154.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
          local_154.attacker = &in_stack_00000004->base;
          local_154.wielder = &in_stack_00000004->base;
          local_14 = local_154.damage_amount;
          pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_88,&g_ZeroVector,
                              (in_stack_00000004->model).bone_transform.bone_world_matrices +
                              INT_03f48fa8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&in_stack_00000004->base,&local_d0,pCVar9);
          core_enemy_cpp_FUN_004a9880();
        }
        else {
          (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base.actor_name + 0x18) + 0x154) +
                      0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 10:
      iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base.actor_name + 0x18) + 0x154) +
                          0x120))();
      if (iVar4 != 0) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base.actor_name + 0x18) + 0x154) + 0x104
                    ))();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
    }
    goto switchD_005a3055_caseD_7;
  }
  uVar5 = *(uint *)(in_stack_00000004->unk2 + 0x10);
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
              (&(in_stack_00000004->model).motion_controller,(int)fVar11,1);
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
  if (0.0 < *(float *)(in_stack_00000004[1].base.create_event + 0x20)) {
    *(float *)(in_stack_00000004[1].base.create_event + 0x20) =
         *(float *)(in_stack_00000004[1].base.create_event + 0x20) - in_stack_00000008;
  }
  if (local_24 == 0xb) {
    pCVar9 = &(in_stack_00000004->model).accumulated_root_motion;
    pCVar8 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&in_stack_00000004->base,&local_70,pCVar9);
    pCVar1 = &(in_stack_00000004->base).location;
    (pCVar1->position).x = pCVar8->x + (pCVar1->position).x;
    (in_stack_00000004->base).location.position.y =
         pCVar8->y + (in_stack_00000004->base).location.position.y;
    (in_stack_00000004->base).location.position.z =
         pCVar8->z + (in_stack_00000004->base).location.position.z;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar9->x = (in_stack_00000004->model).accumulated_root_motion.y;
  }
  else {
    iVar4 = core_charactr_cpp_CCharacter_FUN_004297e0(in_stack_00000004);
    if (iVar4 != 0) {
      iVar4 = *(int *)(in_stack_00000004[1].base.actor_name + 0x18);
      if ((iVar4 != 0) &&
         (pCVar10 = (CCharacter *)(**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(),
         pCVar10 == in_stack_00000004)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004[1].base.actor_name + 0x18));
      }
      *(float *)(in_stack_00000004->unk1 + 0x20) =
           *(float *)(in_stack_00000004->unk1 + 0x20) - in_stack_00000008 * (float)32;
      local_64 = *(float *)(in_stack_00000004->unk1 + 0x1c) * in_stack_00000008;
      local_60 = *(float *)(in_stack_00000004->unk1 + 0x20) * in_stack_00000008;
      local_5c = in_stack_00000008 * *(float *)(in_stack_00000004->unk1 + 0x24);
      pCVar9 = &(in_stack_00000004->model).accumulated_root_motion;
      local_7c = local_64 + *(float *)(in_stack_00000004->unk1 + 0x10);
      local_78 = local_60 + *(float *)(in_stack_00000004->unk1 + 0x14);
      local_74 = local_5c + *(float *)(in_stack_00000004->unk1 + 0x18);
      local_ac = local_7c + pCVar9->x;
      local_a8 = local_78 + (in_stack_00000004->model).accumulated_root_motion.y;
      local_a4 = local_74 + (in_stack_00000004->model).accumulated_root_motion.z;
      in_stack_00000004->unk1[0x18] = '\0';
      in_stack_00000004->unk1[0x19] = '\0';
      in_stack_00000004->unk1[0x1a] = '\0';
      in_stack_00000004->unk1[0x1b] = '\0';
      *(uint *)(in_stack_00000004->unk1 + 0x14) =
           *(uint *)(in_stack_00000004->unk1 + 0x18);
      *(float *)(in_stack_00000004->unk1 + 0x10) = *(float *)(in_stack_00000004->unk1 + 0x14);
      (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
      fVar11 = (in_stack_00000004->model).accumulated_root_motion.z;
      (in_stack_00000004->model).accumulated_root_motion.y = fVar11;
      pCVar9->x = fVar11;
      core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  return;
}
