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
  CCharacter_full_vtable *pCVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  SMotion *pSVar8;
  int iVar9;
  CMobster *pCVar10;
  CDemonActor *pCVar11;
  CVector3f *pCVar12;
  CCharacter *pCVar13;
  int extraout_EAX;
  CPathMap *pCVar14;
  int extraout_EAX_00;
  CMobster *in_stack_fffffe70;
  CDemonActor *in_stack_fffffe74;
  float in_stack_fffffe78;
  float fVar15;
  float fVar16;
  char *in_stack_fffffe84;
  float in_stack_fffffe88;
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
  CVector3f local_7c;
  CVector3f local_70;
  float local_64;
  uint local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  float local_38;
  float local_34;
  float local_30;
  CCharacter *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    if (this_ptr->vehicle != (CDemonActor *)0x0) {
      core_mobster_cpp_CMobster_FUN_00525650(this_ptr);
      core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090
                ((CCharacter *)this_ptr,delta_time);
    }
    return;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk2 + 0x38)] == 0)
  {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe64);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,(SDamageInfo *)&stack0xfffffe64);
  }
  if ((this_ptr->base).base.is_fully_burned != 0) {
    (this_ptr->base).base.burn_alpha = 0.0;
  }
  if (0 < (this_ptr->base).base.fire_count) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
    in_stack_fffffe74 = (CDemonActor *)0x0;
    in_stack_fffffe70 = (CMobster *)0x0;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk2 + 4));
    iVar5 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if (iVar5 == 0) {
      in_stack_fffffe84 = *(char **)(this_ptr->unk2 + 0xc);
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)in_stack_fffffe84);
      if (iVar5 == 0) {
        in_stack_fffffe84 = *(char **)this_ptr->unk2;
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)in_stack_fffffe84);
        if (iVar5 == 0) {
          in_stack_fffffe84 = "mob-scream?.wav";
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"mob-scream?.wav");
          *(uint *)(this_ptr->unk2 + 0xc) = uVar7;
        }
      }
    }
  }
  fVar15 = *(float *)(this_ptr->unk2 + 0x40) - delta_time;
  *(float *)(this_ptr->unk2 + 0x40) = fVar15;
  if (fVar15 < 0.0) {
    this_ptr->unk2[0x40] = '\0';
    this_ptr->unk2[0x41] = '\0';
    this_ptr->unk2[0x42] = '\0';
    this_ptr->unk2[0x43] = '\0';
  }
  fVar15 = *(float *)(this_ptr->unk1 + 0x18) - delta_time;
  *(float *)(this_ptr->unk1 + 0x18) = fVar15;
  if (fVar15 < 0.0) {
    this_ptr->unk1[0x18] = '\0';
    this_ptr->unk1[0x19] = '\0';
    this_ptr->unk1[0x1a] = '\0';
    this_ptr->unk1[0x1b] = '\0';
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk2 + 0x1c)] == 0)
  {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk2 + 0x14)] == 0)
  {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
  }
  if ((this_ptr->hold_pos_flag == 0) &&
     (iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->hold_pos_condition), iVar5 != 0)) {
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
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (uVar6 == 100) {
      pCVar11 = *(CDemonActor **)(this_ptr->unk1 + 0xc);
      if (pCVar11 != (CDemonActor *)0x0) {
        this_ptr->unk1[0xc] = '\0';
        this_ptr->unk1[0xd] = '\0';
        this_ptr->unk1[0xe] = '\0';
        this_ptr->unk1[0xf] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  ((CCharacter *)this_ptr,1,pCVar11,0.2);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar6);
    }
  }
  fVar15 = (this_ptr->base).speed;
  fVar16 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar16 * fVar15;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  iVar5 = pSVar8->state_index;
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    switch(iVar5) {
    case 0:
      if (this_ptr->hold_pos_flag == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CDemonActor *)0x0) {
          in_stack_fffffe70 = (CMobster *)delta_time;
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (extraout_EAX != 0) {
            in_stack_fffffe70 = (CMobster *)0x1;
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
              in_stack_fffffe70 = (CMobster *)0x1;
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
          pCVar11 = (this_ptr->base).victim;
          local_10c.x = (pCVar11->location).position.x -
                        (this_ptr->base).base.base.location.position.x;
          local_10c.y = (pCVar11->location).position.y -
                        (this_ptr->base).base.base.location.position.y;
          local_10c.z = (pCVar11->location).position.z -
                        (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_10c.z * local_10c.z +
                          local_10c.x * local_10c.x + local_10c.y * local_10c.y);
          local_18 = local_20;
          if (local_20 < 3.0f + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_10c);
            in_stack_fffffe70 = (CMobster *)(local_70.y - (this_ptr->base).base.base.orient.vec.y);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)in_stack_fffffe70);
            if ((ABS(local_14) < (float)0.52359877558333301) && (*(float *)(this_ptr->base).unk2 <= 0.0)
               ) {
              in_stack_fffffe70 = (CMobster *)0x1;
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
              iVar5 = 8;
            }
            else {
              iVar5 = 1;
            }
            in_stack_fffffe70 = (CMobster *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,iVar5,1);
          }
          if (*(int *)(this_ptr->unk1 + 0x10) == 0) {
            in_stack_fffffe70 = (CMobster *)0x3f333333;
            iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.7);
            if (iVar5 != 0) {
              in_stack_fffffe70 = (CMobster *)0x1;
              core_mobster_cpp_CMobster_FUN_005279f0(this_ptr);
              this_ptr->unk1[0x10] = '\x01';
              this_ptr->unk1[0x11] = '\0';
              this_ptr->unk1[0x12] = '\0';
              this_ptr->unk1[0x13] = '\0';
              break;
            }
          }
          this_ptr->unk1[0x10] = '\x01';
          this_ptr->unk1[0x11] = '\0';
          this_ptr->unk1[0x12] = '\0';
          this_ptr->unk1[0x13] = '\0';
          break;
        }
        if (*(float *)(this_ptr->unk2 + 0x3c) <= (float)0.5) break;
        in_stack_fffffe70 = (CMobster *)0x3e800000;
        iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if (iVar5 != 0) {
          in_stack_fffffe70 = this_ptr;
          core_mobster_cpp_CMobster_FUN_00525720(this_ptr);
          break;
        }
      }
      else {
        fVar15 = *(float *)(this_ptr->unk2 + 0x3c);
        (this_ptr->base).victim = (CDemonActor *)g_HeroActors[g_LocalHeroIndex];
        if (fVar15 <= (float)0.5) break;
      }
      core_mobster_cpp_CMobster_FUN_005271c0(this_ptr);
      break;
    case 1:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar2 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_00 == 0) {
          in_stack_fffffe70 = (CMobster *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
        else {
          in_stack_fffffe70 = (CMobster *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else if (this_ptr->post_mode == 0) {
        in_stack_fffffe70 = (CMobster *)delta_time;
        iVar5 = core_mobster_cpp_CMobster_FUN_00526d90(this_ptr);
        if (iVar5 == 0) {
          local_24 = 3.0f + 1.0;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            local_24 = 30.0f;
          }
          in_stack_fffffe70 = (CMobster *)0x3e32b8c2;
          pCVar12 = (CVector3f *)0x3f000000;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_a0 = 0;
          local_28 = 3.0f;
          local_98 = 3.0f;
          local_9c = 0;
          pCVar11 = (this_ptr->base).victim;
          pCVar14 = (*((pCVar11->vtable)._ub)->getPathMap)(pCVar11);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                             pCVar14,pCVar12,(float)in_stack_fffffe70,(float)in_stack_fffffe74);
          if (-1 < iVar5) {
            pCVar1 = &(this_ptr->base).base.base.location;
            pCVar11 = (this_ptr->base).victim;
            local_64 = (pCVar1->position).x - (pCVar11->location).position.x;
            local_5c = (this_ptr->base).base.base.location.position.z -
                       (pCVar11->location).position.z;
            local_30 = SQRT(local_5c * local_5c + local_64 * local_64);
            local_60 = 0;
            local_1c = local_30;
            if ((local_30 <= local_24) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
              pCVar2 = &(this_ptr->base).base.model;
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                pCVar11 = (this_ptr->base).victim;
                local_b8.x = (pCVar11->location).position.x - (pCVar1->position).x;
                local_b8.y = (pCVar11->location).position.y -
                             (this_ptr->base).base.base.location.position.y;
                local_b8.z = (pCVar11->location).position.z -
                             (this_ptr->base).base.base.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_f4,&local_b8);
                in_stack_fffffe70 = (CMobster *)0x52674a;
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_f4.y - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(local_14) < (float)0.52359877558333301) {
                  in_stack_fffffe70 = (CMobster *)0x9;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                }
              }
              else if (local_28 + 1.0 <= local_30) {
                if (((float)0.5 < *(float *)(this_ptr->unk2 + 0x3c)) &&
                   (*(float *)(this_ptr->unk2 + 0x40) <= 0.0)) {
                  this_ptr->unk1[0x18] = '\0';
                  this_ptr->unk1[0x19] = '\0';
                  this_ptr->unk1[0x1a] = '\0';
                  this_ptr->unk1[0x1b] = '\0';
                  iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
                  if (iVar5 != 0) {
                    core_mobster_cpp_CMobster_FUN_005279f0(this_ptr);
                  }
                  if (*(float *)(this_ptr->unk1 + 0x18) <= 0.0) {
                    in_stack_fffffe70 = (CMobster *)0x526701;
                    core_mobster_cpp_CMobster_FUN_005271c0(this_ptr);
                  }
                  else {
                    pCVar2 = &(this_ptr->base).base.model;
                    if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
                      in_stack_fffffe70 = (CMobster *)0xa;
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,10,1);
                    }
                    else {
                      in_stack_fffffe70 = (CMobster *)0xb;
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,0xb,1);
                    }
                  }
                }
              }
              else {
                pCVar11 = (this_ptr->base).victim;
                local_e8.x = (pCVar11->location).position.x - (pCVar1->position).x;
                local_e8.y = (pCVar11->location).position.y -
                             (this_ptr->base).base.base.location.position.y;
                local_e8.z = (pCVar11->location).position.z -
                             (this_ptr->base).base.base.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_58,&local_e8);
                in_stack_fffffe70 = (CMobster *)0x526602;
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_58.y - (this_ptr->base).base.base.orient.vec.y);
                if ((ABS(local_14) < (float)0.52359877558333301) &&
                   (*(float *)(this_ptr->base).unk2 <= 0.0)) {
                  in_stack_fffffe70 = (CMobster *)0x9;
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
              in_stack_fffffe70 = (CMobster *)0x0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
            }
          }
        }
      }
      else {
        in_stack_fffffe70 = (CMobster *)0x3e32b8c2;
        pCVar12 = (CVector3f *)0x3f000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_88 = 0;
        local_80 = 3.0f;
        local_84 = 0;
        pCVar14 = (*((this_ptr->our_post->vtable)._ub)->getPathMap)(this_ptr->our_post);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(this_ptr->our_post->location).position,pCVar14,
                           pCVar12,(float)in_stack_fffffe70,(float)in_stack_fffffe74);
        if (iVar5 < 1) {
          if (iVar5 < 0) {
            in_stack_fffffe70 = (CMobster *)0x0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            this_ptr->our_post = (CDemonActor *)0x0;
          }
        }
        else {
          in_stack_fffffe70 = (CMobster *)0x0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CDemonActor *)0x0) {
        in_stack_fffffe70 = (CMobster *)g_CWeaponClassInfo.name_hash;
        pCVar10 = (CMobster *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((this_ptr->base).base.carry_hands[1].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        if (pCVar10 != (CMobster *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          local_34 = (pCVar10->base).base.model.transformed_vertices[0x4f].y;
          pCVar4 = (pCVar10->base).base.base.vtable._uc;
          (pCVar10->base).base.model.transformed_vertices[0x4f].y = 1.4013e-43;
          in_stack_fffffe70 = pCVar10;
          iVar5 = (*(pCVar4->_uc).canBeGrabbed)
                            ((CCharacter *)pCVar10,in_stack_fffffe74,(int)in_stack_fffffe78);
          if (iVar5 != 0) {
            (*(((pCVar10->base).base.base.vtable._uc)->_uc).isGrabbable)((CCharacter *)pCVar10);
          }
          (pCVar10->base).base.model.transformed_vertices[0x4f].y = local_34;
        }
        pCVar13 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((this_ptr->base).base.carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        local_2c = pCVar13;
        if (pCVar13 != (CCharacter *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          pCVar4 = (pCVar13->base).vtable._uc;
          fVar15 = (pCVar13->model).transformed_vertices[0x4f].y;
          (pCVar13->model).transformed_vertices[0x4f].y = 1.4013e-43;
          iVar5 = (*(pCVar4->_uc).canBeGrabbed)
                            (pCVar13,(CDemonActor *)in_stack_fffffe84,(int)in_stack_fffffe88);
          if (iVar5 == 0) {
            (local_2c->model).transformed_vertices[0x4f].y = fVar15;
          }
          else {
            (*(((pCVar13->base).vtable._uc)->_uc).isGrabbable)(pCVar13);
            (local_2c->model).transformed_vertices[0x4f].y = fVar15;
          }
        }
      }
      if ((*(float *)(this_ptr->unk2 + 0x3c) < (float)0.5) ||
         (*(float *)(this_ptr->unk2 + 0x40) <= 0.0)) {
        if (this_ptr->hold_pos_flag == 0) {
          fVar16 = 4.0;
          fVar15 = 2.0;
        }
        else {
          fVar16 = 5.0;
          fVar15 = 4.0;
        }
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar15,fVar16);
        *(float *)(this_ptr->unk2 + 0x40) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
        iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
        if (iVar5 != 0) {
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
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk2 + 0x14)] !=
          0) {
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
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk2 + 0x1c)] !=
          0) {
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
      if (*(float *)(this_ptr->unk1 + 0x18) <= 0.0) {
        core_mobster_cpp_CMobster_FUN_005271c0(this_ptr);
      }
    }
    goto switchD_0052677f_caseD_7;
  }
  uVar6 = (this_ptr->base).base.is_walking;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_00525b6c:
      iVar5 = 1;
    }
    else {
LAB_00525dac:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
  else {
    if (uVar6 < 3) goto LAB_00525b6c;
    if (uVar6 != 3) goto LAB_00525dac;
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
    iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar5 != 0) {
      pCVar13 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar13 != (CCharacter *)0x0) &&
         (pCVar10 = (CMobster *)(*(((pCVar13->base).vtable._uc)->_uc).getGrabber)(pCVar13),
         pCVar10 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(this_ptr->base).victim);
      }
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
      local_ac = (this_ptr->base).base.velocity.x * delta_time;
      local_a8 = (this_ptr->base).base.velocity.y * delta_time;
      pCVar12 = &(this_ptr->base).base.position_delta;
      local_a4 = delta_time * (this_ptr->base).base.velocity.z;
      pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
      local_124 = local_ac + pCVar12->x;
      local_120 = local_a8 + (this_ptr->base).base.position_delta.y;
      local_11c = local_a4 + (this_ptr->base).base.position_delta.z;
      local_7c.x = local_124 + pCVar3->x;
      local_7c.y = local_120 + (this_ptr->base).base.model.accumulated_root_motion.y;
      local_7c.z = local_11c + (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar12->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar15 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar15;
      pCVar3->x = fVar15;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_7c);
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
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  iVar5 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0(this_ptr);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_fffffe70);
  return;
}
