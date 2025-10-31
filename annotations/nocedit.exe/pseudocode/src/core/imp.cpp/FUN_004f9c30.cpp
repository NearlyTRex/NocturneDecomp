// Name: core_imp.cpp_FUN_004f9c30
// Address: 004f9c30
// Address Range: [[004f9c30, 004fa8f3]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004f9c30()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_004f9c08 = 004fa327
//   TerminatedCString s_ghoul_eat_wav_0062f97d
//   TerminatedCString s_s_confused_while_walking_0062f98d
//   TerminatedCString s_imp_jump_wav_0062f9b7
//   TerminatedCString s_imp_laugh_wav_0062f9c5
//   TerminatedCString s_imp_laugh_wav_0062f9d4
//   undefined4 DAT_0062f9e6
//   undefined4 DAT_0062f9ee
//   undefined4 DAT_0062f9f6
//   undefined4 DAT_0062f9fe
//   undefined4 DAT_0062fa06
//   undefined4 DAT_0062fa0e
//   undefined4 DAT_0062fa16
//   undefined4 DAT_0062fa1e
//   undefined4 DAT_0062fa26
//   undefined4 DAT_006601dc
//   undefined4 DAT_006601e8
//   undefined4 DAT_006601ec
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 DAT_02db89f4
//   undefined4 DAT_02db89fc
//   undefined4 g_CImpClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   undefined4 DAT_0326525c
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_FUN_0040cd10
//   core_actor.cpp_FUN_0040cd70
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
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
//   core_gore.cpp_FUN_004edbb0
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_math.c_round_FUN_005fe6b0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_imp.cpp_FUN_004f9c30(undefined4 param_1, undefined4 param_2)
    */

void core_imp_cpp_FUN_004f9c30(void)

{
  char *pcVar1;
  char *pcVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  CCharacter *pCVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  CEnemy *pCVar10;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 uVar11;
  BADSPACEBASE *in_ESP;
  float10 fVar12;
  double dVar13;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  SCollisionInfo *in_stack_fffffe60;
  SCollisionInfo *in_stack_fffffe68;
  SDamageInfo local_164;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
  CVector3f local_ec;
  CVector3f local_e0;
  CVector3f local_d4 [2];
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  int local_98;
  int local_94;
  float local_90;
  undefined1 local_8c [12];
  CVector3f local_80;
  CVector3f local_74;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  int local_3c;
  float local_34;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar7 == 0) {
    return;
  }
  if ((*(int *)((in_stack_00000004->base_character).model.padding_0x0 +
               (int)in_stack_00000004[1].base_character.base_actor.orient.heading * 4 + 0x2140) == 0
      ) && (iVar7 = (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].hasCollision
                    )((CDemonActor *)in_stack_00000004,in_stack_fffffe60), iVar7 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  }
  pCVar6 = &in_stack_00000004->base_character;
  (pCVar6->model).padding_0x0[0x225c] = '\0';
  (pCVar6->model).padding_0x0[0x225d] = '\0';
  (pCVar6->model).padding_0x0[0x225e] = '\0';
  (pCVar6->model).padding_0x0[0x225f] = '\0';
  *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
       *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
  *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
       *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
  local_34 = in_stack_00000008 * in_stack_00000004->speed;
LAB_004f9c99:
  if (0.0 < local_34) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610();
    if (uVar8 < 0x29a) {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
      goto LAB_004f9c99;
    }
    if (uVar8 < 0x29b) {
      if (((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
          (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0x120))(), iVar7 == 0)) &&
         ((iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0x108))(), iVar7 == 0 &&
          (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0xfc))(), iVar7 != 0)))) {
        local_48 = DAT_006601dc;
        local_50 = 0;
        local_4c = 0;
        core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
        fVar3 = local_68 - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
        fVar5 = local_60 - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
        bVar4 = (float)_DAT_0062fa1e < SQRT(fVar5 * fVar5 + fVar3 * fVar3);
        if ((ABS(local_64 - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x24)) <=
             (float)_DAT_0062fa26) &&
           (((bVar4 || (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4)
                                                     + 0x154) + 0x100))(), iVar7 != 0)) && (!bVar4))
           )) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          goto LAB_004f9c99;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      goto LAB_004f9c99;
    }
    if (uVar8 == 0x29b) {
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
        core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
        local_164.attacker = (CDemonActor *)in_stack_00000004;
        local_164.wielder = (CDemonActor *)in_stack_00000004;
        local_14 = local_164.damage_amount;
        dVar13 = (double)(**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) +
                                              0x154) + 0x11c))();
        fVar12 = (float10)local_164.damage_amount * (float10)_DAT_0062fa06 * (float10)_DAT_0062fa0e;
        dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
        local_3c = (int)ROUND(fVar12);
        core_gore_cpp_FUN_004edbb0
                  (local_8c,(int)((ulonglong)dVar13 >> 0x20),in_stack_00000004,local_3c,g_CGorePtr,
                   local_8c,0);
        iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                            0x120))();
        if (iVar7 < 1) {
          (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->playSound)
                    ((CDemonActor *)in_stack_00000004,"ghoul-eat-?.wav");
        }
        else {
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
    }
    goto LAB_004f9c99;
  }
  fVar3 = in_stack_00000004->speed;
  fVar5 = (float)_DAT_0062f9e6;
  *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar3;
  iVar7 = core_motion_cpp_CMotionController_FUN_0052dab0();
  iVar7 = *(int *)(iVar7 + 0x24);
  local_24 = iVar7;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar9 == 0) {
    switch(iVar7) {
    case 0:
      iVar7 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.metadata.vtable[1].
                hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffe68);
      if (iVar7 == 0) {
        (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].
          getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
        iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
        if (iVar7 == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
        }
        else if (*(int *)(iVar7 + 0x2598) == 0) {
          local_80.x = *(float *)(iVar7 + 0x20) -
                       (in_stack_00000004->base_character).base_actor.location.position.x;
          local_80.y = *(float *)(iVar7 + 0x24) -
                       (in_stack_00000004->base_character).base_actor.location.position.y;
          local_80.z = *(float *)(iVar7 + 0x28) -
                       (in_stack_00000004->base_character).base_actor.location.position.z;
          local_20 = SQRT(local_80.z * local_80.z +
                          local_80.x * local_80.x + local_80.y * local_80.y);
          local_18 = local_20;
          if (local_20 < DAT_006601dc) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_e0,&local_80);
            local_14 = core_actor_cpp_FUN_0040cd70
                                 (local_e0.y -
                                  (in_stack_00000004->base_character).base_actor.orient.bank);
            if (ABS(local_14) < (float)_DAT_0062f9fe) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            }
          }
          if (local_20 < in_stack_00000004->guard_distance) {
            if (_DAT_006601e8 <= local_20) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
      }
      else {
        iVar7 = core_actor_cpp_FUN_0040cd10();
        if (iVar7 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
      }
      break;
    case 1:
    case 2:
      (*(in_stack_00000004->base_character).base_actor.metadata.vtable[1].getAllowedMeleeAttackTypes
      )((CDemonActor *)in_stack_00000004);
      fVar3 = DAT_006601dc;
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
      }
      else {
        iVar7 = *(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x2598);
        if (iVar7 == 0) {
          local_28 = DAT_006601dc;
          pCVar6 = &in_stack_00000004->base_character;
          (pCVar6->model).padding_0x0[0x225c] = '\0';
          (pCVar6->model).padding_0x0[0x225d] = '\0';
          (pCVar6->model).padding_0x0[0x225e] = '\0';
          (pCVar6->model).padding_0x0[0x225f] = '\0';
          *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
               *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
          *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
               *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
          local_90 = fVar3;
          local_98 = iVar7;
          local_94 = iVar7;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (&in_stack_00000004->base_character);
          if (-1 < iVar7) {
            local_a4 = (in_stack_00000004->base_character).base_actor.location.position.x -
                       *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
            local_9c = (in_stack_00000004->base_character).base_actor.location.position.z -
                       *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((_DAT_006601e8 < local_2c) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            }
            if (((local_1c < _DAT_006601ec) &&
                (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) +
                                              0x154) + 0x108))(), iVar7 == 0)) &&
               (*(int *)((in_stack_00000004->base_character).model.padding_0x0 +
                        (int)in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].x * 4
                        + 0x2140) != 0)) {
              iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
              local_74.x = *(float *)(iVar7 + 0x20) -
                           (in_stack_00000004->base_character).base_actor.location.position.x;
              local_74.y = *(float *)(iVar7 + 0x24) -
                           (in_stack_00000004->base_character).base_actor.location.position.y;
              local_74.z = *(float *)(iVar7 + 0x28) -
                           (in_stack_00000004->base_character).base_actor.location.position.z;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_ec,&local_74)
              ;
              local_14 = core_actor_cpp_FUN_0040cd70
                                   (local_ec.y -
                                    (in_stack_00000004->base_character).base_actor.orient.bank);
              if ((ABS(local_14) < (float)_DAT_0062f9fe) &&
                 (iVar7 = core_actor_cpp_FUN_0040cd10(), iVar7 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
                iVar7 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
                if (iVar7 == 0) {
                  uVar11 = (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->
                             playSound)((CDemonActor *)in_stack_00000004,"imp-jump?.wav");
                  *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) =
                       uVar11;
                }
              }
            }
            if ((local_1c <= local_28) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
              iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
              local_d4[0].x =
                   *(float *)(iVar7 + 0x20) -
                   (in_stack_00000004->base_character).base_actor.location.position.x;
              local_d4[0].y =
                   *(float *)(iVar7 + 0x24) -
                   (in_stack_00000004->base_character).base_actor.location.position.y;
              local_d4[0].z =
                   *(float *)(iVar7 + 0x28) -
                   (in_stack_00000004->base_character).base_actor.location.position.z;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_11c,local_d4)
              ;
              local_14 = core_actor_cpp_FUN_0040cd70
                                   (local_11c.y -
                                    (in_stack_00000004->base_character).base_actor.orient.bank);
              if (ABS(local_14) < (float)_DAT_0062f9fe) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
                in_stack_00000004->field6_0xbe38[0] = '\0';
                in_stack_00000004->field6_0xbe38[1] = '\0';
                in_stack_00000004->field6_0xbe38[2] = -0x80;
                in_stack_00000004->field6_0xbe38[3] = '@';
              }
            }
            if (in_stack_00000004->guard_distance < local_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            }
            fVar3 = *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) -
                    in_stack_00000008;
            *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = fVar3;
            if (fVar3 < 0.0) {
              pCVar6 = &in_stack_00000004[1].base_character;
              (pCVar6->base_actor).actor_name[0x10] = '\0';
              (pCVar6->base_actor).actor_name[0x11] = '\0';
              (pCVar6->base_actor).actor_name[0x12] = '\0';
              (pCVar6->base_actor).actor_name[0x13] = '\0';
              iVar7 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
              if ((iVar7 == 0) &&
                 (iVar7 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar7 == 0)) {
                uVar11 = (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->
                           playSound)((CDemonActor *)in_stack_00000004,"imp-laugh?.wav");
                *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) =
                     uVar11;
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
                *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) =
                     local_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
      }
      break;
    case 3:
      fVar3 = *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) -
              in_stack_00000008 * _DAT_0062f9f6;
      *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = fVar3;
      if (fVar3 < 0.0) {
        pCVar6 = &in_stack_00000004[1].base_character;
        (pCVar6->base_actor).actor_name[0x10] = '\0';
        (pCVar6->base_actor).actor_name[0x11] = '\0';
        (pCVar6->base_actor).actor_name[0x12] = '\0';
        (pCVar6->base_actor).actor_name[0x13] = '\0';
        iVar7 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
        if ((iVar7 == 0) && (iVar7 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar7 == 0)
           ) {
          uVar11 = (*((in_stack_00000004->base_character).base_actor.metadata.vtable)->playSound)
                             ((CDemonActor *)in_stack_00000004,"imp-laugh?.wav");
          *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = uVar11;
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      core_xform_cpp_transformVector3x4_FUN_005f4dc0
                (&local_b0,&g_ZeroVector,
                 (CMatrix3x4f *)
                 ((in_stack_00000004->base_character).model.padding_0x0 +
                 DAT_02db89fc * 0x30 + 0xe80));
      core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
      iVar7 = core_enemy_cpp_FUN_004a9880();
      if (iVar7 != 0) {
        iVar9 = 0;
        iVar7 = 0;
        while (iVar7 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c)) {
          pCVar10 = (CEnemy *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar9 + 8000),
                               g_CImpClassInfo.name_hash);
          if (((pCVar10 == (CEnemy *)0x0) || (pCVar10 == in_stack_00000004)) ||
             (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != *(int *)(pCVar10->field6_0xbe38 + 4)
             )) {
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 4;
          }
        }
      }
      break;
    case 7:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
        core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)in_stack_00000004);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      break;
    case 9:
      if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
         (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0x120))(), iVar7 == 0)) {
        pCVar10 = *(CEnemy **)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x2598);
        if (in_stack_00000004 == pCVar10) {
          fVar3 = (float)_DAT_0062f9ee;
          iVar7 = *(int *)(pCVar10->field6_0xbe38 + 4);
          (pCVar10->base_character).base_actor.location.position.x =
               *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20) -
               (pCVar10->base_character).base_actor.orient_matrix.m[0].z * fVar3;
          (pCVar10->base_character).base_actor.location.position.z =
               *(float *)(iVar7 + 0x28) -
               (pCVar10->base_character).base_actor.orient_matrix.m[2].z * fVar3;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
  }
  else {
    uVar8 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
    if (((uVar8 < 2) || (uVar8 < 3)) || (uVar8 != 3)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
    else {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
    pCVar6 = &in_stack_00000004->base_character;
    (pCVar6->model).padding_0x0[0x225c] = '\0';
    (pCVar6->model).padding_0x0[0x225d] = '\0';
    (pCVar6->model).padding_0x0[0x225e] = '\0';
    (pCVar6->model).padding_0x0[0x225f] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2254) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
  }
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if ((iVar7 != 0) && (local_24 != 9)) {
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)_DAT_0062fa16;
    local_bc = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_b8 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar1 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_b4 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pcVar2 = (in_stack_00000004->base_character).model.padding_0x0 + 0x2254;
    local_128 = local_bc + *(float *)pcVar1;
    local_124 = local_b8 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_120 = local_b4 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_110 = local_128 + *(float *)pcVar2;
    local_10c = local_124 +
                *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
    local_108 = local_120 +
                *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar1 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    pCVar6 = &in_stack_00000004->base_character;
    (pCVar6->model).padding_0x0[0x225c] = '\0';
    (pCVar6->model).padding_0x0[0x225d] = '\0';
    (pCVar6->model).padding_0x0[0x225e] = '\0';
    (pCVar6->model).padding_0x0[0x225f] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->base_character).model.padding_0x0 + 0x225c);
    *(float *)pcVar2 = *(float *)((in_stack_00000004->base_character).model.padding_0x0 + 0x2258);
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}


// Assembly code:
// 004f9c30: PUSH EBX
//   Label: core_imp.cpp_FUN_004f9c30
// 004f9c31: PUSH ESI
// 004f9c32: PUSH EDI
// 004f9c33: PUSH EBP
// 004f9c34: MOV EBP,ESP
// 004f9c36: SUB ESP,0x190
// 004f9c3c: SUB EBP,0x7a
// 004f9c3f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 004f9c45: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f9c4b: PUSH EBX
// 004f9c4c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004f9c51: ADD ESP,0x8
// 004f9c54: TEST EAX,EAX
// 004f9c56: JZ 0x004fa125
//   XREF to: 004fa125 (CONDITIONAL_JUMP)
// 004f9c5c: MOV EAX,dword ptr [EBX + 0xbeec]
// 004f9c62: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 004f9c6a: JZ 0x004f9ccf
//   XREF to: 004f9ccf (CONDITIONAL_JUMP)
// 004f9c6c: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_004f9c6c
// 004f9c72: MOV dword ptr [EAX + 0x8],0x0
// 004f9c79: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f9c7f: MOV EDX,dword ptr [EAX + 0x8]
// 004f9c82: MOV dword ptr [EAX + 0x4],EDX
// 004f9c85: MOV EDX,dword ptr [EAX + 0x4]
// 004f9c88: MOV dword ptr [EAX],EDX
// 004f9c8a: FMUL float ptr [EBX + 0xbe24]
// 004f9c90: LEA EDI,[EBX + 0x158]
// 004f9c96: FSTP float ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (WRITE)
// 004f9c99: FLD float ptr [EBP + 0x56]
//   Label: LAB_004f9c99
//   XREF to: Stack[-0x34] (READ)
// 004f9c9c: FLDZ
// 004f9c9e: FCOMPP
// 004f9ca0: FNSTSW AX
// 004f9ca2: SAHF
// 004f9ca3: JNC 0x004f9f5a
//   XREF to: 004f9f5a (CONDITIONAL_JUMP)
// 004f9ca9: LEA EAX,[EBP + 0x56]
//   XREF to: Stack[-0x34] (DATA)
// 004f9cac: PUSH EAX
// 004f9cad: PUSH EDI
// 004f9cae: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004f9cb3: ADD ESP,0x8
// 004f9cb6: MOV ESI,EAX
// 004f9cb8: CMP EAX,0x29a
// 004f9cbd: JNC 0x004f9f3a
//   XREF to: 004f9f3a (CONDITIONAL_JUMP)
// 004f9cc3: PUSH ESI
// 004f9cc4: PUSH EBX
// 004f9cc5: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004f9cca: ADD ESP,0x8
// 004f9ccd: JMP 0x004f9c99
//   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)
// 004f9ccf: PUSH EBX
//   Label: LAB_004f9ccf
// 004f9cd0: MOV EAX,dword ptr [EBX + 0x154]
// 004f9cd6: CALL dword ptr [EAX + 0x120]
// 004f9cdc: ADD ESP,0x4
// 004f9cdf: TEST EAX,EAX
// 004f9ce1: JNZ 0x004f9c6c
//   XREF to: 004f9c6c (CONDITIONAL_JUMP)
// 004f9ce3: PUSH 0x1
// 004f9ce5: PUSH 0x6
// 004f9ce7: LEA EAX,[EBX + 0x158]
// 004f9ced: PUSH EAX
// 004f9cee: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f9cf3: ADD ESP,0xc
// 004f9cf6: JMP 0x004f9c6c
//   XREF to: 004f9c6c (UNCONDITIONAL_JUMP)
// 004f9cfb: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004f9cfb
// 004f9d01: MOV ESI,0x1
// 004f9d06: TEST EAX,EAX
// 004f9d08: JNZ 0x004f9d19
//   XREF to: 004f9d19 (CONDITIONAL_JUMP)
// 004f9d0a: PUSH 0x1
//   Label: LAB_004f9d0a
// 004f9d0c: PUSH 0x0
// 004f9d0e: PUSH EDI
// 004f9d0f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f9d14: ADD ESP,0xc
// 004f9d17: JMP 0x004f9c99
//   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)
// 004f9d19: TEST ESI,ESI
//   Label: LAB_004f9d19
// 004f9d1b: JZ 0x004f9d31
//   XREF to: 004f9d31 (CONDITIONAL_JUMP)
// 004f9d1d: PUSH EAX
// 004f9d1e: MOV EDX,dword ptr [EAX + 0x154]
// 004f9d24: CALL dword ptr [EDX + 0x120]
// 004f9d2a: ADD ESP,0x4
// 004f9d2d: TEST EAX,EAX
// 004f9d2f: JNZ 0x004f9d0a
//   XREF to: 004f9d0a (CONDITIONAL_JUMP)
// 004f9d31: TEST ESI,ESI
//   Label: LAB_004f9d31
// 004f9d33: JZ 0x004f9d4f
//   XREF to: 004f9d4f (CONDITIONAL_JUMP)
// 004f9d35: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f9d3b: PUSH EAX
// 004f9d3c: MOV EDX,dword ptr [EAX + 0x154]
// 004f9d42: CALL dword ptr [EDX + 0x108]
// 004f9d48: ADD ESP,0x4
// 004f9d4b: TEST EAX,EAX
// 004f9d4d: JNZ 0x004f9d0a
//   XREF to: 004f9d0a (CONDITIONAL_JUMP)
// 004f9d4f: TEST ESI,ESI
//   Label: LAB_004f9d4f
// 004f9d51: JZ 0x004f9d70
//   XREF to: 004f9d70 (CONDITIONAL_JUMP)
// 004f9d53: PUSH 0x0
// 004f9d55: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f9d5b: PUSH EBX
// 004f9d5c: MOV EDX,dword ptr [EAX + 0x154]
// 004f9d62: PUSH EAX
// 004f9d63: CALL dword ptr [EDX + 0xfc]
// 004f9d69: ADD ESP,0xc
// 004f9d6c: TEST EAX,EAX
// 004f9d6e: JZ 0x004f9d0a
//   XREF to: 004f9d0a (CONDITIONAL_JUMP)
// 004f9d70: TEST ESI,ESI
//   Label: LAB_004f9d70
// 004f9d72: JZ 0x004f9dd9
//   XREF to: 004f9dd9 (CONDITIONAL_JUMP)
// 004f9d74: MOV EAX,[0x006601dc]
//   XREF to: 006601dc (READ)
// 004f9d79: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004f9d7c: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x50] (DATA)
// 004f9d7f: PUSH EAX
// 004f9d80: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 004f9d83: PUSH EAX
// 004f9d84: XOR EDX,EDX
// 004f9d86: PUSH EBX
// 004f9d87: MOV dword ptr [EBP + 0x3a],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 004f9d8a: MOV dword ptr [EBP + 0x3e],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 004f9d8d: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f9d92: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f9d98: FLD float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (READ)
// 004f9d9b: FSUB float ptr [EAX + 0x20]
// 004f9d9e: FMUL ST0
// 004f9da0: FLD float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 004f9da3: FSUB float ptr [EAX + 0x28]
// 004f9da6: FMUL ST0
// 004f9da8: FADDP
// 004f9daa: FSQRT
// 004f9dac: ADD ESP,0xc
// 004f9daf: FCOMP double ptr [0x0062fa1e]
//   XREF to: 0062fa1e (READ)
// 004f9db5: FNSTSW AX
// 004f9db7: SAHF
// 004f9db8: JBE 0x004f9dbc
//   XREF to: 004f9dbc (CONDITIONAL_JUMP)
// 004f9dba: XOR ESI,ESI
// 004f9dbc: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004f9dbc
// 004f9dc2: FLD float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 004f9dc5: FSUB float ptr [EAX + 0x24]
// 004f9dc8: FABS
// 004f9dca: FCOMP double ptr [0x0062fa26]
//   XREF to: 0062fa26 (READ)
// 004f9dd0: FNSTSW AX
// 004f9dd2: SAHF
// 004f9dd3: JA 0x004f9d0a
//   XREF to: 004f9d0a (CONDITIONAL_JUMP)
// 004f9dd9: TEST ESI,ESI
//   Label: LAB_004f9dd9
// 004f9ddb: JZ 0x004f9dfe
//   XREF to: 004f9dfe (CONDITIONAL_JUMP)
// 004f9ddd: PUSH 0x0
// 004f9ddf: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f9de5: PUSH EBX
// 004f9de6: MOV EDX,dword ptr [EAX + 0x154]
// 004f9dec: PUSH EAX
// 004f9ded: CALL dword ptr [EDX + 0x100]
// 004f9df3: ADD ESP,0xc
// 004f9df6: TEST EAX,EAX
// 004f9df8: JZ 0x004f9d0a
//   XREF to: 004f9d0a (CONDITIONAL_JUMP)
// 004f9dfe: TEST ESI,ESI
//   Label: LAB_004f9dfe
// 004f9e00: JZ 0x004f9d0a
//   XREF to: 004f9d0a (CONDITIONAL_JUMP)
// 004f9e06: PUSH 0x1
// 004f9e08: PUSH 0x9
// 004f9e0a: PUSH EDI
// 004f9e0b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f9e10: ADD ESP,0xc
// 004f9e13: JMP 0x004f9c99
//   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)
// 004f9e18: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004f9e18
// 004f9e1e: TEST EAX,EAX
// 004f9e20: JNZ 0x004f9e33
//   XREF to: 004f9e33 (CONDITIONAL_JUMP)
// 004f9e22: PUSH 0x1
// 004f9e24: PUSH EAX
// 004f9e25: PUSH EDI
// 004f9e26: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f9e2b: ADD ESP,0xc
// 004f9e2e: JMP 0x004f9c99
//   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)
// 004f9e33: MOV EDX,dword ptr [0x02db89f4]
//   Label: LAB_004f9e33
//   XREF to: 02db89f4 (READ)
// 004f9e39: PUSH EDX
// 004f9e3a: LEA EAX,[EBP + -0x7a]
//   XREF to: Stack[-0x104] (DATA)
// 004f9e3d: PUSH EAX
// 004f9e3e: PUSH EDI
// 004f9e3f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004f9e44: ADD ESP,0xc
// 004f9e47: PUSH EAX
// 004f9e48: LEA EAX,[EBP + -0x2]
//   XREF to: Stack[-0x8c] (DATA)
// 004f9e4b: PUSH EAX
// 004f9e4c: PUSH EBX
// 004f9e4d: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f9e52: ADD ESP,0xc
// 004f9e55: LEA EAX,[EBP + 0xffffff26]
//   XREF to: Stack[-0x164] (DATA)
// 004f9e5b: PUSH EAX
// 004f9e5c: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004f9e61: ADD ESP,0x4
// 004f9e64: PUSH 0x41200000
// 004f9e69: PUSH 0x40a00000
// 004f9e6e: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004f9e73: LEA EDX,[EBP + 0xffffff26]
//   XREF to: Stack[-0x164] (DATA)
// 004f9e79: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f9e7c: ADD ESP,0x8
// 004f9e7f: MOV dword ptr [EBP + 0xffffff5a],EBX
//   XREF to: Stack[-0x130] (WRITE)
// 004f9e85: MOV dword ptr [EBP + 0xffffff5e],EBX
//   XREF to: Stack[-0x12c] (WRITE)
// 004f9e8b: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004f9e8e: PUSH EDX
// 004f9e8f: FSTP float ptr [EBP + 0xffffff2a]
//   XREF to: Stack[-0x160] (WRITE)
// 004f9e95: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f9e9b: PUSH EAX
// 004f9e9c: MOV ESI,dword ptr [EAX + 0x154]
// 004f9ea2: CALL dword ptr [ESI + 0x11c]
// 004f9ea8: FLD float ptr [EBP + 0xffffff2a]
//   XREF to: Stack[-0x160] (READ)
// 004f9eae: FMUL double ptr [0x0062fa06]
//   XREF to: 0062fa06 (READ)
// 004f9eb4: ADD ESP,0x8
// 004f9eb7: FMUL double ptr [0x0062fa0e]
//   XREF to: 0062fa0e (READ)
// 004f9ebd: PUSH 0x0
// 004f9ebf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004f9ec4: FISTP dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (WRITE)
// 004f9ec7: MOV ECX,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (READ)
// 004f9eca: PUSH ECX
// 004f9ecb: PUSH 0x0
// 004f9ecd: LEA EAX,[EBP + -0x2]
//   XREF to: Stack[-0x8c] (DATA)
// 004f9ed0: PUSH EAX
// 004f9ed1: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 004f9ed7: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 004f9ed8: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 004f9edd: ADD ESP,0x14
// 004f9ee0: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f9ee6: PUSH EAX
// 004f9ee7: MOV ESI,dword ptr [EAX + 0x154]
// 004f9eed: CALL dword ptr [ESI + 0x120]
// 004f9ef3: ADD ESP,0x4
// 004f9ef6: TEST EAX,EAX
// 004f9ef8: JLE 0x004f9f22
//   XREF to: 004f9f22 (CONDITIONAL_JUMP)
// 004f9efa: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004f9f00: PUSH EAX
// 004f9f01: MOV EDX,dword ptr [EAX + 0x154]
// 004f9f07: CALL dword ptr [EDX + 0x104]
// 004f9f0d: ADD ESP,0x4
// 004f9f10: PUSH 0x1
// 004f9f12: PUSH 0x0
// 004f9f14: PUSH EDI
// 004f9f15: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f9f1a: ADD ESP,0xc
// 004f9f1d: JMP 0x004f9c99
//   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)
// 004f9f22: MOV ESI,0x62f97d
//   Label: LAB_004f9f22
//   XREF to: 0062f97d (DATA)
// 004f9f27: PUSH ESI
//   XREF to: 0062f97d (DATA)
// 004f9f28: MOV EDX,dword ptr [EBX + 0x154]
// 004f9f2e: PUSH EBX
// 004f9f2f: CALL dword ptr [EDX + 0x24]
// 004f9f32: ADD ESP,0x8
// 004f9f35: JMP 0x004f9c99
//   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)
// 004f9f3a: JBE 0x004f9cfb
//   Label: LAB_004f9f3a
//   XREF to: 004f9cfb (CONDITIONAL_JUMP)
// 004f9f40: CMP EAX,0x29b
// 004f9f45: JZ 0x004f9e18
//   XREF to: 004f9e18 (CONDITIONAL_JUMP)
// 004f9f4b: PUSH ESI
// 004f9f4c: PUSH EBX
// 004f9f4d: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004f9f52: ADD ESP,0x8
// 004f9f55: JMP 0x004f9c99
//   XREF to: 004f9c99 (UNCONDITIONAL_JUMP)
// 004f9f5a: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_004f9f5a
// 004f9f60: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f9f66: FMUL double ptr [0x0062f9e6]
//   XREF to: 0062f9e6 (READ)
// 004f9f6c: FMULP
// 004f9f6e: FLD float ptr [EBX + 0x23b4]
// 004f9f74: LEA ESI,[EBX + 0x158]
// 004f9f7a: FSTP float ptr [EBX + 0x2434]
// 004f9f80: PUSH ESI
// 004f9f81: FSTP float ptr [EBX + 0x2438]
// 004f9f87: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f9f8c: ADD ESP,0x4
// 004f9f8f: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004f9f95: MOV EDI,dword ptr [EAX + 0x24]
// 004f9f98: PUSH EBX
// 004f9f99: MOV dword ptr [EBP + 0x66],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 004f9f9c: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004f9fa1: ADD ESP,0x8
// 004f9fa4: TEST EAX,EAX
// 004f9fa6: JZ 0x004fa8e4
//   XREF to: 004fa8e4 (CONDITIONAL_JUMP)
// 004f9fac: MOV EAX,dword ptr [EBX + 0x25b0]
// 004f9fb2: CMP EAX,0x2
// 004f9fb5: JNC 0x004fa158
//   XREF to: 004fa158 (CONDITIONAL_JUMP)
// 004f9fbb: CMP EAX,0x1
// 004f9fbe: JNZ 0x004fa163
//   XREF to: 004fa163 (CONDITIONAL_JUMP)
// 004f9fc4: PUSH 0x1
//   Label: LAB_004f9fc4
// 004f9fc6: PUSH 0x1
// 004f9fc8: LEA EAX,[EBX + 0x158]
//   Label: LAB_004f9fc8
// 004f9fce: PUSH EAX
// 004f9fcf: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f9fd4: ADD ESP,0xc
//   Label: LAB_004f9fd4
// 004f9fd7: LEA EAX,[EBX + 0x23ac]
// 004f9fdd: MOV dword ptr [EAX + 0x8],0x0
// 004f9fe4: MOV EDX,dword ptr [EAX + 0x8]
// 004f9fe7: MOV dword ptr [EAX + 0x4],EDX
// 004f9fea: MOV EDX,dword ptr [EAX + 0x4]
// 004f9fed: MOV dword ptr [EAX],EDX
// 004f9fef: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_8
// 004f9ff5: FLDZ
// 004f9ff7: FCOMPP
// 004f9ff9: FNSTSW AX
// 004f9ffb: SAHF
// 004f9ffc: JNC 0x004fa010
//   XREF to: 004fa010 (CONDITIONAL_JUMP)
// 004f9ffe: FLD float ptr [EBX + 0xbe38]
// 004fa004: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004fa00a: FSTP float ptr [EBX + 0xbe38]
// 004fa010: PUSH EBX
//   Label: LAB_004fa010
// 004fa011: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 004fa016: ADD ESP,0x4
// 004fa019: TEST EAX,EAX
// 004fa01b: JZ 0x004fa0fe
//   XREF to: 004fa0fe (CONDITIONAL_JUMP)
// 004fa021: CMP dword ptr [EBP + 0x66],0x9
//   XREF to: Stack[-0x24] (READ)
// 004fa025: JZ 0x004fa0fe
//   XREF to: 004fa0fe (CONDITIONAL_JUMP)
// 004fa02b: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004fa031: FLD ST0
// 004fa033: FMUL double ptr [0x0062fa16]
//   XREF to: 0062fa16 (READ)
// 004fa039: FLD float ptr [EBX + 0x242c]
// 004fa03f: FXCH
// 004fa041: FSUBR ST0,ST1
// 004fa043: LEA ESI,[EBX + 0x2428]
// 004fa049: FSTP ST1
// 004fa04b: FSTP float ptr [EBX + 0x242c]
// 004fa051: FLD float ptr [ESI]
// 004fa053: FMUL ST1
// 004fa055: FSTP float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (WRITE)
// 004fa058: FLD float ptr [ESI + 0x4]
// 004fa05b: FMUL ST1
// 004fa05d: LEA EDX,[EBX + 0x241c]
// 004fa063: FSTP float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xb8] (WRITE)
// 004fa066: FMUL float ptr [ESI + 0x8]
// 004fa069: LEA EAX,[EBX + 0x23ac]
// 004fa06f: FLD float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (READ)
// 004fa072: FXCH
// 004fa074: FSTP float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (WRITE)
// 004fa077: FADD float ptr [EDX]
// 004fa079: FLD float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xb8] (READ)
// 004fa07c: FXCH
// 004fa07e: FSTP float ptr [EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (WRITE)
// 004fa084: FADD float ptr [EDX + 0x4]
// 004fa087: FLD float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (READ)
// 004fa08a: FXCH
// 004fa08c: FSTP float ptr [EBP + 0xffffff66]
//   XREF to: Stack[-0x124] (WRITE)
// 004fa092: FADD float ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 004fa095: FLD float ptr [EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (READ)
// 004fa09b: FXCH
// 004fa09d: FSTP float ptr [EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (WRITE)
// 004fa0a3: FADD float ptr [EAX]
// 004fa0a5: FLD float ptr [EBP + 0xffffff66]
//   XREF to: Stack[-0x124] (READ)
// 004fa0ab: FXCH
// 004fa0ad: FSTP float ptr [EBP + 0xffffff7a]
//   XREF to: Stack[-0x110] (WRITE)
// 004fa0b3: FADD float ptr [EAX + 0x4]
// 004fa0b6: FLD float ptr [EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (READ)
// 004fa0bc: FXCH
// 004fa0be: FSTP float ptr [EBP + 0xffffff7e]
//   XREF to: Stack[-0x10c] (WRITE)
// 004fa0c4: FADD float ptr [EAX + 0x8]
// 004fa0c7: FSTP float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x108] (WRITE)
// 004fa0ca: MOV dword ptr [EDX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 004fa0d1: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 004fa0d4: MOV dword ptr [EDX + 0x4],ECX
// 004fa0d7: MOV ECX,dword ptr [EDX + 0x4]
// 004fa0da: MOV dword ptr [EDX],ECX
// 004fa0dc: MOV dword ptr [EAX + 0x8],0x0
// 004fa0e3: MOV EDX,dword ptr [EAX + 0x8]
// 004fa0e6: MOV dword ptr [EAX + 0x4],EDX
// 004fa0e9: MOV EDX,dword ptr [EAX + 0x4]
// 004fa0ec: MOV dword ptr [EAX],EDX
// 004fa0ee: LEA EAX,[EBP + 0xffffff7a]
//   XREF to: Stack[-0x110] (DATA)
// 004fa0f4: PUSH EAX
// 004fa0f5: PUSH EBX
// 004fa0f6: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004fa0fb: ADD ESP,0x8
// 004fa0fe: PUSH EBX
//   Label: LAB_004fa0fe
// 004fa0ff: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004fa104: ADD ESP,0x4
// 004fa107: LEA EAX,[EBX + 0x158]
// 004fa10d: PUSH EAX
// 004fa10e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004fa113: ADD ESP,0x4
// 004fa116: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004fa11c: PUSH EBX
// 004fa11d: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004fa122: ADD ESP,0x8
// 004fa125: LEA ESP,[EBP + 0x7a]
//   Label: LAB_004fa125
//   XREF to: Stack[-0x10] (DATA)
// 004fa128: POP EBP
// 004fa129: POP EDI
// 004fa12a: POP ESI
// 004fa12b: POP EBX
// 004fa12c: RET
// 004fa12d: PUSH 0x1
//   Label: LAB_004fa12d
// 004fa12f: PUSH 0x0
// 004fa131: LEA EAX,[EBX + 0x158]
// 004fa137: PUSH EAX
// 004fa138: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa13d: ADD ESP,0xc
// 004fa140: PUSH EBX
// 004fa141: MOV EAX,0x62f98d
//   XREF to: 0062f98d (DATA)
// 004fa146: PUSH EAX
//   XREF to: 0062f98d (DATA)
// 004fa147: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004fa14d: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 004fa14e: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004fa153: JMP 0x004f9fd4
//   XREF to: 004f9fd4 (UNCONDITIONAL_JUMP)
// 004fa158: JBE 0x004f9fc4
//   Label: LAB_004fa158
//   XREF to: 004f9fc4 (CONDITIONAL_JUMP)
// 004fa15e: CMP EAX,0x3
// 004fa161: JZ 0x004fa12d
//   XREF to: 004fa12d (CONDITIONAL_JUMP)
// 004fa163: PUSH 0x1
//   Label: LAB_004fa163
// 004fa165: PUSH 0x0
// 004fa167: JMP 0x004f9fc8
//   XREF to: 004f9fc8 (UNCONDITIONAL_JUMP)
// 004fa16c: MOV EAX,dword ptr [EBX + 0xbe28]
//   Label: caseD_7
// 004fa172: TEST EAX,EAX
// 004fa174: JNZ 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa17a: CMP dword ptr [EBX + 0xdc],0x0
// 004fa181: JNZ 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa187: PUSH EAX
// 004fa188: LEA EAX,[EBP + -0x6e]
//   XREF to: Stack[-0xf8] (DATA)
// 004fa18b: PUSH EAX
// 004fa18c: PUSH ESI
// 004fa18d: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004fa192: ADD ESP,0xc
// 004fa195: PUSH EAX
// 004fa196: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 004fa199: PUSH EAX
// 004fa19a: PUSH EBX
// 004fa19b: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004fa1a0: ADD ESP,0xc
// 004fa1a3: PUSH 0x0
// 004fa1a5: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 004fa1a8: PUSH EAX
// 004fa1a9: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 004fa1af: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 004fa1b0: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 004fa1b5: ADD ESP,0xc
// 004fa1b8: MOV dword ptr [EBX + 0xbe28],0x1
// 004fa1c2: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa1c7: MOV ECX,dword ptr [EBX + 0xbe3c]
//   Label: caseD_9
// 004fa1cd: TEST ECX,ECX
// 004fa1cf: JNZ 0x004fa1e3
//   XREF to: 004fa1e3 (CONDITIONAL_JUMP)
// 004fa1d1: PUSH 0x1
//   Label: LAB_004fa1d1
// 004fa1d3: PUSH 0x5
// 004fa1d5: PUSH ESI
// 004fa1d6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa1db: ADD ESP,0xc
// 004fa1de: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa1e3: PUSH ECX
//   Label: LAB_004fa1e3
// 004fa1e4: MOV EDX,dword ptr [ECX + 0x154]
// 004fa1ea: CALL dword ptr [EDX + 0x120]
// 004fa1f0: ADD ESP,0x4
// 004fa1f3: TEST EAX,EAX
// 004fa1f5: JNZ 0x004fa1d1
//   XREF to: 004fa1d1 (CONDITIONAL_JUMP)
// 004fa1f7: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004fa1fd: MOV EDI,dword ptr [EAX + 0x2598]
// 004fa203: CMP EBX,EDI
// 004fa205: JNZ 0x004fa1d1
//   XREF to: 004fa1d1 (CONDITIONAL_JUMP)
// 004fa207: FLD float ptr [EAX + 0x20]
// 004fa20a: FLD double ptr [0x0062f9ee]
//   XREF to: 0062f9ee (READ)
// 004fa210: FLD float ptr [EDI + 0x44]
// 004fa213: FMUL ST1
// 004fa215: FSUBP ST2,ST0
// 004fa217: MOV EAX,dword ptr [EDI + 0xbe3c]
// 004fa21d: FXCH
// 004fa21f: FSTP float ptr [EDI + 0x20]
// 004fa222: FLD float ptr [EAX + 0x28]
// 004fa225: FLD float ptr [EDI + 0x5c]
// 004fa228: FMULP ST2
// 004fa22a: FSUBRP
// 004fa22c: FSTP float ptr [EDI + 0x28]
// 004fa22f: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa234: LEA EAX,[EBP + 0xfffffeea]
//   Label: caseD_4
//   XREF to: Stack[-0x1a0] (DATA)
// 004fa23a: PUSH EAX
// 004fa23b: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004fa240: ADD ESP,0x4
// 004fa243: PUSH 0x40a00000
// 004fa248: PUSH 0x40400000
// 004fa24d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004fa252: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004fa255: ADD ESP,0x8
// 004fa258: LEA EAX,[EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a0] (DATA)
// 004fa25e: MOV EDX,dword ptr [0x02db89fc]
//   XREF to: 02db89fc (READ)
// 004fa264: PUSH EAX
// 004fa265: LEA EAX,[EDX*0x4 + 0x0]
// 004fa26c: SUB EAX,EDX
// 004fa26e: MOV dword ptr [EBP + 0xffffff1e],EBX
//   XREF to: Stack[-0x16c] (WRITE)
// 004fa274: MOV EDX,EAX
// 004fa276: MOV dword ptr [EBP + 0xffffff22],EBX
//   XREF to: Stack[-0x168] (WRITE)
// 004fa27c: SHL EDX,0x4
// 004fa27f: LEA EAX,[EBX + 0xfd8]
// 004fa285: ADD EAX,EDX
// 004fa287: PUSH 0x3ecccccd
// 004fa28c: PUSH EAX
// 004fa28d: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004fa292: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb0] (DATA)
// 004fa295: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004fa298: PUSH EAX
// 004fa299: FSTP float ptr [EBP + 0xfffffeee]
//   XREF to: Stack[-0x19c] (WRITE)
// 004fa29f: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004fa2a4: ADD ESP,0xc
// 004fa2a7: PUSH EAX
// 004fa2a8: LEA EAX,[EBP + 0x2e]
//   XREF to: Stack[-0x5c] (DATA)
// 004fa2ab: PUSH EAX
// 004fa2ac: PUSH EBX
// 004fa2ad: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004fa2b2: ADD ESP,0xc
// 004fa2b5: PUSH EAX
// 004fa2b6: PUSH EBX
// 004fa2b7: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 004fa2bc: ADD ESP,0x10
// 004fa2bf: TEST EAX,EAX
// 004fa2c1: JZ 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa2c7: XOR EDI,EDI
// 004fa2c9: XOR ESI,ESI
// 004fa2cb: MOV EAX,[0x006810c8]
//   Label: LAB_004fa2cb
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004fa2d0: CMP ESI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 004fa2d6: JGE 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa2dc: MOV ECX,dword ptr [0x02db8a5c]
//   XREF to: 02db8a5c (READ)
// 004fa2e2: PUSH ECX
// 004fa2e3: MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150fe0]
//   XREF to: 03265258 (READ)
//   XREF to: 0326525c (READ)
// 004fa2ea: PUSH EDX
// 004fa2eb: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fa2f0: ADD ESP,0x8
// 004fa2f3: TEST EAX,EAX
// 004fa2f5: JNZ 0x004fa2fd
//   XREF to: 004fa2fd (CONDITIONAL_JUMP)
// 004fa2f7: INC ESI
//   Label: LAB_004fa2f7
// 004fa2f8: ADD EDI,0x4
// 004fa2fb: JMP 0x004fa2cb
//   XREF to: 004fa2cb (UNCONDITIONAL_JUMP)
// 004fa2fd: CMP EAX,EBX
//   Label: LAB_004fa2fd
// 004fa2ff: JZ 0x004fa2f7
//   XREF to: 004fa2f7 (CONDITIONAL_JUMP)
// 004fa301: MOV ECX,dword ptr [EBX + 0xbe3c]
// 004fa307: CMP ECX,dword ptr [EAX + 0xbe3c]
// 004fa30d: JNZ 0x004fa2f7
//   XREF to: 004fa2f7 (CONDITIONAL_JUMP)
// 004fa30f: PUSH 0x1
// 004fa311: PUSH 0x3
// 004fa313: ADD EAX,0x158
// 004fa318: PUSH EAX
// 004fa319: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa31e: ADD ESP,0xc
// 004fa321: INC ESI
// 004fa322: ADD EDI,0x4
// 004fa325: JMP 0x004fa2cb
//   XREF to: 004fa2cb (UNCONDITIONAL_JUMP)
// 004fa327: MOV EAX,[0x02db87d0]
//   Label: caseD_0
//   XREF to: 02db87d0 (READ)
// 004fa32c: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004fa333: PUSH EAX
// 004fa334: MOV EDX,dword ptr [EAX + 0x154]
// 004fa33a: CALL dword ptr [EDX + 0x120]
// 004fa340: ADD ESP,0x4
// 004fa343: TEST EAX,EAX
// 004fa345: JZ 0x004fa374
//   XREF to: 004fa374 (CONDITIONAL_JUMP)
// 004fa347: PUSH 0x3dcccccd
// 004fa34c: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004fa351: ADD ESP,0x4
// 004fa354: TEST EAX,EAX
// 004fa356: JZ 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa35c: PUSH 0x1
// 004fa35e: PUSH 0x3
// 004fa360: LEA EAX,[EBX + 0x158]
// 004fa366: PUSH EAX
// 004fa367: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa36c: ADD ESP,0xc
// 004fa36f: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa374: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004fa374
//   XREF to: Stack[0x8] (READ)
// 004fa37a: MOV EAX,dword ptr [EBX + 0x154]
// 004fa380: PUSH EBX
// 004fa381: CALL dword ptr [EAX + 0x158]
// 004fa387: MOV EDX,dword ptr [EBX + 0xbe3c]
// 004fa38d: ADD ESP,0x8
// 004fa390: TEST EDX,EDX
// 004fa392: JZ 0x004fa495
//   XREF to: 004fa495 (CONDITIONAL_JUMP)
// 004fa398: CMP dword ptr [EDX + 0x2598],0x0
// 004fa39f: JNZ 0x004fa424
//   XREF to: 004fa424 (CONDITIONAL_JUMP)
// 004fa3a5: LEA EAX,[EBX + 0x20]
// 004fa3a8: FLD float ptr [EDX + 0x20]
// 004fa3ab: FSUB float ptr [EAX]
// 004fa3ad: FSTP float ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (WRITE)
// 004fa3b0: FLD float ptr [EDX + 0x24]
// 004fa3b3: FSUB float ptr [EAX + 0x4]
// 004fa3b6: FST float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (WRITE)
// 004fa3b9: FMUL float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 004fa3bc: FLD float ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (READ)
// 004fa3bf: FMUL ST0
// 004fa3c1: FLD float ptr [EDX + 0x28]
// 004fa3c4: FSUB float ptr [EAX + 0x8]
// 004fa3c7: FXCH
// 004fa3c9: FADDP ST2,ST0
// 004fa3cb: FST float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (WRITE)
// 004fa3ce: FMUL float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (READ)
// 004fa3d1: FADDP
// 004fa3d3: FSQRT
// 004fa3d5: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 004fa3d8: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004fa3db: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004fa3de: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004fa3e1: FCOMP float ptr [0x006601dc]
//   XREF to: 006601dc (READ)
// 004fa3e7: FNSTSW AX
// 004fa3e9: SAHF
// 004fa3ea: JC 0x004fa436
//   XREF to: 004fa436 (CONDITIONAL_JUMP)
// 004fa3ec: FLD float ptr [EBP + 0x6a]
//   Label: LAB_004fa3ec
//   XREF to: Stack[-0x20] (READ)
// 004fa3ef: FCOMP float ptr [EBX + 0xbe34]
// 004fa3f5: FNSTSW AX
// 004fa3f7: SAHF
// 004fa3f8: JNC 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa3fe: FLD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004fa401: LEA EDX,[EBX + 0x158]
// 004fa407: FCOMP float ptr [0x006601e8]
//   XREF to: 006601e8 (READ)
// 004fa40d: FNSTSW AX
// 004fa40f: SAHF
// 004fa410: JNC 0x004fa483
//   XREF to: 004fa483 (CONDITIONAL_JUMP)
// 004fa412: PUSH 0x1
// 004fa414: PUSH 0x1
// 004fa416: PUSH EDX
// 004fa417: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa41c: ADD ESP,0xc
// 004fa41f: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa424: PUSH 0x1
//   Label: LAB_004fa424
// 004fa426: PUSH 0x3
// 004fa428: PUSH ESI
// 004fa429: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa42e: ADD ESP,0xc
// 004fa431: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa436: LEA EAX,[EBP + 0xa]
//   Label: LAB_004fa436
//   XREF to: Stack[-0x80] (DATA)
// 004fa439: PUSH EAX
// 004fa43a: LEA EAX,[EBP + -0x56]
//   XREF to: Stack[-0xe0] (DATA)
// 004fa43d: PUSH EAX
// 004fa43e: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004fa443: FLD float ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (READ)
// 004fa446: ADD ESP,0x8
// 004fa449: FSUB float ptr [EBX + 0x34]
// 004fa44c: SUB ESP,0x4
// 004fa44f: FSTP float ptr [ESP]
// 004fa452: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004fa457: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004fa45a: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004fa45d: FABS
// 004fa45f: ADD ESP,0x4
// 004fa462: FCOMP double ptr [0x0062f9fe]
//   XREF to: 0062f9fe (READ)
// 004fa468: FNSTSW AX
// 004fa46a: SAHF
// 004fa46b: JNC 0x004fa3ec
//   XREF to: 004fa3ec (CONDITIONAL_JUMP)
// 004fa471: PUSH 0x1
// 004fa473: PUSH 0x4
// 004fa475: PUSH ESI
// 004fa476: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa47b: ADD ESP,0xc
// 004fa47e: JMP 0x004fa3ec
//   XREF to: 004fa3ec (UNCONDITIONAL_JUMP)
// 004fa483: PUSH 0x1
//   Label: LAB_004fa483
// 004fa485: PUSH 0x2
// 004fa487: PUSH EDX
// 004fa488: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa48d: ADD ESP,0xc
// 004fa490: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa495: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004fa495
//   XREF to: Stack[0x8] (READ)
// 004fa49b: PUSH EBX
// 004fa49c: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004fa4a1: ADD ESP,0x8
// 004fa4a4: TEST EAX,EAX
// 004fa4a6: JZ 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa4ac: PUSH 0x1
// 004fa4ae: PUSH 0x1
// 004fa4b0: PUSH ESI
// 004fa4b1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa4b6: ADD ESP,0xc
// 004fa4b9: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa4be: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_2
//   XREF to: Stack[0x8] (READ)
// 004fa4c4: MOV EAX,dword ptr [EBX + 0x154]
// 004fa4ca: PUSH EBX
// 004fa4cb: CALL dword ptr [EAX + 0x158]
// 004fa4d1: ADD ESP,0x8
// 004fa4d4: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004fa4da: LEA ESI,[EBX + 0x158]
// 004fa4e0: TEST EAX,EAX
// 004fa4e2: JZ 0x004fa500
//   XREF to: 004fa500 (CONDITIONAL_JUMP)
// 004fa4e4: MOV EDX,dword ptr [EAX + 0x2598]
// 004fa4ea: TEST EDX,EDX
// 004fa4ec: JZ 0x004fa536
//   XREF to: 004fa536 (CONDITIONAL_JUMP)
// 004fa4ee: PUSH 0x1
// 004fa4f0: PUSH 0x3
// 004fa4f2: PUSH ESI
// 004fa4f3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa4f8: ADD ESP,0xc
// 004fa4fb: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa500: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004fa500
//   XREF to: Stack[0x8] (READ)
// 004fa506: PUSH EBX
// 004fa507: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004fa50c: ADD ESP,0x8
// 004fa50f: TEST EAX,EAX
// 004fa511: JZ 0x004fa525
//   XREF to: 004fa525 (CONDITIONAL_JUMP)
// 004fa513: PUSH 0x1
// 004fa515: PUSH 0x1
// 004fa517: PUSH ESI
// 004fa518: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa51d: ADD ESP,0xc
// 004fa520: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa525: PUSH 0x1
//   Label: LAB_004fa525
// 004fa527: PUSH EAX
// 004fa528: PUSH ESI
// 004fa529: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa52e: ADD ESP,0xc
// 004fa531: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa536: MOV EAX,[0x006601dc]
//   Label: LAB_004fa536
//   XREF to: 006601dc (READ)
// 004fa53b: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004fa53e: LEA EAX,[EBX + 0x23ac]
// 004fa544: PUSH 0x3e32b8c2
// 004fa549: MOV dword ptr [EAX + 0x8],EDX
// 004fa54c: PUSH 0x3f000000
// 004fa551: MOV ECX,dword ptr [EAX + 0x8]
// 004fa554: MOV dword ptr [EAX + 0x4],ECX
// 004fa557: MOV ECX,dword ptr [EAX + 0x4]
// 004fa55a: MOV dword ptr [EAX],ECX
// 004fa55c: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004fa55f: MOV dword ptr [EBP + -0xe],EDX
//   XREF to: Stack[-0x98] (WRITE)
// 004fa562: MOV dword ptr [EBP + -0x6],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004fa565: LEA EAX,[EBP + -0xe]
//   XREF to: Stack[-0x98] (DATA)
// 004fa568: MOV dword ptr [EBP + -0xa],EDX
//   XREF to: Stack[-0x94] (WRITE)
// 004fa56b: PUSH EAX
// 004fa56c: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004fa572: PUSH EAX
// 004fa573: MOV EDX,dword ptr [EAX + 0x154]
// 004fa579: CALL dword ptr [EDX + 0xbc]
// 004fa57f: ADD ESP,0x4
// 004fa582: PUSH EAX
// 004fa583: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004fa589: ADD EAX,0x20
// 004fa58c: PUSH EAX
// 004fa58d: PUSH EBX
// 004fa58e: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 004fa593: ADD ESP,0x18
// 004fa596: TEST EAX,EAX
// 004fa598: JL 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa59e: LEA EAX,[EBX + 0x20]
// 004fa5a1: MOV EDX,dword ptr [EBX + 0xbe3c]
// 004fa5a7: FLD float ptr [EAX]
// 004fa5a9: FSUB float ptr [EDX + 0x20]
// 004fa5ac: FSTP float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (WRITE)
// 004fa5af: FLD float ptr [EAX + 0x4]
// 004fa5b2: FSUB float ptr [EDX + 0x24]
// 004fa5b5: FLD float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (READ)
// 004fa5b8: FXCH
// 004fa5ba: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (WRITE)
// 004fa5bd: FLD float ptr [EAX + 0x8]
// 004fa5c0: FSUB float ptr [EDX + 0x28]
// 004fa5c3: FXCH
// 004fa5c5: FMUL float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (READ)
// 004fa5c8: FXCH
// 004fa5ca: FST float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 004fa5cd: FMUL float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (READ)
// 004fa5d0: XOR EAX,EAX
// 004fa5d2: FADDP
// 004fa5d4: MOV dword ptr [EBP + -0x16],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004fa5d7: FSQRT
// 004fa5d9: FSTP float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (WRITE)
// 004fa5dc: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 004fa5df: FLD float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 004fa5e2: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004fa5e5: FCOMP float ptr [0x006601e8]
//   XREF to: 006601e8 (READ)
// 004fa5eb: FNSTSW AX
// 004fa5ed: SAHF
// 004fa5ee: JBE 0x004fa604
//   XREF to: 004fa604 (CONDITIONAL_JUMP)
// 004fa5f0: MOV EDX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 004fa5f3: CMP EDX,0x1
// 004fa5f6: JNZ 0x004fa604
//   XREF to: 004fa604 (CONDITIONAL_JUMP)
// 004fa5f8: PUSH EDX
// 004fa5f9: PUSH 0x2
// 004fa5fb: PUSH ESI
// 004fa5fc: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa601: ADD ESP,0xc
// 004fa604: FLD float ptr [EBP + 0x6e]
//   Label: LAB_004fa604
//   XREF to: Stack[-0x1c] (READ)
// 004fa607: FCOMP float ptr [0x006601ec]
//   XREF to: 006601ec (READ)
// 004fa60d: FNSTSW AX
// 004fa60f: SAHF
// 004fa610: JNC 0x004fa6dd
//   XREF to: 004fa6dd (CONDITIONAL_JUMP)
// 004fa616: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004fa61c: PUSH EAX
// 004fa61d: MOV EDX,dword ptr [EAX + 0x154]
// 004fa623: CALL dword ptr [EDX + 0x108]
// 004fa629: ADD ESP,0x4
// 004fa62c: TEST EAX,EAX
// 004fa62e: JNZ 0x004fa6dd
//   XREF to: 004fa6dd (CONDITIONAL_JUMP)
// 004fa634: MOV EAX,dword ptr [EBX + 0xbef0]
// 004fa63a: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 004fa642: JZ 0x004fa6dd
//   XREF to: 004fa6dd (CONDITIONAL_JUMP)
// 004fa648: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004fa64e: LEA EDX,[EBX + 0x20]
// 004fa651: FLD float ptr [EAX + 0x20]
// 004fa654: FSUB float ptr [EDX]
// 004fa656: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (WRITE)
// 004fa659: FLD float ptr [EAX + 0x24]
// 004fa65c: FSUB float ptr [EDX + 0x4]
// 004fa65f: FSTP float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (WRITE)
// 004fa662: FLD float ptr [EAX + 0x28]
// 004fa665: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x74] (DATA)
// 004fa668: PUSH EAX
// 004fa669: LEA EAX,[EBP + -0x62]
//   XREF to: Stack[-0xec] (DATA)
// 004fa66c: FSUB float ptr [EDX + 0x8]
// 004fa66f: PUSH EAX
// 004fa670: FSTP float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 004fa673: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004fa678: FLD float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe8] (READ)
// 004fa67b: ADD ESP,0x8
// 004fa67e: FSUB float ptr [EBX + 0x34]
// 004fa681: SUB ESP,0x4
// 004fa684: FSTP float ptr [ESP]
// 004fa687: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004fa68c: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004fa68f: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004fa692: FABS
// 004fa694: ADD ESP,0x4
// 004fa697: FCOMP double ptr [0x0062f9fe]
//   XREF to: 0062f9fe (READ)
// 004fa69d: FNSTSW AX
// 004fa69f: SAHF
// 004fa6a0: JNC 0x004fa6dd
//   XREF to: 004fa6dd (CONDITIONAL_JUMP)
// 004fa6a2: PUSH 0x3dcccccd
// 004fa6a7: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004fa6ac: ADD ESP,0x4
// 004fa6af: TEST EAX,EAX
// 004fa6b1: JZ 0x004fa6dd
//   XREF to: 004fa6dd (CONDITIONAL_JUMP)
// 004fa6b3: PUSH 0x1
// 004fa6b5: PUSH 0x8
// 004fa6b7: LEA EAX,[EBX + 0x158]
// 004fa6bd: PUSH EAX
// 004fa6be: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa6c3: ADD ESP,0xc
// 004fa6c6: MOV ESI,dword ptr [EBX + 0xbebc]
// 004fa6cc: PUSH ESI
// 004fa6cd: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004fa6d2: ADD ESP,0x4
// 004fa6d5: TEST EAX,EAX
// 004fa6d7: JZ 0x004fa82f
//   XREF to: 004fa82f (CONDITIONAL_JUMP)
// 004fa6dd: FLD float ptr [EBP + 0x6e]
//   Label: LAB_004fa6dd
//   XREF to: Stack[-0x1c] (READ)
// 004fa6e0: FCOMP float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004fa6e3: FNSTSW AX
// 004fa6e5: SAHF
// 004fa6e6: JA 0x004fa77c
//   XREF to: 004fa77c (CONDITIONAL_JUMP)
// 004fa6ec: FLD float ptr [EBX + 0xbe38]
// 004fa6f2: FLDZ
// 004fa6f4: FCOMPP
// 004fa6f6: FNSTSW AX
// 004fa6f8: SAHF
// 004fa6f9: JC 0x004fa77c
//   XREF to: 004fa77c (CONDITIONAL_JUMP)
// 004fa6ff: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004fa705: LEA EDX,[EBX + 0x20]
// 004fa708: FLD float ptr [EAX + 0x20]
// 004fa70b: FSUB float ptr [EDX]
// 004fa70d: FSTP float ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd4] (WRITE)
// 004fa710: FLD float ptr [EAX + 0x24]
// 004fa713: FSUB float ptr [EDX + 0x4]
// 004fa716: FSTP float ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (WRITE)
// 004fa719: FLD float ptr [EAX + 0x28]
// 004fa71c: LEA EAX,[EBP + -0x4a]
//   XREF to: Stack[-0xd4] (DATA)
// 004fa71f: PUSH EAX
// 004fa720: LEA EAX,[EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (DATA)
// 004fa726: FSUB float ptr [EDX + 0x8]
// 004fa729: PUSH EAX
// 004fa72a: FSTP float ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (WRITE)
// 004fa72d: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004fa732: FLD float ptr [EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (READ)
// 004fa738: ADD ESP,0x8
// 004fa73b: FSUB float ptr [EBX + 0x34]
// 004fa73e: SUB ESP,0x4
// 004fa741: FSTP float ptr [ESP]
// 004fa744: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004fa749: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004fa74c: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004fa74f: FABS
// 004fa751: ADD ESP,0x4
// 004fa754: FCOMP double ptr [0x0062f9fe]
//   XREF to: 0062f9fe (READ)
// 004fa75a: FNSTSW AX
// 004fa75c: SAHF
// 004fa75d: JNC 0x004fa77c
//   XREF to: 004fa77c (CONDITIONAL_JUMP)
// 004fa75f: PUSH 0x1
// 004fa761: PUSH 0x4
// 004fa763: LEA EAX,[EBX + 0x158]
// 004fa769: PUSH EAX
// 004fa76a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa76f: ADD ESP,0xc
// 004fa772: MOV dword ptr [EBX + 0xbe38],0x40800000
// 004fa77c: FLD float ptr [EBP + 0x6e]
//   Label: LAB_004fa77c
//   XREF to: Stack[-0x1c] (READ)
// 004fa77f: FCOMP float ptr [EBX + 0xbe34]
// 004fa785: FNSTSW AX
// 004fa787: SAHF
// 004fa788: JBE 0x004fa79d
//   XREF to: 004fa79d (CONDITIONAL_JUMP)
// 004fa78a: PUSH 0x1
// 004fa78c: PUSH 0x0
// 004fa78e: LEA EAX,[EBX + 0x158]
// 004fa794: PUSH EAX
// 004fa795: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004fa79a: ADD ESP,0xc
// 004fa79d: FLD float ptr [EBX + 0xbec4]
//   Label: LAB_004fa79d
// 004fa7a3: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004fa7a9: FST float ptr [EBX + 0xbec4]
// 004fa7af: FLDZ
// 004fa7b1: FCOMPP
// 004fa7b3: FNSTSW AX
// 004fa7b5: SAHF
// 004fa7b6: JBE 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa7bc: MOV EDI,dword ptr [EBX + 0xbebc]
// 004fa7c2: PUSH EDI
// 004fa7c3: MOV dword ptr [EBX + 0xbec4],0x0
// 004fa7cd: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004fa7d2: ADD ESP,0x4
// 004fa7d5: TEST EAX,EAX
// 004fa7d7: JNZ 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa7dd: MOV EAX,dword ptr [EBX + 0xbec0]
// 004fa7e3: PUSH EAX
// 004fa7e4: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004fa7e9: ADD ESP,0x4
// 004fa7ec: TEST EAX,EAX
// 004fa7ee: JNZ 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa7f4: PUSH 0x62f9c5
//   XREF to: 0062f9c5 (DATA)
// 004fa7f9: MOV EAX,dword ptr [EBX + 0x154]
// 004fa7ff: PUSH EBX
// 004fa800: CALL dword ptr [EAX + 0x24]
// 004fa803: ADD ESP,0x8
// 004fa806: PUSH 0x41a00000
// 004fa80b: PUSH 0x41200000
// 004fa810: MOV dword ptr [EBX + 0xbebc],EAX
// 004fa816: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004fa81b: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004fa81e: ADD ESP,0x8
// 004fa821: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004fa824: MOV dword ptr [EBX + 0xbec4],EAX
// 004fa82a: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa82f: PUSH 0x62f9b7
//   Label: LAB_004fa82f
//   XREF to: 0062f9b7 (DATA)
// 004fa834: MOV EAX,dword ptr [EBX + 0x154]
// 004fa83a: PUSH EBX
// 004fa83b: CALL dword ptr [EAX + 0x24]
// 004fa83e: ADD ESP,0x8
// 004fa841: MOV dword ptr [EBX + 0xbebc],EAX
// 004fa847: JMP 0x004fa6dd
//   XREF to: 004fa6dd (UNCONDITIONAL_JUMP)
// 004fa84c: FLD float ptr [EBP + 0x92]
//   Label: caseD_3
//   XREF to: Stack[0x8] (READ)
// 004fa852: FMUL float ptr [0x0062f9f6]
//   XREF to: 0062f9f6 (READ)
// 004fa858: FSUBR float ptr [EBX + 0xbec4]
// 004fa85e: FST float ptr [EBX + 0xbec4]
// 004fa864: FLDZ
// 004fa866: FCOMPP
// 004fa868: FNSTSW AX
// 004fa86a: SAHF
// 004fa86b: JBE 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa871: MOV ESI,dword ptr [EBX + 0xbebc]
// 004fa877: PUSH ESI
// 004fa878: MOV dword ptr [EBX + 0xbec4],0x0
// 004fa882: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004fa887: ADD ESP,0x4
// 004fa88a: TEST EAX,EAX
// 004fa88c: JNZ 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa892: MOV EDI,dword ptr [EBX + 0xbec0]
// 004fa898: PUSH EDI
// 004fa899: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004fa89e: ADD ESP,0x4
// 004fa8a1: TEST EAX,EAX
// 004fa8a3: JNZ 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa8a9: PUSH 0x62f9d4
//   XREF to: 0062f9d4 (DATA)
// 004fa8ae: MOV EAX,dword ptr [EBX + 0x154]
// 004fa8b4: PUSH EBX
// 004fa8b5: CALL dword ptr [EAX + 0x24]
// 004fa8b8: ADD ESP,0x8
// 004fa8bb: PUSH 0x41a00000
// 004fa8c0: PUSH 0x41200000
// 004fa8c5: MOV dword ptr [EBX + 0xbebc],EAX
// 004fa8cb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004fa8d0: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004fa8d3: ADD ESP,0x8
// 004fa8d6: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004fa8d9: MOV dword ptr [EBX + 0xbec4],EAX
// 004fa8df: JMP 0x004f9fef
//   XREF to: 004f9fef (UNCONDITIONAL_JUMP)
// 004fa8e4: CMP EDI,0x9
//   Label: LAB_004fa8e4
// 004fa8e7: JA 0x004f9fef
//   XREF to: 004f9fef (CONDITIONAL_JUMP)
// 004fa8ed: JMP dword ptr [EDI*0x4 + 0x4f9c08]
//   Label: switchD
//   XREF to: 004fa327 (COMPUTED_JUMP)
//   XREF to: 004fa4be (COMPUTED_JUMP)
//   XREF to: 004fa84c (COMPUTED_JUMP)
//   XREF to: 004fa234 (COMPUTED_JUMP)
//   XREF to: 004f9fef (COMPUTED_JUMP)
//   XREF to: 004fa16c (COMPUTED_JUMP)
//   XREF to: 004fa1c7 (COMPUTED_JUMP)
//   XREF to: 004f9c08 (DATA)
