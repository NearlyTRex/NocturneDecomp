// Name: core_mobster.cpp_CMobster_process_FUN_0051ce40
// Address: 0051ce40
// Address Range: [[0051ce40, 0051dee5]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_process_FUN_0051ce40(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_process_FUN_0051ce40(CMobster *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  EWalkState EVar4;
  CCharacter_full_vtable *pCVar5;
  int iVar6;
  EDeathState EVar7;
  uint uVar8;
  SMotion *pSVar9;
  int iVar10;
  CMobster *pCVar11;
  CDemonActor *pCVar12;
  CCharacter *pCVar13;
  CPathMap *pCVar14;
  CLocation *pCVar15;
  byte bVar16;
  float afStackY_11d8 [985];
  float *pfVar17;
  CGore *this_ptr_00;
  float fVar18;
  SDamageInfo *pSVar19;
  CVector3f *pCVar20;
  CDemonActor *in_stack_fffffda8;
  float in_stack_fffffdac;
  CMobster *in_stack_fffffdb4;
  float max_value;
  CDemonActor *in_stack_fffffdbc;
  EAmmoType in_stack_fffffdc0;
  CDemonActor *in_stack_fffffdc8;
  SDamageInfo SStack_22c;
  float fStack_1f0;
  float afStack_1ec [5];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  uint uStack_1c0;
  float fStack_1b4;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float afStack_19c [3];
  CVector3f CStack_190;
  CVector3f CStack_184;
  float fStack_178;
  float afStack_174 [2];
  CVector3f CStack_16c;
  uint uStack_160;
  float afStack_15c [5];
  uint uStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  uint uStack_130;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  float fStack_114;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float afStack_e4 [5];
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [5];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_a0;
  uint uStack_94;
  float afStack_90 [4];
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float afStack_70 [3];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CMotionController *pCStack_2c;
  float fStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  float fStack_1c;
  CCharacter *pCStack_18;
  float fStack_14;
  
  bVar16 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if (this_ptr->vehicle != (CDemonActor *)0x0) {
      core_mobster_cpp_CMobster_positionOnVehicle_FUN_0051cc20(this_ptr);
      core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_004328f0
                ((CCharacter *)this_ptr,delta_time);
    }
    return;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffd98);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,(SDamageInfo *)&stack0xfffffd98);
  }
  if ((this_ptr->base).base.is_fully_burned != 0) {
    (this_ptr->base).base.burn_alpha = 0.0;
  }
  if (0 < (this_ptr->base).base.fire_count) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
    in_stack_fffffda8 = (CDemonActor *)0x0;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    in_stack_fffffdb4 = this_ptr;
    EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if (EVar7 == DEATH_STATE_ALIVE) {
      in_stack_fffffdb4 = (CMobster *)0x51cf1a;
      iVar6 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle);
      if (iVar6 == 0) {
        in_stack_fffffdb4 = (CMobster *)0x51d059;
        iVar6 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]);
        if (iVar6 == 0) {
          in_stack_fffffdb4 = this_ptr;
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"mob-scream?.wav");
          this_ptr->sfx_handle = uVar8;
        }
      }
    }
  }
  fVar18 = this_ptr->firing_cooldown - delta_time;
  this_ptr->firing_cooldown = fVar18;
  if (fVar18 < 0.0) {
    this_ptr->firing_cooldown = 0.0;
  }
  fVar18 = this_ptr->taunt_timer - delta_time;
  this_ptr->taunt_timer = fVar18;
  if (fVar18 < 0.0) {
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
     (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->hold_pos_condition), iVar6 != 0)) {
    this_ptr->hold_pos_flag = 1;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar2 = &(this_ptr->base).base.model;
  fStack_40 = delta_time * (this_ptr->base).speed;
  pCStack_20 = &pCVar2->base;
  while (0.0 < fStack_40) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar2->base,afStack_90 + 0x14);
    if (iVar6 == 100) {
      pCVar12 = this_ptr->target_weapon;
      if (pCVar12 != (CDemonActor *)0x0) {
        this_ptr->target_weapon = (CDemonActor *)0x0;
        core_charactr_cpp_FUN_004325b0(this_ptr,1,pCVar12);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar6);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320();
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_20);
  iVar6 = pSVar9->state_index;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar6) {
    case 0:
      if (this_ptr->hold_pos_flag == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
          if (iVar6 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,1,1);
          }
          break;
        }
        pCVar12 = this_ptr->our_post;
        if (pCVar12 != (CDemonActor *)0x0) {
          if (this_ptr->post_mode == 0) {
            fStack_1d8 = (this_ptr->base).base.base.location.position.x -
                         (pCVar12->location).position.x;
            fStack_1d4 = (this_ptr->base).base.base.location.position.y -
                         (pCVar12->location).position.y;
            fStack_1d0 = (this_ptr->base).base.base.location.position.z -
                         (pCVar12->location).position.z;
            fStack_124 = fStack_1d8;
            afStack_15c[(uint)bVar16 * -2 + 0xf] = afStack_1ec[(uint)bVar16 * -2 + 6];
            afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10] =
                 afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
            if ((float)_DAT_005e9e12 <
                SQRT(fStack_11c * fStack_11c + fStack_124 * fStack_124 + fStack_120 * fStack_120)) {
              this_ptr->post_mode = 1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,8,1);
              break;
            }
          }
          else {
            this_ptr->post_mode = 0;
          }
        }
        if (this_ptr->vehicle == (CDemonActor *)0x0) {
          pCVar13 = (this_ptr->base).victim;
          fStack_4c = (pCVar13->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          fStack_48 = (pCVar13->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_44 = (pCVar13->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_64 = fStack_4c;
          afStack_90[(uint)bVar16 * -2 + 0xc] = afStack_90[(uint)bVar16 * -2 + 0x12];
          afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
               afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
          fStack_30 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
          fStack_1c = fStack_30;
          if (fStack_30 < 0x40400000 + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
            uStack_7c = uStack_130;
            afStack_90[(uint)bVar16 * -2 + 6] = afStack_15c[(uint)bVar16 * -2 + 0xc];
            afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
                 afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  (fStack_78 - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(fStack_14) < (float)_DAT_005e9e0a) && ((this_ptr->base).attack_cooldown <= 0.0)
               ) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,9,1);
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          if (fStack_30 < (this_ptr->base).guard_distance) {
            if (_DAT_00603d68 <= fStack_30) {
              fVar18 = 1.12104e-44;
            }
            else {
              fVar18 = 1.4013e-45;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,(int)fVar18,1);
          }
          if ((this_ptr->weapon_search_count == 0) &&
             (iVar6 = core_actor_cpp_randomChance_FUN_0040cd00(0.7), iVar6 != 0)) {
            core_mobster_cpp_CMobster_playTaunt_FUN_0051f330(this_ptr,1);
            this_ptr->weapon_search_count = 1;
          }
          else {
            this_ptr->weapon_search_count = 1;
          }
          break;
        }
        if (this_ptr->firing_blend <= (float)_DAT_005e9e02) break;
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd00(0.25);
        if (iVar6 != 0) {
          core_mobster_cpp_CMobster_dismountVehicle_FUN_0051cd10(this_ptr);
          break;
        }
      }
      else {
        fVar18 = this_ptr->firing_blend;
        (this_ptr->base).victim = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        if (fVar18 <= (float)_DAT_005e9e02) break;
      }
      core_mobster_cpp_CMobster_startFiringAttack_FUN_0051eac0(this_ptr);
      break;
    case 1:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar2 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,1,1);
        }
      }
      else if (this_ptr->post_mode == 0) {
        iVar6 = core_mobster_cpp_FUN_0051e5d0(this_ptr,delta_time);
        if (iVar6 == 0) {
          fStack_38 = 0x40400000 + 1.0;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            fStack_38 = 0x41F00000;
          }
          fVar18 = 0.17453292;
          pCVar20 = (CVector3f *)0x3f000000;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          uStack_d0 = 0;
          fStack_34 = 0x40400000;
          fStack_c8 = 0x40400000;
          uStack_cc = 0;
          pCVar13 = (this_ptr->base).victim;
          pCVar14 = (*((pCVar13->base).vtable._ub)->getPathMap)(&pCVar13->base);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar14,pCVar20,
                             fVar18,(float)in_stack_fffffda8);
          if (-1 < iVar6) {
            pCVar1 = &(this_ptr->base).base.base.location;
            pCVar13 = (this_ptr->base).victim;
            fStack_13c = (pCVar1->position).x - (pCVar13->base).location.position.x;
            fStack_138 = (this_ptr->base).base.base.location.position.y -
                         (pCVar13->base).location.position.y;
            fStack_134 = (this_ptr->base).base.base.location.position.z -
                         (pCVar13->base).location.position.z;
            fStack_c4 = fStack_13c;
            afStack_c0[(uint)bVar16 * -2] = afStack_15c[(uint)bVar16 * -2 + 9];
            afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
            fStack_24 = SQRT(afStack_c0[1] * afStack_c0[1] + fStack_c4 * fStack_c4);
            pCVar15 = &(pCVar13->base).location;
            afStack_c0[0] = 0.0;
            fStack_3c = fStack_24;
            if ((fStack_24 <= fStack_38) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCStack_2c = &(this_ptr->base).base.model.base;
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                fStack_100 = (pCVar15->position).x - (pCVar1->position).x;
                fStack_fc = (pCVar13->base).location.position.y -
                            (this_ptr->base).base.base.location.position.y;
                fStack_f8 = (pCVar13->base).location.position.z -
                            (this_ptr->base).base.base.location.position.z;
                afStack_e4[2] = fStack_100;
                afStack_e4[(uint)bVar16 * -2 + 3] = afStack_15c[(uint)bVar16 * -2 + 0x18];
                afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
                     afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
                uStack_118 = afStack_c0[2];
                afStack_15c[(uint)bVar16 * -2 + 0x12] = afStack_c0[(uint)bVar16 * -2 + 3];
                afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13] =
                     afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
                fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                      (fStack_114 - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(fStack_14) < (float)_DAT_005e9e0a) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,9,1);
                }
              }
              else if (fStack_34 + 1.0 <= fStack_24) {
                if (((float)_DAT_005e9e02 < this_ptr->firing_blend) &&
                   (this_ptr->firing_cooldown <= 0.0)) {
                  this_ptr->taunt_timer = 0.0;
                  iVar6 = core_actor_cpp_randomChance_FUN_0040cd00(0.3);
                  if (iVar6 != 0) {
                    core_mobster_cpp_CMobster_playTaunt_FUN_0051f330(this_ptr,2);
                  }
                  if (this_ptr->taunt_timer <= 0.0) {
                    core_mobster_cpp_CMobster_startFiringAttack_FUN_0051eac0(this_ptr);
                  }
                  else {
                    pCVar2 = &(this_ptr->base).base.model;
                    if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                (&pCVar2->base,10,1);
                    }
                    else {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                (&pCVar2->base,0xb,1);
                    }
                  }
                }
              }
              else {
                fStack_e8 = (pCVar15->position).x - (pCVar1->position).x;
                afStack_e4[0] =
                     (pCVar13->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
                afStack_e4[1] =
                     (pCVar13->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
                fStack_178 = fStack_e8;
                afStack_174[(uint)bVar16 * -2] = afStack_e4[(uint)bVar16 * -2];
                afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                     afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
                uStack_160 = uStack_148;
                afStack_15c[(uint)bVar16 * -2] = afStack_15c[(uint)bVar16 * -2 + 6];
                afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                     afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
                fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                      (afStack_15c[0] - (this_ptr->base).base.base.orient.vec.y);
                if ((ABS(fStack_14) < (float)_DAT_005e9e0a) &&
                   ((this_ptr->base).attack_cooldown <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,9,1);
                  (this_ptr->base).attack_cooldown = 2.0;
                }
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
            if ((this_ptr->base).guard_distance < fStack_3c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,0,1);
            }
          }
        }
      }
      else {
        fVar18 = 0.17453292;
        pCVar20 = (CVector3f *)0x3f000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        uStack_f4 = 0;
        fStack_ec = 0x40400000;
        uStack_f0 = 0;
        pCVar14 = (*((this_ptr->our_post->vtable)._ub)->getPathMap)(this_ptr->our_post);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,&(this_ptr->our_post->location).position,pCVar14,
                           pCVar20,fVar18,(float)in_stack_fffffda8);
        if (iVar6 < 1) {
          if (iVar6 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
            this_ptr->our_post = (CDemonActor *)0x0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        pCVar13 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            ((this_ptr->base).base.carry_hands[1].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        if (pCVar13 != (CCharacter *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          fStack_28 = (pCVar13->model).bone_origins[0x4f].y;
          pCVar5 = (pCVar13->base).vtable._uc;
          (pCVar13->model).bone_origins[0x4f].y = 1.4013e-43;
          iVar6 = (*(pCVar5->_uc).canBeGrabbed)(pCVar13,in_stack_fffffda8,(int)in_stack_fffffdac);
          if (iVar6 != 0) {
            (*(((pCVar13->base).vtable._uc)->_uc).isGrabbable)
                      (pCVar13,(CDemonActor *)in_stack_fffffdb4);
          }
          (pCVar13->model).bone_origins[0x4f].y = fStack_28;
        }
        pCVar13 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            ((this_ptr->base).base.carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        pCStack_18 = pCVar13;
        if (pCVar13 != (CCharacter *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          pCVar5 = (pCVar13->base).vtable._uc;
          fVar18 = (pCVar13->model).bone_origins[0x4f].y;
          (pCVar13->model).bone_origins[0x4f].y = 1.4013e-43;
          iVar6 = (*(pCVar5->_uc).canBeGrabbed)(pCVar13,in_stack_fffffdbc,in_stack_fffffdc0);
          if (iVar6 == 0) {
            (pCStack_18->model).bone_origins[0x4f].y = fVar18;
          }
          else {
            (*(((pCVar13->base).vtable._uc)->_uc).isGrabbable)(pCVar13,in_stack_fffffdc8);
            (pCStack_18->model).bone_origins[0x4f].y = fVar18;
          }
        }
      }
      if ((this_ptr->firing_blend < (float)_DAT_005e9e02) || (this_ptr->firing_cooldown <= 0.0)) {
        if (this_ptr->hold_pos_flag == 0) {
          max_value = 4.0;
          fVar18 = 2.0;
        }
        else {
          max_value = 5.0;
          fVar18 = 4.0;
        }
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar18,max_value);
        this_ptr->firing_cooldown = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0,1);
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd00(0.3);
        if (iVar6 != 0) {
          core_mobster_cpp_CMobster_playTaunt_FUN_0051f330(this_ptr,3);
        }
      }
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040();
        uStack_94 = uStack_1c0;
        afStack_90[(uint)bVar16 * -2] = afStack_1ec[(uint)bVar16 * -2 + 0xc];
        afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
        core_actor_cpp_FUN_00408b40();
        fVar18 = 0.0;
        pCVar20 = &CStack_a0;
        CStack_a0.x = fStack_1b4;
        *(float *)((int)&CStack_a0 + (uint)bVar16 * -8 + 4) = afStack_1ec[(uint)bVar16 * -2 + 0xf];
        this_ptr_00 = g_CGorePtr;
        *(float *)((int)&CStack_a0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar20,(EBloodType)fVar18);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_22c);
      SStack_22c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      SStack_22c.attacker = (CDemonActor *)this_ptr;
      SStack_22c.wielder = (CDemonActor *)this_ptr;
      fStack_14 = SStack_22c.damage_amount;
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] != 0) {
        pSVar19 = &SStack_22c;
        fVar18 = 0.4;
        core_xform_cpp_FUN_005b5080
                  (&DAT_02c8af28,
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01d33c04].m);
        pfVar17 = afStack_90 + 8;
        afStack_70[0] = afStack_1ec[2];
        afStack_90[(uint)bVar16 * -2 + 9] = afStack_1ec[(uint)bVar16 * -2 + 3];
        afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
             afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar17);
        pCVar20 = &CStack_16c;
        CStack_16c.x = fStack_1cc;
        *(float *)((int)&CStack_16c + (uint)bVar16 * -8 + 4) = afStack_1ec[(uint)bVar16 * -2 + 9];
        pCVar11 = this_ptr;
        *(float *)((int)&CStack_16c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar11->base,pCVar20,fVar18,pSVar19);
      }
      SStack_22c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      fStack_14 = SStack_22c.damage_amount;
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0) {
        pSVar19 = &SStack_22c;
        fVar18 = 0.4;
        core_xform_cpp_FUN_005b5080
                  (&DAT_02c8af28,
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices[_DAT_01d33c08].m);
        pfVar17 = afStack_1ec + 0x14;
        afStack_19c[0] = (float)uStack_58;
        afStack_1ec[(uint)bVar16 * -2 + 0x15] = afStack_90[(uint)bVar16 * -2 + 0xf];
        afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16] =
             afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar17);
        pCVar20 = &CStack_190;
        CStack_190.x = afStack_15c[2];
        *(float *)((int)&CStack_190 + (uint)bVar16 * -8 + 4) = afStack_15c[(uint)bVar16 * -2 + 3];
        pCVar11 = this_ptr;
        *(float *)((int)&CStack_190 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar11->base,pCVar20,fVar18,pSVar19);
      }
      break;
    case 10:
    case 0xb:
      if (this_ptr->taunt_timer <= 0.0) {
        core_mobster_cpp_CMobster_startFiringAttack_FUN_0051eac0(this_ptr);
      }
    }
    goto switchD_0051ded1_caseD_3;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_0051d176:
      iVar6 = 1;
    }
    else {
LAB_0051d3eb:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_0051d176;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0051d3eb;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0051ded1_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (this_ptr->vehicle == (CDemonActor *)0x0) {
    iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
    if (iVar6 != 0) {
      pCVar13 = (this_ptr->base).victim;
      if ((pCVar13 != (CCharacter *)0x0) &&
         (pCVar11 = (CMobster *)(*(((pCVar13->base).vtable._uc)->_uc).getGrabber)(pCVar13),
         pCVar11 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
      }
      core_charactr_cpp_FUN_0042d700();
      fStack_1f0 = (this_ptr->base).base.velocity.x * delta_time;
      afStack_1ec[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_1ec[1] = (this_ptr->base).base.velocity.z * delta_time;
      fStack_1a8 = fStack_1f0;
      afStack_1ec[(uint)bVar16 * -2 + 0x12] = afStack_1ec[(uint)bVar16 * -2];
      afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13] =
           afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      pCVar20 = &(this_ptr->base).base.position_delta;
      fStack_ac = fStack_1a8 + pCVar20->x;
      fStack_a8 = fStack_1a4 + (this_ptr->base).base.position_delta.y;
      fStack_a4 = fStack_1a0 + (this_ptr->base).base.position_delta.z;
      fStack_10c = fStack_ac;
      afStack_15c[(uint)bVar16 * -2 + 0x15] = afStack_c0[(uint)bVar16 * -2 + 6];
      afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16] =
           afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
      pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
      afStack_90[2] = fStack_10c + pCVar3->x;
      afStack_90[3] = fStack_108 + (this_ptr->base).base.model.accumulated_root_motion.y;
      fStack_80 = fStack_104 + (this_ptr->base).base.model.accumulated_root_motion.z;
      CStack_184.x = afStack_90[2];
      *(float *)((int)&CStack_184 + (uint)bVar16 * -8 + 4) = afStack_90[(uint)bVar16 * -2 + 3];
      *(float *)((int)&CStack_184 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar20->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar18 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar18;
      pCVar3->x = fVar18;
      core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_184);
    }
  }
  else {
    core_mobster_cpp_CMobster_positionOnVehicle_FUN_0051cc20(this_ptr);
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c600
                      ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash
                      );
  if (pCVar12 != (CDemonActor *)0x0) {
    (*((pCVar12->vtable)._ub)->process)(pCVar12,delta_time);
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c600
                      ((this_ptr->base).base.carry_hands[0].carry_actor,g_CWeaponClassInfo.name_hash
                      );
  if (pCVar12 != (CDemonActor *)0x0) {
    (*((pCVar12->vtable)._ub)->process)(pCVar12,delta_time);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_0051def0(this_ptr,delta_time);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
