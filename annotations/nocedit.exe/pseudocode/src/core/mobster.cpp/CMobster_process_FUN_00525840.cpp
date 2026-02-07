// Name: core_mobster.cpp_CMobster_process_FUN_00525840
// Address: 00525840
// Address Range: [[00525840, 00526793]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_process_FUN_00525840(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_process_FUN_00525840(CMobster *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  uint uVar4;
  CCharacter_full_vtable *pCVar5;
  int iVar6;
  uint uVar7;
  SMotion *pSVar8;
  int iVar9;
  CMobster *pCVar10;
  CDemonActor *pCVar11;
  CVector3f *pCVar12;
  int extraout_EAX;
  int extraout_EAX_00;
  float fVar13;
  float fVar14;
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
  float local_14;
  
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar6 == 0) {
    if (this_ptr->vehicle != (CDemonActor *)0x0) {
      core_mobster_cpp_CMobster_FUN_00525650(this_ptr);
      core_charactr_cpp_CCharacter_FUN_0042d090((CCharacter *)this_ptr);
    }
    return;
  }
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk2 + 0x38)] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe64);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,(SDamageInfo *)&stack0xfffffe64);
  }
  if ((this_ptr->base).base.is_fully_burned != 0) {
    (this_ptr->base).base.burn_alpha = 0.0;
  }
  if (0 < (this_ptr->base).base.fire_count) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 4));
    iVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
    if (((iVar6 == 0) &&
        (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk2 + 0xc)),
        iVar6 == 0)) &&
       (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->unk2), iVar6 == 0)) {
      uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"mob-scream?.wav");
      *(uint *)(this_ptr->unk2 + 0xc) = uVar7;
    }
  }
  fVar13 = *(float *)(this_ptr->unk2 + 0x40) - delta_time;
  *(float *)(this_ptr->unk2 + 0x40) = fVar13;
  if (fVar13 < 0.0) {
    this_ptr->unk2[0x40] = '\0';
    this_ptr->unk2[0x41] = '\0';
    this_ptr->unk2[0x42] = '\0';
    this_ptr->unk2[0x43] = '\0';
  }
  fVar13 = *(float *)(this_ptr->unk1 + 0x20) - delta_time;
  *(float *)(this_ptr->unk1 + 0x20) = fVar13;
  if (fVar13 < 0.0) {
    this_ptr->unk1[0x20] = '\0';
    this_ptr->unk1[0x21] = '\0';
    this_ptr->unk1[0x22] = '\0';
    this_ptr->unk1[0x23] = '\0';
  }
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk2 + 0x1c)] == 0) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
  }
  if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk2 + 0x14)] == 0) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
  }
  if ((this_ptr->hold_pos_flag == 0) &&
     (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->hold_pos_condition), iVar6 != 0)) {
    this_ptr->hold_pos_flag = 1;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_38 = delta_time * (this_ptr->base).speed;
  pCVar2 = &(this_ptr->base).base.model;
  while (0.0 < local_38) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (iVar6 == 100) {
      if (*(int *)(this_ptr->unk1 + 0x14) != 0) {
        this_ptr->unk1[0x14] = '\0';
        this_ptr->unk1[0x15] = '\0';
        this_ptr->unk1[0x16] = '\0';
        this_ptr->unk1[0x17] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
  }
  fVar13 = (this_ptr->base).speed;
  fVar14 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar14 * fVar13;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  iVar6 = pSVar8->state_index;
  iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    switch(iVar6) {
    case 0:
      if (this_ptr->hold_pos_flag == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (extraout_EAX != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
          break;
        }
        pCVar11 = this_ptr->our_post;
        if (pCVar11 != (CDemonActor *)0x0) {
          if (this_ptr->post_mode == 0) {
            local_d0 = (this_ptr->base).base.base.location.position.x -
                       (pCVar11->location).position.x;
            local_cc = (this_ptr->base).base.base.location.position.y -
                       (pCVar11->location).position.y;
            local_c8 = (this_ptr->base).base.base.location.position.z -
                       (pCVar11->location).position.z;
            if ((float)2 <
                SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc)) {
              this_ptr->post_mode = 1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,8,1);
              break;
            }
          }
          else {
            this_ptr->post_mode = 0;
          }
        }
        if (this_ptr->vehicle == (CDemonActor *)0x0) {
          iVar6 = *(int *)((this_ptr->base).unk2 + 4);
          local_10c.x = *(float *)(iVar6 + 0x20) - (this_ptr->base).base.base.location.position.x;
          local_10c.y = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_10c.z = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_10c.z * local_10c.z +
                          local_10c.x * local_10c.x + local_10c.y * local_10c.y);
          local_18 = local_20;
          if (local_20 < 3.0f + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_10c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_70.y - (this_ptr->base).base.base.orient.bank);
            if ((ABS(local_14) < (float)0.52359877558333301) && (*(float *)(this_ptr->base).unk2 <= 0.0)
               ) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,9,1);
              (this_ptr->base).unk2[0] = '\0';
              (this_ptr->base).unk2[1] = '\0';
              (this_ptr->base).unk2[2] = '\0';
              (this_ptr->base).unk2[3] = '@';
            }
          }
          if (local_20 < (this_ptr->base).guard_distance) {
            if (20.0f <= local_20) {
              iVar6 = 8;
            }
            else {
              iVar6 = 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,iVar6,1);
          }
          if ((*(int *)(this_ptr->unk1 + 0x18) == 0) &&
             (iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.7), iVar6 != 0)) {
            core_mobster_cpp_CMobster_FUN_005279f0(this_ptr);
            this_ptr->unk1[0x18] = '\x01';
            this_ptr->unk1[0x19] = '\0';
            this_ptr->unk1[0x1a] = '\0';
            this_ptr->unk1[0x1b] = '\0';
          }
          else {
            this_ptr->unk1[0x18] = '\x01';
            this_ptr->unk1[0x19] = '\0';
            this_ptr->unk1[0x1a] = '\0';
            this_ptr->unk1[0x1b] = '\0';
          }
          break;
        }
        if (*(float *)(this_ptr->unk2 + 0x3c) <= (float)0.5) break;
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if (iVar6 != 0) {
          core_mobster_cpp_CMobster_FUN_00525720(this_ptr);
          break;
        }
      }
      else {
        fVar13 = *(float *)(this_ptr->unk2 + 0x3c);
        *(CHero **)((this_ptr->base).unk2 + 4) = g_HeroActors[g_LocalHeroIndex];
        if (fVar13 <= (float)0.5) break;
      }
      core_mobster_cpp_CMobster_FUN_005271c0(this_ptr);
      break;
    case 1:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      pCVar2 = &(this_ptr->base).base.model;
      if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else if (this_ptr->post_mode == 0) {
        iVar6 = core_mobster_cpp_CMobster_FUN_00526d90(this_ptr);
        if (iVar6 == 0) {
          local_24 = 3.0f + 1.0;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            local_24 = 30.0f;
          }
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_a0 = 0;
          local_28 = 3.0f;
          local_98 = 3.0f;
          local_9c = 0;
          (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
          if (-1 < iVar6) {
            pCVar1 = &(this_ptr->base).base.base.location;
            iVar6 = *(int *)((this_ptr->base).unk2 + 4);
            local_64 = (pCVar1->position).x - *(float *)(iVar6 + 0x20);
            local_5c = (this_ptr->base).base.base.location.position.z - *(float *)(iVar6 + 0x28);
            local_30 = SQRT(local_5c * local_5c + local_64 * local_64);
            local_60 = 0;
            local_1c = local_30;
            if ((local_30 <= local_24) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
              pCVar2 = &(this_ptr->base).base.model;
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                iVar6 = *(int *)((this_ptr->base).unk2 + 4);
                local_b8.x = *(float *)(iVar6 + 0x20) - (pCVar1->position).x;
                local_b8.y = *(float *)(iVar6 + 0x24) -
                             (this_ptr->base).base.base.location.position.y;
                local_b8.z = *(float *)(iVar6 + 0x28) -
                             (this_ptr->base).base.base.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_f4,&local_b8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_f4.y - (this_ptr->base).base.base.orient.bank);
                if (ABS(local_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                }
              }
              else if (local_28 + 1.0 <= local_30) {
                if (((float)0.5 < *(float *)(this_ptr->unk2 + 0x3c)) &&
                   (*(float *)(this_ptr->unk2 + 0x40) <= 0.0)) {
                  this_ptr->unk1[0x20] = '\0';
                  this_ptr->unk1[0x21] = '\0';
                  this_ptr->unk1[0x22] = '\0';
                  this_ptr->unk1[0x23] = '\0';
                  iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
                  if (iVar6 != 0) {
                    core_mobster_cpp_CMobster_FUN_005279f0(this_ptr);
                  }
                  if (*(float *)(this_ptr->unk1 + 0x20) <= 0.0) {
                    core_mobster_cpp_CMobster_FUN_005271c0(this_ptr);
                  }
                  else {
                    pCVar2 = &(this_ptr->base).base.model;
                    if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
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
                iVar6 = *(int *)((this_ptr->base).unk2 + 4);
                local_e8.x = *(float *)(iVar6 + 0x20) - (pCVar1->position).x;
                local_e8.y = *(float *)(iVar6 + 0x24) -
                             (this_ptr->base).base.base.location.position.y;
                local_e8.z = *(float *)(iVar6 + 0x28) -
                             (this_ptr->base).base.base.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_58,&local_e8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_58.y - (this_ptr->base).base.base.orient.bank);
                if ((ABS(local_14) < (float)0.52359877558333301) &&
                   (*(float *)(this_ptr->base).unk2 <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                  (this_ptr->base).unk2[0] = '\0';
                  (this_ptr->base).unk2[1] = '\0';
                  (this_ptr->base).unk2[2] = '\0';
                  (this_ptr->base).unk2[3] = '@';
                }
              }
              (this_ptr->base).unk2[0] = '\0';
              (this_ptr->base).unk2[1] = '\0';
              (this_ptr->base).unk2[2] = -0x80;
              (this_ptr->base).unk2[3] = '?';
            }
            if ((this_ptr->base).guard_distance < local_30) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
            }
          }
        }
      }
      else {
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_88 = 0;
        local_80 = 3.0f;
        local_84 = 0;
        (*((this_ptr->our_post->vtable)._ub)->getPathMap)(this_ptr->our_post);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (iVar6 < 1) {
          if (iVar6 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            this_ptr->our_post = (CDemonActor *)0x0;
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
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
        pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((this_ptr->base).base.carry_hands[1].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        if (pCVar11 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          local_34 = *(uint *)(pCVar11[4].actor_name + 8);
          pCVar5 = (pCVar11->vtable)._uc;
          pCVar11[4].actor_name[8] = 'd';
          pCVar11[4].actor_name[9] = '\0';
          pCVar11[4].actor_name[10] = '\0';
          pCVar11[4].actor_name[0xb] = '\0';
          iVar6 = (*(pCVar5->_uc).cfunc5)();
          if (iVar6 != 0) {
            (*(((pCVar11->vtable)._uc)->_uc).cfunc4)();
          }
          *(uint *)(pCVar11[4].actor_name + 8) = local_34;
        }
        pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((this_ptr->base).base.carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        local_2c = pCVar11;
        if (pCVar11 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          pCVar5 = (pCVar11->vtable)._uc;
          uVar7 = *(uint *)(pCVar11[4].actor_name + 8);
          pCVar11[4].actor_name[8] = 'd';
          pCVar11[4].actor_name[9] = '\0';
          pCVar11[4].actor_name[10] = '\0';
          pCVar11[4].actor_name[0xb] = '\0';
          iVar6 = (*(pCVar5->_uc).cfunc5)();
          if (iVar6 == 0) {
            *(uint *)(local_2c[4].actor_name + 8) = uVar7;
          }
          else {
            (*(((pCVar11->vtable)._uc)->_uc).cfunc4)();
            *(uint *)(local_2c[4].actor_name + 8) = uVar7;
          }
        }
      }
      if ((*(float *)(this_ptr->unk2 + 0x3c) < (float)0.5) ||
         (*(float *)(this_ptr->unk2 + 0x40) <= 0.0)) {
        if (this_ptr->hold_pos_flag == 0) {
          fVar14 = 4.0;
          fVar13 = 2.0;
        }
        else {
          fVar14 = 5.0;
          fVar13 = 4.0;
        }
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar13,fVar14);
        *(float *)(this_ptr->unk2 + 0x40) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
        if (iVar6 != 0) {
          core_mobster_cpp_CMobster_FUN_005279f0(this_ptr);
        }
      }
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c4,pCVar12);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_160);
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_160.attacker = (CDemonActor *)this_ptr;
      local_160.wielder = (CDemonActor *)this_ptr;
      local_14 = local_160.damage_amount;
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk2 + 0x14)] != 0) {
        pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_118,&g_ZeroVector,
                             (CMatrix3x4f *)
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices
                             [INT_02f37ecc].m);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_100,pCVar12);
        core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      }
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_14 = local_160.damage_amount;
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk2 + 0x1c)] != 0) {
        pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_94,&g_ZeroVector,
                             (CMatrix3x4f *)
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices
                             [INT_02f37ed0].m);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_dc,pCVar12);
        core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      }
      break;
    case 10:
    case 0xb:
      if (*(float *)(this_ptr->unk1 + 0x20) <= 0.0) {
        core_mobster_cpp_CMobster_FUN_005271c0(this_ptr);
      }
    }
    goto switchD_0052677f_caseD_7;
  }
  uVar4 = (this_ptr->base).base.field22_0x25b0;
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_00525b6c:
      iVar6 = 1;
    }
    else {
LAB_00525dac:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
  else {
    if (uVar4 < 3) goto LAB_00525b6c;
    if (uVar4 != 3) goto LAB_00525dac;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0052677f_caseD_7:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  if (this_ptr->vehicle == (CDemonActor *)0x0) {
    iVar6 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar6 != 0) {
      iVar6 = *(int *)((this_ptr->base).unk2 + 4);
      if ((iVar6 != 0) &&
         (pCVar10 = (CMobster *)(**(code **)(*(int *)(iVar6 + 0x154) + 0x108))(),
         pCVar10 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base).unk2 + 4));
      }
      (this_ptr->base).base.field7_0x2428.y =
           (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
      local_ac = (this_ptr->base).base.field7_0x2428.x * delta_time;
      local_a8 = (this_ptr->base).base.field7_0x2428.y * delta_time;
      pCVar12 = &(this_ptr->base).base.field6_0x241c;
      local_a4 = delta_time * (this_ptr->base).base.field7_0x2428.z;
      pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
      local_124 = local_ac + pCVar12->x;
      local_120 = local_a8 + (this_ptr->base).base.field6_0x241c.y;
      local_11c = local_a4 + (this_ptr->base).base.field6_0x241c.z;
      local_7c = local_124 + pCVar3->x;
      local_78 = local_120 + (this_ptr->base).base.model.accumulated_root_motion.y;
      local_74 = local_11c + (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.field6_0x241c.z = 0.0;
      (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
      pCVar12->x = (this_ptr->base).base.field6_0x241c.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar13 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar13;
      pCVar3->x = fVar13;
      core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
    }
  }
  else {
    core_mobster_cpp_CMobster_FUN_00525650(this_ptr);
  }
  pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash
                      );
  if (pCVar11 != (CDemonActor *)0x0) {
    (*((pCVar11->vtable)._ub)->process)(pCVar11,delta_time);
  }
  pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((this_ptr->base).base.carry_hands[0].carry_actor,g_CWeaponClassInfo.name_hash
                      );
  if (pCVar11 != (CDemonActor *)0x0) {
    (*((pCVar11->vtable)._ub)->process)(pCVar11,delta_time);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  iVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
  if (iVar6 == 0) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0(this_ptr);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
}
