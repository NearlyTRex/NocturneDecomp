// Name: core_mobster.cpp_CMobster_process_FUN_0051ce40
// Address: 0051ce40
// Address Range: [[0051ce40, 0051dee5]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_process_FUN_0051ce40(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

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
  CGore *this_ptr_00;
  float fVar17;
  SDamageInfo *pSVar18;
  CVector3f *pCVar19;
  CDemonActor *in_stack_fffffda8;
  float in_stack_fffffdac;
  CMobster *in_stack_fffffdb4;
  float max_value;
  CDemonActor *in_stack_fffffdbc;
  EAmmoType in_stack_fffffdc0;
  CDemonActor *in_stack_fffffdc8;
  SDamageInfo SStack_22c;
  float fStack_1f0;
  float afStack_1ec [2];
  CVector3f CStack_1e4;
  float fStack_1d8;
  float afStack_1d4 [2];
  CVector3f CStack_1cc;
  CVector3f CStack_1c0;
  CVector3f CStack_1b4;
  float fStack_1a8;
  float afStack_1a4 [2];
  CVector3f CStack_19c;
  CVector3f CStack_190;
  CVector3f CStack_184;
  CVector3f CStack_178;
  CVector3f CStack_16c;
  float fStack_160;
  float afStack_15c [2];
  CVector3f CStack_154;
  CVector3f CStack_148;
  float fStack_13c;
  float afStack_138 [2];
  CVector3f CStack_130;
  float fStack_124;
  float afStack_120 [5];
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
  float afStack_e4 [2];
  CVector3f CStack_dc;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [2];
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [5];
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CMotionController *pCStack_2c;
  float fStack_28;
  float fStack_24;
  CDeformableModelInstance *pCStack_20;
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
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handle);
      if (iVar6 == 0) {
        in_stack_fffffdb4 = (CMobster *)0x51d059;
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
        if (iVar6 == 0) {
          in_stack_fffffdb4 = this_ptr;
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"mob-scream?.wav");
          this_ptr->sfx_handle = uVar8;
        }
      }
    }
  }
  fVar17 = this_ptr->firing_cooldown - delta_time;
  this_ptr->firing_cooldown = fVar17;
  if (fVar17 < 0.0) {
    this_ptr->firing_cooldown = 0.0;
  }
  fVar17 = this_ptr->taunt_timer - delta_time;
  this_ptr->taunt_timer = fVar17;
  if (fVar17 < 0.0) {
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
                        (g_CEventListPtr,this_ptr->hold_pos_condition), iVar6 != 0)) {
    this_ptr->hold_pos_flag = 1;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar2 = &(this_ptr->base).base.model;
  afStack_48[2] = delta_time * (this_ptr->base).speed;
  pCStack_20 = pCVar2;
  while (0.0 < afStack_48[2]) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar2->base,afStack_48 + 2);
    if (iVar6 == 100) {
      pCVar12 = this_ptr->target_weapon;
      if (pCVar12 != (CDemonActor *)0x0) {
        this_ptr->target_weapon = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004325b0
                  ((CCharacter *)this_ptr,1,pCVar12,0.2,(CMatrix3x4f *)0x0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar6);
    }
  }
  fVar17 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320
            ((CCharacter *)this_ptr,delta_time * fVar17);
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCStack_20->base);
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
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,1,1);
          }
          break;
        }
        pCVar12 = this_ptr->our_post;
        if (pCVar12 != (CDemonActor *)0x0) {
          if (this_ptr->post_mode == 0) {
            fStack_1d8 = (this_ptr->base).base.base.location.position.x -
                         (pCVar12->location).position.x;
            afStack_1d4[0] =
                 (this_ptr->base).base.base.location.position.y - (pCVar12->location).position.y;
            afStack_1d4[1] =
                 (this_ptr->base).base.base.location.position.z - (pCVar12->location).position.z;
            fStack_124 = fStack_1d8;
            afStack_120[(uint)bVar16 * -2] = afStack_1d4[(uint)bVar16 * -2];
            afStack_120[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_1d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
            if ((float)2 <
                SQRT(afStack_120[1] * afStack_120[1] +
                     fStack_124 * fStack_124 + afStack_120[0] * afStack_120[0])) {
              this_ptr->post_mode = 1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,8,1);
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
          afStack_48[0] =
               (pCVar13->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_48[1] =
               (pCVar13->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          CStack_64.x = fStack_4c;
          *(float *)((int)&CStack_64 + (uint)bVar16 * -8 + 4) = afStack_48[(uint)bVar16 * -2];
          *(float *)((int)&CStack_64 + ((uint)bVar16 * -2 + (uint)bVar16 * -2) * 4 + 8) =
               afStack_48[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          fStack_30 = SQRT(CStack_64.z * CStack_64.z +
                           CStack_64.x * CStack_64.x + CStack_64.y * CStack_64.y);
          fStack_1c = fStack_30;
          if (fStack_30 < 3.0f + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_64,&CStack_130)
            ;
            afStack_84[2] = CStack_130.x;
            afStack_84[(uint)bVar16 * -2 + 3] = *(float *)((int)&CStack_130 + (uint)bVar16 * -8 + 4)
            ;
            afStack_84[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
                 *(float *)((int)&CStack_130 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  (afStack_84[3] - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(fStack_14) < (float)0.52359877558333301) &&
               ((this_ptr->base).attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,9,1);
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          if (fStack_30 < (this_ptr->base).guard_distance) {
            if (20.0f <= fStack_30) {
              fVar17 = 1.12104e-44;
            }
            else {
              fVar17 = 1.4013e-45;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,(int)fVar17,1);
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
        if (this_ptr->firing_blend <= (float)0.5) break;
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd00(0.25);
        if (iVar6 != 0) {
          core_mobster_cpp_CMobster_dismountVehicle_FUN_0051cd10(this_ptr);
          break;
        }
      }
      else {
        fVar17 = this_ptr->firing_blend;
        (this_ptr->base).victim = &g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base;
        if (fVar17 <= (float)0.5) break;
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
        iVar6 = core_mobster_cpp_CMobster_processWeaponPickup_FUN_0051e5d0(this_ptr,delta_time);
        if (iVar6 == 0) {
          fStack_38 = 3.0f + 1.0;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            fStack_38 = 30.0f;
          }
          fVar17 = 0.17453292;
          pCVar19 = (CVector3f *)0x3f000000;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          uStack_d0 = 0;
          fStack_34 = 3.0f;
          fStack_c8 = 3.0f;
          uStack_cc = 0;
          pCVar13 = (this_ptr->base).victim;
          pCVar14 = (*((pCVar13->base).vtable._ub)->getPathMap)(&pCVar13->base);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar14,pCVar19,
                             fVar17,(float)in_stack_fffffda8);
          if (-1 < iVar6) {
            pCVar1 = &(this_ptr->base).base.base.location;
            pCVar13 = (this_ptr->base).victim;
            fStack_13c = (pCVar1->position).x - (pCVar13->base).location.position.x;
            afStack_138[0] =
                 (this_ptr->base).base.base.location.position.y -
                 (pCVar13->base).location.position.y;
            afStack_138[1] =
                 (this_ptr->base).base.base.location.position.z -
                 (pCVar13->base).location.position.z;
            fStack_c4 = fStack_13c;
            afStack_c0[(uint)bVar16 * -2] = afStack_138[(uint)bVar16 * -2];
            afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_138[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
            fStack_24 = SQRT(afStack_c0[1] * afStack_c0[1] + fStack_c4 * fStack_c4);
            pCVar15 = &(pCVar13->base).location;
            afStack_c0[0] = 0.0;
            afStack_48[3] = fStack_24;
            if ((fStack_24 <= fStack_38) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCStack_2c = &(this_ptr->base).base.model.base;
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                fStack_100 = (pCVar15->position).x - (pCVar1->position).x;
                fStack_fc = (pCVar13->base).location.position.y -
                            (this_ptr->base).base.base.location.position.y;
                fStack_f8 = (pCVar13->base).location.position.z -
                            (this_ptr->base).base.base.location.position.z;
                CStack_dc.x = fStack_100;
                *(float *)((int)&CStack_dc + (uint)bVar16 * -8 + 4) =
                     afStack_120[(uint)bVar16 * -2 + 9];
                *(float *)((int)&CStack_dc + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
                     afStack_120[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                          (&CStack_dc,&CStack_b8);
                afStack_120[2] = CStack_b8.x;
                afStack_120[(uint)bVar16 * -2 + 3] =
                     *(float *)((int)&CStack_b8 + (uint)bVar16 * -8 + 4);
                afStack_120[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
                     *(float *)((int)&CStack_b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
                fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                      (afStack_120[3] - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(fStack_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,9,1);
                }
              }
              else if (fStack_34 + 1.0 <= fStack_24) {
                if (((float)0.5 < this_ptr->firing_blend) &&
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
                CStack_178.x = fStack_e8;
                *(float *)((int)&CStack_178 + (uint)bVar16 * -8 + 4) = afStack_e4[(uint)bVar16 * -2]
                ;
                *(float *)((int)&CStack_178 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
                     afStack_e4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                          (&CStack_178,&CStack_148);
                fStack_160 = CStack_148.x;
                afStack_15c[(uint)bVar16 * -2] =
                     *(float *)((int)&CStack_148 + (uint)bVar16 * -8 + 4);
                afStack_15c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                     *(float *)((int)&CStack_148 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
                fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                      (afStack_15c[0] - (this_ptr->base).base.base.orient.vec.y);
                if ((ABS(fStack_14) < (float)0.52359877558333301) &&
                   ((this_ptr->base).attack_cooldown <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,9,1);
                  (this_ptr->base).attack_cooldown = 2.0;
                }
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
            if ((this_ptr->base).guard_distance < afStack_48[3]) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,0,1);
            }
          }
        }
      }
      else {
        fVar17 = 0.17453292;
        pCVar19 = (CVector3f *)0x3f000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        uStack_f4 = 0;
        fStack_ec = 3.0f;
        uStack_f0 = 0;
        pCVar14 = (*((this_ptr->our_post->vtable)._ub)->getPathMap)(this_ptr->our_post);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,&(this_ptr->our_post->location).position,pCVar14,
                           pCVar19,fVar17,(float)in_stack_fffffda8);
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
          fVar17 = (pCVar13->model).bone_origins[0x4f].y;
          (pCVar13->model).bone_origins[0x4f].y = 1.4013e-43;
          iVar6 = (*(pCVar5->_uc).canBeGrabbed)(pCVar13,in_stack_fffffdbc,in_stack_fffffdc0);
          if (iVar6 == 0) {
            (pCStack_18->model).bone_origins[0x4f].y = fVar17;
          }
          else {
            (*(((pCVar13->base).vtable._uc)->_uc).isGrabbable)(pCVar13,in_stack_fffffdc8);
            (pCStack_18->model).bone_origins[0x4f].y = fVar17;
          }
        }
      }
      if ((this_ptr->firing_blend < (float)0.5) || (this_ptr->firing_cooldown <= 0.0))
      {
        if (this_ptr->hold_pos_flag == 0) {
          max_value = 4.0;
          fVar17 = 2.0;
        }
        else {
          max_value = 5.0;
          fVar17 = 4.0;
        }
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar17,max_value);
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
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (pCStack_20,0,&CStack_1c0);
        pCVar19 = &CStack_94;
        CStack_94.x = CStack_1c0.x;
        *(uint *)((int)&CStack_94 + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_1c0 + (uint)bVar16 * -8 + 4);
        *(uint *)((int)&CStack_94 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_1c0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar19,&CStack_1b4);
        fVar17 = 0.0;
        pCVar19 = &CStack_a0;
        CStack_a0.x = CStack_1b4.x;
        *(uint *)((int)&CStack_a0 + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_1b4 + (uint)bVar16 * -8 + 4);
        this_ptr_00 = g_CGorePtr;
        *(uint *)((int)&CStack_a0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_1b4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar19,(EBloodType)fVar17);
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
        pSVar18 = &SStack_22c;
        fVar17 = 0.4;
        core_xform_cpp_transformVector3x4_FUN_005b5080
                  (&g_ZeroVector,
                   (CMatrix3x4f *)
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices
                   [g_MobsterIndices[1]].m,&CStack_1e4);
        pCVar19 = &CStack_70;
        CStack_70.x = CStack_1e4.x;
        *(uint *)((int)&CStack_70 + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_1e4 + (uint)bVar16 * -8 + 4);
        *(uint *)((int)&CStack_70 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_1e4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar19,&CStack_1cc);
        pCVar19 = &CStack_16c;
        CStack_16c.x = CStack_1cc.x;
        *(uint *)((int)&CStack_16c + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_1cc + (uint)bVar16 * -8 + 4);
        pCVar11 = this_ptr;
        *(uint *)((int)&CStack_16c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_1cc + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar11->base,pCVar19,fVar17,pSVar18);
      }
      SStack_22c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      fStack_14 = SStack_22c.damage_amount;
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0) {
        pSVar18 = &SStack_22c;
        fVar17 = 0.4;
        core_xform_cpp_transformVector3x4_FUN_005b5080
                  (&g_ZeroVector,
                   (CMatrix3x4f *)
                   (this_ptr->base).base.model.bone_transform.bone_model_matrices
                   [g_MobsterIndices[2]].m,&CStack_58);
        pCVar19 = &CStack_19c;
        CStack_19c.x = CStack_58.x;
        *(uint *)((int)&CStack_19c + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_58 + (uint)bVar16 * -8 + 4);
        *(uint *)((int)&CStack_19c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_58 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar19,&CStack_154);
        pCVar19 = &CStack_190;
        CStack_190.x = CStack_154.x;
        *(uint *)((int)&CStack_190 + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_154 + (uint)bVar16 * -8 + 4);
        pCVar11 = this_ptr;
        *(uint *)((int)&CStack_190 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_154 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar11->base,pCVar19,fVar17,pSVar18);
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
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,0,1);
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
      core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700((CCharacter *)this_ptr,delta_time);
      fStack_1f0 = (this_ptr->base).base.velocity.x * delta_time;
      afStack_1ec[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_1ec[1] = (this_ptr->base).base.velocity.z * delta_time;
      fStack_1a8 = fStack_1f0;
      afStack_1a4[(uint)bVar16 * -2] = afStack_1ec[(uint)bVar16 * -2];
      afStack_1a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_1ec[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      pCVar19 = &(this_ptr->base).base.position_delta;
      fStack_ac = fStack_1a8 + pCVar19->x;
      afStack_a8[0] = afStack_1a4[0] + (this_ptr->base).base.position_delta.y;
      afStack_a8[1] = afStack_1a4[1] + (this_ptr->base).base.position_delta.z;
      fStack_10c = fStack_ac;
      afStack_120[(uint)bVar16 * -2 + 6] = afStack_a8[(uint)bVar16 * -2];
      afStack_120[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
           afStack_a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
      fStack_88 = fStack_10c + pCVar3->x;
      afStack_84[0] = fStack_108 + (this_ptr->base).base.model.accumulated_root_motion.y;
      afStack_84[1] = fStack_104 + (this_ptr->base).base.model.accumulated_root_motion.z;
      CStack_184.x = fStack_88;
      *(float *)((int)&CStack_184 + (uint)bVar16 * -8 + 4) = afStack_84[(uint)bVar16 * -2];
      *(float *)((int)&CStack_184 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           afStack_84[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      (this_ptr->base).base.position_delta.z = 0.0;
      (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
      pCVar19->x = (this_ptr->base).base.position_delta.y;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      fVar17 = (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.y = fVar17;
      pCVar3->x = fVar17;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_184);
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
