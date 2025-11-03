// Name: core_hotdemon.cpp_FUN_004f6f20
// Address: 004f6f20
// Address Range: [[004f6f20, 004f765a]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f6f20()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_004f6ee0 = 004f7267
//   TerminatedCString s_s_confused_while_walking_0062f46c
//   TerminatedCString s_hotdemon_attack_wav_0062f496
//   TerminatedCString s_hotdemon_attack_wav_0062f4aa
//   undefined4 DAT_0062f4c0
//   undefined4 DAT_0062f4c8
//   undefined4 DAT_0062f4d0
//   undefined4 DAT_0065fccc
//   undefined4 DAT_0065fcd8
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGore* g_CGorePtr = 02d83364
//   CConsole g_ConsolePtr
//   CGore g_CGoreInstance
//   undefined4 DAT_02db88d0
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
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
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_enemy.cpp_FUN_004a9880
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_hotdemon.cpp_FUN_004f6f20(undefined4 param_1, undefined4
   param_2) */

void core_hotdemon_cpp_FUN_004f6f20(void)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  char *pcVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  CCharacter *pCVar7;
  int iVar8;
  int iVar9;
  CVector3f *pCVar10;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 uVar11;
  BADSPACEBASE *in_ESP;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8 [2];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  undefined4 local_64;
  undefined4 local_60;
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
  
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar8 == 0) {
    return;
  }
  pCVar7 = &in_stack_00000004->base_character;
  (pCVar7->model).field10_0x2254[8] = '\0';
  (pCVar7->model).field10_0x2254[9] = '\0';
  (pCVar7->model).field10_0x2254[10] = '\0';
  (pCVar7->model).field10_0x2254[0xb] = '\0';
  *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 4) =
       *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 8);
  *(undefined4 *)(in_stack_00000004->base_character).model.field10_0x2254 =
       *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 4);
  local_2c = in_stack_00000008 * in_stack_00000004->speed;
  pCVar1 = &(in_stack_00000004->base_character).model;
  while (0.0 < local_2c) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
  }
  fVar4 = in_stack_00000004->speed;
  fVar6 = (float)_DAT_0062f4c0;
  *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 8);
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar6 * fVar4;
  iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar1->motion_controller);
  iVar8 = *(int *)(iVar8 + 0x24);
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar9 != 0) {
    uVar5 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
    if (((uVar5 < 2) || (uVar5 < 3)) || (uVar5 != 3)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller);
    }
    else {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
    }
    pCVar7 = &in_stack_00000004->base_character;
    (pCVar7->model).field10_0x2254[8] = '\0';
    (pCVar7->model).field10_0x2254[9] = '\0';
    (pCVar7->model).field10_0x2254[10] = '\0';
    (pCVar7->model).field10_0x2254[0xb] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 4) =
         *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 8);
    *(undefined4 *)(in_stack_00000004->base_character).model.field10_0x2254 =
         *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 4);
    goto switchD_004f7654_caseD_e;
  }
  switch(iVar8) {
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
      if (local_28 < DAT_0065fccc) {
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_40,&local_c4);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_40.y -
                              (in_stack_00000004->base_character).base_actor.orient.bank);
        if (ABS(local_14) < (float)_DAT_0062f4c8) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller);
          iVar8 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
          if (iVar8 == 0) {
            uVar11 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                               ((CDemonActor *)in_stack_00000004,"hotdemon-attack.wav");
            *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = uVar11;
          }
        }
      }
      if (local_24 < in_stack_00000004->guard_distance) {
        pCVar1 = &(in_stack_00000004->base_character).model;
        if (_DAT_0065fcd8 <= local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller)
          ;
          in_stack_00000004->field6_0xbe38[0] = '\0';
          in_stack_00000004->field6_0xbe38[1] = '\0';
          in_stack_00000004->field6_0xbe38[2] = '\0';
          in_stack_00000004->field6_0xbe38[3] = '\0';
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller)
          ;
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
    fVar4 = DAT_0065fccc;
    pCVar1 = &(in_stack_00000004->base_character).model;
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
      local_1c = DAT_0065fccc;
      pCVar7 = &in_stack_00000004->base_character;
      (pCVar7->model).field10_0x2254[8] = '\0';
      (pCVar7->model).field10_0x2254[9] = '\0';
      (pCVar7->model).field10_0x2254[10] = '\0';
      (pCVar7->model).field10_0x2254[0xb] = '\0';
      *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 4) =
           *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 8);
      *(undefined4 *)(in_stack_00000004->base_character).model.field10_0x2254 =
           *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 4);
      local_64 = 0;
      local_5c = fVar4;
      local_60 = 0;
      (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        (&in_stack_00000004->base_character);
      if (-1 < iVar9) {
        local_94 = (in_stack_00000004->base_character).base_actor.location.position.x -
                   *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
        local_8c = (in_stack_00000004->base_character).base_actor.location.position.z -
                   *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
        local_90 = 0;
        local_20 = SQRT(local_8c * local_8c + local_94 * local_94);
        local_18 = local_20;
        if ((_DAT_0065fcd8 < local_20) && (iVar8 != 7)) {
          in_stack_00000004->field6_0xbe38[0] = '\0';
          in_stack_00000004->field6_0xbe38[1] = '\0';
          in_stack_00000004->field6_0xbe38[2] = '\0';
          in_stack_00000004->field6_0xbe38[3] = '\0';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller)
          ;
        }
        if ((local_20 <= local_1c) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
          iVar9 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
          local_70.x = *(float *)(iVar9 + 0x20) -
                       (in_stack_00000004->base_character).base_actor.location.position.x;
          local_70.y = *(float *)(iVar9 + 0x24) -
                       (in_stack_00000004->base_character).base_actor.location.position.y;
          local_70.z = *(float *)(iVar9 + 0x28) -
                       (in_stack_00000004->base_character).base_actor.location.position.z;
          core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_88,&local_70);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_88.y -
                                (in_stack_00000004->base_character).base_actor.orient.bank);
          if (ABS(local_14) < (float)_DAT_0062f4c8) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base_character).model.motion_controller);
            iVar9 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
            if (iVar9 == 0) {
              uVar11 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                 ((CDemonActor *)in_stack_00000004,"hotdemon-attack.wav");
              *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) =
                   uVar11;
            }
            in_stack_00000004->field6_0xbe38[0] = '\0';
            in_stack_00000004->field6_0xbe38[1] = '\0';
            in_stack_00000004->field6_0xbe38[2] = '\0';
            in_stack_00000004->field6_0xbe38[3] = '@';
          }
        }
        if (in_stack_00000004->guard_distance < local_20) {
          pCVar1 = &(in_stack_00000004->base_character).model;
          if (iVar8 == 7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller);
            in_stack_00000004->field6_0xbe38[0] = '\0';
            in_stack_00000004->field6_0xbe38[1] = '\0';
            in_stack_00000004->field6_0xbe38[2] = '\0';
            in_stack_00000004->field6_0xbe38[3] = '\0';
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller);
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
      if (iVar8 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller);
      }
      break;
    }
LAB_004f73d5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller);
    break;
  case 2:
  case 8:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffef4);
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_4c,&g_ZeroVector,
                         (CMatrix3x4f *)
                         ((in_stack_00000004->base_character).model.field3_0x508 +
                         DAT_02db88d0 * 0x30 + 0x978));
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)in_stack_00000004,&local_d0,pCVar10);
    core_enemy_cpp_FUN_004a9880();
    break;
  case 5:
  case 0xb:
    if ((in_stack_00000004->pool_me == 0) &&
       ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
      pCVar10 = core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20
                          (&(in_stack_00000004->base_character).model);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,local_b8,pCVar10);
      core_gore_cpp_FUN_004ede30();
      in_stack_00000004->pool_me = 1;
    }
  }
switchD_004f7654_caseD_e:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  iVar8 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar8 != 0) {
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)_DAT_0062f4d0;
    local_58 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_54 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar2 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_50 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pcVar3 = (in_stack_00000004->base_character).model.field10_0x2254;
    local_7c = local_58 + *(float *)pcVar2;
    local_78 = local_54 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_74 = local_50 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_a0 = local_7c + *(float *)pcVar3;
    local_9c = local_78 + *(float *)((in_stack_00000004->base_character).model.field10_0x2254 + 4);
    local_98 = local_74 + *(float *)((in_stack_00000004->base_character).model.field10_0x2254 + 8);
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar2 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    pCVar7 = &in_stack_00000004->base_character;
    (pCVar7->model).field10_0x2254[8] = '\0';
    (pCVar7->model).field10_0x2254[9] = '\0';
    (pCVar7->model).field10_0x2254[10] = '\0';
    (pCVar7->model).field10_0x2254[0xb] = '\0';
    uVar11 = *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 8);
    *(undefined4 *)((in_stack_00000004->base_character).model.field10_0x2254 + 4) = uVar11;
    *(undefined4 *)pcVar3 = uVar11;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}


// Assembly code:
// 004f6f20: PUSH EBX
//   Label: core_hotdemon.cpp_FUN_004f6f20
// 004f6f21: PUSH ESI
// 004f6f22: PUSH EDI
// 004f6f23: PUSH EBP
// 004f6f24: MOV EBP,ESP
// 004f6f26: SUB ESP,0xfc
// 004f6f2c: SUB EBP,0x7a
// 004f6f2f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 004f6f35: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f6f3b: PUSH EBX
// 004f6f3c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004f6f41: ADD ESP,0x8
// 004f6f44: TEST EAX,EAX
// 004f6f46: JZ 0x004f7125
//   XREF to: 004f7125 (CONDITIONAL_JUMP)
// 004f6f4c: LEA EAX,[EBX + 0x23ac]
// 004f6f52: MOV dword ptr [EAX + 0x8],0x0
// 004f6f59: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f6f5f: MOV EDX,dword ptr [EAX + 0x8]
// 004f6f62: MOV dword ptr [EAX + 0x4],EDX
// 004f6f65: MOV EDX,dword ptr [EAX + 0x4]
// 004f6f68: MOV dword ptr [EAX],EDX
// 004f6f6a: FMUL float ptr [EBX + 0xbe24]
// 004f6f70: LEA ESI,[EBX + 0x158]
// 004f6f76: FSTP float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (WRITE)
// 004f6f79: FLD float ptr [EBP + 0x5e]
//   Label: LAB_004f6f79
//   XREF to: Stack[-0x2c] (READ)
// 004f6f7c: FLDZ
// 004f6f7e: FCOMPP
// 004f6f80: FNSTSW AX
// 004f6f82: SAHF
// 004f6f83: JC 0x004f712d
//   XREF to: 004f712d (CONDITIONAL_JUMP)
// 004f6f89: FLD float ptr [EBX + 0xbe24]
// 004f6f8f: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f6f95: FMUL double ptr [0x0062f4c0]
//   XREF to: 0062f4c0 (READ)
// 004f6f9b: FMULP
// 004f6f9d: FLD float ptr [EBX + 0x23b4]
// 004f6fa3: PUSH ESI
// 004f6fa4: FSTP float ptr [EBX + 0x2434]
// 004f6faa: FSTP float ptr [EBX + 0x2438]
// 004f6fb0: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f6fb5: ADD ESP,0x4
// 004f6fb8: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f6fbe: MOV EAX,dword ptr [EAX + 0x24]
// 004f6fc1: PUSH EBX
// 004f6fc2: MOV EDI,EAX
// 004f6fc4: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004f6fc9: ADD ESP,0x8
// 004f6fcc: TEST EAX,EAX
// 004f6fce: JZ 0x004f7649
//   XREF to: 004f7649 (CONDITIONAL_JUMP)
// 004f6fd4: MOV EAX,dword ptr [EBX + 0x25b0]
// 004f6fda: CMP EAX,0x2
// 004f6fdd: JNC 0x004f716d
//   XREF to: 004f716d (CONDITIONAL_JUMP)
// 004f6fe3: CMP EAX,0x1
// 004f6fe6: JNZ 0x004f7178
//   XREF to: 004f7178 (CONDITIONAL_JUMP)
// 004f6fec: PUSH 0x1
//   Label: LAB_004f6fec
// 004f6fee: PUSH 0x1
// 004f6ff0: LEA EAX,[EBX + 0x158]
//   Label: LAB_004f6ff0
// 004f6ff6: PUSH EAX
// 004f6ff7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f6ffc: ADD ESP,0xc
//   Label: LAB_004f6ffc
// 004f6fff: LEA EAX,[EBX + 0x23ac]
// 004f7005: MOV dword ptr [EAX + 0x8],0x0
// 004f700c: MOV EDX,dword ptr [EAX + 0x8]
// 004f700f: MOV dword ptr [EAX + 0x4],EDX
// 004f7012: MOV EDX,dword ptr [EAX + 0x4]
// 004f7015: MOV dword ptr [EAX],EDX
// 004f7017: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_e
// 004f701d: FLDZ
// 004f701f: FCOMPP
// 004f7021: FNSTSW AX
// 004f7023: SAHF
// 004f7024: JNC 0x004f7038
//   XREF to: 004f7038 (CONDITIONAL_JUMP)
// 004f7026: FLD float ptr [EBX + 0xbe38]
// 004f702c: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f7032: FSTP float ptr [EBX + 0xbe38]
// 004f7038: PUSH EBX
//   Label: LAB_004f7038
// 004f7039: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 004f703e: ADD ESP,0x4
// 004f7041: TEST EAX,EAX
// 004f7043: JZ 0x004f70fe
//   XREF to: 004f70fe (CONDITIONAL_JUMP)
// 004f7049: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f704f: FLD ST0
// 004f7051: FMUL double ptr [0x0062f4d0]
//   XREF to: 0062f4d0 (READ)
// 004f7057: FLD float ptr [EBX + 0x242c]
// 004f705d: FXCH
// 004f705f: FSUBR ST0,ST1
// 004f7061: LEA EDX,[EBX + 0x2428]
// 004f7067: FSTP ST1
// 004f7069: FSTP float ptr [EBX + 0x242c]
// 004f706f: FLD float ptr [EDX]
// 004f7071: FMUL ST1
// 004f7073: FSTP float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (WRITE)
// 004f7076: FLD float ptr [EDX + 0x4]
// 004f7079: FMUL ST1
// 004f707b: LEA EAX,[EBX + 0x241c]
// 004f7081: FSTP float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (WRITE)
// 004f7084: FMUL float ptr [EDX + 0x8]
// 004f7087: LEA ESI,[EBX + 0x23ac]
// 004f708d: FLD float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 004f7090: FXCH
// 004f7092: FSTP float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (WRITE)
// 004f7095: FADD float ptr [EAX]
// 004f7097: FLD float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 004f709a: FXCH
// 004f709c: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (WRITE)
// 004f709f: FADD float ptr [EAX + 0x4]
// 004f70a2: FLD float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (READ)
// 004f70a5: FXCH
// 004f70a7: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (WRITE)
// 004f70aa: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 004f70ad: FLD float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 004f70b0: FXCH
// 004f70b2: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (WRITE)
// 004f70b5: FADD float ptr [ESI]
// 004f70b7: FLD float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (READ)
// 004f70ba: FXCH
// 004f70bc: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (WRITE)
// 004f70bf: FADD float ptr [ESI + 0x4]
// 004f70c2: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (READ)
// 004f70c5: FXCH
// 004f70c7: FSTP float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 004f70ca: FADD float ptr [ESI + 0x8]
// 004f70cd: FSTP float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (WRITE)
// 004f70d0: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 004f70d7: MOV EDX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 004f70da: MOV dword ptr [EAX + 0x4],EDX
// 004f70dd: MOV EDX,dword ptr [EAX + 0x4]
// 004f70e0: MOV dword ptr [EAX],EDX
// 004f70e2: MOV dword ptr [ESI + 0x8],0x0
// 004f70e9: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa0] (DATA)
// 004f70ec: FLD float ptr [ESI + 0x8]
// 004f70ef: PUSH EAX
// 004f70f0: FST float ptr [ESI + 0x4]
// 004f70f3: PUSH EBX
// 004f70f4: FSTP float ptr [ESI]
// 004f70f6: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004f70fb: ADD ESP,0x8
// 004f70fe: PUSH EBX
//   Label: LAB_004f70fe
// 004f70ff: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004f7104: ADD ESP,0x4
// 004f7107: LEA EAX,[EBX + 0x158]
// 004f710d: PUSH EAX
// 004f710e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004f7113: ADD ESP,0x4
// 004f7116: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f711c: PUSH EBX
// 004f711d: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004f7122: ADD ESP,0x8
// 004f7125: LEA ESP,[EBP + 0x7a]
//   Label: LAB_004f7125
//   XREF to: Stack[-0x10] (DATA)
// 004f7128: POP EBP
// 004f7129: POP EDI
// 004f712a: POP ESI
// 004f712b: POP EBX
// 004f712c: RET
// 004f712d: LEA EAX,[EBP + 0x5e]
//   Label: LAB_004f712d
//   XREF to: Stack[-0x2c] (DATA)
// 004f7130: PUSH EAX
// 004f7131: PUSH ESI
// 004f7132: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004f7137: ADD ESP,0x8
// 004f713a: PUSH EAX
// 004f713b: PUSH EBX
// 004f713c: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004f7141: ADD ESP,0x8
// 004f7144: JMP 0x004f6f79
//   XREF to: 004f6f79 (UNCONDITIONAL_JUMP)
// 004f7149: PUSH 0x1
//   Label: LAB_004f7149
// 004f714b: PUSH 0x0
// 004f714d: PUSH ESI
// 004f714e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f7153: ADD ESP,0xc
// 004f7156: PUSH EBX
// 004f7157: PUSH 0x62f46c
//   XREF to: 0062f46c (DATA)
// 004f715c: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f7162: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004f7163: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f7168: JMP 0x004f6ffc
//   XREF to: 004f6ffc (UNCONDITIONAL_JUMP)
// 004f716d: JBE 0x004f6fec
//   Label: LAB_004f716d
//   XREF to: 004f6fec (CONDITIONAL_JUMP)
// 004f7173: CMP EAX,0x3
// 004f7176: JZ 0x004f7149
//   XREF to: 004f7149 (CONDITIONAL_JUMP)
// 004f7178: PUSH 0x1
//   Label: LAB_004f7178
// 004f717a: PUSH 0x0
// 004f717c: JMP 0x004f6ff0
//   XREF to: 004f6ff0 (UNCONDITIONAL_JUMP)
// 004f7181: MOV ECX,dword ptr [EBX + 0xbe28]
//   Label: caseD_b
// 004f7187: TEST ECX,ECX
// 004f7189: JNZ 0x004f7017
//   XREF to: 004f7017 (CONDITIONAL_JUMP)
// 004f718f: MOV ESI,dword ptr [EBX + 0xdc]
// 004f7195: TEST ESI,ESI
// 004f7197: JNZ 0x004f7017
//   XREF to: 004f7017 (CONDITIONAL_JUMP)
// 004f719d: PUSH ECX
// 004f719e: LEA EAX,[EBP + -0x22]
//   XREF to: Stack[-0xac] (DATA)
// 004f71a1: PUSH EAX
// 004f71a2: LEA EAX,[EBX + 0x158]
// 004f71a8: PUSH EAX
// 004f71a9: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004f71ae: ADD ESP,0xc
// 004f71b1: PUSH EAX
// 004f71b2: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb8] (DATA)
// 004f71b5: PUSH EAX
// 004f71b6: PUSH EBX
// 004f71b7: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f71bc: ADD ESP,0xc
// 004f71bf: PUSH ESI
// 004f71c0: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb8] (DATA)
// 004f71c3: PUSH EAX
// 004f71c4: MOV EDI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 004f71ca: PUSH EDI
//   XREF to: 02d83364 (DATA)
// 004f71cb: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 004f71d0: ADD ESP,0xc
// 004f71d3: MOV dword ptr [EBX + 0xbe28],0x1
// 004f71dd: JMP 0x004f7017
//   XREF to: 004f7017 (UNCONDITIONAL_JUMP)
// 004f71e2: LEA EAX,[EBP + 0xffffff7e]
//   Label: caseD_8
//   XREF to: Stack[-0x10c] (DATA)
// 004f71e8: PUSH EAX
// 004f71e9: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004f71ee: ADD ESP,0x4
// 004f71f1: PUSH 0x41700000
// 004f71f6: PUSH 0x40e00000
// 004f71fb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004f7200: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f7203: ADD ESP,0x8
// 004f7206: LEA EAX,[EBP + 0xffffff7e]
//   XREF to: Stack[-0x10c] (DATA)
// 004f720c: MOV EDX,dword ptr [0x02db88d0]
//   XREF to: 02db88d0 (READ)
// 004f7212: PUSH EAX
// 004f7213: LEA EAX,[EDX*0x4 + 0x0]
// 004f721a: MOV dword ptr [EBP + -0x4e],EBX
//   XREF to: Stack[-0xd8] (WRITE)
// 004f721d: SUB EAX,EDX
// 004f721f: MOV dword ptr [EBP + -0x4a],EBX
//   XREF to: Stack[-0xd4] (WRITE)
// 004f7222: SHL EAX,0x4
// 004f7225: LEA EDX,[EBX + 0xfd8]
// 004f722b: ADD EAX,EDX
// 004f722d: PUSH 0x3ecccccd
// 004f7232: PUSH EAX
// 004f7233: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004f7238: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x4c] (DATA)
// 004f723b: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004f723e: PUSH EAX
// 004f723f: FSTP float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x108] (WRITE)
// 004f7242: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004f7247: ADD ESP,0xc
// 004f724a: PUSH EAX
// 004f724b: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xd0] (DATA)
// 004f724e: PUSH EAX
// 004f724f: PUSH EBX
// 004f7250: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f7255: ADD ESP,0xc
// 004f7258: PUSH EAX
// 004f7259: PUSH EBX
// 004f725a: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 004f725f: ADD ESP,0x10
// 004f7262: JMP 0x004f7017
//   XREF to: 004f7017 (UNCONDITIONAL_JUMP)
// 004f7267: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_6
//   XREF to: Stack[0x8] (READ)
// 004f726d: MOV EAX,dword ptr [EBX + 0x154]
// 004f7273: PUSH EBX
// 004f7274: CALL dword ptr [EAX + 0x158]
// 004f727a: ADD ESP,0x8
// 004f727d: MOV ECX,dword ptr [EBX + 0xbe3c]
// 004f7283: LEA ESI,[EBX + 0x158]
// 004f7289: TEST ECX,ECX
// 004f728b: JZ 0x004f73be
//   XREF to: 004f73be (CONDITIONAL_JUMP)
// 004f7291: MOV EAX,ECX
// 004f7293: LEA EDX,[EBX + 0x20]
// 004f7296: FLD float ptr [EAX + 0x20]
// 004f7299: FSUB float ptr [EDX]
// 004f729b: FSTP float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (WRITE)
// 004f729e: FLD float ptr [EAX + 0x24]
// 004f72a1: FSUB float ptr [EDX + 0x4]
// 004f72a4: FST float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (WRITE)
// 004f72a7: FMUL float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (READ)
// 004f72aa: FLD float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (READ)
// 004f72ad: FMUL ST0
// 004f72af: FLD float ptr [EAX + 0x28]
// 004f72b2: FSUB float ptr [EDX + 0x8]
// 004f72b5: FXCH
// 004f72b7: FADDP ST2,ST0
// 004f72b9: FST float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (WRITE)
// 004f72bc: FMUL float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (READ)
// 004f72bf: FADDP
// 004f72c1: FSQRT
// 004f72c3: FSTP float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (WRITE)
// 004f72c6: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004f72c9: FLD float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004f72cc: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004f72cf: FCOMP float ptr [0x0065fccc]
//   XREF to: 0065fccc (READ)
// 004f72d5: FNSTSW AX
// 004f72d7: SAHF
// 004f72d8: JC 0x004f7320
//   XREF to: 004f7320 (CONDITIONAL_JUMP)
// 004f72da: FLD float ptr [EBP + 0x66]
//   Label: LAB_004f72da
//   XREF to: Stack[-0x24] (READ)
// 004f72dd: FCOMP float ptr [EBX + 0xbe34]
// 004f72e3: FNSTSW AX
// 004f72e5: SAHF
// 004f72e6: JNC 0x004f7017
//   XREF to: 004f7017 (CONDITIONAL_JUMP)
// 004f72ec: FLD float ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 004f72ef: LEA EDX,[EBX + 0x158]
// 004f72f5: FCOMP float ptr [0x0065fcd8]
//   XREF to: 0065fcd8 (READ)
// 004f72fb: FNSTSW AX
// 004f72fd: SAHF
// 004f72fe: JNC 0x004f73a2
//   XREF to: 004f73a2 (CONDITIONAL_JUMP)
// 004f7304: PUSH 0x1
// 004f7306: PUSH 0x1
// 004f7308: PUSH EDX
// 004f7309: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f730e: ADD ESP,0xc
// 004f7311: MOV dword ptr [EBX + 0xbe38],0x0
// 004f731b: JMP 0x004f7017
//   XREF to: 004f7017 (UNCONDITIONAL_JUMP)
// 004f7320: LEA EAX,[EBP + -0x3a]
//   Label: LAB_004f7320
//   XREF to: Stack[-0xc4] (DATA)
// 004f7323: PUSH EAX
// 004f7324: LEA EAX,[EBP + 0x4a]
//   XREF to: Stack[-0x40] (DATA)
// 004f7327: PUSH EAX
// 004f7328: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f732d: FLD float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (READ)
// 004f7330: ADD ESP,0x8
// 004f7333: FSUB float ptr [EBX + 0x34]
// 004f7336: SUB ESP,0x4
// 004f7339: FSTP float ptr [ESP]
// 004f733c: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f7341: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f7344: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004f7347: FABS
// 004f7349: ADD ESP,0x4
// 004f734c: FCOMP double ptr [0x0062f4c8]
//   XREF to: 0062f4c8 (READ)
// 004f7352: FNSTSW AX
// 004f7354: SAHF
// 004f7355: JNC 0x004f72da
//   XREF to: 004f72da (CONDITIONAL_JUMP)
// 004f7357: TEST EDI,EDI
// 004f7359: JZ 0x004f739c
//   XREF to: 004f739c (CONDITIONAL_JUMP)
// 004f735b: PUSH 0x1
// 004f735d: PUSH 0x8
// 004f735f: PUSH ESI
//   Label: LAB_004f735f
// 004f7360: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f7365: ADD ESP,0xc
// 004f7368: MOV ESI,dword ptr [EBX + 0xbebc]
// 004f736e: PUSH ESI
// 004f736f: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004f7374: ADD ESP,0x4
// 004f7377: TEST EAX,EAX
// 004f7379: JNZ 0x004f72da
//   XREF to: 004f72da (CONDITIONAL_JUMP)
// 004f737f: PUSH 0x62f496
//   XREF to: 0062f496 (DATA)
// 004f7384: MOV EAX,dword ptr [EBX + 0x154]
// 004f738a: PUSH EBX
// 004f738b: CALL dword ptr [EAX + 0x24]
// 004f738e: ADD ESP,0x8
// 004f7391: MOV dword ptr [EBX + 0xbebc],EAX
// 004f7397: JMP 0x004f72da
//   XREF to: 004f72da (UNCONDITIONAL_JUMP)
// 004f739c: PUSH 0x1
//   Label: LAB_004f739c
// 004f739e: PUSH 0x2
// 004f73a0: JMP 0x004f735f
//   XREF to: 004f735f (UNCONDITIONAL_JUMP)
// 004f73a2: PUSH 0x1
//   Label: LAB_004f73a2
// 004f73a4: PUSH 0x7
// 004f73a6: PUSH EDX
// 004f73a7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f73ac: ADD ESP,0xc
// 004f73af: MOV dword ptr [EBX + 0xbe38],0x0
// 004f73b9: JMP 0x004f7017
//   XREF to: 004f7017 (UNCONDITIONAL_JUMP)
// 004f73be: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004f73be
//   XREF to: Stack[0x8] (READ)
// 004f73c4: PUSH EBX
// 004f73c5: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004f73ca: ADD ESP,0x8
// 004f73cd: TEST EAX,EAX
// 004f73cf: JZ 0x004f7017
//   XREF to: 004f7017 (CONDITIONAL_JUMP)
// 004f73d5: PUSH 0x1
//   Label: LAB_004f73d5
// 004f73d7: PUSH 0x1
// 004f73d9: PUSH ESI
// 004f73da: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f73df: ADD ESP,0xc
// 004f73e2: JMP 0x004f7017
//   XREF to: 004f7017 (UNCONDITIONAL_JUMP)
// 004f73e7: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_f
//   XREF to: Stack[0x8] (READ)
// 004f73ed: MOV EAX,dword ptr [EBX + 0x154]
// 004f73f3: PUSH EBX
// 004f73f4: CALL dword ptr [EAX + 0x158]
// 004f73fa: ADD ESP,0x8
// 004f73fd: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f7403: LEA ESI,[EBX + 0x158]
// 004f7409: TEST EAX,EAX
// 004f740b: JNZ 0x004f7447
//   XREF to: 004f7447 (CONDITIONAL_JUMP)
// 004f740d: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f7413: PUSH EBX
// 004f7414: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004f7419: ADD ESP,0x8
// 004f741c: TEST EAX,EAX
// 004f741e: JNZ 0x004f73d5
//   XREF to: 004f73d5 (CONDITIONAL_JUMP)
// 004f7420: CMP EDI,0x1
// 004f7423: JNZ 0x004f7435
//   XREF to: 004f7435 (CONDITIONAL_JUMP)
// 004f7425: PUSH EDI
// 004f7426: PUSH EAX
// 004f7427: PUSH ESI
// 004f7428: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f742d: ADD ESP,0xc
// 004f7430: JMP 0x004f7017
//   XREF to: 004f7017 (UNCONDITIONAL_JUMP)
// 004f7435: PUSH 0x1
//   Label: LAB_004f7435
// 004f7437: PUSH 0x6
// 004f7439: PUSH ESI
// 004f743a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f743f: ADD ESP,0xc
// 004f7442: JMP 0x004f7017
//   XREF to: 004f7017 (UNCONDITIONAL_JUMP)
// 004f7447: MOV EAX,[0x0065fccc]
//   Label: LAB_004f7447
//   XREF to: 0065fccc (READ)
// 004f744c: PUSH 0x3e32b8c2
// 004f7451: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f7454: LEA EAX,[EBX + 0x23ac]
// 004f745a: PUSH 0x3f000000
// 004f745f: MOV dword ptr [EAX + 0x8],0x0
// 004f7466: XOR EDX,EDX
// 004f7468: MOV ECX,dword ptr [EAX + 0x8]
// 004f746b: MOV dword ptr [EAX + 0x4],ECX
// 004f746e: MOV ECX,dword ptr [EAX + 0x4]
// 004f7471: MOV dword ptr [EAX],ECX
// 004f7473: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 004f7476: MOV dword ptr [EBP + 0x26],EDX
//   XREF to: Stack[-0x64] (WRITE)
// 004f7479: MOV dword ptr [EBP + 0x2e],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004f747c: LEA EAX,[EBP + 0x26]
//   XREF to: Stack[-0x64] (DATA)
// 004f747f: MOV dword ptr [EBP + 0x2a],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 004f7482: PUSH EAX
// 004f7483: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f7489: PUSH EAX
// 004f748a: MOV EDX,dword ptr [EAX + 0x154]
// 004f7490: CALL dword ptr [EDX + 0xbc]
// 004f7496: ADD ESP,0x4
// 004f7499: PUSH EAX
// 004f749a: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f74a0: ADD EAX,0x20
// 004f74a3: PUSH EAX
// 004f74a4: PUSH EBX
// 004f74a5: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 004f74aa: ADD ESP,0x18
// 004f74ad: TEST EAX,EAX
// 004f74af: JL 0x004f7017
//   XREF to: 004f7017 (CONDITIONAL_JUMP)
// 004f74b5: LEA EAX,[EBX + 0x20]
// 004f74b8: MOV EDX,dword ptr [EBX + 0xbe3c]
// 004f74be: FLD float ptr [EAX]
// 004f74c0: FSUB float ptr [EDX + 0x20]
// 004f74c3: FSTP float ptr [EBP + -0xa]
//   XREF to: Stack[-0x94] (WRITE)
// 004f74c6: FLD float ptr [EAX + 0x4]
// 004f74c9: FSUB float ptr [EDX + 0x24]
// 004f74cc: FLD float ptr [EBP + -0xa]
//   XREF to: Stack[-0x94] (READ)
// 004f74cf: FXCH
// 004f74d1: FSTP float ptr [EBP + -0x6]
//   XREF to: Stack[-0x90] (WRITE)
// 004f74d4: FLD float ptr [EAX + 0x8]
// 004f74d7: FSUB float ptr [EDX + 0x28]
// 004f74da: FXCH
// 004f74dc: FMUL float ptr [EBP + -0xa]
//   XREF to: Stack[-0x94] (READ)
// 004f74df: FXCH
// 004f74e1: FST float ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (WRITE)
// 004f74e4: FMUL float ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (READ)
// 004f74e7: XOR EAX,EAX
// 004f74e9: FADDP
// 004f74eb: MOV dword ptr [EBP + -0x6],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004f74ee: FSQRT
// 004f74f0: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 004f74f3: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004f74f6: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004f74f9: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004f74fc: FCOMP float ptr [0x0065fcd8]
//   XREF to: 0065fcd8 (READ)
// 004f7502: FNSTSW AX
// 004f7504: SAHF
// 004f7505: JBE 0x004f7523
//   XREF to: 004f7523 (CONDITIONAL_JUMP)
// 004f7507: CMP EDI,0x7
// 004f750a: JZ 0x004f7523
//   XREF to: 004f7523 (CONDITIONAL_JUMP)
// 004f750c: PUSH 0x1
// 004f750e: PUSH 0x7
// 004f7510: PUSH ESI
// 004f7511: MOV dword ptr [EBX + 0xbe38],0x0
// 004f751b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f7520: ADD ESP,0xc
// 004f7523: FLD float ptr [EBP + 0x6a]
//   Label: LAB_004f7523
//   XREF to: Stack[-0x20] (READ)
// 004f7526: FCOMP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 004f7529: FNSTSW AX
// 004f752b: SAHF
// 004f752c: JA 0x004f75d4
//   XREF to: 004f75d4 (CONDITIONAL_JUMP)
// 004f7532: FLD float ptr [EBX + 0xbe38]
// 004f7538: FLDZ
// 004f753a: FCOMPP
// 004f753c: FNSTSW AX
// 004f753e: SAHF
// 004f753f: JC 0x004f75d4
//   XREF to: 004f75d4 (CONDITIONAL_JUMP)
// 004f7545: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f754b: LEA EDX,[EBX + 0x20]
// 004f754e: FLD float ptr [EAX + 0x20]
// 004f7551: FSUB float ptr [EDX]
// 004f7553: FSTP float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (WRITE)
// 004f7556: FLD float ptr [EAX + 0x24]
// 004f7559: FSUB float ptr [EDX + 0x4]
// 004f755c: FSTP float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 004f755f: FLD float ptr [EAX + 0x28]
// 004f7562: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x70] (DATA)
// 004f7565: PUSH EAX
// 004f7566: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x88] (DATA)
// 004f7569: FSUB float ptr [EDX + 0x8]
// 004f756c: PUSH EAX
// 004f756d: FSTP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (WRITE)
// 004f7570: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f7575: FLD float ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (READ)
// 004f7578: ADD ESP,0x8
// 004f757b: FSUB float ptr [EBX + 0x34]
// 004f757e: SUB ESP,0x4
// 004f7581: FSTP float ptr [ESP]
// 004f7584: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f7589: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f758c: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004f758f: FABS
// 004f7591: ADD ESP,0x4
// 004f7594: FCOMP double ptr [0x0062f4c8]
//   XREF to: 0062f4c8 (READ)
// 004f759a: FNSTSW AX
// 004f759c: SAHF
// 004f759d: JNC 0x004f75d4
//   XREF to: 004f75d4 (CONDITIONAL_JUMP)
// 004f759f: LEA EAX,[EBX + 0x158]
// 004f75a5: CMP EDI,0x7
// 004f75a8: JZ 0x004f760d
//   XREF to: 004f760d (CONDITIONAL_JUMP)
// 004f75aa: PUSH 0x1
// 004f75ac: PUSH 0x2
// 004f75ae: PUSH EAX
//   Label: LAB_004f75ae
// 004f75af: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f75b4: ADD ESP,0xc
// 004f75b7: MOV EDX,dword ptr [EBX + 0xbebc]
// 004f75bd: PUSH EDX
// 004f75be: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004f75c3: ADD ESP,0x4
// 004f75c6: TEST EAX,EAX
// 004f75c8: JZ 0x004f7613
//   XREF to: 004f7613 (CONDITIONAL_JUMP)
// 004f75ca: MOV dword ptr [EBX + 0xbe38],0x40000000
//   Label: LAB_004f75ca
// 004f75d4: FLD float ptr [EBP + 0x6a]
//   Label: LAB_004f75d4
//   XREF to: Stack[-0x20] (READ)
// 004f75d7: FCOMP float ptr [EBX + 0xbe34]
// 004f75dd: FNSTSW AX
// 004f75df: SAHF
// 004f75e0: JBE 0x004f7017
//   XREF to: 004f7017 (CONDITIONAL_JUMP)
// 004f75e6: LEA EAX,[EBX + 0x158]
// 004f75ec: CMP EDI,0x7
// 004f75ef: JZ 0x004f762d
//   XREF to: 004f762d (CONDITIONAL_JUMP)
// 004f75f1: PUSH 0x1
// 004f75f3: PUSH 0x0
// 004f75f5: PUSH EAX
// 004f75f6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f75fb: ADD ESP,0xc
// 004f75fe: MOV dword ptr [EBX + 0xbe38],0x0
// 004f7608: JMP 0x004f7017
//   XREF to: 004f7017 (UNCONDITIONAL_JUMP)
// 004f760d: PUSH 0x1
//   Label: LAB_004f760d
// 004f760f: PUSH 0x8
// 004f7611: JMP 0x004f75ae
//   XREF to: 004f75ae (UNCONDITIONAL_JUMP)
// 004f7613: PUSH 0x62f4aa
//   Label: LAB_004f7613
//   XREF to: 0062f4aa (DATA)
// 004f7618: MOV EAX,dword ptr [EBX + 0x154]
// 004f761e: PUSH EBX
// 004f761f: CALL dword ptr [EAX + 0x24]
// 004f7622: ADD ESP,0x8
// 004f7625: MOV dword ptr [EBX + 0xbebc],EAX
// 004f762b: JMP 0x004f75ca
//   XREF to: 004f75ca (UNCONDITIONAL_JUMP)
// 004f762d: PUSH 0x1
//   Label: LAB_004f762d
// 004f762f: PUSH 0x6
// 004f7631: PUSH EAX
// 004f7632: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f7637: ADD ESP,0xc
// 004f763a: MOV dword ptr [EBX + 0xbe38],0x0
// 004f7644: JMP 0x004f7017
//   XREF to: 004f7017 (UNCONDITIONAL_JUMP)
// 004f7649: CMP EDI,0xf
//   Label: LAB_004f7649
// 004f764c: JA 0x004f7017
//   XREF to: 004f7017 (CONDITIONAL_JUMP)
// 004f7652: MOV EAX,EDI
// 004f7654: JMP dword ptr [EAX*0x4 + 0x4f6ee0]
//   Label: switchD
//   XREF to: 004f7267 (COMPUTED_JUMP)
//   XREF to: 004f73e7 (COMPUTED_JUMP)
//   XREF to: 004f71e2 (COMPUTED_JUMP)
//   XREF to: 004f7017 (COMPUTED_JUMP)
//   XREF to: 004f7181 (COMPUTED_JUMP)
//   XREF to: 004f6ee0 (DATA)
