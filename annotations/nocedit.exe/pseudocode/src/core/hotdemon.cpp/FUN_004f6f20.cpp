// Name: core_hotdemon.cpp_FUN_004f6f20
// Address: 004f6f20
// Address Range: [[004f6f20, 004f765a]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f6f20()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_hotdemon.cpp_FUN_004f6f20(uint param_1, uint
   param_2) */

void core_hotdemon_cpp_FUN_004f6f20(void)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  CVector3f *pCVar9;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar10;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  uint local_90;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar6 == 0) {
    return;
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_2c = in_stack_00000008 * in_stack_00000004->speed;
  pCVar1 = &(in_stack_00000004->base_character).model;
  while (0.0 < local_2c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
  }
  fVar3 = in_stack_00000004->speed;
  fVar5 = (float)3.1415926535000001;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar3;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar6 = pSVar7->state_index;
  iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar8 != 0) {
    uVar4 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
    if (uVar4 < 2) {
      if (uVar4 == 1) {
LAB_004f6fec:
        iVar6 = 1;
      }
      else {
LAB_004f7178:
        iVar6 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,iVar6,1);
    }
    else {
      if (uVar4 < 3) goto LAB_004f6fec;
      if (uVar4 != 3) goto LAB_004f7178;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
    }
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y =
         (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).model.accumulated_root_motion.x =
         (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    goto switchD_004f7654_caseD_e;
  }
  switch(iVar6) {
  case 0:
  case 6:
    (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    iVar8 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
    if (iVar8 != 0) {
      local_c4.x = *(float *)(iVar8 + 0x20) -
                   (in_stack_00000004->base_character).base_actor.location.position.x;
      local_c4.y = *(float *)(iVar8 + 0x24) -
                   (in_stack_00000004->base_character).base_actor.location.position.y;
      local_c4.z = *(float *)(iVar8 + 0x28) -
                   (in_stack_00000004->base_character).base_actor.location.position.z;
      local_28 = SQRT(local_c4.z * local_c4.z + local_c4.x * local_c4.x + local_c4.y * local_c4.y);
      local_24 = local_28;
      if (local_28 < 0x40000000) {
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_40,&local_c4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_40.y -
                              (in_stack_00000004->base_character).base_actor.orient.bank);
        if (ABS(local_14) < (float)0.52359877558333301) {
          if (iVar6 == 0) {
            iVar6 = 2;
          }
          else {
            iVar6 = 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,iVar6,1);
          iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                            (*(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8
                                      ));
          if (iVar6 == 0) {
            uVar10 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                               ((CDemonActor *)in_stack_00000004,"hotdemon-attack.wav");
            *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = uVar10;
          }
        }
      }
      if (local_24 < in_stack_00000004->guard_distance) {
        pCVar1 = &(in_stack_00000004->base_character).model;
        if (_DAT_0065fcd8 <= local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,7,1);
          in_stack_00000004->field6_0xbe38[0] = '\0';
          in_stack_00000004->field6_0xbe38[1] = '\0';
          in_stack_00000004->field6_0xbe38[2] = '\0';
          in_stack_00000004->field6_0xbe38[3] = '\0';
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
          in_stack_00000004->field6_0xbe38[0] = '\0';
          in_stack_00000004->field6_0xbe38[1] = '\0';
          in_stack_00000004->field6_0xbe38[2] = '\0';
          in_stack_00000004->field6_0xbe38[3] = '\0';
        }
      }
      break;
    }
    core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
    if (extraout_EAX == 0) break;
    goto LAB_004f73d5;
  case 1:
  case 7:
  case 0xf:
    (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    fVar3 = 0x40000000;
    pCVar1 = &(in_stack_00000004->base_character).model;
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
      local_1c = 0x40000000;
      (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
      (in_stack_00000004->base_character).model.accumulated_root_motion.y =
           (in_stack_00000004->base_character).model.accumulated_root_motion.z;
      (in_stack_00000004->base_character).model.accumulated_root_motion.x =
           (in_stack_00000004->base_character).model.accumulated_root_motion.y;
      local_64 = 0;
      local_5c = fVar3;
      local_60 = 0;
      (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
      iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        (&in_stack_00000004->base_character);
      if (-1 < iVar8) {
        local_94 = (in_stack_00000004->base_character).base_actor.location.position.x -
                   *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
        local_8c = (in_stack_00000004->base_character).base_actor.location.position.z -
                   *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
        local_90 = 0;
        local_20 = SQRT(local_8c * local_8c + local_94 * local_94);
        local_18 = local_20;
        if ((_DAT_0065fcd8 < local_20) && (iVar6 != 7)) {
          in_stack_00000004->field6_0xbe38[0] = '\0';
          in_stack_00000004->field6_0xbe38[1] = '\0';
          in_stack_00000004->field6_0xbe38[2] = '\0';
          in_stack_00000004->field6_0xbe38[3] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,7,1);
        }
        if ((local_20 <= local_1c) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
          iVar8 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
          local_70.x = *(float *)(iVar8 + 0x20) -
                       (in_stack_00000004->base_character).base_actor.location.position.x;
          local_70.y = *(float *)(iVar8 + 0x24) -
                       (in_stack_00000004->base_character).base_actor.location.position.y;
          local_70.z = *(float *)(iVar8 + 0x28) -
                       (in_stack_00000004->base_character).base_actor.location.position.z;
          core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_88,&local_70);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_88.y -
                                (in_stack_00000004->base_character).base_actor.orient.bank);
          if (ABS(local_14) < (float)0.52359877558333301) {
            if (iVar6 == 7) {
              iVar8 = 8;
            }
            else {
              iVar8 = 2;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base_character).model.motion_controller,iVar8,1);
            iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                              (*(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name +
                                        8));
            if (iVar8 == 0) {
              uVar10 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                 ((CDemonActor *)in_stack_00000004,"hotdemon-attack.wav");
              *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) =
                   uVar10;
            }
            in_stack_00000004->field6_0xbe38[0] = '\0';
            in_stack_00000004->field6_0xbe38[1] = '\0';
            in_stack_00000004->field6_0xbe38[2] = '\0';
            in_stack_00000004->field6_0xbe38[3] = '@';
          }
        }
        if (in_stack_00000004->guard_distance < local_20) {
          pCVar1 = &(in_stack_00000004->base_character).model;
          if (iVar6 == 7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,6,1);
            in_stack_00000004->field6_0xbe38[0] = '\0';
            in_stack_00000004->field6_0xbe38[1] = '\0';
            in_stack_00000004->field6_0xbe38[2] = '\0';
            in_stack_00000004->field6_0xbe38[3] = '\0';
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
            in_stack_00000004->field6_0xbe38[0] = '\0';
            in_stack_00000004->field6_0xbe38[1] = '\0';
            in_stack_00000004->field6_0xbe38[2] = '\0';
            in_stack_00000004->field6_0xbe38[3] = '\0';
          }
        }
      }
      break;
    }
    core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
    if (extraout_EAX_00 == 0) {
      if (iVar6 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,6,1);
      }
      break;
    }
LAB_004f73d5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,1,1);
    break;
  case 2:
  case 8:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffef4);
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&local_4c,&g_ZeroVector,
                        (CMatrix3x4f *)
                        (in_stack_00000004->base_character).model.bone_transform.bone_world_matrices
                        [DAT_02db88d0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)in_stack_00000004,&local_d0,pCVar9);
    core_enemy_cpp_FUN_004a9880();
    break;
  case 5:
  case 0xb:
    if ((in_stack_00000004->pool_me == 0) &&
       ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (&(in_stack_00000004->base_character).model,&local_ac,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_b8,pCVar9);
      core_gore_cpp_FUN_004ede30();
      in_stack_00000004->pool_me = 1;
    }
  }
switchD_004f7654_caseD_e:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  iVar6 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar6 != 0) {
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_58 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_54 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar2 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_50 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar9 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_7c = local_58 + *(float *)pcVar2;
    local_78 = local_54 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_74 = local_50 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_a0 = local_7c + pCVar9->x;
    local_9c = local_78 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_98 = local_74 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar2 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    fVar3 = (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y = fVar3;
    pCVar9->x = fVar3;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}
