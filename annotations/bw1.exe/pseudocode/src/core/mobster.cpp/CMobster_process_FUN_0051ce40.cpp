// Name: core_mobster.cpp_CMobster_process_FUN_0051ce40
// Address: 0051ce40
// Address Range: [[0051ce40, 0051dee5]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_process_FUN_0051ce40(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_process_FUN_0051ce40(CMobster *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CDemonActor *pCVar4;
  EWalkState EVar5;
  CCharacter *pCVar6;
  uint uVar7;
  int iVar8;
  EDeathState EVar9;
  uint uVar10;
  SMotion *pSVar11;
  int iVar12;
  CMobster *pCVar13;
  CPathMap *pCVar14;
  CLocation *pCVar15;
  byte bVar16;
  float afStackY_11d8 [982];
  float *pfVar17;
  CGore *this_ptr_00;
  CVector3f *pCVar18;
  float fVar19;
  SDamageInfo *pSVar20;
  uint *puVar21;
  EBloodType blood_type;
  float fVar22;
  SDamageInfo SStack_268;
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
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [5];
  CVector3f CStack_d0;
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
  uint uStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar16 = 0;
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    if (this_ptr->vehicle != (CDemonActor *)0x0) {
      core_mobster_cpp_CMobster_positionOnVehicle_FUN_0051cc20(this_ptr);
      core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_004328f0
                ((CCharacter *)this_ptr,delta_time);
    }
    return;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_268);
    SStack_268.attacker = (CDemonActor *)this_ptr;
    SStack_268.wielder = (CDemonActor *)this_ptr;
    SStack_268.damage_amount = 999.9;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&SStack_268);
  }
  if ((this_ptr->base).base.is_fully_burned != 0) {
    (this_ptr->base).base.burn_alpha = 0.0;
  }
  if (0 < (this_ptr->base).base.fire_count) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
    EVar9 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if (((EVar9 == DEATH_STATE_ALIVE) &&
        (iVar8 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle), iVar8 == 0)) &&
       (iVar8 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]), iVar8 == 0)) {
      uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                         ((CDemonActor *)this_ptr,"mob-scream?.wav");
      this_ptr->sfx_handle = uVar10;
    }
  }
  fVar19 = this_ptr->firing_cooldown - delta_time;
  this_ptr->firing_cooldown = fVar19;
  if (fVar19 < 0.0) {
    this_ptr->firing_cooldown = 0.0;
  }
  fVar19 = this_ptr->taunt_timer - delta_time;
  this_ptr->taunt_timer = fVar19;
  if (fVar19 < 0.0) {
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
     (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->hold_pos_condition), iVar8 != 0)) {
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
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar2->base,afStack_90 + 0x14);
    if (iVar8 == 100) {
      pCVar4 = this_ptr->target_weapon;
      if (pCVar4 != (CDemonActor *)0x0) {
        this_ptr->target_weapon = (CDemonActor *)0x0;
        core_charactr_cpp_FUN_004325b0(this_ptr,1,pCVar4,0x3e4ccccd,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar8);
    }
  }
  fVar19 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar19);
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_20);
  iVar8 = pSVar11->state_index;
  iVar12 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar12 == 0) {
    switch(iVar8) {
    case 0:
      if (this_ptr->hold_pos_flag == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
          if (iVar8 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,1,1);
          }
          break;
        }
        pCVar4 = this_ptr->our_post;
        if (pCVar4 != (CDemonActor *)0x0) {
          if (this_ptr->post_mode == 0) {
            fStack_1d8 = (this_ptr->base).base.base.location.position.x -
                         (pCVar4->location).position.x;
            fStack_1d4 = (this_ptr->base).base.base.location.position.y -
                         (pCVar4->location).position.y;
            fStack_1d0 = (this_ptr->base).base.base.location.position.z -
                         (pCVar4->location).position.z;
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
          pCVar6 = (this_ptr->base).victim;
          fStack_4c = (pCVar6->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          fStack_48 = (pCVar6->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_44 = (pCVar6->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_64 = fStack_4c;
          afStack_90[(uint)bVar16 * -2 + 0xc] = afStack_90[(uint)bVar16 * -2 + 0x12];
          afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
               afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
          fStack_30 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
          fStack_1c = fStack_30;
          if (fStack_30 < 0x40400000 + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_90 + 0xb);
            uStack_7c = uStack_130;
            afStack_90[(uint)bVar16 * -2 + 6] = afStack_15c[(uint)bVar16 * -2 + 0xc];
            afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
                 afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
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
              iVar8 = 8;
            }
            else {
              iVar8 = 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,iVar8,1);
          }
          if ((this_ptr->weapon_search_count == 0) &&
             (iVar8 = core_actor_cpp_randomChance_FUN_0040cd00(0.7), iVar8 != 0)) {
            core_mobster_cpp_CMobster_playTaunt_FUN_0051f330(this_ptr,1);
            this_ptr->weapon_search_count = 1;
          }
          else {
            this_ptr->weapon_search_count = 1;
          }
          break;
        }
        if (this_ptr->firing_blend <= (float)_DAT_005e9e02) break;
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd00(0.25);
        if (iVar8 != 0) {
          core_mobster_cpp_CMobster_dismountVehicle_FUN_0051cd10(this_ptr);
          break;
        }
      }
      else {
        fVar19 = this_ptr->firing_blend;
        (this_ptr->base).victim = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        if (fVar19 <= (float)_DAT_005e9e02) break;
      }
      core_mobster_cpp_CMobster_startFiringAttack_FUN_0051eac0(this_ptr);
      break;
    case 1:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar2 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,1,1);
        }
      }
      else if (this_ptr->post_mode == 0) {
        iVar8 = core_mobster_cpp_FUN_0051e5d0(this_ptr,delta_time);
        if (iVar8 == 0) {
          fStack_38 = 0x40400000 + 1.0;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            fStack_38 = 0x41F00000;
          }
          fVar22 = 0.17453292;
          fVar19 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          CStack_d0.x = 0.0;
          fStack_34 = 0x40400000;
          CStack_d0.z = 0x40400000;
          pCVar18 = &CStack_d0;
          CStack_d0.y = 0.0;
          pCVar6 = (this_ptr->base).victim;
          pCVar14 = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar14,pCVar18,
                             fVar19,fVar22);
          if (-1 < iVar8) {
            pCVar1 = &(this_ptr->base).base.base.location;
            pCVar6 = (this_ptr->base).victim;
            fStack_13c = (pCVar1->position).x - (pCVar6->base).location.position.x;
            fStack_138 = (this_ptr->base).base.base.location.position.y -
                         (pCVar6->base).location.position.y;
            fStack_134 = (this_ptr->base).base.base.location.position.z -
                         (pCVar6->base).location.position.z;
            fStack_c4 = fStack_13c;
            afStack_c0[(uint)bVar16 * -2] = afStack_15c[(uint)bVar16 * -2 + 9];
            afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
            fStack_24 = SQRT(afStack_c0[1] * afStack_c0[1] + fStack_c4 * fStack_c4);
            pCVar15 = &(pCVar6->base).location;
            afStack_c0[0] = 0.0;
            fStack_3c = fStack_24;
            if ((fStack_24 <= fStack_38) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCStack_2c = &(this_ptr->base).base.model.base;
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                fStack_100 = (pCVar15->position).x - (pCVar1->position).x;
                fStack_fc = (pCVar6->base).location.position.y -
                            (this_ptr->base).base.base.location.position.y;
                fStack_f8 = (pCVar6->base).location.position.z -
                            (this_ptr->base).base.base.location.position.z;
                afStack_e4[2] = fStack_100;
                afStack_e4[(uint)bVar16 * -2 + 3] = afStack_15c[(uint)bVar16 * -2 + 0x18];
                afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
                     afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_e4 + 2);
                uStack_118 = afStack_c0[2];
                afStack_15c[(uint)bVar16 * -2 + 0x12] = afStack_c0[(uint)bVar16 * -2 + 3];
                afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13] =
                     afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                             (fStack_114 - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(fStack_14) < (float)_DAT_005e9e0a) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,9,1);
                }
              }
              else if (fStack_34 + 1.0 <= fStack_24) {
                if (((float)_DAT_005e9e02 < this_ptr->firing_blend) &&
                   (this_ptr->firing_cooldown <= 0.0)) {
                  this_ptr->taunt_timer = 0.0;
                  iVar8 = core_actor_cpp_randomChance_FUN_0040cd00(0.3);
                  if (iVar8 != 0) {
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
                     (pCVar6->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
                afStack_e4[1] =
                     (pCVar6->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
                fStack_178 = fStack_e8;
                afStack_174[(uint)bVar16 * -2] = afStack_e4[(uint)bVar16 * -2];
                afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                     afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&fStack_178);
                uStack_160 = uStack_148;
                afStack_15c[(uint)bVar16 * -2] = afStack_15c[(uint)bVar16 * -2 + 6];
                afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                     afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                             (afStack_15c[0] -
                                              (this_ptr->base).base.base.orient.vec.y);
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
        fVar22 = 0.17453292;
        fVar19 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_f4.x = 0.0;
        CStack_f4.z = 0x40400000;
        pCVar18 = &CStack_f4;
        CStack_f4.y = 0.0;
        pCVar14 = (*((this_ptr->our_post->vtable)._ub)->getPathMap)(this_ptr->our_post);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,&(this_ptr->our_post->location).position,pCVar14,
                           pCVar18,fVar19,fVar22);
        if (iVar8 < 1) {
          if (iVar8 < 0) {
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
        iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash);
        if (iVar8 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          uStack_28 = *(uint *)(iVar8 + 0x568);
          *(uint *)(iVar8 + 0x568) = 100;
          iVar12 = (**(code **)(*(int *)(iVar8 + 0x154) + 0xe8))(iVar8);
          if (iVar12 != 0) {
            (**(code **)(*(int *)(iVar8 + 0x154) + 0xe4))(iVar8);
          }
          *(uint *)(iVar8 + 0x568) = uStack_28;
        }
        iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                          ((this_ptr->base).base.carry_hands[0].carry_actor,
                           g_CWeaponClassInfo.name_hash);
        iStack_18 = iVar8;
        if (iVar8 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
          uVar7 = *(uint *)(iVar8 + 0x568);
          *(uint *)(iVar8 + 0x568) = 100;
          iVar12 = (**(code **)(*(int *)(iVar8 + 0x154) + 0xe8))(iVar8);
          if (iVar12 == 0) {
            *(uint *)(iStack_18 + 0x568) = uVar7;
          }
          else {
            (**(code **)(*(int *)(iVar8 + 0x154) + 0xe4))(iVar8);
            *(uint *)(iStack_18 + 0x568) = uVar7;
          }
        }
      }
      if ((this_ptr->firing_blend < (float)_DAT_005e9e02) || (this_ptr->firing_cooldown <= 0.0)) {
        if (this_ptr->hold_pos_flag == 0) {
          fVar22 = 4.0;
          fVar19 = 2.0;
        }
        else {
          fVar22 = 5.0;
          fVar19 = 4.0;
        }
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar19,fVar22);
        this_ptr->firing_cooldown = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0,1);
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd00(0.3);
        if (iVar8 != 0) {
          core_mobster_cpp_CMobster_playTaunt_FUN_0051f330(this_ptr,3);
        }
      }
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040(pCStack_20,0);
        puVar21 = &uStack_94;
        uStack_94 = uStack_1c0;
        afStack_90[(uint)bVar16 * -2] = afStack_1ec[(uint)bVar16 * -2 + 0xc];
        afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
        core_actor_cpp_FUN_00408b40(this_ptr,puVar21);
        blood_type = BLOOD_TYPE_RED;
        pCVar18 = &CStack_a0;
        CStack_a0.x = fStack_1b4;
        *(float *)((int)&CStack_a0 + (uint)bVar16 * -8 + 4) = afStack_1ec[(uint)bVar16 * -2 + 0xf];
        this_ptr_00 = g_CGorePtr;
        *(float *)((int)&CStack_a0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar18,blood_type);
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
        pSVar20 = &SStack_22c;
        fVar19 = 0.4;
        core_xform_cpp_FUN_005b5080
                  (&DAT_02c8af28,
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01d33c04);
        pfVar17 = afStack_90 + 8;
        afStack_70[0] = afStack_1ec[2];
        afStack_90[(uint)bVar16 * -2 + 9] = afStack_1ec[(uint)bVar16 * -2 + 3];
        afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
             afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar17);
        pCVar18 = &CStack_16c;
        CStack_16c.x = fStack_1cc;
        *(float *)((int)&CStack_16c + (uint)bVar16 * -8 + 4) = afStack_1ec[(uint)bVar16 * -2 + 9];
        pCVar13 = this_ptr;
        *(float *)((int)&CStack_16c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar13->base,pCVar18,fVar19,pSVar20);
      }
      SStack_22c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      fStack_14 = SStack_22c.damage_amount;
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0) {
        pSVar20 = &SStack_22c;
        fVar19 = 0.4;
        core_xform_cpp_FUN_005b5080
                  (&DAT_02c8af28,
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01d33c08);
        pfVar17 = afStack_1ec + 0x14;
        afStack_19c[0] = (float)uStack_58;
        afStack_1ec[(uint)bVar16 * -2 + 0x15] = afStack_90[(uint)bVar16 * -2 + 0xf];
        afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16] =
             afStack_90[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar17);
        pCVar18 = &CStack_190;
        CStack_190.x = afStack_15c[2];
        *(float *)((int)&CStack_190 + (uint)bVar16 * -8 + 4) = afStack_15c[(uint)bVar16 * -2 + 3];
        pCVar13 = this_ptr;
        *(float *)((int)&CStack_190 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar13->base,pCVar18,fVar19,pSVar20);
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
  EVar5 = (this_ptr->base).base.walk_state;
  if (EVar5 < 2) {
    if (EVar5 == WALK_STATE_WALKING) {
LAB_0051d176:
      iVar8 = 1;
    }
    else {
LAB_0051d3eb:
      iVar8 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar8,1);
  }
  else {
    if (EVar5 < WALK_STATE_NO_PATH) goto LAB_0051d176;
    if (EVar5 != WALK_STATE_NO_PATH) goto LAB_0051d3eb;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
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
    iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
    if (iVar8 != 0) {
      pCVar6 = (this_ptr->base).victim;
      if ((pCVar6 != (CCharacter *)0x0) &&
         (pCVar13 = (CMobster *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
         pCVar13 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
      }
      core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
      fStack_1f0 = (this_ptr->base).base.velocity.x * delta_time;
      afStack_1ec[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_1ec[1] = (this_ptr->base).base.velocity.z * delta_time;
      fStack_1a8 = fStack_1f0;
      afStack_1ec[(uint)bVar16 * -2 + 0x12] = afStack_1ec[(uint)bVar16 * -2];
      afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13] =
           afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      pCVar18 = &(this_ptr->base).base.position_delta;
      fStack_ac = fStack_1a8 + pCVar18->x;
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
      pCVar18->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar19 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar19;
      pCVar3->x = fVar19;
      core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_184);
    }
  }
  else {
    core_mobster_cpp_CMobster_positionOnVehicle_FUN_0051cc20(this_ptr);
  }
  iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                    ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash);
  if (iVar8 != 0) {
    (**(code **)(*(int *)(iVar8 + 0x154) + 0xc))(iVar8,delta_time);
  }
  iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                    ((this_ptr->base).base.carry_hands[0].carry_actor,g_CWeaponClassInfo.name_hash);
  if (iVar8 != 0) {
    (**(code **)(*(int *)(iVar8 + 0x154) + 0xc))(iVar8,delta_time);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  EVar9 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar9 == DEATH_STATE_ALIVE) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_0051def0(this_ptr,delta_time);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
