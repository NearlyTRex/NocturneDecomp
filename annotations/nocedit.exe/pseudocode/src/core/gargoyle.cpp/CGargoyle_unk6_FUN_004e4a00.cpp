// Name: core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00
// Address: 004e4a00
// Address Range: [[004e4a00, 004e53e1]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_004e49e8 = 004e4e70
//   TerminatedCString s_s_confused_while_walking_0062d93f
//   TerminatedCString s_gargoyle_alive_wav_0062d969
//   TerminatedCString s_gargoyle_stone_wav_0062d97d
//   TerminatedCString s_gargoyle_stone_wav_0062d990
//   double DOUBLE_0062d9a7 = 3.14159265350000
//   double DOUBLE_0062d9af = 0.523598775583333
//   double DOUBLE_0062d9b7 = 32
//   undefined4 DAT_0065ea2c
//   undefined4 DAT_0065ea38
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   int g_GlobalDeltaTimeInt
//   undefined4 DAT_02d83208
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_actor.cpp_randomChance_FUN_0040cd10
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
//   core_gargoyle.cpp_CGargoyle_FUN_004e48a0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_unk6(CGargoyle* param_1, undefined4
   param_2) */

void core_gargoyle_cpp_CGargoyle_unk6_FUN_004e4a00(void)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  CVector3f *pCVar8;
  float fVar9;
  int extraout_EAX;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_c8;
  CVector3f local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f local_a4;
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar5 == 0) {
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->base_character).model.motion_controller);
    if (pSVar6->state_index == 8) {
      return;
    }
    if (pSVar6->state_index == 5) {
      return;
    }
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
  fVar9 = in_stack_00000004->speed;
  fVar4 = (float)DOUBLE_0062d9a7;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar4 * fVar9;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar5 = pSVar6->state_index;
  local_28 = iVar5;
  iVar7 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      iVar5 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0();
      if (iVar5 == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        in_stack_00000004[1].base_character.base_actor.runtime_state = (int)local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,5,1);
        iVar5 = sound_sndmain_cpp_FUN_005a9660();
        if (iVar5 == 0) {
          fVar9 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                   ((CDemonActor *)in_stack_00000004,"gargoyle-stone.wav");
          in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].y = fVar9;
        }
      }
      else {
        if (in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].z == 0.0) {
          iVar5 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
          if (iVar5 == 0) {
            core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
            if (extraout_EAX != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
            }
            break;
          }
          local_a4.x = *(float *)(iVar5 + 0x20) -
                       (in_stack_00000004->base_character).base_actor.location.position.x;
          local_a4.y = *(float *)(iVar5 + 0x24) -
                       (in_stack_00000004->base_character).base_actor.location.position.y;
          local_a4.z = *(float *)(iVar5 + 0x28) -
                       (in_stack_00000004->base_character).base_actor.location.position.z;
          local_1c = SQRT(local_a4.z * local_a4.z +
                          local_a4.x * local_a4.x + local_a4.y * local_a4.y);
          local_18 = local_1c;
          if (local_1c < DAT_0065ea2c) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_68,&local_a4);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_68.y -
                                  (in_stack_00000004->base_character).base_actor.orient.bank);
            if (ABS(local_14) < (float)DOUBLE_0062d9af) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,3,1);
            }
          }
          if (in_stack_00000004->guard_distance <= local_1c) break;
          pCVar1 = &(in_stack_00000004->base_character).model;
          if (_DAT_0065ea38 <= local_1c) {
            iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
            if (iVar5 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,4,1);
            }
            break;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,1,1);
      }
      break;
    case 1:
    case 2:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      iVar5 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0();
      pCVar1 = &(in_stack_00000004->base_character).model;
      if (iVar5 == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        in_stack_00000004[1].base_character.base_actor.runtime_state = (int)local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,5,1);
        iVar5 = sound_sndmain_cpp_FUN_005a9660();
        if (iVar5 == 0) {
          fVar9 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                   ((CDemonActor *)in_stack_00000004,"gargoyle-stone.wav");
          in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].y = fVar9;
        }
      }
      else {
        fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].z;
        pCVar8 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
        if (fVar9 == 0.0) {
          if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
            core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
            if (extraout_EAX_00 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
            }
          }
          else {
            (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
            local_78 = DAT_0065ea2c;
            (in_stack_00000004->base_character).model.accumulated_root_motion.y =
                 (in_stack_00000004->base_character).model.accumulated_root_motion.z;
            pCVar8->x = (in_stack_00000004->base_character).model.accumulated_root_motion.y;
            local_20 = local_78;
            local_80 = fVar9;
            local_7c = fVar9;
            (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))()
            ;
            iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                              (&in_stack_00000004->base_character);
            if (-1 < iVar5) {
              local_5c = (in_stack_00000004->base_character).base_actor.location.position.x -
                         *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
              local_54 = (in_stack_00000004->base_character).base_actor.location.position.z -
                         *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
              local_30 = SQRT(local_54 * local_54 + local_5c * local_5c);
              local_58 = fVar9;
              local_24 = local_30;
              if (_DAT_0065ea38 < local_30) {
                iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
                if (iVar5 == 0) {
                  iVar5 = 2;
                }
                else {
                  iVar5 = 4;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,iVar5,1);
              }
              if ((local_24 <= local_20) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
                iVar5 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
                local_50.x = *(float *)(iVar5 + 0x20) -
                             (in_stack_00000004->base_character).base_actor.location.position.x;
                local_50.y = *(float *)(iVar5 + 0x24) -
                             (in_stack_00000004->base_character).base_actor.location.position.y;
                local_50.z = *(float *)(iVar5 + 0x28) -
                             (in_stack_00000004->base_character).base_actor.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_c8,&local_50);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_c8.y -
                                      (in_stack_00000004->base_character).base_actor.orient.bank);
                if (ABS(local_14) < (float)DOUBLE_0062d9af) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(in_stack_00000004->base_character).model.motion_controller,3,1);
                  in_stack_00000004->field6_0xbe38[0] = '\0';
                  in_stack_00000004->field6_0xbe38[1] = '\0';
                  in_stack_00000004->field6_0xbe38[2] = -0x80;
                  in_stack_00000004->field6_0xbe38[3] = '?';
                }
              }
              if (in_stack_00000004->guard_distance < local_24) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->base_character).model.motion_controller,0,1);
              }
            }
          }
        }
        else {
          (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
          (in_stack_00000004->base_character).model.accumulated_root_motion.y =
               (in_stack_00000004->base_character).model.accumulated_root_motion.z;
          pCVar8->x = (in_stack_00000004->base_character).model.accumulated_root_motion.y;
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          (**(code **)(*(int *)((int)in_stack_00000004[1].base_character.base_actor.orient_matrix.m
                                     [0].z + 0x154) + 0xbc))();
          core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&in_stack_00000004->base_character);
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffefc);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_8c,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (in_stack_00000004->base_character).model.bone_transform.
                          bone_world_matrices[DAT_02d83208].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_bc,pCVar8);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 5:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      iVar5 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0();
      if ((iVar5 != 0) &&
         (fVar9 = (float)in_stack_00000004[1].base_character.base_actor.runtime_state -
                  in_stack_00000008,
         in_stack_00000004[1].base_character.base_actor.runtime_state = (int)fVar9, fVar9 < 0.0)) {
        in_stack_00000004[1].base_character.base_actor.runtime_state = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
        iVar5 = sound_sndmain_cpp_FUN_005a9660();
        if (iVar5 == 0) {
          fVar9 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                   ((CDemonActor *)in_stack_00000004,"gargoyle-alive?.wav");
          in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].y = fVar9;
        }
      }
    }
    goto switchD_004e531f_caseD_4;
  }
  uVar3 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_004e4b02:
      iVar5 = 1;
    }
    else {
LAB_004e4d57:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,iVar5,1);
  }
  else {
    if (uVar3 < 3) goto LAB_004e4b02;
    if (uVar3 != 3) goto LAB_004e4d57;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
switchD_004e531f_caseD_4:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  iVar5 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar5 != 0) {
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_0062d9b7;
    local_98 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_94 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar2 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_90 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar8 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_74 = local_98 + *(float *)pcVar2;
    local_70 = local_94 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_6c = local_90 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_b0 = local_74 + pCVar8->x;
    local_ac = local_70 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_a8 = local_6c + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar2 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y =
         (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    pCVar8->x = (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  iVar5 = local_28;
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  if (iVar5 == 5) {
    in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].z =
         (float)((int)in_stack_00000004[1].base_character.base_actor.orient.heading << 8);
    in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].x =
         (float)((int)in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].x << 8);
    in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y =
         (float)((int)in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].y << 8);
  }
  else {
    in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].x = 9.18341e-41;
    in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y = 9.18341e-41;
    in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].z = 9.18341e-41;
  }
  fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].z;
  iVar5 = (in_stack_00000004->base_character).base_actor.scale.x;
  if (iVar5 < (int)fVar9) {
    iVar5 = (in_stack_00000004->base_character).base_actor.scale.x + g_GlobalDeltaTimeInt;
    fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].z;
    (in_stack_00000004->base_character).base_actor.scale.x = iVar5;
    if ((int)fVar9 < iVar5) {
      (in_stack_00000004->base_character).base_actor.scale.x = (int)fVar9;
    }
  }
  else if ((int)fVar9 < iVar5) {
    iVar5 = (in_stack_00000004->base_character).base_actor.scale.x - g_GlobalDeltaTimeInt;
    fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].z;
    (in_stack_00000004->base_character).base_actor.scale.x = iVar5;
    if (iVar5 < (int)fVar9) {
      (in_stack_00000004->base_character).base_actor.scale.x = (int)fVar9;
    }
  }
  fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].x;
  iVar5 = (in_stack_00000004->base_character).base_actor.scale.y;
  if (iVar5 < (int)fVar9) {
    iVar5 = (in_stack_00000004->base_character).base_actor.scale.y + g_GlobalDeltaTimeInt;
    fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].x;
    (in_stack_00000004->base_character).base_actor.scale.y = iVar5;
    if ((int)fVar9 < iVar5) {
      (in_stack_00000004->base_character).base_actor.scale.y = (int)fVar9;
    }
  }
  else if ((int)fVar9 < iVar5) {
    iVar5 = (in_stack_00000004->base_character).base_actor.scale.y - g_GlobalDeltaTimeInt;
    fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].x;
    (in_stack_00000004->base_character).base_actor.scale.y = iVar5;
    if (iVar5 < (int)fVar9) {
      (in_stack_00000004->base_character).base_actor.scale.y = (int)fVar9;
    }
  }
  fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y;
  iVar5 = (in_stack_00000004->base_character).base_actor.scale.z;
  if (iVar5 < (int)fVar9) {
    iVar5 = (in_stack_00000004->base_character).base_actor.scale.z + g_GlobalDeltaTimeInt;
    fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y;
    (in_stack_00000004->base_character).base_actor.scale.z = iVar5;
    if ((int)fVar9 < iVar5) {
      (in_stack_00000004->base_character).base_actor.scale.z = (int)fVar9;
      return;
    }
  }
  else if ((int)fVar9 < iVar5) {
    iVar5 = (in_stack_00000004->base_character).base_actor.scale.z - g_GlobalDeltaTimeInt;
    fVar9 = in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y;
    (in_stack_00000004->base_character).base_actor.scale.z = iVar5;
    if (iVar5 < (int)fVar9) {
      (in_stack_00000004->base_character).base_actor.scale.z = (int)fVar9;
      return;
    }
  }
  return;
}


// Assembly code:
// 004e4a00: PUSH EBX
//   Label: core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00
// 004e4a01: PUSH ESI
// 004e4a02: PUSH EDI
// 004e4a03: PUSH EBP
// 004e4a04: MOV EBP,ESP
// 004e4a06: SUB ESP,0xf4
// 004e4a0c: SUB EBP,0x7a
// 004e4a0f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 004e4a15: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e4a1b: PUSH EBX
// 004e4a1c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004e4a21: ADD ESP,0x8
// 004e4a24: TEST EAX,EAX
// 004e4a26: JZ 0x004e4a7a
//   XREF to: 004e4a7a (CONDITIONAL_JUMP)
// 004e4a28: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_004e4a28
// 004e4a2e: MOV dword ptr [EAX + 0x8],0x0
// 004e4a35: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e4a3b: MOV EDX,dword ptr [EAX + 0x8]
// 004e4a3e: MOV dword ptr [EAX + 0x4],EDX
// 004e4a41: MOV EDX,dword ptr [EAX + 0x4]
// 004e4a44: MOV dword ptr [EAX],EDX
// 004e4a46: FMUL float ptr [EBX + 0xbe24]
// 004e4a4c: LEA ESI,[EBX + 0x158]
// 004e4a52: FSTP float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (WRITE)
// 004e4a55: FLD float ptr [EBP + 0x5e]
//   Label: LAB_004e4a55
//   XREF to: Stack[-0x2c] (READ)
// 004e4a58: FLDZ
// 004e4a5a: FCOMPP
// 004e4a5c: FNSTSW AX
// 004e4a5e: SAHF
// 004e4a5f: JNC 0x004e4a9e
//   XREF to: 004e4a9e (CONDITIONAL_JUMP)
// 004e4a61: LEA EAX,[EBP + 0x5e]
//   XREF to: Stack[-0x2c] (DATA)
// 004e4a64: PUSH EAX
// 004e4a65: PUSH ESI
// 004e4a66: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004e4a6b: ADD ESP,0x8
// 004e4a6e: PUSH EAX
// 004e4a6f: PUSH EBX
// 004e4a70: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004e4a75: ADD ESP,0x8
// 004e4a78: JMP 0x004e4a55
//   XREF to: 004e4a55 (UNCONDITIONAL_JUMP)
// 004e4a7a: LEA EAX,[EBX + 0x158]
//   Label: LAB_004e4a7a
// 004e4a80: PUSH EAX
// 004e4a81: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004e4a86: MOV EAX,dword ptr [EAX + 0x24]
// 004e4a89: ADD ESP,0x4
// 004e4a8c: CMP EAX,0x8
// 004e4a8f: JZ 0x004e4a96
//   XREF to: 004e4a96 (CONDITIONAL_JUMP)
// 004e4a91: CMP EAX,0x5
// 004e4a94: JNZ 0x004e4a28
//   XREF to: 004e4a28 (CONDITIONAL_JUMP)
// 004e4a96: LEA ESP,[EBP + 0x7a]
//   Label: LAB_004e4a96
//   XREF to: Stack[-0x10] (DATA)
// 004e4a99: POP EBP
// 004e4a9a: POP EDI
// 004e4a9b: POP ESI
// 004e4a9c: POP EBX
// 004e4a9d: RET
// 004e4a9e: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_004e4a9e
// 004e4aa4: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e4aaa: FMUL double ptr [0x0062d9a7]
//   XREF to: 0062d9a7 (READ)
// 004e4ab0: FMULP
// 004e4ab2: FLD float ptr [EBX + 0x23b4]
// 004e4ab8: PUSH ESI
// 004e4ab9: FSTP float ptr [EBX + 0x2434]
// 004e4abf: FSTP float ptr [EBX + 0x2438]
// 004e4ac5: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004e4aca: ADD ESP,0x4
// 004e4acd: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e4ad3: MOV EDI,dword ptr [EAX + 0x24]
// 004e4ad6: PUSH EBX
// 004e4ad7: MOV dword ptr [EBP + 0x62],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 004e4ada: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004e4adf: ADD ESP,0x8
// 004e4ae2: TEST EAX,EAX
// 004e4ae4: JZ 0x004e5316
//   XREF to: 004e5316 (CONDITIONAL_JUMP)
// 004e4aea: MOV EAX,dword ptr [EBX + 0x25b0]
// 004e4af0: CMP EAX,0x2
// 004e4af3: JNC 0x004e4d4c
//   XREF to: 004e4d4c (CONDITIONAL_JUMP)
// 004e4af9: CMP EAX,0x1
// 004e4afc: JNZ 0x004e4d57
//   XREF to: 004e4d57 (CONDITIONAL_JUMP)
// 004e4b02: PUSH 0x1
//   Label: LAB_004e4b02
// 004e4b04: PUSH 0x1
// 004e4b06: LEA EAX,[EBX + 0x158]
//   Label: LAB_004e4b06
// 004e4b0c: PUSH EAX
// 004e4b0d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e4b12: ADD ESP,0xc
//   Label: LAB_004e4b12
// 004e4b15: LEA EAX,[EBX + 0x23ac]
// 004e4b1b: MOV dword ptr [EAX + 0x8],0x0
// 004e4b22: MOV EDX,dword ptr [EAX + 0x8]
// 004e4b25: MOV dword ptr [EAX + 0x4],EDX
// 004e4b28: MOV EDX,dword ptr [EAX + 0x4]
// 004e4b2b: MOV dword ptr [EAX],EDX
// 004e4b2d: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_4
// 004e4b33: FLDZ
// 004e4b35: FCOMPP
// 004e4b37: FNSTSW AX
// 004e4b39: SAHF
// 004e4b3a: JNC 0x004e4b4e
//   XREF to: 004e4b4e (CONDITIONAL_JUMP)
// 004e4b3c: FLD float ptr [EBX + 0xbe38]
// 004e4b42: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e4b48: FSTP float ptr [EBX + 0xbe38]
// 004e4b4e: PUSH EBX
//   Label: LAB_004e4b4e
// 004e4b4f: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 004e4b54: ADD ESP,0x4
// 004e4b57: TEST EAX,EAX
// 004e4b59: JZ 0x004e4c17
//   XREF to: 004e4c17 (CONDITIONAL_JUMP)
// 004e4b5f: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e4b65: FLD ST0
// 004e4b67: FMUL double ptr [0x0062d9b7]
//   XREF to: 0062d9b7 (READ)
// 004e4b6d: FLD float ptr [EBX + 0x242c]
// 004e4b73: FXCH
// 004e4b75: FSUBR ST0,ST1
// 004e4b77: LEA EDX,[EBX + 0x2428]
// 004e4b7d: FSTP ST1
// 004e4b7f: FSTP float ptr [EBX + 0x242c]
// 004e4b85: FLD float ptr [EDX]
// 004e4b87: FMUL ST1
// 004e4b89: FSTP float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (WRITE)
// 004e4b8c: FLD float ptr [EDX + 0x4]
// 004e4b8f: FMUL ST1
// 004e4b91: LEA ESI,[EBX + 0x241c]
// 004e4b97: FSTP float ptr [EBP + -0xa]
//   XREF to: Stack[-0x94] (WRITE)
// 004e4b9a: FMUL float ptr [EDX + 0x8]
// 004e4b9d: LEA EAX,[EBX + 0x23ac]
// 004e4ba3: FLD float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (READ)
// 004e4ba6: FXCH
// 004e4ba8: FSTP float ptr [EBP + -0x6]
//   XREF to: Stack[-0x90] (WRITE)
// 004e4bab: FADD float ptr [ESI]
// 004e4bad: FLD float ptr [EBP + -0xa]
//   XREF to: Stack[-0x94] (READ)
// 004e4bb0: FXCH
// 004e4bb2: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (WRITE)
// 004e4bb5: FADD float ptr [ESI + 0x4]
// 004e4bb8: FLD float ptr [EBP + -0x6]
//   XREF to: Stack[-0x90] (READ)
// 004e4bbb: FXCH
// 004e4bbd: FSTP float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (WRITE)
// 004e4bc0: FADD float ptr [ESI + 0x8]
//   XREF to: 00002424 (DATA)
// 004e4bc3: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (READ)
// 004e4bc6: FXCH
// 004e4bc8: FSTP float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 004e4bcb: FADD float ptr [EAX]
// 004e4bcd: FLD float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (READ)
// 004e4bd0: FXCH
// 004e4bd2: FSTP float ptr [EBP + -0x26]
//   XREF to: Stack[-0xb0] (WRITE)
// 004e4bd5: FADD float ptr [EAX + 0x4]
// 004e4bd8: FLD float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 004e4bdb: FXCH
// 004e4bdd: FSTP float ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (WRITE)
// 004e4be0: FADD float ptr [EAX + 0x8]
// 004e4be3: FSTP float ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa8] (WRITE)
// 004e4be6: MOV dword ptr [ESI + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 004e4bed: MOV EDX,dword ptr [ESI + 0x8]
//   XREF to: 00002424 (DATA)
// 004e4bf0: MOV dword ptr [ESI + 0x4],EDX
// 004e4bf3: MOV EDX,dword ptr [ESI + 0x4]
// 004e4bf6: MOV dword ptr [ESI],EDX
// 004e4bf8: MOV dword ptr [EAX + 0x8],0x0
// 004e4bff: MOV EDX,dword ptr [EAX + 0x8]
// 004e4c02: MOV dword ptr [EAX + 0x4],EDX
// 004e4c05: MOV EDX,dword ptr [EAX + 0x4]
// 004e4c08: MOV dword ptr [EAX],EDX
// 004e4c0a: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb0] (DATA)
// 004e4c0d: PUSH EAX
// 004e4c0e: PUSH EBX
// 004e4c0f: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004e4c14: ADD ESP,0x8
// 004e4c17: PUSH EBX
//   Label: LAB_004e4c17
// 004e4c18: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004e4c1d: ADD ESP,0x4
// 004e4c20: LEA EAX,[EBX + 0x158]
// 004e4c26: PUSH EAX
// 004e4c27: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004e4c2c: ADD ESP,0x4
// 004e4c2f: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e4c35: PUSH EBX
// 004e4c36: MOV ESI,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004e4c39: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004e4c3e: ADD ESP,0x8
// 004e4c41: CMP ESI,0x5
// 004e4c44: JNZ 0x004e5326
//   XREF to: 004e5326 (CONDITIONAL_JUMP)
// 004e4c4a: MOV EAX,dword ptr [EBX + 0xbeec]
// 004e4c50: SHL EAX,0x8
// 004e4c53: MOV dword ptr [EBX + 0xbf04],EAX
// 004e4c59: MOV EAX,dword ptr [EBX + 0xbef0]
// 004e4c5f: SHL EAX,0x8
// 004e4c62: MOV dword ptr [EBX + 0xbf08],EAX
// 004e4c68: MOV EAX,dword ptr [EBX + 0xbef4]
// 004e4c6e: SHL EAX,0x8
// 004e4c71: MOV dword ptr [EBX + 0xbf0c],EAX
// 004e4c77: MOV EDI,dword ptr [EBX + 0xbf04]
//   Label: LAB_004e4c77
// 004e4c7d: MOV EAX,dword ptr [EBX + 0x108]
// 004e4c83: CMP EAX,EDI
// 004e4c85: JGE 0x004e5349
//   XREF to: 004e5349 (CONDITIONAL_JUMP)
// 004e4c8b: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004e4c90: MOV EDI,dword ptr [EBX + 0x108]
// 004e4c96: ADD EDI,EAX
// 004e4c98: MOV EDX,dword ptr [EBX + 0xbf04]
// 004e4c9e: MOV dword ptr [EBX + 0x108],EDI
// 004e4ca4: CMP EDI,EDX
// 004e4ca6: JLE 0x004e4cae
//   XREF to: 004e4cae (CONDITIONAL_JUMP)
// 004e4ca8: MOV dword ptr [EBX + 0x108],EDX
// 004e4cae: MOV ECX,dword ptr [EBX + 0xbf08]
//   Label: LAB_004e4cae
// 004e4cb4: MOV EAX,dword ptr [EBX + 0x10c]
// 004e4cba: CMP EAX,ECX
// 004e4cbc: JGE 0x004e537b
//   XREF to: 004e537b (CONDITIONAL_JUMP)
// 004e4cc2: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004e4cc7: MOV ECX,dword ptr [EBX + 0x10c]
// 004e4ccd: ADD ECX,EAX
// 004e4ccf: MOV ESI,dword ptr [EBX + 0xbf08]
// 004e4cd5: MOV dword ptr [EBX + 0x10c],ECX
// 004e4cdb: CMP ECX,ESI
// 004e4cdd: JLE 0x004e4ce5
//   XREF to: 004e4ce5 (CONDITIONAL_JUMP)
// 004e4cdf: MOV dword ptr [EBX + 0x10c],ESI
// 004e4ce5: MOV EDI,dword ptr [EBX + 0xbf0c]
//   Label: LAB_004e4ce5
// 004e4ceb: MOV EAX,dword ptr [EBX + 0x110]
// 004e4cf1: CMP EAX,EDI
// 004e4cf3: JGE 0x004e53ad
//   XREF to: 004e53ad (CONDITIONAL_JUMP)
// 004e4cf9: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004e4cfe: MOV EDI,dword ptr [EBX + 0x110]
// 004e4d04: ADD EDI,EAX
// 004e4d06: MOV EDX,dword ptr [EBX + 0xbf0c]
// 004e4d0c: MOV dword ptr [EBX + 0x110],EDI
// 004e4d12: CMP EDI,EDX
// 004e4d14: JLE 0x004e4a96
//   XREF to: 004e4a96 (CONDITIONAL_JUMP)
// 004e4d1a: MOV dword ptr [EBX + 0x110],EDX
// 004e4d20: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 004e4d23: POP EBP
// 004e4d24: POP EDI
// 004e4d25: POP ESI
// 004e4d26: POP EBX
// 004e4d27: RET
// 004e4d28: PUSH 0x1
//   Label: LAB_004e4d28
// 004e4d2a: PUSH 0x0
// 004e4d2c: PUSH ESI
// 004e4d2d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e4d32: ADD ESP,0xc
// 004e4d35: PUSH EBX
// 004e4d36: PUSH 0x62d93f
//   XREF to: 0062d93f (DATA)
// 004e4d3b: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004e4d41: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004e4d42: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e4d47: JMP 0x004e4b12
//   XREF to: 004e4b12 (UNCONDITIONAL_JUMP)
// 004e4d4c: JBE 0x004e4b02
//   Label: LAB_004e4d4c
//   XREF to: 004e4b02 (CONDITIONAL_JUMP)
// 004e4d52: CMP EAX,0x3
// 004e4d55: JZ 0x004e4d28
//   XREF to: 004e4d28 (CONDITIONAL_JUMP)
// 004e4d57: PUSH 0x1
//   Label: LAB_004e4d57
// 004e4d59: PUSH 0x0
// 004e4d5b: JMP 0x004e4b06
//   XREF to: 004e4b06 (UNCONDITIONAL_JUMP)
// 004e4d60: LEA EAX,[EBP + -0x7a]
//   Label: caseD_3
//   XREF to: Stack[-0x104] (DATA)
// 004e4d63: PUSH EAX
// 004e4d64: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004e4d69: ADD ESP,0x4
// 004e4d6c: PUSH 0x40a00000
// 004e4d71: PUSH 0x40400000
// 004e4d76: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e4d7b: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e4d7e: ADD ESP,0x8
// 004e4d81: LEA EAX,[EBP + -0x7a]
//   XREF to: Stack[-0x104] (DATA)
// 004e4d84: MOV EDX,dword ptr [0x02d83208]
//   XREF to: 02d83208 (READ)
// 004e4d8a: PUSH EAX
// 004e4d8b: LEA EAX,[EDX*0x4 + 0x0]
// 004e4d92: MOV dword ptr [EBP + -0x46],EBX
//   XREF to: Stack[-0xd0] (WRITE)
// 004e4d95: SUB EAX,EDX
// 004e4d97: MOV dword ptr [EBP + -0x42],EBX
//   XREF to: Stack[-0xcc] (WRITE)
// 004e4d9a: SHL EAX,0x4
// 004e4d9d: LEA EDX,[EBX + 0xfd8]
// 004e4da3: ADD EAX,EDX
// 004e4da5: PUSH 0x3ecccccd
// 004e4daa: PUSH EAX
// 004e4dab: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004e4db0: LEA EAX,[EBP + -0x2]
//   XREF to: Stack[-0x8c] (DATA)
// 004e4db3: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e4db6: PUSH EAX
// 004e4db7: FSTP float ptr [EBP + -0x76]
//   XREF to: Stack[-0x100] (WRITE)
// 004e4dba: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004e4dbf: ADD ESP,0xc
// 004e4dc2: PUSH EAX
// 004e4dc3: LEA EAX,[EBP + -0x32]
//   XREF to: Stack[-0xbc] (DATA)
// 004e4dc6: PUSH EAX
// 004e4dc7: PUSH EBX
// 004e4dc8: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e4dcd: ADD ESP,0xc
// 004e4dd0: PUSH EAX
// 004e4dd1: PUSH EBX
// 004e4dd2: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 004e4dd7: ADD ESP,0x10
// 004e4dda: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e4ddf: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_5
//   XREF to: Stack[0x8] (READ)
// 004e4de5: MOV EAX,dword ptr [EBX + 0x154]
// 004e4deb: PUSH EBX
// 004e4dec: CALL dword ptr [EAX + 0x158]
// 004e4df2: ADD ESP,0x8
// 004e4df5: PUSH EBX
// 004e4df6: CALL core_gargoyle.cpp_CGargoyle_FUN_004e48a0
//   XREF to: 004e48a0 (UNCONDITIONAL_CALL)
// 004e4dfb: ADD ESP,0x4
// 004e4dfe: TEST EAX,EAX
// 004e4e00: JZ 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e4e06: FLD float ptr [EBX + 0xbf14]
// 004e4e0c: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e4e12: FST float ptr [EBX + 0xbf14]
// 004e4e18: FLDZ
// 004e4e1a: FCOMPP
// 004e4e1c: FNSTSW AX
// 004e4e1e: SAHF
// 004e4e1f: JBE 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e4e25: PUSH 0x1
// 004e4e27: PUSH 0x0
// 004e4e29: PUSH ESI
// 004e4e2a: MOV dword ptr [EBX + 0xbf14],0x0
// 004e4e34: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e4e39: ADD ESP,0xc
// 004e4e3c: MOV EDX,dword ptr [EBX + 0xbf00]
// 004e4e42: PUSH EDX
// 004e4e43: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004e4e48: ADD ESP,0x4
// 004e4e4b: TEST EAX,EAX
// 004e4e4d: JNZ 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e4e53: PUSH 0x62d969
//   XREF to: 0062d969 (DATA)
// 004e4e58: MOV EAX,dword ptr [EBX + 0x154]
// 004e4e5e: PUSH EBX
// 004e4e5f: CALL dword ptr [EAX + 0x24]
// 004e4e62: ADD ESP,0x8
// 004e4e65: MOV dword ptr [EBX + 0xbf00],EAX
// 004e4e6b: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e4e70: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 004e4e76: MOV EAX,dword ptr [EBX + 0x154]
// 004e4e7c: PUSH EBX
// 004e4e7d: CALL dword ptr [EAX + 0x158]
// 004e4e83: ADD ESP,0x8
// 004e4e86: PUSH EBX
// 004e4e87: CALL core_gargoyle.cpp_CGargoyle_FUN_004e48a0
//   XREF to: 004e48a0 (UNCONDITIONAL_CALL)
// 004e4e8c: ADD ESP,0x4
// 004e4e8f: TEST EAX,EAX
// 004e4e91: JZ 0x004e4f3b
//   XREF to: 004e4f3b (CONDITIONAL_JUMP)
// 004e4e97: CMP dword ptr [EBX + 0xbf10],0x0
// 004e4e9e: JNZ 0x004e4f29
//   XREF to: 004e4f29 (CONDITIONAL_JUMP)
// 004e4ea4: MOV EDX,dword ptr [EBX + 0xbe3c]
// 004e4eaa: TEST EDX,EDX
// 004e4eac: JZ 0x004e5019
//   XREF to: 004e5019 (CONDITIONAL_JUMP)
// 004e4eb2: MOV EAX,EDX
// 004e4eb4: LEA EDX,[EBX + 0x20]
// 004e4eb7: FLD float ptr [EAX + 0x20]
// 004e4eba: FSUB float ptr [EDX]
// 004e4ebc: FSTP float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (WRITE)
// 004e4ebf: FLD float ptr [EAX + 0x24]
// 004e4ec2: FSUB float ptr [EDX + 0x4]
// 004e4ec5: FST float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (WRITE)
// 004e4ec8: FMUL float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (READ)
// 004e4ecb: FLD float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (READ)
// 004e4ece: FMUL ST0
// 004e4ed0: FLD float ptr [EAX + 0x28]
// 004e4ed3: FSUB float ptr [EDX + 0x8]
// 004e4ed6: FXCH
// 004e4ed8: FADDP ST2,ST0
// 004e4eda: FST float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 004e4edd: FMUL float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (READ)
// 004e4ee0: FADDP
// 004e4ee2: FSQRT
// 004e4ee4: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 004e4ee7: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004e4eea: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004e4eed: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e4ef0: FCOMP float ptr [0x0065ea2c]
//   XREF to: 0065ea2c (READ)
// 004e4ef6: FNSTSW AX
// 004e4ef8: SAHF
// 004e4ef9: JC 0x004e4f97
//   XREF to: 004e4f97 (CONDITIONAL_JUMP)
// 004e4eff: FLD float ptr [EBP + 0x6e]
//   Label: LAB_004e4eff
//   XREF to: Stack[-0x1c] (READ)
// 004e4f02: FCOMP float ptr [EBX + 0xbe34]
// 004e4f08: FNSTSW AX
// 004e4f0a: SAHF
// 004e4f0b: JNC 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e4f11: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 004e4f14: LEA ESI,[EBX + 0x158]
// 004e4f1a: FCOMP float ptr [0x0065ea38]
//   XREF to: 0065ea38 (READ)
// 004e4f20: FNSTSW AX
// 004e4f22: SAHF
// 004e4f23: JNC 0x004e4fe4
//   XREF to: 004e4fe4 (CONDITIONAL_JUMP)
// 004e4f29: PUSH 0x1
//   Label: LAB_004e4f29
// 004e4f2b: PUSH 0x1
// 004e4f2d: PUSH ESI
// 004e4f2e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e4f33: ADD ESP,0xc
// 004e4f36: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e4f3b: PUSH 0x3f800000
//   Label: LAB_004e4f3b
// 004e4f40: PUSH 0x0
// 004e4f42: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e4f47: ADD ESP,0x8
// 004e4f4a: PUSH 0x1
// 004e4f4c: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e4f4f: PUSH 0x5
// 004e4f51: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e4f54: PUSH ESI
// 004e4f55: FSTP float ptr [EBX + 0xbf14]
// 004e4f5b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e4f60: ADD ESP,0xc
// 004e4f63: MOV EDI,dword ptr [EBX + 0xbf00]
// 004e4f69: PUSH EDI
// 004e4f6a: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004e4f6f: ADD ESP,0x4
// 004e4f72: TEST EAX,EAX
// 004e4f74: JNZ 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e4f7a: PUSH 0x62d97d
//   XREF to: 0062d97d (DATA)
// 004e4f7f: MOV EAX,dword ptr [EBX + 0x154]
// 004e4f85: PUSH EBX
// 004e4f86: CALL dword ptr [EAX + 0x24]
// 004e4f89: ADD ESP,0x8
// 004e4f8c: MOV dword ptr [EBX + 0xbf00],EAX
// 004e4f92: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e4f97: LEA EAX,[EBP + -0x1a]
//   Label: LAB_004e4f97
//   XREF to: Stack[-0xa4] (DATA)
// 004e4f9a: PUSH EAX
// 004e4f9b: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 004e4f9e: PUSH EAX
// 004e4f9f: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004e4fa4: FLD float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 004e4fa7: ADD ESP,0x8
// 004e4faa: FSUB float ptr [EBX + 0x34]
// 004e4fad: SUB ESP,0x4
// 004e4fb0: FSTP float ptr [ESP]
// 004e4fb3: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004e4fb8: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e4fbb: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e4fbe: FABS
// 004e4fc0: ADD ESP,0x4
// 004e4fc3: FCOMP double ptr [0x0062d9af]
//   XREF to: 0062d9af (READ)
// 004e4fc9: FNSTSW AX
// 004e4fcb: SAHF
// 004e4fcc: JNC 0x004e4eff
//   XREF to: 004e4eff (CONDITIONAL_JUMP)
// 004e4fd2: PUSH 0x1
// 004e4fd4: PUSH 0x3
// 004e4fd6: PUSH ESI
// 004e4fd7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e4fdc: ADD ESP,0xc
// 004e4fdf: JMP 0x004e4eff
//   XREF to: 004e4eff (UNCONDITIONAL_JUMP)
// 004e4fe4: PUSH 0x3dcccccd
//   Label: LAB_004e4fe4
// 004e4fe9: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004e4fee: ADD ESP,0x4
// 004e4ff1: TEST EAX,EAX
// 004e4ff3: JZ 0x004e5007
//   XREF to: 004e5007 (CONDITIONAL_JUMP)
// 004e4ff5: PUSH 0x1
// 004e4ff7: PUSH 0x4
// 004e4ff9: PUSH ESI
// 004e4ffa: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e4fff: ADD ESP,0xc
// 004e5002: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e5007: PUSH 0x1
//   Label: LAB_004e5007
// 004e5009: PUSH 0x2
// 004e500b: PUSH ESI
// 004e500c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e5011: ADD ESP,0xc
// 004e5014: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e5019: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004e5019
//   XREF to: Stack[0x8] (READ)
// 004e501f: PUSH EBX
// 004e5020: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004e5025: ADD ESP,0x8
// 004e5028: TEST EAX,EAX
// 004e502a: JZ 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e5030: PUSH 0x1
// 004e5032: PUSH 0x1
// 004e5034: PUSH ESI
// 004e5035: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e503a: ADD ESP,0xc
// 004e503d: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e5042: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_2
//   XREF to: Stack[0x8] (READ)
// 004e5048: MOV EAX,dword ptr [EBX + 0x154]
// 004e504e: PUSH EBX
// 004e504f: CALL dword ptr [EAX + 0x158]
// 004e5055: ADD ESP,0x8
// 004e5058: PUSH EBX
// 004e5059: CALL core_gargoyle.cpp_CGargoyle_FUN_004e48a0
//   XREF to: 004e48a0 (UNCONDITIONAL_CALL)
// 004e505e: ADD ESP,0x4
// 004e5061: LEA ESI,[EBX + 0x158]
// 004e5067: TEST EAX,EAX
// 004e5069: JZ 0x004e50b5
//   XREF to: 004e50b5 (CONDITIONAL_JUMP)
// 004e506b: MOV EDI,dword ptr [EBX + 0xbf10]
// 004e5071: LEA EAX,[EBX + 0x23ac]
// 004e5077: TEST EDI,EDI
// 004e5079: JNZ 0x004e5111
//   XREF to: 004e5111 (CONDITIONAL_JUMP)
// 004e507f: CMP dword ptr [EBX + 0xbe3c],0x0
// 004e5086: JNZ 0x004e517c
//   XREF to: 004e517c (CONDITIONAL_JUMP)
// 004e508c: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e5092: PUSH EBX
// 004e5093: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004e5098: ADD ESP,0x8
// 004e509b: TEST EAX,EAX
// 004e509d: JZ 0x004e516b
//   XREF to: 004e516b (CONDITIONAL_JUMP)
// 004e50a3: PUSH 0x1
// 004e50a5: PUSH 0x1
// 004e50a7: PUSH ESI
// 004e50a8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e50ad: ADD ESP,0xc
// 004e50b0: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e50b5: PUSH 0x3f800000
//   Label: LAB_004e50b5
// 004e50ba: PUSH 0x0
// 004e50bc: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e50c1: ADD ESP,0x8
// 004e50c4: PUSH 0x1
// 004e50c6: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e50c9: PUSH 0x5
// 004e50cb: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e50ce: PUSH ESI
// 004e50cf: FSTP float ptr [EBX + 0xbf14]
// 004e50d5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e50da: ADD ESP,0xc
// 004e50dd: MOV ECX,dword ptr [EBX + 0xbf00]
// 004e50e3: PUSH ECX
// 004e50e4: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004e50e9: ADD ESP,0x4
// 004e50ec: TEST EAX,EAX
// 004e50ee: JNZ 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e50f4: PUSH 0x62d990
//   XREF to: 0062d990 (DATA)
// 004e50f9: MOV EAX,dword ptr [EBX + 0x154]
// 004e50ff: PUSH EBX
// 004e5100: CALL dword ptr [EAX + 0x24]
// 004e5103: ADD ESP,0x8
// 004e5106: MOV dword ptr [EBX + 0xbf00],EAX
// 004e510c: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e5111: PUSH 0x3e32b8c2
//   Label: LAB_004e5111
// 004e5116: PUSH 0x3f000000
// 004e511b: MOV dword ptr [EAX + 0x8],0x0
// 004e5122: XOR EDX,EDX
// 004e5124: MOV ECX,dword ptr [EAX + 0x8]
// 004e5127: MOV dword ptr [EAX + 0x4],ECX
// 004e512a: MOV ECX,dword ptr [EAX + 0x4]
// 004e512d: MOV dword ptr [EAX],ECX
// 004e512f: LEA EAX,[EBP + 0x46]
//   XREF to: Stack[-0x44] (DATA)
// 004e5132: MOV dword ptr [EBP + 0x46],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 004e5135: MOV dword ptr [EBP + 0x4a],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 004e5138: MOV dword ptr [EBP + 0x4e],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 004e513b: PUSH EAX
// 004e513c: MOV EAX,dword ptr [EBX + 0xbef8]
// 004e5142: PUSH EAX
// 004e5143: MOV EDX,dword ptr [EAX + 0x154]
// 004e5149: CALL dword ptr [EDX + 0xbc]
// 004e514f: ADD ESP,0x4
// 004e5152: PUSH EAX
// 004e5153: MOV EAX,dword ptr [EBX + 0xbef8]
// 004e5159: ADD EAX,0x20
// 004e515c: PUSH EAX
// 004e515d: PUSH EBX
// 004e515e: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 004e5163: ADD ESP,0x18
// 004e5166: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e516b: PUSH 0x1
//   Label: LAB_004e516b
// 004e516d: PUSH EDI
// 004e516e: PUSH ESI
// 004e516f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e5174: ADD ESP,0xc
// 004e5177: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e517c: PUSH 0x3e32b8c2
//   Label: LAB_004e517c
// 004e5181: PUSH 0x3f000000
// 004e5186: MOV dword ptr [EAX + 0x8],EDI
// 004e5189: MOV EDX,dword ptr [0x0065ea2c]
//   XREF to: 0065ea2c (READ)
// 004e518f: MOV ECX,dword ptr [EAX + 0x8]
// 004e5192: MOV dword ptr [EAX + 0x4],ECX
// 004e5195: MOV ECX,dword ptr [EAX + 0x4]
// 004e5198: MOV dword ptr [EAX],ECX
// 004e519a: LEA EAX,[EBP + 0xa]
//   XREF to: Stack[-0x80] (DATA)
// 004e519d: MOV dword ptr [EBP + 0xa],EDI
//   XREF to: Stack[-0x80] (WRITE)
// 004e51a0: MOV dword ptr [EBP + 0xe],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 004e51a3: MOV dword ptr [EBP + 0x12],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 004e51a6: PUSH EAX
// 004e51a7: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e51ad: PUSH EAX
// 004e51ae: MOV dword ptr [EBP + 0x6a],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004e51b1: MOV EDX,dword ptr [EAX + 0x154]
// 004e51b7: CALL dword ptr [EDX + 0xbc]
// 004e51bd: ADD ESP,0x4
// 004e51c0: PUSH EAX
// 004e51c1: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e51c7: ADD EAX,0x20
// 004e51ca: PUSH EAX
// 004e51cb: PUSH EBX
// 004e51cc: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 004e51d1: ADD ESP,0x18
// 004e51d4: TEST EAX,EAX
// 004e51d6: JL 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e51dc: LEA EAX,[EBX + 0x20]
// 004e51df: MOV EDX,dword ptr [EBX + 0xbe3c]
// 004e51e5: FLD float ptr [EAX]
// 004e51e7: FSUB float ptr [EDX + 0x20]
// 004e51ea: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 004e51ed: FLD float ptr [EAX + 0x4]
// 004e51f0: FSUB float ptr [EDX + 0x24]
// 004e51f3: FLD float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 004e51f6: FXCH
// 004e51f8: FSTP float ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (WRITE)
// 004e51fb: FLD float ptr [EAX + 0x8]
// 004e51fe: FSUB float ptr [EDX + 0x28]
// 004e5201: FXCH
// 004e5203: FMUL float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 004e5206: FXCH
// 004e5208: FST float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (WRITE)
// 004e520b: FMUL float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 004e520e: FADDP
// 004e5210: FSQRT
// 004e5212: MOV dword ptr [EBP + 0x32],EDI
//   XREF to: Stack[-0x58] (WRITE)
// 004e5215: FSTP float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (WRITE)
// 004e5218: MOV EAX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 004e521b: FLD float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 004e521e: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004e5221: FCOMP float ptr [0x0065ea38]
//   XREF to: 0065ea38 (READ)
// 004e5227: FNSTSW AX
// 004e5229: SAHF
// 004e522a: JBE 0x004e524e
//   XREF to: 004e524e (CONDITIONAL_JUMP)
// 004e522c: PUSH 0x3dcccccd
// 004e5231: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004e5236: ADD ESP,0x4
// 004e5239: TEST EAX,EAX
// 004e523b: JZ 0x004e530d
//   XREF to: 004e530d (CONDITIONAL_JUMP)
// 004e5241: PUSH 0x1
// 004e5243: PUSH 0x4
// 004e5245: PUSH ESI
//   Label: LAB_004e5245
// 004e5246: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e524b: ADD ESP,0xc
// 004e524e: FLD float ptr [EBP + 0x66]
//   Label: LAB_004e524e
//   XREF to: Stack[-0x24] (READ)
// 004e5251: FCOMP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004e5254: FNSTSW AX
// 004e5256: SAHF
// 004e5257: JA 0x004e52e3
//   XREF to: 004e52e3 (CONDITIONAL_JUMP)
// 004e525d: FLD float ptr [EBX + 0xbe38]
// 004e5263: FLDZ
// 004e5265: FCOMPP
// 004e5267: FNSTSW AX
// 004e5269: SAHF
// 004e526a: JC 0x004e52e3
//   XREF to: 004e52e3 (CONDITIONAL_JUMP)
// 004e526c: MOV ESI,dword ptr [EBX + 0xbe3c]
// 004e5272: LEA EAX,[EBX + 0x20]
// 004e5275: FLD float ptr [ESI + 0x20]
// 004e5278: FSUB float ptr [EAX]
// 004e527a: FSTP float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (WRITE)
// 004e527d: FLD float ptr [ESI + 0x24]
// 004e5280: FSUB float ptr [EAX + 0x4]
// 004e5283: FSTP float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x4c] (WRITE)
// 004e5286: FLD float ptr [ESI + 0x28]
// 004e5289: FSUB float ptr [EAX + 0x8]
// 004e528c: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x50] (DATA)
// 004e528f: PUSH EAX
// 004e5290: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 004e5293: PUSH EAX
// 004e5294: FSTP float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (WRITE)
// 004e5297: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004e529c: FLD float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (READ)
// 004e529f: ADD ESP,0x8
// 004e52a2: FSUB float ptr [EBX + 0x34]
// 004e52a5: SUB ESP,0x4
// 004e52a8: FSTP float ptr [ESP]
// 004e52ab: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004e52b0: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e52b3: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e52b6: FABS
// 004e52b8: ADD ESP,0x4
// 004e52bb: FCOMP double ptr [0x0062d9af]
//   XREF to: 0062d9af (READ)
// 004e52c1: FNSTSW AX
// 004e52c3: SAHF
// 004e52c4: JNC 0x004e52e3
//   XREF to: 004e52e3 (CONDITIONAL_JUMP)
// 004e52c6: PUSH 0x1
// 004e52c8: PUSH 0x3
// 004e52ca: LEA EAX,[EBX + 0x158]
// 004e52d0: PUSH EAX
// 004e52d1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e52d6: ADD ESP,0xc
// 004e52d9: MOV dword ptr [EBX + 0xbe38],0x3f800000
// 004e52e3: FLD float ptr [EBP + 0x66]
//   Label: LAB_004e52e3
//   XREF to: Stack[-0x24] (READ)
// 004e52e6: FCOMP float ptr [EBX + 0xbe34]
// 004e52ec: FNSTSW AX
// 004e52ee: SAHF
// 004e52ef: JBE 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e52f5: PUSH 0x1
// 004e52f7: PUSH 0x0
// 004e52f9: LEA EAX,[EBX + 0x158]
// 004e52ff: PUSH EAX
// 004e5300: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e5305: ADD ESP,0xc
// 004e5308: JMP 0x004e4b2d
//   XREF to: 004e4b2d (UNCONDITIONAL_JUMP)
// 004e530d: PUSH 0x1
//   Label: LAB_004e530d
// 004e530f: PUSH 0x2
// 004e5311: JMP 0x004e5245
//   XREF to: 004e5245 (UNCONDITIONAL_JUMP)
// 004e5316: CMP EDI,0x5
//   Label: LAB_004e5316
// 004e5319: JA 0x004e4b2d
//   XREF to: 004e4b2d (CONDITIONAL_JUMP)
// 004e531f: JMP dword ptr [EDI*0x4 + 0x4e49e8]
//   Label: switchD
//   XREF to: 004e4e70 (COMPUTED_JUMP)
//   XREF to: 004e5042 (COMPUTED_JUMP)
//   XREF to: 004e4d60 (COMPUTED_JUMP)
//   XREF to: 004e4b2d (COMPUTED_JUMP)
//   XREF to: 004e4ddf (COMPUTED_JUMP)
//   XREF to: 004e49e8 (DATA)
// 004e5326: MOV dword ptr [EBX + 0xbf08],0xffff
//   Label: LAB_004e5326
// 004e5330: MOV dword ptr [EBX + 0xbf0c],0xffff
// 004e533a: MOV dword ptr [EBX + 0xbf04],0xffff
// 004e5344: JMP 0x004e4c77
//   XREF to: 004e4c77 (UNCONDITIONAL_JUMP)
// 004e5349: JLE 0x004e4cae
//   Label: LAB_004e5349
//   XREF to: 004e4cae (CONDITIONAL_JUMP)
// 004e534f: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004e5354: MOV ECX,dword ptr [EBX + 0x108]
// 004e535a: SUB ECX,EAX
// 004e535c: MOV ESI,dword ptr [EBX + 0xbf04]
// 004e5362: MOV dword ptr [EBX + 0x108],ECX
// 004e5368: CMP ECX,ESI
// 004e536a: JGE 0x004e4cae
//   XREF to: 004e4cae (CONDITIONAL_JUMP)
// 004e5370: MOV dword ptr [EBX + 0x108],ESI
// 004e5376: JMP 0x004e4cae
//   XREF to: 004e4cae (UNCONDITIONAL_JUMP)
// 004e537b: JLE 0x004e4ce5
//   Label: LAB_004e537b
//   XREF to: 004e4ce5 (CONDITIONAL_JUMP)
// 004e5381: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004e5386: MOV EDI,dword ptr [EBX + 0x10c]
// 004e538c: SUB EDI,EAX
// 004e538e: MOV EDX,dword ptr [EBX + 0xbf08]
// 004e5394: MOV dword ptr [EBX + 0x10c],EDI
// 004e539a: CMP EDI,EDX
// 004e539c: JGE 0x004e4ce5
//   XREF to: 004e4ce5 (CONDITIONAL_JUMP)
// 004e53a2: MOV dword ptr [EBX + 0x10c],EDX
// 004e53a8: JMP 0x004e4ce5
//   XREF to: 004e4ce5 (UNCONDITIONAL_JUMP)
// 004e53ad: JLE 0x004e4a96
//   Label: LAB_004e53ad
//   XREF to: 004e4a96 (CONDITIONAL_JUMP)
// 004e53b3: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004e53b8: MOV ECX,dword ptr [EBX + 0x110]
// 004e53be: SUB ECX,EAX
// 004e53c0: MOV ESI,dword ptr [EBX + 0xbf0c]
// 004e53c6: MOV dword ptr [EBX + 0x110],ECX
// 004e53cc: CMP ECX,ESI
// 004e53ce: JGE 0x004e4a96
//   XREF to: 004e4a96 (CONDITIONAL_JUMP)
// 004e53d4: MOV dword ptr [EBX + 0x110],ESI
// 004e53da: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 004e53dd: POP EBP
// 004e53de: POP EDI
// 004e53df: POP ESI
// 004e53e0: POP EBX
// 004e53e1: RET
