// Name: core_mobster.cpp_CMobster_process_FUN_004fde80
// Address: 004fde80
// Address Range: [[004fde80, 004fef25]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_process_FUN_004fde80(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_process_FUN_004fde80(CMobster *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  byte *puVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  EWalkState EVar5;
  CCharacter *pCVar6;
  int iVar7;
  EDeathState EVar8;
  uint uVar9;
  CMobster *pCVar10;
  int iVar11;
  CPathMap *pCVar12;
  byte *puVar13;
  byte bVar14;
  float afStackY_11d8 [982];
  float *pfVar15;
  CGore *this_ptr_00;
  CVector3f *pCVar16;
  float fVar17;
  SDamageInfo *pSVar18;
  uint *puVar19;
  EBloodType blood_type;
  float fVar20;
  SDamageInfo aSStack_268 [4];
  uint uStack_264;
  CMobster *pCStack_234;
  CMobster *pCStack_230;
  SDamageInfo aSStack_22c [4];
  float fStack_228;
  CMobster *pCStack_1f8;
  CMobster *pCStack_1f4;
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
  
  bVar14 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    if (this_ptr->vehicle != (CDemonActor *)0x0) {
      core_mobster_cpp_CMobster_positionOnVehicle_FUN_004fdc60(this_ptr);
      core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00428e30
                ((CCharacter *)this_ptr,delta_time);
    }
    return;
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[10] * 4) == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_268);
    pCStack_234 = this_ptr;
    pCStack_230 = this_ptr;
    uStack_264 = 0x4479f99a;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,aSStack_268);
  }
  if ((this_ptr->base).base.is_fully_burned != 0) {
    (this_ptr->base).base.burn_alpha = 0.0;
  }
  if (0 < (this_ptr->base).base.fire_count) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    EVar8 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if (((EVar8 == DEATH_STATE_ALIVE) &&
        (iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle), iVar7 == 0)) &&
       (iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]), iVar7 == 0)) {
      uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"mob-scream?.wav");
      this_ptr->sfx_handle = uVar9;
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
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4) == 0) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  }
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[1] * 4) == 0) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
  }
  if ((this_ptr->hold_pos_flag == 0) &&
     (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,this_ptr->hold_pos_condition), iVar7 != 0)) {
    this_ptr->hold_pos_flag = 1;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  pCVar1 = &(this_ptr->base).base.model;
  fStack_40 = delta_time * (this_ptr->base).speed;
  pCStack_20 = (CMotionController *)pCVar1;
  while (0.0 < fStack_40) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCVar1,afStack_90 + 0x14);
    if (iVar7 == 100) {
      pCVar3 = this_ptr->target_weapon;
      if (pCVar3 != (CDemonActor *)0x0) {
        this_ptr->target_weapon = (CDemonActor *)0x0;
        core_charactr_cpp_FUN_00428b10(this_ptr,1,pCVar3,0x3e4ccccd,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar7);
    }
  }
  fVar17 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar17);
  iVar7 = core_motion_cpp_FUN_005035c0(pCStack_20);
  uVar4 = *(uint *)(iVar7 + 0x24);
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    switch(uVar4) {
    case 0:
      if (this_ptr->hold_pos_flag == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar7 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
          }
          break;
        }
        pCVar3 = this_ptr->our_post;
        if (pCVar3 != (CDemonActor *)0x0) {
          if (this_ptr->post_mode == 0) {
            fStack_1d8 = *(float *)&(this_ptr->base).base.base.field_0x20 -
                         *(float *)&pCVar3->field_0x20;
            fStack_1d4 = *(float *)&(this_ptr->base).base.base.field_0x24 -
                         *(float *)&pCVar3->field_0x24;
            fStack_1d0 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                         *(float *)&pCVar3->field_0x28;
            fStack_124 = fStack_1d8;
            afStack_15c[(uint)bVar14 * -2 + 0xf] = afStack_1ec[(uint)bVar14 * -2 + 6];
            afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
                 afStack_1ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
            if ((float)_DAT_005dedc5 <
                SQRT(fStack_11c * fStack_11c + fStack_124 * fStack_124 + fStack_120 * fStack_120)) {
              this_ptr->post_mode = 1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,8,1);
              break;
            }
          }
          else {
            this_ptr->post_mode = 0;
          }
        }
        if (this_ptr->vehicle == (CDemonActor *)0x0) {
          pCVar6 = (this_ptr->base).victim;
          fStack_4c = *(float *)&(pCVar6->base).field_0x20 -
                      *(float *)&(this_ptr->base).base.base.field_0x20;
          fStack_48 = *(float *)&(pCVar6->base).field_0x24 -
                      *(float *)&(this_ptr->base).base.base.field_0x24;
          fStack_44 = *(float *)&(pCVar6->base).field_0x28 -
                      *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_64 = fStack_4c;
          afStack_90[(uint)bVar14 * -2 + 0xc] = afStack_90[(uint)bVar14 * -2 + 0x12];
          afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
               afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
          fStack_30 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
          fStack_1c = fStack_30;
          if (fStack_30 < 0x40400000 + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_90 + 0xb);
            uStack_7c = uStack_130;
            afStack_90[(uint)bVar14 * -2 + 6] = afStack_15c[(uint)bVar14 * -2 + 0xc];
            afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
                 afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                         (fStack_78 - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(fStack_14) < (float)_DAT_005dedbd) && ((this_ptr->base).attack_cooldown <= 0.0)
               ) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,9,1);
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          if (fStack_30 < (this_ptr->base).guard_distance) {
            if (_DAT_005fa238 <= fStack_30) {
              iVar7 = 8;
            }
            else {
              iVar7 = 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,iVar7,1);
          }
          if ((this_ptr->weapon_search_count == 0) &&
             (iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.7), iVar7 != 0)) {
            core_mobster_cpp_CMobster_playTaunt_FUN_00500370(this_ptr,1);
            this_ptr->weapon_search_count = 1;
          }
          else {
            this_ptr->weapon_search_count = 1;
          }
          break;
        }
        if (this_ptr->firing_blend <= (float)_DAT_005dedb5) break;
        iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.25);
        if (iVar7 != 0) {
          core_mobster_cpp_CMobster_dismountVehicle_FUN_004fdd50(this_ptr);
          break;
        }
      }
      else {
        fVar17 = this_ptr->firing_blend;
        (this_ptr->base).victim = *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4);
        if (fVar17 <= (float)_DAT_005dedb5) break;
      }
      core_mobster_cpp_CMobster_startFiringAttack_FUN_004ffb00(this_ptr);
      break;
    case 1:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar1 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar1,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar1,1,1);
        }
      }
      else if (this_ptr->post_mode == 0) {
        iVar7 = core_mobster_cpp_CMobster_processWeaponPickup_FUN_004ff610(this_ptr,delta_time);
        if (iVar7 == 0) {
          fStack_38 = 0x40400000 + 1.0;
          if (*(int *)&(this_ptr->base).base.field_0x2698 != 0) {
            fStack_38 = 0x41F00000;
          }
          fVar20 = 0.17453292;
          fVar17 = 0.5;
          *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
          *(uint *)&(this_ptr->base).base.model.field_0x2258 =
               *(uint *)&(this_ptr->base).base.model.field_0x225c;
          *(uint *)&(this_ptr->base).base.model.field_0x2254 =
               *(uint *)&(this_ptr->base).base.model.field_0x2258;
          CStack_d0.x = 0.0;
          fStack_34 = 0x40400000;
          CStack_d0.z = 0x40400000;
          pCVar16 = &CStack_d0;
          CStack_d0.y = 0.0;
          pCVar6 = (this_ptr->base).victim;
          pCVar12 = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)this_ptr,
                             (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar12,
                             pCVar16,fVar17,fVar20);
          if (-1 < iVar7) {
            puVar2 = &(this_ptr->base).base.base.field_0x20;
            pCVar6 = (this_ptr->base).victim;
            fStack_13c = *(float *)puVar2 - *(float *)&(pCVar6->base).field_0x20;
            fStack_138 = *(float *)&(this_ptr->base).base.base.field_0x24 -
                         *(float *)&(pCVar6->base).field_0x24;
            fStack_134 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                         *(float *)&(pCVar6->base).field_0x28;
            fStack_c4 = fStack_13c;
            afStack_c0[(uint)bVar14 * -2] = afStack_15c[(uint)bVar14 * -2 + 9];
            afStack_c0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
            fStack_24 = SQRT(afStack_c0[1] * afStack_c0[1] + fStack_c4 * fStack_c4);
            puVar13 = &(pCVar6->base).field_0x20;
            afStack_c0[0] = 0.0;
            fStack_3c = fStack_24;
            if ((fStack_24 <= fStack_38) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCStack_2c = (CMotionController *)&(this_ptr->base).base.model;
              if (*(int *)&(this_ptr->base).base.field_0x2698 == 0) {
                fStack_100 = *(float *)puVar13 - *(float *)puVar2;
                fStack_fc = *(float *)&(pCVar6->base).field_0x24 -
                            *(float *)&(this_ptr->base).base.base.field_0x24;
                fStack_f8 = *(float *)&(pCVar6->base).field_0x28 -
                            *(float *)&(this_ptr->base).base.base.field_0x28;
                afStack_e4[2] = fStack_100;
                afStack_e4[(uint)bVar14 * -2 + 3] = afStack_15c[(uint)bVar14 * -2 + 0x18];
                afStack_e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
                     afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_e4 + 2);
                uStack_118 = afStack_c0[2];
                afStack_15c[(uint)bVar14 * -2 + 0x12] = afStack_c0[(uint)bVar14 * -2 + 3];
                afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
                     afStack_c0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                             (fStack_114 - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(fStack_14) < (float)_DAT_005dedbd) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,9,1);
                }
              }
              else if (fStack_34 + 1.0 <= fStack_24) {
                if (((float)_DAT_005dedb5 < this_ptr->firing_blend) &&
                   (this_ptr->firing_cooldown <= 0.0)) {
                  this_ptr->taunt_timer = 0.0;
                  iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.3);
                  if (iVar7 != 0) {
                    core_mobster_cpp_CMobster_playTaunt_FUN_00500370(this_ptr,2);
                  }
                  if (this_ptr->taunt_timer <= 0.0) {
                    core_mobster_cpp_CMobster_startFiringAttack_FUN_004ffb00(this_ptr);
                  }
                  else {
                    pCVar1 = &(this_ptr->base).base.model;
                    if (*(int *)&(this_ptr->base).base.field_0x2620 == 0) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                ((CMotionController *)pCVar1,10,1);
                    }
                    else {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                ((CMotionController *)pCVar1,0xb,1);
                    }
                  }
                }
              }
              else {
                fStack_e8 = *(float *)puVar13 - *(float *)puVar2;
                afStack_e4[0] =
                     *(float *)&(pCVar6->base).field_0x24 -
                     *(float *)&(this_ptr->base).base.base.field_0x24;
                afStack_e4[1] =
                     *(float *)&(pCVar6->base).field_0x28 -
                     *(float *)&(this_ptr->base).base.base.field_0x28;
                fStack_178 = fStack_e8;
                afStack_174[(uint)bVar14 * -2] = afStack_e4[(uint)bVar14 * -2];
                afStack_174[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                     afStack_e4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_178);
                uStack_160 = uStack_148;
                afStack_15c[(uint)bVar14 * -2] = afStack_15c[(uint)bVar14 * -2 + 6];
                afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                     afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                             (afStack_15c[0] -
                                              (this_ptr->base).base.base.orient.vec.y);
                if ((ABS(fStack_14) < (float)_DAT_005dedbd) &&
                   ((this_ptr->base).attack_cooldown <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,9,1);
                  (this_ptr->base).attack_cooldown = 2.0;
                }
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
            if ((this_ptr->base).guard_distance < fStack_3c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,0,1);
            }
          }
        }
      }
      else {
        fVar20 = 0.17453292;
        fVar17 = 0.5;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        CStack_f4.x = 0.0;
        CStack_f4.z = 0x40400000;
        pCVar16 = &CStack_f4;
        CStack_f4.y = 0.0;
        pCVar12 = (*((this_ptr->our_post->vtable)._ub)->getPathMap)(this_ptr->our_post);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,(CVector3f *)&this_ptr->our_post->field_0x20,
                           pCVar12,pCVar16,fVar17,fVar20);
        if (iVar7 < 1) {
          if (iVar7 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar1,0,1);
            this_ptr->our_post = (CDemonActor *)0x0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar1,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)&(this_ptr->base).base.field_0x2698,
                           g_CWeaponClassInfo.name_hash);
        if (iVar7 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
          uStack_28 = *(uint *)(iVar7 + 0x6c4);
          *(uint *)(iVar7 + 0x6c4) = 100;
          iVar11 = (**(code **)(*(int *)(iVar7 + 0x2b0) + 0xf0))(iVar7);
          if (iVar11 != 0) {
            (**(code **)(*(int *)(iVar7 + 0x2b0) + 0xec))(iVar7);
          }
          *(uint *)(iVar7 + 0x6c4) = uStack_28;
        }
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)&(this_ptr->base).base.field_0x2620,
                           g_CWeaponClassInfo.name_hash);
        iStack_18 = iVar7;
        if (iVar7 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
          uVar4 = *(uint *)(iVar7 + 0x6c4);
          *(uint *)(iVar7 + 0x6c4) = 100;
          iVar11 = (**(code **)(*(int *)(iVar7 + 0x2b0) + 0xf0))(iVar7);
          if (iVar11 == 0) {
            *(uint *)(iStack_18 + 0x6c4) = uVar4;
          }
          else {
            (**(code **)(*(int *)(iVar7 + 0x2b0) + 0xec))(iVar7);
            *(uint *)(iStack_18 + 0x6c4) = uVar4;
          }
        }
      }
      if ((this_ptr->firing_blend < (float)_DAT_005dedb5) || (this_ptr->firing_cooldown <= 0.0)) {
        if (this_ptr->hold_pos_flag == 0) {
          fVar20 = 4.0;
          fVar17 = 2.0;
        }
        else {
          fVar20 = 5.0;
          fVar17 = 4.0;
        }
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar17,fVar20);
        this_ptr->firing_cooldown = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0,1);
        iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.3);
        if (iVar7 != 0) {
          core_mobster_cpp_CMobster_playTaunt_FUN_00500370(this_ptr,3);
        }
      }
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        core_skeleton_cpp_FUN_005469a0(pCStack_20,0);
        puVar19 = &uStack_94;
        uStack_94 = uStack_1c0;
        afStack_90[(uint)bVar14 * -2] = afStack_1ec[(uint)bVar14 * -2 + 0xc];
        afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_1ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar19);
        blood_type = BLOOD_TYPE_RED;
        pCVar16 = &CStack_a0;
        CStack_a0.x = fStack_1b4;
        *(float *)((int)&CStack_a0 + (uint)bVar14 * -8 + 4) = afStack_1ec[(uint)bVar14 * -2 + 0xf];
        this_ptr_00 = g_CGorePtr;
        *(float *)((int)&CStack_a0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             afStack_1ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_00,pCVar16,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_22c);
      fStack_228 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pCStack_1f8 = this_ptr;
      pCStack_1f4 = this_ptr;
      fStack_14 = fStack_228;
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[1] * 4) != 0)
      {
        pSVar18 = aSStack_22c;
        fVar17 = 0.4;
        core_xform_cpp_FUN_00591530
                  (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01d1c714 * 0x30);
        pfVar15 = afStack_90 + 8;
        afStack_70[0] = afStack_1ec[2];
        afStack_90[(uint)bVar14 * -2 + 9] = afStack_1ec[(uint)bVar14 * -2 + 3];
        afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
             afStack_1ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar15);
        pCVar16 = &CStack_16c;
        CStack_16c.x = fStack_1cc;
        *(float *)((int)&CStack_16c + (uint)bVar14 * -8 + 4) = afStack_1ec[(uint)bVar14 * -2 + 9];
        pCVar10 = this_ptr;
        *(float *)((int)&CStack_16c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             afStack_1ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar10->base,pCVar16,fVar17,pSVar18);
      }
      fStack_228 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      fStack_14 = fStack_228;
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4) != 0)
      {
        pSVar18 = aSStack_22c;
        fVar17 = 0.4;
        core_xform_cpp_FUN_00591530
                  (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01d1c718 * 0x30);
        pfVar15 = afStack_1ec + 0x14;
        afStack_19c[0] = (float)uStack_58;
        afStack_1ec[(uint)bVar14 * -2 + 0x15] = afStack_90[(uint)bVar14 * -2 + 0xf];
        afStack_1ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
             afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar15);
        pCVar16 = &CStack_190;
        CStack_190.x = afStack_15c[2];
        *(float *)((int)&CStack_190 + (uint)bVar14 * -8 + 4) = afStack_15c[(uint)bVar14 * -2 + 3];
        pCVar10 = this_ptr;
        *(float *)((int)&CStack_190 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar10->base,pCVar16,fVar17,pSVar18);
      }
      break;
    case 10:
    case 0xb:
      if (this_ptr->taunt_timer <= 0.0) {
        core_mobster_cpp_CMobster_startFiringAttack_FUN_004ffb00(this_ptr);
      }
    }
    goto switchD_004fef11_caseD_3;
  }
  EVar5 = (this_ptr->base).base.walk_state;
  if (EVar5 < 2) {
    if (EVar5 == WALK_STATE_WALKING) {
LAB_004fe1b6:
      iVar7 = 1;
    }
    else {
LAB_004fe42b:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar7,1);
  }
  else {
    if (EVar5 < WALK_STATE_NO_PATH) goto LAB_004fe1b6;
    if (EVar5 != WALK_STATE_NO_PATH) goto LAB_004fe42b;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
switchD_004fef11_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (this_ptr->vehicle == (CDemonActor *)0x0) {
    iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
    if (iVar7 != 0) {
      pCVar6 = (this_ptr->base).victim;
      if ((pCVar6 != (CCharacter *)0x0) &&
         (pCVar10 = (CMobster *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
         pCVar10 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
      }
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
      fStack_1f0 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
      afStack_1ec[0] = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
      afStack_1ec[1] = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
      fStack_1a8 = fStack_1f0;
      afStack_1ec[(uint)bVar14 * -2 + 0x12] = afStack_1ec[(uint)bVar14 * -2];
      afStack_1ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
           afStack_1ec[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      puVar2 = &(this_ptr->base).base.field_0x257c;
      fStack_ac = fStack_1a8 + *(float *)puVar2;
      fStack_a8 = fStack_1a4 + *(float *)&(this_ptr->base).base.field_0x2580;
      fStack_a4 = fStack_1a0 + *(float *)&(this_ptr->base).base.field_0x2584;
      fStack_10c = fStack_ac;
      afStack_15c[(uint)bVar14 * -2 + 0x15] = afStack_c0[(uint)bVar14 * -2 + 6];
      afStack_15c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
           afStack_c0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      puVar13 = &(this_ptr->base).base.model.field_0x2254;
      afStack_90[2] = fStack_10c + *(float *)puVar13;
      afStack_90[3] = fStack_108 + *(float *)&(this_ptr->base).base.model.field_0x2258;
      fStack_80 = fStack_104 + *(float *)&(this_ptr->base).base.model.field_0x225c;
      CStack_184.x = afStack_90[2];
      *(float *)((int)&CStack_184 + (uint)bVar14 * -8 + 4) = afStack_90[(uint)bVar14 * -2 + 3];
      *(float *)((int)&CStack_184 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
      *(uint *)&(this_ptr->base).base.field_0x2580 =
           *(uint *)&(this_ptr->base).base.field_0x2584;
      *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.field_0x2580;
      *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
      uVar4 = *(uint *)&(this_ptr->base).base.model.field_0x225c;
      *(uint *)&(this_ptr->base).base.model.field_0x2258 = uVar4;
      *(uint *)puVar13 = uVar4;
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_184);
    }
  }
  else {
    core_mobster_cpp_CMobster_positionOnVehicle_FUN_004fdc60(this_ptr);
  }
  iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)&(this_ptr->base).base.field_0x2698,g_CWeaponClassInfo.name_hash
                    );
  if (iVar7 != 0) {
    (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x14))(iVar7,delta_time);
  }
  iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)&(this_ptr->base).base.field_0x2620,g_CWeaponClassInfo.name_hash
                    );
  if (iVar7 != 0) {
    (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x14))(iVar7,delta_time);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  EVar8 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar8 == DEATH_STATE_ALIVE) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_004fef30(this_ptr,delta_time);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
