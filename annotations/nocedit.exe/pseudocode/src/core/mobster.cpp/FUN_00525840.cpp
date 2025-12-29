// Name: core_mobster.cpp_FUN_00525840
// Address: 00525840
// Address Range: [[00525840, 00526793]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00525840()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_mobster.cpp_FUN_00525840(uint param_1, uint
   param_2) */

void core_mobster_cpp_FUN_00525840(void)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  char *pcVar3;
  uint uVar4;
  CDemonActor_vtable *pCVar5;
  CCharacter *pCVar6;
  int iVar7;
  uint uVar8;
  SMotion *pSVar9;
  int iVar10;
  CEnemy *pCVar11;
  CDemonActor *pCVar12;
  CVector3f *pCVar13;
  int extraout_EAX;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  CEnemy *in_stack_00000004;
  CEnemy *in_stack_00000008;
  float in_stack_fffffe64;
  float fVar14;
  CEnemy *in_stack_fffffe70;
  CEnemy *in_stack_fffffe74;
  SCollisionInfo *in_stack_fffffe78;
  float fVar15;
  float in_stack_fffffe80;
  SDamageInfo local_160;
  float local_124;
  float local_120;
  float local_11c;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_c4;
  CVector3f local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  CVector3f local_94;
  uint local_88;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  uint local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  float local_38;
  float local_34;
  float local_30;
  CDemonActor *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar7 == 0) {
    if (in_stack_00000004[1].base_character.base_actor.location.area_id != 0) {
      core_mobster_cpp_FUN_00525650();
      core_charactr_cpp_CCharacter_FUN_0042d090(&in_stack_00000004->base_character);
    }
    return;
  }
  if ((in_stack_00000004->base_character).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x5c)] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe64);
    (*(in_stack_00000004->base_character).base_actor.vtable[1].playAmbientSoundWithVolume)
              ((CDemonActor *)in_stack_00000004,&stack0xfffffe64,in_stack_fffffe64);
  }
  if (*(int *)((in_stack_00000004->base_character).cloth_data + 0x8d40) != 0) {
    (in_stack_00000004->base_character).cloth_data[0x8d44] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x8d45] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x8d46] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x8d47] = '\0';
  }
  if (0 < *(int *)((in_stack_00000004->base_character).cloth_data + 0x478)) {
    (*(in_stack_00000004->base_character).base_actor.vtable[1].renderTargetPoints)
              ((CDemonActor *)in_stack_00000004);
    (*(in_stack_00000004->base_character).base_actor.vtable[1].renderTargetPoints)
              ((CDemonActor *)in_stack_00000004);
    sound_sndmain_cpp_killSfx_FUN_005a9c40
              (*(uint *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28));
    in_stack_fffffe70 = (CEnemy *)0x525907;
    in_stack_fffffe74 = in_stack_00000004;
    iVar7 = (*(in_stack_00000004->base_character).base_actor.vtable[1].hasCollision)
                      ((CDemonActor *)in_stack_00000004,in_stack_fffffe78);
    if (((iVar7 == 0) &&
        (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                           (*(uint *)(in_stack_00000004[1].base_character.base_actor.create_event +
                                     0x30)), iVar7 == 0)) &&
       (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                          (*(uint *)(in_stack_00000004[1].base_character.base_actor.create_event +
                                    0x24)), iVar7 == 0)) {
      in_stack_fffffe74 = (CEnemy *)0x525a6d;
      uVar8 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                        ((CDemonActor *)in_stack_00000004,"mob-scream?.wav");
      *(uint *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x30) = uVar8;
    }
  }
  fVar14 = (float)in_stack_00000004[1].base_character.base_actor.field11_0xdc -
           (float)in_stack_00000008;
  in_stack_00000004[1].base_character.base_actor.field11_0xdc = (int)fVar14;
  if (fVar14 < 0.0) {
    in_stack_00000004[1].base_character.base_actor.field11_0xdc = 0;
  }
  fVar14 = in_stack_00000004[1].base_character.base_actor.location.position.x -
           (float)in_stack_00000008;
  in_stack_00000004[1].base_character.base_actor.location.position.x = fVar14;
  if (fVar14 < 0.0) {
    in_stack_00000004[1].base_character.base_actor.location.position.x = 0.0;
  }
  if ((in_stack_00000004->base_character).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x40)] == 0) {
    (*(in_stack_00000004->base_character).base_actor.vtable[1].renderTargetPoints)
              ((CDemonActor *)in_stack_00000004);
  }
  if ((in_stack_00000004->base_character).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x38)] == 0) {
    (*(in_stack_00000004->base_character).base_actor.vtable[1].renderTargetPoints)
              ((CDemonActor *)in_stack_00000004);
  }
  if ((in_stack_00000004[1].base_character.base_actor.orient.bank == 0.0) &&
     (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,
                         (char *)&in_stack_00000004[1].base_character.base_actor.orient.heading),
     iVar7 != 0)) {
    in_stack_00000004[1].base_character.base_actor.orient.bank = 1.4013e-45;
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_38 = (float)in_stack_00000008 * in_stack_00000004->speed;
  pCVar2 = &(in_stack_00000004->base_character).model;
  while (0.0 < local_38) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (iVar7 == 100) {
      if (*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) != 0) {
        pCVar6 = &in_stack_00000004[1].base_character;
        (pCVar6->base_actor).actor_name[0x14] = '\0';
        (pCVar6->base_actor).actor_name[0x15] = '\0';
        (pCVar6->base_actor).actor_name[0x16] = '\0';
        (pCVar6->base_actor).actor_name[0x17] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  (&in_stack_00000004->base_character);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
    }
  }
  fVar14 = in_stack_00000004->speed;
  fVar15 = (float)3.1415926535000001;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       (float)in_stack_00000008 * fVar15 * fVar14;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  iVar7 = pSVar9->state_index;
  iVar10 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar10 == 0) {
    switch(iVar7) {
    case 0:
      if (in_stack_00000004[1].base_character.base_actor.orient.bank == 0.0) {
        (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)in_stack_00000004);
        if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
          in_stack_fffffe70 = in_stack_00000008;
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX != 0) {
            in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
          break;
        }
        fVar14 = in_stack_00000004[1].base_character.base_actor.location.position.z;
        if (fVar14 != 0.0) {
          if (in_stack_00000004[1].base_character.base_actor.location.position.y == 0.0) {
            local_d0 = (in_stack_00000004->base_character).base_actor.location.position.x -
                       *(float *)((int)fVar14 + 0x20);
            local_cc = (in_stack_00000004->base_character).base_actor.location.position.y -
                       *(float *)((int)fVar14 + 0x24);
            local_c8 = (in_stack_00000004->base_character).base_actor.location.position.z -
                       *(float *)((int)fVar14 + 0x28);
            if ((float)2 <
                SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc)) {
              in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
              in_stack_00000004[1].base_character.base_actor.location.position.y = 1.4013e-45;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,8,1);
              break;
            }
          }
          else {
            in_stack_00000004[1].base_character.base_actor.location.position.y = 0.0;
          }
        }
        if (in_stack_00000004[1].base_character.base_actor.location.area_id == 0) {
          iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
          local_10c.x = *(float *)(iVar7 + 0x20) -
                        (in_stack_00000004->base_character).base_actor.location.position.x;
          local_10c.y = *(float *)(iVar7 + 0x24) -
                        (in_stack_00000004->base_character).base_actor.location.position.y;
          local_10c.z = *(float *)(iVar7 + 0x28) -
                        (in_stack_00000004->base_character).base_actor.location.position.z;
          local_20 = SQRT(local_10c.z * local_10c.z +
                          local_10c.x * local_10c.x + local_10c.y * local_10c.y);
          local_18 = local_20;
          if (local_20 < DAT_00661778 + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_10c);
            in_stack_fffffe70 =
                 (CEnemy *)(local_70.y - (in_stack_00000004->base_character).base_actor.orient.bank)
            ;
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)in_stack_fffffe70);
            if ((ABS(local_14) < (float)0.52359877558333301) &&
               (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
              in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,9,1);
              in_stack_00000004->field6_0xbe38[0] = '\0';
              in_stack_00000004->field6_0xbe38[1] = '\0';
              in_stack_00000004->field6_0xbe38[2] = '\0';
              in_stack_00000004->field6_0xbe38[3] = '@';
            }
          }
          if (local_20 < in_stack_00000004->guard_distance) {
            if (_DAT_00661788 <= local_20) {
              iVar7 = 8;
            }
            else {
              iVar7 = 1;
            }
            in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base_character).model.motion_controller,iVar7,1);
          }
          if (*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) == 0) {
            in_stack_fffffe70 = (CEnemy *)0x3f333333;
            iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.7);
            if (iVar7 != 0) {
              in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
              core_mobster_cpp_FUN_005279f0();
              pCVar6 = &in_stack_00000004[1].base_character;
              (pCVar6->base_actor).actor_name[0x18] = '\x01';
              (pCVar6->base_actor).actor_name[0x19] = '\0';
              (pCVar6->base_actor).actor_name[0x1a] = '\0';
              (pCVar6->base_actor).actor_name[0x1b] = '\0';
              break;
            }
          }
          pCVar6 = &in_stack_00000004[1].base_character;
          (pCVar6->base_actor).actor_name[0x18] = '\x01';
          (pCVar6->base_actor).actor_name[0x19] = '\0';
          (pCVar6->base_actor).actor_name[0x1a] = '\0';
          (pCVar6->base_actor).actor_name[0x1b] = '\0';
          break;
        }
        if (*(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60) <=
            (float)0.5) break;
        in_stack_fffffe70 = (CEnemy *)0x3e800000;
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if (iVar7 != 0) {
          in_stack_fffffe70 = in_stack_00000004;
          core_mobster_cpp_FUN_00525720();
          break;
        }
      }
      else {
        fVar14 = *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60);
        *(CHero **)(in_stack_00000004->field6_0xbe38 + 4) = g_HeroActors[g_LocalHeroIndex];
        if (fVar14 <= (float)0.5) break;
      }
      core_mobster_cpp_FUN_005271c0();
      break;
    case 1:
    case 8:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      pCVar2 = &(in_stack_00000004->base_character).model;
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_00 == 0) {
          in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
        else {
          in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else if (in_stack_00000004[1].base_character.base_actor.location.position.y == 0.0) {
        in_stack_fffffe70 = in_stack_00000008;
        iVar7 = core_mobster_cpp_FUN_00526d90();
        if (iVar7 == 0) {
          local_24 = DAT_00661778 + 1.0;
          if ((in_stack_00000004->base_character).carry_hands[1].carry_actor != (CDemonActor *)0x0)
          {
            local_24 = DAT_0066177c;
          }
          in_stack_fffffe70 = (CEnemy *)0x3e32b8c2;
          (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
          (in_stack_00000004->base_character).model.accumulated_root_motion.y =
               (in_stack_00000004->base_character).model.accumulated_root_motion.z;
          (in_stack_00000004->base_character).model.accumulated_root_motion.x =
               (in_stack_00000004->base_character).model.accumulated_root_motion.y;
          local_a0 = 0;
          local_28 = DAT_00661778;
          local_98 = DAT_00661778;
          local_9c = 0;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (&in_stack_00000004->base_character);
          if (-1 < iVar7) {
            pCVar1 = &(in_stack_00000004->base_character).base_actor.location;
            local_64 = (pCVar1->position).x -
                       *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
            local_5c = (in_stack_00000004->base_character).base_actor.location.position.z -
                       *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
            local_30 = SQRT(local_5c * local_5c + local_64 * local_64);
            local_60 = 0;
            local_1c = local_30;
            if ((local_30 <= local_24) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
              pCVar2 = &(in_stack_00000004->base_character).model;
              if ((in_stack_00000004->base_character).carry_hands[1].carry_actor ==
                  (CDemonActor *)0x0) {
                iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
                local_b8.x = *(float *)(iVar7 + 0x20) - (pCVar1->position).x;
                local_b8.y = *(float *)(iVar7 + 0x24) -
                             (in_stack_00000004->base_character).base_actor.location.position.y;
                local_b8.z = *(float *)(iVar7 + 0x28) -
                             (in_stack_00000004->base_character).base_actor.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_f4,&local_b8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_f4.y -
                                      (in_stack_00000004->base_character).base_actor.orient.bank);
                if (ABS(local_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                }
              }
              else if (local_28 + 1.0 <= local_30) {
                if (((float)0.5 <
                     *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60))
                   && ((float)in_stack_00000004[1].base_character.base_actor.field11_0xdc <= 0.0)) {
                  in_stack_00000004[1].base_character.base_actor.location.position.x = 0.0;
                  iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
                  if (iVar7 != 0) {
                    core_mobster_cpp_FUN_005279f0();
                  }
                  if (in_stack_00000004[1].base_character.base_actor.location.position.x <= 0.0) {
                    core_mobster_cpp_FUN_005271c0();
                  }
                  else {
                    pCVar2 = &(in_stack_00000004->base_character).model;
                    if ((in_stack_00000004->base_character).carry_hands[0].carry_actor ==
                        (CDemonActor *)0x0) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,10,1);
                    }
                    else {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,0xb,1);
                    }
                  }
                }
              }
              else {
                iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
                local_e8.x = *(float *)(iVar7 + 0x20) - (pCVar1->position).x;
                local_e8.y = *(float *)(iVar7 + 0x24) -
                             (in_stack_00000004->base_character).base_actor.location.position.y;
                local_e8.z = *(float *)(iVar7 + 0x28) -
                             (in_stack_00000004->base_character).base_actor.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_58,&local_e8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_58.y -
                                      (in_stack_00000004->base_character).base_actor.orient.bank);
                if ((ABS(local_14) < (float)0.52359877558333301) &&
                   (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                  in_stack_00000004->field6_0xbe38[0] = '\0';
                  in_stack_00000004->field6_0xbe38[1] = '\0';
                  in_stack_00000004->field6_0xbe38[2] = '\0';
                  in_stack_00000004->field6_0xbe38[3] = '@';
                }
              }
              in_stack_00000004->field6_0xbe38[0] = '\0';
              in_stack_00000004->field6_0xbe38[1] = '\0';
              in_stack_00000004->field6_0xbe38[2] = -0x80;
              in_stack_00000004->field6_0xbe38[3] = '?';
            }
            if (in_stack_00000004->guard_distance < local_30) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,0,1);
            }
          }
        }
      }
      else {
        in_stack_fffffe70 = (CEnemy *)0x3e32b8c2;
        (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
        (in_stack_00000004->base_character).model.accumulated_root_motion.y =
             (in_stack_00000004->base_character).model.accumulated_root_motion.z;
        (in_stack_00000004->base_character).model.accumulated_root_motion.x =
             (in_stack_00000004->base_character).model.accumulated_root_motion.y;
        local_88 = 0;
        local_80 = DAT_00661778;
        local_84 = 0;
        (**(code **)(*(int *)((int)in_stack_00000004[1].base_character.base_actor.location.position.
                                   z + 0x154) + 0xbc))();
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          (&in_stack_00000004->base_character);
        if (iVar7 < 1) {
          if (iVar7 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            in_stack_00000004[1].base_character.base_actor.location.position.z = 0.0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
        in_stack_fffffe70 = (CEnemy *)g_CWeaponClassInfo.name_hash;
        pCVar11 = (CEnemy *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((in_stack_00000004->base_character).carry_hands[1].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        if (pCVar11 != (CEnemy *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          local_34 = (pCVar11->base_character).model.transformed_vertices[0x4f].y;
          pCVar5 = (pCVar11->base_character).base_actor.vtable;
          (pCVar11->base_character).model.transformed_vertices[0x4f].y = 1.4013e-43;
          in_stack_fffffe70 = pCVar11;
          iVar7 = (*pCVar5[1].renderBackground)((CDemonActor *)pCVar11,(int)in_stack_fffffe74);
          if (iVar7 != 0) {
            (*(pCVar11->base_character).base_actor.vtable[1].renderTransparent)
                      ((CDemonActor *)pCVar11);
          }
          (pCVar11->base_character).model.transformed_vertices[0x4f].y = local_34;
        }
        pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((in_stack_00000004->base_character).carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        local_2c = pCVar12;
        if (pCVar12 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          pCVar5 = pCVar12->vtable;
          uVar8 = *(uint *)(pCVar12[4].actor_name + 8);
          pCVar12[4].actor_name[8] = 'd';
          pCVar12[4].actor_name[9] = '\0';
          pCVar12[4].actor_name[10] = '\0';
          pCVar12[4].actor_name[0xb] = '\0';
          iVar7 = (*pCVar5[1].renderBackground)(pCVar12,(int)in_stack_fffffe80);
          if (iVar7 == 0) {
            *(uint *)(local_2c[4].actor_name + 8) = uVar8;
          }
          else {
            (*pCVar12->vtable[1].renderTransparent)(pCVar12);
            *(uint *)(local_2c[4].actor_name + 8) = uVar8;
          }
        }
      }
      if ((*(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60) <
           (float)0.5) ||
         ((float)in_stack_00000004[1].base_character.base_actor.field11_0xdc <= 0.0)) {
        if (in_stack_00000004[1].base_character.base_actor.orient.bank == 0.0) {
          fVar15 = 4.0;
          fVar14 = 2.0;
        }
        else {
          fVar15 = 5.0;
          fVar14 = 4.0;
        }
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar14,fVar15);
        in_stack_00000004[1].base_character.base_actor.field11_0xdc = (int)local_14;
        in_stack_fffffe70 = (CEnemy *)0x525f6f;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0,1);
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
        if (iVar7 != 0) {
          core_mobster_cpp_FUN_005279f0();
        }
      }
      break;
    case 5:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_c4,pCVar13);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_160);
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_160.attacker = (CDemonActor *)in_stack_00000004;
      local_160.wielder = (CDemonActor *)in_stack_00000004;
      local_14 = local_160.damage_amount;
      if ((in_stack_00000004->base_character).model.part_visibility_flags
          [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x38)] != 0) {
        pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_118,&g_ZeroVector,
                             (in_stack_00000004->base_character).model.bone_transform.
                             bone_world_matrices + DAT_02f37ecc);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_100,pCVar13);
        core_enemy_cpp_FUN_004a9880();
      }
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_14 = local_160.damage_amount;
      if ((in_stack_00000004->base_character).model.part_visibility_flags
          [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x40)] != 0) {
        pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_94,&g_ZeroVector,
                             (in_stack_00000004->base_character).model.bone_transform.
                             bone_world_matrices + DAT_02f37ed0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_dc,pCVar13);
        core_enemy_cpp_FUN_004a9880();
      }
      break;
    case 10:
    case 0xb:
      if (in_stack_00000004[1].base_character.base_actor.location.position.x <= 0.0) {
        core_mobster_cpp_FUN_005271c0();
      }
    }
    goto switchD_0052677f_caseD_7;
  }
  uVar4 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_00525b6c:
      fVar14 = 1.4013e-45;
    }
    else {
LAB_00525dac:
      fVar14 = 0.0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,(int)fVar14,1);
  }
  else {
    if (uVar4 < 3) goto LAB_00525b6c;
    if (uVar4 != 3) goto LAB_00525dac;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
switchD_0052677f_caseD_7:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - (float)in_stack_00000008;
  }
  if (in_stack_00000004[1].base_character.base_actor.location.area_id == 0) {
    iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
    if (iVar7 != 0) {
      if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
         (pCVar11 = (CEnemy *)
                    (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x108))(), pCVar11 == in_stack_00000004)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
      }
      *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
           *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
           (float)in_stack_00000008 * (float)32;
      local_ac = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
                 (float)in_stack_00000008;
      local_a8 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
                 (float)in_stack_00000008;
      pcVar3 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
      local_a4 = (float)in_stack_00000008 *
                 *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
      pCVar13 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
      local_124 = local_ac + *(float *)pcVar3;
      local_120 = local_a8 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      local_11c = local_a4 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      local_7c = local_124 + pCVar13->x;
      local_78 = local_120 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
      local_74 = local_11c + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
      (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
      *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
           *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      *(float *)pcVar3 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
      fVar14 = (in_stack_00000004->base_character).model.accumulated_root_motion.z;
      (in_stack_00000004->base_character).model.accumulated_root_motion.y = fVar14;
      pCVar13->x = fVar14;
      core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
    }
  }
  else {
    core_mobster_cpp_FUN_00525650();
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((in_stack_00000004->base_character).carry_hands[1].carry_actor,
                       g_CWeaponClassInfo.name_hash);
  if (pCVar12 != (CDemonActor *)0x0) {
    (*pCVar12->vtable->process)(pCVar12);
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((in_stack_00000004->base_character).carry_hands[0].carry_actor,
                       g_CWeaponClassInfo.name_hash);
  if (pCVar12 != (CDemonActor *)0x0) {
    (*pCVar12->vtable->process)(pCVar12);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  iVar7 = (*(in_stack_00000004->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)in_stack_00000004,(SCollisionInfo *)in_stack_fffffe70);
  if (iVar7 == 0) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0();
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}
