// Name: core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00
// Address: 004e4a00
// Address Range: [[004e4a00, 004e53e1]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00()

#include "nocturne.h"

/* Signature: byte actors_enemy_gargoyle.cpp_CGargoyle_unk6(CGargoyle* param_1, uint
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
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  SDamageInfo local_104;
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
  uint local_44;
  uint local_40;
  uint local_3c;
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
  fVar4 = (float)3.1415926535000001;
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
      (*(((in_stack_00000004->base_character).base_actor.vtable._ue)->_ue).field_4)();
      iVar5 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0();
      if (iVar5 == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        in_stack_00000004[1].base_character.base_actor.runtime_state = (int)local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,5,1);
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                          ((uint)in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].y
                          );
        if (iVar5 == 0) {
          fVar9 = (float)(*((in_stack_00000004->base_character).base_actor.vtable._ub)->playSound)
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
          if (local_1c < 3.0f) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_68,&local_a4);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_68.y -
                                  (in_stack_00000004->base_character).base_actor.orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,3,1);
            }
          }
          if (in_stack_00000004->guard_distance <= local_1c) break;
          pCVar1 = &(in_stack_00000004->base_character).model;
          if (10.0f <= local_1c) {
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
      (*(((in_stack_00000004->base_character).base_actor.vtable._ue)->_ue).field_4)();
      iVar5 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0();
      pCVar1 = &(in_stack_00000004->base_character).model;
      if (iVar5 == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        in_stack_00000004[1].base_character.base_actor.runtime_state = (int)local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,5,1);
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                          ((uint)in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].y
                          );
        if (iVar5 == 0) {
          fVar9 = (float)(*((in_stack_00000004->base_character).base_actor.vtable._ub)->playSound)
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
            local_78 = 3.0f;
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
              if (10.0f < local_30) {
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
                if (ABS(local_14) < (float)0.52359877558333301) {
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
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_104);
      local_104.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      local_104.attacker = (CDemonActor *)in_stack_00000004;
      local_104.wielder = (CDemonActor *)in_stack_00000004;
      local_14 = local_104.damage_amount;
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
      (*(((in_stack_00000004->base_character).base_actor.vtable._ue)->_ue).field_4)();
      iVar5 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0();
      if ((iVar5 != 0) &&
         (fVar9 = (float)in_stack_00000004[1].base_character.base_actor.runtime_state -
                  in_stack_00000008,
         in_stack_00000004[1].base_character.base_actor.runtime_state = (int)fVar9, fVar9 < 0.0)) {
        in_stack_00000004[1].base_character.base_actor.runtime_state = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                          ((uint)in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].y
                          );
        if (iVar5 == 0) {
          fVar9 = (float)(*((in_stack_00000004->base_character).base_actor.vtable._ub)->playSound)
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
         in_stack_00000008 * (float)32;
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
    *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
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
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
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
