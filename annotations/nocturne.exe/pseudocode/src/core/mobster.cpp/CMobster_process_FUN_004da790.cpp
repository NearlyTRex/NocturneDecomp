// Name: core_mobster.cpp_CMobster_process_FUN_004da790
// Address: 004da790
// Address Range: [[004da790, 004db6e3]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_process_FUN_004da790(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_process_FUN_004da790(CMobster *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CCharacter_full_vtable *pCVar4;
  int iVar5;
  EDeathState EVar6;
  uint uVar7;
  SMotion *pSVar8;
  int iVar9;
  CMobster *pCVar10;
  CDemonActor *pCVar11;
  CVector3f *pCVar12;
  CCharacter *pCVar13;
  CPathMap *pCVar14;
  float fVar15;
  SDamageInfo *pSVar16;
  CDemonActor *in_stack_fffffe74;
  float in_stack_fffffe78;
  CMobster *in_stack_fffffe80;
  float fVar17;
  CDemonActor *in_stack_fffffe88;
  EAmmoType in_stack_fffffe8c;
  CDemonActor *in_stack_fffffe94;
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
  
  iVar5 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    if (this_ptr->vehicle != (CDemonActor *)0x0) {
      core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0(this_ptr);
      core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220
                ((CCharacter *)this_ptr,delta_time);
    }
    return;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffe64);
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
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
    in_stack_fffffe80 = this_ptr;
    EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if (EVar6 == DEATH_STATE_ALIVE) {
      in_stack_fffffe80 = (CMobster *)0x4da86a;
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handle);
      if (iVar5 == 0) {
        in_stack_fffffe80 = (CMobster *)0x4da9a3;
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]);
        if (iVar5 == 0) {
          in_stack_fffffe80 = this_ptr;
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"mob-scream?.wav");
          this_ptr->sfx_handle = uVar7;
        }
      }
    }
  }
  fVar15 = this_ptr->firing_cooldown - delta_time;
  this_ptr->firing_cooldown = fVar15;
  if (fVar15 < 0.0) {
    this_ptr->firing_cooldown = 0.0;
  }
  fVar15 = this_ptr->taunt_timer - delta_time;
  this_ptr->taunt_timer = fVar15;
  if (fVar15 < 0.0) {
    this_ptr->taunt_timer = 0.0;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] == 0) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] == 0) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
  }
  if ((this_ptr->hold_pos_flag == 0) &&
     (iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,this_ptr->hold_pos_condition), iVar5 != 0)) {
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
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar2->motion_controller,&local_38);
    if (iVar5 == 100) {
      pCVar11 = this_ptr->target_weapon;
      if (pCVar11 != (CDemonActor *)0x0) {
        this_ptr->target_weapon = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                  ((CCharacter *)this_ptr,1,pCVar11,0.2);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar5);
    }
  }
  fVar15 = (this_ptr->base).speed;
  fVar17 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar17 * fVar15;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar2->motion_controller);
  iVar5 = pSVar8->state_index;
  iVar9 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    switch(iVar5) {
    case 0:
      if (this_ptr->hold_pos_flag == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
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
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,8,1);
              break;
            }
          }
          else {
            this_ptr->post_mode = 0;
          }
        }
        if (this_ptr->vehicle == (CDemonActor *)0x0) {
          pCVar13 = (this_ptr->base).victim;
          local_10c.x = (pCVar13->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
          local_10c.y = (pCVar13->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
          local_10c.z = (pCVar13->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_10c.z * local_10c.z +
                          local_10c.x * local_10c.x + local_10c.y * local_10c.y);
          local_18 = local_20;
          if (local_20 < 3.0f + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_70,&local_10c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_70.y - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(local_14) < (float)0.52359877558333301) &&
               ((this_ptr->base).attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,9,1);
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          if (local_20 < (this_ptr->base).guard_distance) {
            if (20.0f <= local_20) {
              fVar15 = 1.12104e-44;
            }
            else {
              fVar15 = 1.4013e-45;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,(int)fVar15,1);
          }
          if ((this_ptr->weapon_search_count == 0) &&
             (iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.7), iVar5 != 0)) {
            core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(this_ptr,1);
            this_ptr->weapon_search_count = 1;
          }
          else {
            this_ptr->weapon_search_count = 1;
          }
          break;
        }
        if (this_ptr->firing_blend <= (float)0.5) break;
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.25);
        if (iVar5 != 0) {
          core_mobster_cpp_CMobster_dismountVehicle_FUN_004da670(this_ptr);
          break;
        }
      }
      else {
        fVar15 = this_ptr->firing_blend;
        (this_ptr->base).victim = &g_HeroActors[g_LocalHeroIndex]->base;
        if (fVar15 <= (float)0.5) break;
      }
      core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(this_ptr);
      break;
    case 1:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar2 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else if (this_ptr->post_mode == 0) {
        iVar5 = core_mobster_cpp_CMobster_processWeaponPickup_FUN_004dbce0(this_ptr,delta_time);
        if (iVar5 == 0) {
          local_24 = 3.0f + 1.0;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            local_24 = 30.0f;
          }
          fVar15 = 0.17453292;
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
          pCVar13 = (this_ptr->base).victim;
          pCVar14 = (*((pCVar13->base).vtable._ub)->getPathMap)(&pCVar13->base);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar14,pCVar12,
                             fVar15,(float)in_stack_fffffe74);
          if (-1 < iVar5) {
            pCVar1 = &(this_ptr->base).base.base.location;
            pCVar13 = (this_ptr->base).victim;
            local_64 = (pCVar1->position).x - (pCVar13->base).location.position.x;
            local_5c = (this_ptr->base).base.base.location.position.z -
                       (pCVar13->base).location.position.z;
            local_30 = SQRT(local_5c * local_5c + local_64 * local_64);
            local_60 = 0;
            local_1c = local_30;
            if ((local_30 <= local_24) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCVar2 = &(this_ptr->base).base.model;
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                pCVar13 = (this_ptr->base).victim;
                local_b8.x = (pCVar13->base).location.position.x - (pCVar1->position).x;
                local_b8.y = (pCVar13->base).location.position.y -
                             (this_ptr->base).base.base.location.position.y;
                local_b8.z = (pCVar13->base).location.position.z -
                             (this_ptr->base).base.base.location.position.z;
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                          (&local_f4,&local_b8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                     (local_f4.y - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(local_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (&pCVar2->motion_controller,9,1);
                }
              }
              else if (local_28 + 1.0 <= local_30) {
                if (((float)0.5 < this_ptr->firing_blend) &&
                   (this_ptr->firing_cooldown <= 0.0)) {
                  this_ptr->taunt_timer = 0.0;
                  iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.3);
                  if (iVar5 != 0) {
                    core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(this_ptr,2);
                  }
                  if (this_ptr->taunt_timer <= 0.0) {
                    core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(this_ptr);
                  }
                  else {
                    pCVar2 = &(this_ptr->base).base.model;
                    if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                (&pCVar2->motion_controller,10,1);
                    }
                    else {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                (&pCVar2->motion_controller,0xb,1);
                    }
                  }
                }
              }
              else {
                pCVar13 = (this_ptr->base).victim;
                local_e8.x = (pCVar13->base).location.position.x - (pCVar1->position).x;
                local_e8.y = (pCVar13->base).location.position.y -
                             (this_ptr->base).base.base.location.position.y;
                local_e8.z = (pCVar13->base).location.position.z -
                             (this_ptr->base).base.base.location.position.z;
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                          (&local_58,&local_e8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                     (local_58.y - (this_ptr->base).base.base.orient.vec.y);
                if ((ABS(local_14) < (float)0.52359877558333301) &&
                   ((this_ptr->base).attack_cooldown <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (&pCVar2->motion_controller,9,1);
                  (this_ptr->base).attack_cooldown = 2.0;
                }
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
            if ((this_ptr->base).guard_distance < local_30) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,0,1);
            }
          }
        }
      }
      else {
        fVar15 = 0.17453292;
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
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)this_ptr,&(this_ptr->our_post->location).position,pCVar14,
                           pCVar12,fVar15,(float)in_stack_fffffe74);
        if (iVar5 < 1) {
          if (iVar5 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,0,1);
            this_ptr->our_post = (CDemonActor *)0x0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        pCVar13 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            ((this_ptr->base).base.carry_hands[1].carry_actor,
                             g_CWeaponActorType_02ddf970.name_hash);
        if (pCVar13 != (CCharacter *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
          local_34 = (pCVar13->model).transformed_vertices[0x4f].y;
          pCVar4 = (pCVar13->base).vtable._uc;
          (pCVar13->model).transformed_vertices[0x4f].y = 1.4013e-43;
          iVar5 = (*(pCVar4->_uc).canBeGrabbed)(pCVar13,in_stack_fffffe74,(int)in_stack_fffffe78);
          if (iVar5 != 0) {
            (*(((pCVar13->base).vtable._uc)->_uc).isGrabbable)
                      (pCVar13,(CDemonActor *)in_stack_fffffe80);
          }
          (pCVar13->model).transformed_vertices[0x4f].y = local_34;
        }
        pCVar13 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            ((this_ptr->base).base.carry_hands[0].carry_actor,
                             g_CWeaponActorType_02ddf970.name_hash);
        local_2c = pCVar13;
        if (pCVar13 != (CCharacter *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
          pCVar4 = (pCVar13->base).vtable._uc;
          fVar15 = (pCVar13->model).transformed_vertices[0x4f].y;
          (pCVar13->model).transformed_vertices[0x4f].y = 1.4013e-43;
          iVar5 = (*(pCVar4->_uc).canBeGrabbed)(pCVar13,in_stack_fffffe88,in_stack_fffffe8c);
          if (iVar5 == 0) {
            (local_2c->model).transformed_vertices[0x4f].y = fVar15;
          }
          else {
            (*(((pCVar13->base).vtable._uc)->_uc).isGrabbable)(pCVar13,in_stack_fffffe94);
            (local_2c->model).transformed_vertices[0x4f].y = fVar15;
          }
        }
      }
      if ((this_ptr->firing_blend < (float)0.5) || (this_ptr->firing_cooldown <= 0.0)) {
        if (this_ptr->hold_pos_flag == 0) {
          fVar17 = 4.0;
          fVar15 = 2.0;
        }
        else {
          fVar17 = 5.0;
          fVar15 = 4.0;
        }
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(fVar15,fVar17);
        this_ptr->firing_cooldown = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0,1);
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.3);
        if (iVar5 != 0) {
          core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(this_ptr,3);
        }
      }
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (pCVar2,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_c4,pCVar12);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_c4,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_160);
      local_160.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      local_160.attacker = (CDemonActor *)this_ptr;
      local_160.wielder = (CDemonActor *)this_ptr;
      local_14 = local_160.damage_amount;
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] != 0) {
        pSVar16 = &local_160;
        fVar15 = 0.4;
        pCVar12 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (&local_118,(CVector3f *)&DAT_02dd1184,
                             (CMatrix3x4f *)
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices
                             [_DAT_01ccdbac].m);
        pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                            ((CDemonActor *)this_ptr,&local_100,pCVar12);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar12,fVar15,pSVar16);
      }
      local_160.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      local_14 = local_160.damage_amount;
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0) {
        pSVar16 = &local_160;
        fVar15 = 0.4;
        pCVar12 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (&local_94,(CVector3f *)&DAT_02dd1184,
                             (CMatrix3x4f *)
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices
                             [_DAT_01ccdbb0].m);
        pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                            ((CDemonActor *)this_ptr,&local_dc,pCVar12);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar12,fVar15,pSVar16);
      }
      break;
    case 10:
    case 0xb:
      if (this_ptr->taunt_timer <= 0.0) {
        core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(this_ptr);
      }
    }
    goto switchD_004db6cf_caseD_3;
  }
  uVar7 = (this_ptr->base).base.is_walking;
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_004daabc:
      iVar5 = 1;
    }
    else {
LAB_004dacfc:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
  else {
    if (uVar7 < 3) goto LAB_004daabc;
    if (uVar7 != 3) goto LAB_004dacfc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004db6cf_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (this_ptr->vehicle == (CDemonActor *)0x0) {
    iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
    if (iVar5 != 0) {
      pCVar13 = (this_ptr->base).victim;
      if ((pCVar13 != (CCharacter *)0x0) &&
         (pCVar10 = (CMobster *)(*(((pCVar13->base).vtable._uc)->_uc).getGrabber)(pCVar13),
         pCVar10 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                  (g_CDemonSet_PTR_005be368,&((this_ptr->base).victim)->base);
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
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_7c);
    }
  }
  else {
    core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0(this_ptr);
  }
  pCVar11 = core_actor_cpp_castToClassHash_FUN_0040d890
                      ((this_ptr->base).base.carry_hands[1].carry_actor,
                       g_CWeaponActorType_02ddf970.name_hash);
  if (pCVar11 != (CDemonActor *)0x0) {
    (*((pCVar11->vtable)._ub)->process)(pCVar11,delta_time);
  }
  pCVar11 = core_actor_cpp_castToClassHash_FUN_0040d890
                      ((this_ptr->base).base.carry_hands[0].carry_actor,
                       g_CWeaponActorType_02ddf970.name_hash);
  if (pCVar11 != (CDemonActor *)0x0) {
    (*((pCVar11->vtable)._ub)->process)(pCVar11,delta_time);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar6 == DEATH_STATE_ALIVE) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_004db6f0(this_ptr,delta_time);
  }
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
