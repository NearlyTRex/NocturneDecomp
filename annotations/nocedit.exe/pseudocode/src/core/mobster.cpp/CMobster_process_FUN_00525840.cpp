// Name: core_mobster.cpp_CMobster_process_FUN_00525840
// Address: 00525840
// Address Range: [[00525840, 00526793]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_process_FUN_00525840(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mobster_cpp_CMobster_process_FUN_00525840(CMobster *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CCharacter *pCVar4;
  CWeapon_full_vtable *pCVar5;
  int iVar6;
  EDeathState EVar7;
  uint uVar8;
  SMotion *pSVar9;
  int iVar10;
  CMobster *pCVar11;
  CDemonActor *pCVar12;
  CVector3f *pCVar13;
  CWeapon *pCVar14;
  CPathMap *pCVar15;
  float fVar16;
  SDamageInfo *pSVar17;
  float fVar18;
  SDamageInfo local_19c;
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
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  float local_64;
  uint local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  float local_38;
  int local_34;
  float local_30;
  CWeapon *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if (this_ptr->vehicle != (CDemonActor *)0x0) {
      core_mobster_cpp_CMobster_FUN_00525650(this_ptr);
      core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090
                ((CCharacter *)this_ptr,delta_time);
    }
    return;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_19c);
    local_19c.attacker = (CDemonActor *)this_ptr;
    local_19c.wielder = (CDemonActor *)this_ptr;
    local_19c.damage_amount = 999.9;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&local_19c);
  }
  if ((this_ptr->base).base.is_fully_burned != 0) {
    (this_ptr->base).base.burn_alpha = 0.0;
  }
  if (0 < (this_ptr->base).base.fire_count) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
    EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if (((EVar7 == DEATH_STATE_ALIVE) &&
        (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle), iVar6 == 0)) &&
       (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]), iVar6 == 0))
    {
      uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"mob-scream?.wav");
      this_ptr->sfx_handle = uVar8;
    }
  }
  fVar16 = this_ptr->firing_cooldown - delta_time;
  this_ptr->firing_cooldown = fVar16;
  if (fVar16 < 0.0) {
    this_ptr->firing_cooldown = 0.0;
  }
  fVar16 = this_ptr->taunt_timer - delta_time;
  this_ptr->taunt_timer = fVar16;
  if (fVar16 < 0.0) {
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
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&pCVar2->motion_controller,&local_38);
    if (iVar6 == 100) {
      pCVar12 = this_ptr->target_weapon;
      if (pCVar12 != (CDemonActor *)0x0) {
        this_ptr->target_weapon = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  ((CCharacter *)this_ptr,1,pCVar12,0.2);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar6);
    }
  }
  fVar16 = (this_ptr->base).speed;
  fVar18 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar18 * fVar16;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  iVar6 = pSVar9->state_index;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar6) {
    case 0:
      if (this_ptr->hold_pos_flag == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar6 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
          break;
        }
        pCVar12 = this_ptr->our_post;
        if (pCVar12 != (CDemonActor *)0x0) {
          if (this_ptr->post_mode == 0) {
            local_d0 = (this_ptr->base).base.base.location.position.x -
                       (pCVar12->location).position.x;
            local_cc = (this_ptr->base).base.base.location.position.y -
                       (pCVar12->location).position.y;
            local_c8 = (this_ptr->base).base.base.location.position.z -
                       (pCVar12->location).position.z;
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
          pCVar4 = (this_ptr->base).victim;
          local_10c.x = (pCVar4->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
          local_10c.y = (pCVar4->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
          local_10c.z = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
          local_20 = SQRT(local_10c.z * local_10c.z +
                          local_10c.x * local_10c.x + local_10c.y * local_10c.y);
          local_18 = local_20;
          if (local_20 < 3.0f + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_10c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_70.y - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(local_14) < (float)0.52359877558333301) &&
               ((this_ptr->base).attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,9,1);
              (this_ptr->base).attack_cooldown = 2.0;
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
          if ((this_ptr->weapon_search_count == 0) &&
             (iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.7), iVar6 != 0)) {
            core_mobster_cpp_CMobster_FUN_005279f0(this_ptr,1);
            this_ptr->weapon_search_count = 1;
          }
          else {
            this_ptr->weapon_search_count = 1;
          }
          break;
        }
        if (this_ptr->firing_blend <= (float)0.5) break;
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if (iVar6 != 0) {
          core_mobster_cpp_CMobster_FUN_00525720(this_ptr);
          break;
        }
      }
      else {
        fVar16 = this_ptr->firing_blend;
        (this_ptr->base).victim = &g_HeroActors[g_LocalHeroIndex]->base;
        if (fVar16 <= (float)0.5) break;
      }
      core_mobster_cpp_CMobster_FUN_005271c0(this_ptr);
      break;
    case 1:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar2 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else if (this_ptr->post_mode == 0) {
        iVar6 = core_mobster_cpp_CMobster_FUN_00526d90(this_ptr,delta_time);
        if (iVar6 == 0) {
          local_24 = 3.0f + 1.0;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            local_24 = 30.0f;
          }
          fVar18 = 0.17453292;
          fVar16 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          local_a0.x = 0.0;
          local_28 = 3.0f;
          local_a0.z = 3.0f;
          pCVar13 = &local_a0;
          local_a0.y = 0.0;
          pCVar4 = (this_ptr->base).victim;
          pCVar15 = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar15,pCVar13,
                             fVar16,fVar18);
          if (-1 < iVar6) {
            pCVar1 = &(this_ptr->base).base.base.location;
            pCVar4 = (this_ptr->base).victim;
            local_64 = (pCVar1->position).x - (pCVar4->base).location.position.x;
            local_5c = (this_ptr->base).base.base.location.position.z -
                       (pCVar4->base).location.position.z;
            local_30 = SQRT(local_5c * local_5c + local_64 * local_64);
            local_60 = 0;
            local_1c = local_30;
            if ((local_30 <= local_24) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCVar2 = &(this_ptr->base).base.model;
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                pCVar4 = (this_ptr->base).victim;
                local_b8.x = (pCVar4->base).location.position.x - (pCVar1->position).x;
                local_b8.y = (pCVar4->base).location.position.y -
                             (this_ptr->base).base.base.location.position.y;
                local_b8.z = (pCVar4->base).location.position.z -
                             (this_ptr->base).base.base.location.position.z;
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_f4,&local_b8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_f4.y - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(local_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                }
              }
              else if (local_28 + 1.0 <= local_30) {
                if (((float)0.5 < this_ptr->firing_blend) &&
                   (this_ptr->firing_cooldown <= 0.0)) {
                  this_ptr->taunt_timer = 0.0;
                  iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
                  if (iVar6 != 0) {
                    core_mobster_cpp_CMobster_FUN_005279f0(this_ptr,2);
                  }
                  if (this_ptr->taunt_timer <= 0.0) {
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
                pCVar4 = (this_ptr->base).victim;
                local_e8.x = (pCVar4->base).location.position.x - (pCVar1->position).x;
                local_e8.y = (pCVar4->base).location.position.y -
                             (this_ptr->base).base.base.location.position.y;
                local_e8.z = (pCVar4->base).location.position.z -
                             (this_ptr->base).base.base.location.position.z;
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_58,&local_e8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_58.y - (this_ptr->base).base.base.orient.vec.y);
                if ((ABS(local_14) < (float)0.52359877558333301) &&
                   ((this_ptr->base).attack_cooldown <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                  (this_ptr->base).attack_cooldown = 2.0;
                }
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
            if ((this_ptr->base).guard_distance < local_30) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
            }
          }
        }
      }
      else {
        fVar18 = 0.17453292;
        fVar16 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_88.x = 0.0;
        local_88.z = 3.0f;
        pCVar13 = &local_88;
        local_88.y = 0.0;
        pCVar15 = (*((this_ptr->our_post->vtable)._ub)->getPathMap)(this_ptr->our_post);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(this_ptr->our_post->location).position,pCVar15,
                           pCVar13,fVar16,fVar18);
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
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        pCVar14 = (CWeapon *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((this_ptr->base).base.carry_hands[1].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        if (pCVar14 != (CWeapon *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
          local_34 = pCVar14->ammo_count;
          pCVar5 = (pCVar14->base).vtable._uw;
          pCVar14->ammo_count = 100;
          iVar6 = (*(pCVar5->_uw).isReadyToFire)(pCVar14);
          if (iVar6 != 0) {
            (*(((pCVar14->base).vtable._uw)->_uw).fire)(pCVar14);
          }
          pCVar14->ammo_count = local_34;
        }
        pCVar14 = (CWeapon *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((this_ptr->base).base.carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        local_2c = pCVar14;
        if (pCVar14 != (CWeapon *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
          pCVar5 = (pCVar14->base).vtable._uw;
          iVar6 = pCVar14->ammo_count;
          pCVar14->ammo_count = 100;
          iVar10 = (*(pCVar5->_uw).isReadyToFire)(pCVar14);
          if (iVar10 == 0) {
            local_2c->ammo_count = iVar6;
          }
          else {
            (*(((pCVar14->base).vtable._uw)->_uw).fire)(pCVar14);
            local_2c->ammo_count = iVar6;
          }
        }
      }
      if ((this_ptr->firing_blend < (float)0.5) || (this_ptr->firing_cooldown <= 0.0)) {
        if (this_ptr->hold_pos_flag == 0) {
          fVar18 = 4.0;
          fVar16 = 2.0;
        }
        else {
          fVar18 = 5.0;
          fVar16 = 4.0;
        }
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar16,fVar18);
        this_ptr->firing_cooldown = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
        if (iVar6 != 0) {
          core_mobster_cpp_CMobster_FUN_005279f0(this_ptr,3);
        }
      }
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_c4,pCVar13);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_c4,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_160);
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_160.attacker = (CDemonActor *)this_ptr;
      local_160.wielder = (CDemonActor *)this_ptr;
      local_14 = local_160.damage_amount;
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] != 0) {
        pSVar17 = &local_160;
        fVar16 = 0.4;
        pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_118,&g_ZeroVector.f,
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                             INT_02f37ecc);
        pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((CDemonActor *)this_ptr,&local_100,pCVar13);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar13,fVar16,pSVar17);
      }
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_14 = local_160.damage_amount;
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0) {
        pSVar17 = &local_160;
        fVar16 = 0.4;
        pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_94,&g_ZeroVector.f,
                             (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                             INT_02f37ed0);
        pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((CDemonActor *)this_ptr,&local_dc,pCVar13);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar13,fVar16,pSVar17);
      }
      break;
    case 10:
    case 0xb:
      if (this_ptr->taunt_timer <= 0.0) {
        core_mobster_cpp_CMobster_FUN_005271c0(this_ptr);
      }
    }
    goto switchD_0052677f_caseD_7;
  }
  uVar8 = (this_ptr->base).base.is_walking;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
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
    if (uVar8 < 3) goto LAB_00525b6c;
    if (uVar8 != 3) goto LAB_00525dac;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0052677f_caseD_7:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (this_ptr->vehicle == (CDemonActor *)0x0) {
    iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
    if (iVar6 != 0) {
      pCVar4 = (this_ptr->base).victim;
      if ((pCVar4 != (CCharacter *)0x0) &&
         (pCVar11 = (CMobster *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
         pCVar11 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
      }
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
      local_ac = (this_ptr->base).base.velocity.x * delta_time;
      local_a8 = (this_ptr->base).base.velocity.y * delta_time;
      pCVar13 = &(this_ptr->base).base.position_delta;
      local_a4 = delta_time * (this_ptr->base).base.velocity.z;
      pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
      local_124 = local_ac + pCVar13->x;
      local_120 = local_a8 + (this_ptr->base).base.position_delta.y;
      local_11c = local_a4 + (this_ptr->base).base.position_delta.z;
      local_7c.x = local_124 + pCVar3->x;
      local_7c.y = local_120 + (this_ptr->base).base.model.accumulated_root_motion.y;
      local_7c.z = local_11c + (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar13->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar16 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar16;
      pCVar3->x = fVar16;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_7c);
    }
  }
  else {
    core_mobster_cpp_CMobster_FUN_00525650(this_ptr);
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash
                      );
  if (pCVar12 != (CDemonActor *)0x0) {
    (*((pCVar12->vtable)._ub)->process)(pCVar12,delta_time);
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((this_ptr->base).base.carry_hands[0].carry_actor,g_CWeaponClassInfo.name_hash
                      );
  if (pCVar12 != (CDemonActor *)0x0) {
    (*((pCVar12->vtable)._ub)->process)(pCVar12,delta_time);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0(this_ptr,delta_time);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
