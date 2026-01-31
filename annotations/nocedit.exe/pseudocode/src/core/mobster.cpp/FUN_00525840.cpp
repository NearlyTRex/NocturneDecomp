// Name: core_mobster.cpp_FUN_00525840
// Address: 00525840
// Address Range: [[00525840, 00526793]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_00525840(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_00525840(uint param_1, uint
   param_2) */

void __cdecl core_mobster_cpp_FUN_00525840(void)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  char *pcVar3;
  uint uVar4;
  CCharacter_full_vtable *pCVar5;
  CPlatform *pCVar6;
  CCharacter *pCVar7;
  int iVar8;
  uint uVar9;
  SMotion *pSVar10;
  int iVar11;
  CEnemy *pCVar12;
  CDemonActor *pCVar13;
  CVector3f *pCVar14;
  int extraout_EAX;
  int extraout_EAX_00;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  float fVar15;
  float fVar16;
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
  uint local_34;
  float local_30;
  CDemonActor *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  CPlatform *local_14;
  
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base);
  if (iVar8 == 0) {
    if (in_stack_00000004[1].base.base.location.area_id != 0) {
      core_mobster_cpp_FUN_00525650();
      core_charactr_cpp_CCharacter_FUN_0042d090(&in_stack_00000004->base);
    }
    return;
  }
  if ((in_stack_00000004->base).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base.base.create_event + 0x5c)] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe64);
    (*(((in_stack_00000004->base).base.vtable._uc)->_uc).processDamage)
              (&in_stack_00000004->base,(SDamageInfo *)&stack0xfffffe64);
  }
  if (*(int *)((in_stack_00000004->base).cloth_data + 0x8d40) != 0) {
    (in_stack_00000004->base).cloth_data[0x8d44] = '\0';
    (in_stack_00000004->base).cloth_data[0x8d45] = '\0';
    (in_stack_00000004->base).cloth_data[0x8d46] = '\0';
    (in_stack_00000004->base).cloth_data[0x8d47] = '\0';
  }
  if (0 < *(int *)((in_stack_00000004->base).cloth_data + 0x478)) {
    (*(((in_stack_00000004->base).base.vtable._uc)->_uc).cfunc21)();
    (*(((in_stack_00000004->base).base.vtable._uc)->_uc).cfunc21)();
    sound_sndmain_cpp_killSfx_FUN_005a9c40
              (*(uint *)(in_stack_00000004[1].base.base.create_event + 0x28));
    iVar8 = (*(((in_stack_00000004->base).base.vtable._uc)->_uc).isDamageable)
                      (&in_stack_00000004->base);
    if (((iVar8 == 0) &&
        (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                           (*(uint *)(in_stack_00000004[1].base.base.create_event + 0x30)),
        iVar8 == 0)) &&
       (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                          (*(uint *)(in_stack_00000004[1].base.base.create_event + 0x24)),
       iVar8 == 0)) {
      uVar9 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)in_stack_00000004,"mob-scream?.wav");
      *(uint *)(in_stack_00000004[1].base.base.create_event + 0x30) = uVar9;
    }
  }
  pCVar6 = (CPlatform *)
           ((float)in_stack_00000004[1].base.base.standing_platform - in_stack_00000008);
  in_stack_00000004[1].base.base.standing_platform = pCVar6;
  if ((float)pCVar6 < 0.0) {
    in_stack_00000004[1].base.base.standing_platform = (CPlatform *)0x0;
  }
  fVar15 = in_stack_00000004[1].base.base.location.position.x - in_stack_00000008;
  in_stack_00000004[1].base.base.location.position.x = fVar15;
  if (fVar15 < 0.0) {
    in_stack_00000004[1].base.base.location.position.x = 0.0;
  }
  if ((in_stack_00000004->base).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base.base.create_event + 0x40)] == 0) {
    (*(((in_stack_00000004->base).base.vtable._uc)->_uc).cfunc21)();
  }
  if ((in_stack_00000004->base).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base.base.create_event + 0x38)] == 0) {
    (*(((in_stack_00000004->base).base.vtable._uc)->_uc).cfunc21)();
  }
  if ((in_stack_00000004[1].base.base.orient.bank == 0.0) &&
     (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,(char *)&in_stack_00000004[1].base.base.orient.heading),
     iVar8 != 0)) {
    in_stack_00000004[1].base.base.orient.bank = 1.4013e-45;
  }
  (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base).model.accumulated_root_motion.y =
       (in_stack_00000004->base).model.accumulated_root_motion.z;
  (in_stack_00000004->base).model.accumulated_root_motion.x =
       (in_stack_00000004->base).model.accumulated_root_motion.y;
  local_38 = in_stack_00000008 * in_stack_00000004->speed;
  pCVar2 = &(in_stack_00000004->base).model;
  while (0.0 < local_38) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (iVar8 == 100) {
      if (*(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) != 0) {
        pCVar7 = &in_stack_00000004[1].base;
        (pCVar7->base).actor_name[0x14] = '\0';
        (pCVar7->base).actor_name[0x15] = '\0';
        (pCVar7->base).actor_name[0x16] = '\0';
        (pCVar7->base).actor_name[0x17] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(&in_stack_00000004->base);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base);
    }
  }
  fVar15 = in_stack_00000004->speed;
  fVar16 = (float)3.1415926535000001;
  *(float *)((in_stack_00000004->base).unk1 + 0x28) =
       (in_stack_00000004->base).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base).unk1 + 0x2c) = in_stack_00000008 * fVar16 * fVar15;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar2->motion_controller);
  iVar8 = pSVar10->state_index;
  iVar11 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base);
  if (iVar11 == 0) {
    switch(iVar8) {
    case 0:
      if (in_stack_00000004[1].base.base.orient.bank == 0.0) {
        (*(((in_stack_00000004->base).base.vtable._ue)->_ue).enemyfunc2)();
        if (*(int *)(in_stack_00000004->unk2 + 4) == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
          break;
        }
        fVar15 = in_stack_00000004[1].base.base.location.position.z;
        if (fVar15 != 0.0) {
          if (in_stack_00000004[1].base.base.location.position.y == 0.0) {
            local_d0 = (in_stack_00000004->base).base.location.position.x -
                       *(float *)((int)fVar15 + 0x20);
            local_cc = (in_stack_00000004->base).base.location.position.y -
                       *(float *)((int)fVar15 + 0x24);
            local_c8 = (in_stack_00000004->base).base.location.position.z -
                       *(float *)((int)fVar15 + 0x28);
            if ((float)2 <
                SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc)) {
              in_stack_00000004[1].base.base.location.position.y = 1.4013e-45;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,8,1);
              break;
            }
          }
          else {
            in_stack_00000004[1].base.base.location.position.y = 0.0;
          }
        }
        if (in_stack_00000004[1].base.base.location.area_id == 0) {
          iVar8 = *(int *)(in_stack_00000004->unk2 + 4);
          local_10c.x = *(float *)(iVar8 + 0x20) -
                        (in_stack_00000004->base).base.location.position.x;
          local_10c.y = *(float *)(iVar8 + 0x24) -
                        (in_stack_00000004->base).base.location.position.y;
          local_10c.z = *(float *)(iVar8 + 0x28) -
                        (in_stack_00000004->base).base.location.position.z;
          local_20 = SQRT(local_10c.z * local_10c.z +
                          local_10c.x * local_10c.x + local_10c.y * local_10c.y);
          local_18 = local_20;
          if (local_20 < 3.0f + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_10c);
            local_14 = (CPlatform *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_70.y - (in_stack_00000004->base).base.orient.bank);
            if ((ABS((float)local_14) < (float)0.52359877558333301) &&
               (*(float *)in_stack_00000004->unk2 <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base).model.motion_controller,9,1);
              in_stack_00000004->unk2[0] = '\0';
              in_stack_00000004->unk2[1] = '\0';
              in_stack_00000004->unk2[2] = '\0';
              in_stack_00000004->unk2[3] = '@';
            }
          }
          if (local_20 < in_stack_00000004->guard_distance) {
            if (20.0f <= local_20) {
              iVar8 = 8;
            }
            else {
              iVar8 = 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base).model.motion_controller,iVar8,1);
          }
          if ((*(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) == 0) &&
             (iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.7), iVar8 != 0)) {
            core_mobster_cpp_FUN_005279f0();
            pCVar7 = &in_stack_00000004[1].base;
            (pCVar7->base).actor_name[0x18] = '\x01';
            (pCVar7->base).actor_name[0x19] = '\0';
            (pCVar7->base).actor_name[0x1a] = '\0';
            (pCVar7->base).actor_name[0x1b] = '\0';
          }
          else {
            pCVar7 = &in_stack_00000004[1].base;
            (pCVar7->base).actor_name[0x18] = '\x01';
            (pCVar7->base).actor_name[0x19] = '\0';
            (pCVar7->base).actor_name[0x1a] = '\0';
            (pCVar7->base).actor_name[0x1b] = '\0';
          }
          break;
        }
        if (*(float *)(in_stack_00000004[1].base.base.create_event + 0x60) <= (float)0.5
           ) break;
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if (iVar8 != 0) {
          core_mobster_cpp_FUN_00525720();
          break;
        }
      }
      else {
        fVar15 = *(float *)(in_stack_00000004[1].base.base.create_event + 0x60);
        *(CHero **)(in_stack_00000004->unk2 + 4) = g_HeroActors[g_LocalHeroIndex];
        if (fVar15 <= (float)0.5) break;
      }
      core_mobster_cpp_FUN_005271c0();
      break;
    case 1:
    case 8:
      (*(((in_stack_00000004->base).base.vtable._ue)->_ue).enemyfunc2)();
      pCVar2 = &(in_stack_00000004->base).model;
      if (*(int *)(in_stack_00000004->unk2 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else if (in_stack_00000004[1].base.base.location.position.y == 0.0) {
        iVar8 = core_mobster_cpp_FUN_00526d90();
        if (iVar8 == 0) {
          local_24 = 3.0f + 1.0;
          if ((in_stack_00000004->base).carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            local_24 = 30.0f;
          }
          (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
          (in_stack_00000004->base).model.accumulated_root_motion.y =
               (in_stack_00000004->base).model.accumulated_root_motion.z;
          (in_stack_00000004->base).model.accumulated_root_motion.x =
               (in_stack_00000004->base).model.accumulated_root_motion.y;
          local_a0 = 0;
          local_28 = 3.0f;
          local_98 = 3.0f;
          local_9c = 0;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0xbc))();
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&in_stack_00000004->base);
          if (-1 < iVar8) {
            pCVar1 = &(in_stack_00000004->base).base.location;
            local_64 = (pCVar1->position).x -
                       *(float *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x20);
            local_5c = (in_stack_00000004->base).base.location.position.z -
                       *(float *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x28);
            local_30 = SQRT(local_5c * local_5c + local_64 * local_64);
            local_60 = 0;
            local_1c = local_30;
            if ((local_30 <= local_24) && (*(float *)in_stack_00000004->unk2 <= 0.0)) {
              pCVar2 = &(in_stack_00000004->base).model;
              if ((in_stack_00000004->base).carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                iVar8 = *(int *)(in_stack_00000004->unk2 + 4);
                local_b8.x = *(float *)(iVar8 + 0x20) - (pCVar1->position).x;
                local_b8.y = *(float *)(iVar8 + 0x24) -
                             (in_stack_00000004->base).base.location.position.y;
                local_b8.z = *(float *)(iVar8 + 0x28) -
                             (in_stack_00000004->base).base.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_f4,&local_b8);
                local_14 = (CPlatform *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_f4.y - (in_stack_00000004->base).base.orient.bank);
                if (ABS((float)local_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                }
              }
              else if (local_28 + 1.0 <= local_30) {
                if (((float)0.5 <
                     *(float *)(in_stack_00000004[1].base.base.create_event + 0x60)) &&
                   ((float)in_stack_00000004[1].base.base.standing_platform <= 0.0)) {
                  in_stack_00000004[1].base.base.location.position.x = 0.0;
                  iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
                  if (iVar8 != 0) {
                    core_mobster_cpp_FUN_005279f0();
                  }
                  if (in_stack_00000004[1].base.base.location.position.x <= 0.0) {
                    core_mobster_cpp_FUN_005271c0();
                  }
                  else {
                    pCVar2 = &(in_stack_00000004->base).model;
                    if ((in_stack_00000004->base).carry_hands[0].carry_actor == (CDemonActor *)0x0)
                    {
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
                iVar8 = *(int *)(in_stack_00000004->unk2 + 4);
                local_e8.x = *(float *)(iVar8 + 0x20) - (pCVar1->position).x;
                local_e8.y = *(float *)(iVar8 + 0x24) -
                             (in_stack_00000004->base).base.location.position.y;
                local_e8.z = *(float *)(iVar8 + 0x28) -
                             (in_stack_00000004->base).base.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_58,&local_e8);
                local_14 = (CPlatform *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_58.y - (in_stack_00000004->base).base.orient.bank);
                if ((ABS((float)local_14) < (float)0.52359877558333301) &&
                   (*(float *)in_stack_00000004->unk2 <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                  in_stack_00000004->unk2[0] = '\0';
                  in_stack_00000004->unk2[1] = '\0';
                  in_stack_00000004->unk2[2] = '\0';
                  in_stack_00000004->unk2[3] = '@';
                }
              }
              in_stack_00000004->unk2[0] = '\0';
              in_stack_00000004->unk2[1] = '\0';
              in_stack_00000004->unk2[2] = -0x80;
              in_stack_00000004->unk2[3] = '?';
            }
            if (in_stack_00000004->guard_distance < local_30) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base).model.motion_controller,0,1);
            }
          }
        }
      }
      else {
        (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
        (in_stack_00000004->base).model.accumulated_root_motion.y =
             (in_stack_00000004->base).model.accumulated_root_motion.z;
        (in_stack_00000004->base).model.accumulated_root_motion.x =
             (in_stack_00000004->base).model.accumulated_root_motion.y;
        local_88 = 0;
        local_80 = 3.0f;
        local_84 = 0;
        (**(code **)(*(int *)((int)in_stack_00000004[1].base.base.location.position.z + 0x154) +
                    0xbc))();
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&in_stack_00000004->base);
        if (iVar8 < 1) {
          if (iVar8 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            in_stack_00000004[1].base.base.location.position.z = 0.0;
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
      (*(((in_stack_00000004->base).base.vtable._ue)->_ue).enemyfunc2)();
      if (*(int *)(in_stack_00000004->unk2 + 4) != 0) {
        pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((in_stack_00000004->base).carry_hands[1].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        if (pCVar13 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          local_34 = *(uint *)(pCVar13[4].actor_name + 8);
          pCVar5 = (pCVar13->vtable)._uc;
          pCVar13[4].actor_name[8] = 'd';
          pCVar13[4].actor_name[9] = '\0';
          pCVar13[4].actor_name[10] = '\0';
          pCVar13[4].actor_name[0xb] = '\0';
          iVar8 = (*(pCVar5->_uc).cfunc5)();
          if (iVar8 != 0) {
            (*(((pCVar13->vtable)._uc)->_uc).cfunc4)();
          }
          *(uint *)(pCVar13[4].actor_name + 8) = local_34;
        }
        pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((in_stack_00000004->base).carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        local_2c = pCVar13;
        if (pCVar13 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          pCVar5 = (pCVar13->vtable)._uc;
          uVar9 = *(uint *)(pCVar13[4].actor_name + 8);
          pCVar13[4].actor_name[8] = 'd';
          pCVar13[4].actor_name[9] = '\0';
          pCVar13[4].actor_name[10] = '\0';
          pCVar13[4].actor_name[0xb] = '\0';
          iVar8 = (*(pCVar5->_uc).cfunc5)();
          if (iVar8 == 0) {
            *(uint *)(local_2c[4].actor_name + 8) = uVar9;
          }
          else {
            (*(((pCVar13->vtable)._uc)->_uc).cfunc4)();
            *(uint *)(local_2c[4].actor_name + 8) = uVar9;
          }
        }
      }
      if ((*(float *)(in_stack_00000004[1].base.base.create_event + 0x60) < (float)0.5)
         || ((float)in_stack_00000004[1].base.base.standing_platform <= 0.0)) {
        if (in_stack_00000004[1].base.base.orient.bank == 0.0) {
          fVar16 = 4.0;
          fVar15 = 2.0;
        }
        else {
          fVar16 = 5.0;
          fVar15 = 4.0;
        }
        local_14 = (CPlatform *)core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar15,fVar16);
        in_stack_00000004[1].base.base.standing_platform = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base).model.motion_controller,0,1);
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
        if (iVar8 != 0) {
          core_mobster_cpp_FUN_005279f0();
        }
      }
      break;
    case 5:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_c4,pCVar14);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_160);
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_14 = (CPlatform *)local_160.damage_amount;
      if ((in_stack_00000004->base).model.part_visibility_flags
          [*(int *)(in_stack_00000004[1].base.base.create_event + 0x38)] != 0) {
        pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_118,&g_ZeroVector,
                             (in_stack_00000004->base).model.bone_transform.bone_world_matrices +
                             INT_02f37ecc);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_100,pCVar14);
        core_enemy_cpp_CEnemy_FUN_004a9880(in_stack_00000004);
      }
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_14 = (CPlatform *)local_160.damage_amount;
      if ((in_stack_00000004->base).model.part_visibility_flags
          [*(int *)(in_stack_00000004[1].base.base.create_event + 0x40)] != 0) {
        pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_94,&g_ZeroVector,
                             (in_stack_00000004->base).model.bone_transform.bone_world_matrices +
                             INT_02f37ed0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_dc,pCVar14);
        core_enemy_cpp_CEnemy_FUN_004a9880(in_stack_00000004);
      }
      break;
    case 10:
    case 0xb:
      if (in_stack_00000004[1].base.base.location.position.x <= 0.0) {
        core_mobster_cpp_FUN_005271c0();
      }
    }
    goto switchD_0052677f_caseD_7;
  }
  uVar4 = *(uint *)((in_stack_00000004->base).unk2 + 0x10);
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_00525b6c:
      iVar8 = 1;
    }
    else {
LAB_00525dac:
      iVar8 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base).model.motion_controller,iVar8,1);
  }
  else {
    if (uVar4 < 3) goto LAB_00525b6c;
    if (uVar4 != 3) goto LAB_00525dac;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base).model.accumulated_root_motion.y =
       (in_stack_00000004->base).model.accumulated_root_motion.z;
  (in_stack_00000004->base).model.accumulated_root_motion.x =
       (in_stack_00000004->base).model.accumulated_root_motion.y;
switchD_0052677f_caseD_7:
  if (0.0 < *(float *)in_stack_00000004->unk2) {
    *(float *)in_stack_00000004->unk2 = *(float *)in_stack_00000004->unk2 - in_stack_00000008;
  }
  if (in_stack_00000004[1].base.base.location.area_id == 0) {
    iVar8 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base);
    if (iVar8 != 0) {
      if ((*(int *)(in_stack_00000004->unk2 + 4) != 0) &&
         (pCVar12 = (CEnemy *)
                    (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))()
         , pCVar12 == in_stack_00000004)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->unk2 + 4));
      }
      *(float *)((in_stack_00000004->base).unk1 + 0x20) =
           *(float *)((in_stack_00000004->base).unk1 + 0x20) -
           in_stack_00000008 * (float)32;
      local_ac = *(float *)((in_stack_00000004->base).unk1 + 0x1c) * in_stack_00000008;
      local_a8 = *(float *)((in_stack_00000004->base).unk1 + 0x20) * in_stack_00000008;
      pcVar3 = (in_stack_00000004->base).unk1 + 0x10;
      local_a4 = in_stack_00000008 * *(float *)((in_stack_00000004->base).unk1 + 0x24);
      pCVar14 = &(in_stack_00000004->base).model.accumulated_root_motion;
      local_124 = local_ac + *(float *)pcVar3;
      local_120 = local_a8 + *(float *)((in_stack_00000004->base).unk1 + 0x14);
      local_11c = local_a4 + *(float *)((in_stack_00000004->base).unk1 + 0x18);
      local_7c = local_124 + pCVar14->x;
      local_78 = local_120 + (in_stack_00000004->base).model.accumulated_root_motion.y;
      local_74 = local_11c + (in_stack_00000004->base).model.accumulated_root_motion.z;
      (in_stack_00000004->base).unk1[0x18] = '\0';
      (in_stack_00000004->base).unk1[0x19] = '\0';
      (in_stack_00000004->base).unk1[0x1a] = '\0';
      (in_stack_00000004->base).unk1[0x1b] = '\0';
      *(uint *)((in_stack_00000004->base).unk1 + 0x14) =
           *(uint *)((in_stack_00000004->base).unk1 + 0x18);
      *(float *)pcVar3 = *(float *)((in_stack_00000004->base).unk1 + 0x14);
      (in_stack_00000004->base).model.accumulated_root_motion.z = 0.0;
      fVar15 = (in_stack_00000004->base).model.accumulated_root_motion.z;
      (in_stack_00000004->base).model.accumulated_root_motion.y = fVar15;
      pCVar14->x = fVar15;
      core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base);
    }
  }
  else {
    core_mobster_cpp_FUN_00525650();
  }
  pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((in_stack_00000004->base).carry_hands[1].carry_actor,
                       g_CWeaponClassInfo.name_hash);
  if (pCVar13 != (CDemonActor *)0x0) {
    (*((pCVar13->vtable)._ub)->process)(pCVar13,in_stack_00000008);
  }
  pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((in_stack_00000004->base).carry_hands[0].carry_actor,
                       g_CWeaponClassInfo.name_hash);
  if (pCVar13 != (CDemonActor *)0x0) {
    (*((pCVar13->vtable)._ub)->process)(pCVar13,in_stack_00000008);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base).model);
  iVar8 = (*(((in_stack_00000004->base).base.vtable._uc)->_uc).isDamageable)
                    (&in_stack_00000004->base);
  if (iVar8 == 0) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0();
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base);
  return;
}
