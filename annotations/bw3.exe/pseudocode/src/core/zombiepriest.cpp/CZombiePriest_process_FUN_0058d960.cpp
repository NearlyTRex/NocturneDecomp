// Name: core_zombiepriest.cpp_CZombiePriest_process_FUN_0058d960
// Address: 0058d960
// Address Range: [[0058d960, 0058e8c5]]
// Convention: __cdecl
// Signature: void __cdecl core_zombiepriest_cpp_CZombiePriest_process_FUN_0058d960(CZombiePriest *this_ptr,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombiepriest_cpp_CZombiePriest_process_FUN_0058d960(CZombiePriest *this_ptr,float param_2)

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
  CZombiePriest *pCVar11;
  CDemonActor *pCVar12;
  CCharacter *pCVar13;
  CPathMap *pCVar14;
  CLocation *pCVar15;
  byte bVar16;
  float afStackY_11cc [983];
  CGore *this_ptr_00;
  float fVar17;
  SDamageInfo *pSVar18;
  CVector3f *pCVar19;
  CDemonActor *in_stack_fffffdac;
  float in_stack_fffffdb0;
  CZombiePriest *in_stack_fffffdb8;
  float max_value;
  CDemonActor *in_stack_fffffdc0;
  float in_stack_fffffdc4;
  CDemonActor *in_stack_fffffdcc;
  SDamageInfo SStack_22c;
  uint uStack_1f0;
  uint uStack_1ec;
  float fStack_1e8;
  CVector3f CStack_1e4;
  float fStack_1d8;
  float afStack_1d4 [5];
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  uint uStack_19c;
  CVector3f CStack_190;
  CVector3f CStack_184;
  float fStack_178;
  float afStack_174 [5];
  uint uStack_160;
  float fStack_15c;
  uint uStack_154;
  uint uStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  uint uStack_118;
  float fStack_114;
  uint uStack_10c;
  float fStack_108;
  uint uStack_100;
  uint uStack_f4;
  uint uStack_e8;
  uint uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  CMotionController *pCStack_24;
  float fStack_20;
  float fStack_1c;
  CDeformableModelInstance *pCStack_18;
  float fStack_14;
  
  bVar16 = 0;
  iVar6 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar6 == 0) {
    return;
  }
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_22c);
    SStack_22c.attacker = (CDemonActor *)this_ptr;
    SStack_22c.wielder = (CDemonActor *)this_ptr;
    SStack_22c.damage_amount = 999.9;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&SStack_22c);
  }
  if ((this_ptr->base).base.is_fully_burned != 0) {
    (this_ptr->base).base.burn_alpha = 0.0;
  }
  if (0 < (this_ptr->base).base.fire_count) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
    in_stack_fffffdac = (CDemonActor *)0x0;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    in_stack_fffffdb8 = this_ptr;
    EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if (EVar7 == DEATH_STATE_ALIVE) {
      in_stack_fffffdb8 = (CZombiePriest *)0x58da0b;
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handle);
      if (iVar6 == 0) {
        in_stack_fffffdb8 = (CZombiePriest *)0x58db25;
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->death_sfx_handle);
        if (iVar6 == 0) {
          in_stack_fffffdb8 = this_ptr;
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"mob-scream?.wav");
          this_ptr->sfx_handle = uVar8;
        }
      }
    }
  }
  fVar17 = this_ptr->firing_cooldown - param_2;
  this_ptr->firing_cooldown = fVar17;
  if (fVar17 < 0.0) {
    this_ptr->firing_cooldown = 0.0;
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
     (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,this_ptr->hold_pos_condition), iVar6 != 0)) {
    this_ptr->hold_pos_flag = 1;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar2 = &(this_ptr->base).base.model;
  afStack_48[2] = param_2 * (this_ptr->base).speed;
  pCStack_18 = pCVar2;
  while (0.0 < afStack_48[2]) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,afStack_48 + 2);
    if (iVar6 == 100) {
      pCVar12 = this_ptr->target_weapon;
      if (pCVar12 != (CDemonActor *)0x0) {
        this_ptr->target_weapon = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
                  ((CCharacter *)this_ptr,1,(int)pCVar12,0x3e4ccccd,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar6);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850();
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_18->base);
  iVar6 = pSVar9->state_index;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660((CCharacter *)this_ptr,param_2);
  if (iVar10 == 0) {
    switch(iVar6) {
    case 0:
      if (this_ptr->hold_pos_flag == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,param_2);
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,param_2);
          if (iVar6 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_18->base,1,1);
          }
        }
        else {
          pCVar12 = this_ptr->our_post;
          if (pCVar12 != (CDemonActor *)0x0) {
            if (this_ptr->post_mode == 0) {
              fStack_c4 = (this_ptr->base).base.base.location.position.x -
                          (pCVar12->location).position.x;
              afStack_c0[0] =
                   (this_ptr->base).base.base.location.position.y - (pCVar12->location).position.y;
              afStack_c0[1] =
                   (this_ptr->base).base.base.location.position.z - (pCVar12->location).position.z;
              fStack_13c = fStack_c4;
              afStack_174[(uint)bVar16 * -2 + 0xf] = afStack_c0[(uint)bVar16 * -2];
              afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10] =
                   afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
              if ((float)_DAT_005d8bb0 <
                  SQRT(fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138))
              {
                this_ptr->post_mode = 1;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_18->base,8,1);
                break;
              }
            }
            else {
              this_ptr->post_mode = 0;
            }
          }
          pCVar13 = (this_ptr->base).victim;
          afStack_c0[2] =
               (pCVar13->base).location.position.x - (this_ptr->base).base.base.location.position.x;
          afStack_c0[3] =
               (pCVar13->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          fStack_b0 = (pCVar13->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_1c0 = afStack_c0[2];
          afStack_1d4[(uint)bVar16 * -2 + 6] = afStack_c0[(uint)bVar16 * -2 + 3];
          afStack_1d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
               afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
          fStack_1c = SQRT(fStack_1b8 * fStack_1b8 +
                           fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc);
          pCStack_24 = &(this_ptr->base).base.model.base;
          if (fStack_1c < 0x40400000 + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
            uStack_160 = uStack_154;
            afStack_174[(uint)bVar16 * -2 + 6] = afStack_174[(uint)bVar16 * -2 + 9];
            afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
                 afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (fStack_15c - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(fStack_14) < (float)_DAT_005d8ba8) && ((this_ptr->base).attack_cooldown <= 0.0)
               ) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,9,1);
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          else if (fStack_1c < (this_ptr->base).guard_distance) {
            if (_DAT_005e7058 <= fStack_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,8,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,1,1);
            }
          }
        }
      }
      else {
        fVar17 = this_ptr->firing_blend;
        (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        if ((float)_DAT_005d8ba0 < fVar17) {
          core_zombiepriest_cpp_CZombiePriest_startFiringAttack_FUN_0058f4a0(this_ptr);
        }
      }
      break;
    case 1:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,param_2);
      pCVar2 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,param_2);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,1,1);
        }
      }
      else if (this_ptr->post_mode == 0) {
        iVar6 = core_zombiepriest_cpp_FUN_0058efb0();
        if (iVar6 == 0) {
          fStack_30 = 0x40400000 + 1.0;
          if (((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) ||
             ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0)) {
            fStack_30 = 0x41F00000;
          }
          fVar17 = 0.17453292;
          pCVar19 = (CVector3f *)0x3f000000;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          uStack_e8 = 0;
          fStack_2c = 0x40400000;
          fStack_e0 = 0x40400000;
          uStack_e4 = 0;
          pCVar13 = (this_ptr->base).victim;
          pCVar14 = (*((pCVar13->base).vtable._ub)->getPathMap)(&pCVar13->base);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar14,pCVar19,
                             fVar17,(float)in_stack_fffffdac);
          if (-1 < iVar6) {
            pCVar1 = &(this_ptr->base).base.base.location;
            pCVar13 = (this_ptr->base).victim;
            fStack_88 = (pCVar1->position).x - (pCVar13->base).location.position.x;
            fStack_84 = (this_ptr->base).base.base.location.position.y -
                        (pCVar13->base).location.position.y;
            fStack_80 = (this_ptr->base).base.base.location.position.z -
                        (pCVar13->base).location.position.z;
            fStack_4c = fStack_88;
            afStack_48[(uint)bVar16 * -2] = afStack_c0[(uint)bVar16 * -2 + 0xf];
            afStack_48[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
            fStack_20 = SQRT(afStack_48[1] * afStack_48[1] + fStack_4c * fStack_4c);
            pCVar15 = &(pCVar13->base).location;
            afStack_48[0] = 0.0;
            fStack_38 = fStack_20;
            if ((fStack_20 <= fStack_30) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCStack_28 = &(this_ptr->base).base.model.base;
              if ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) {
                fStack_130 = (pCVar15->position).x - (pCVar1->position).x;
                fStack_12c = (pCVar13->base).location.position.y -
                             (this_ptr->base).base.base.location.position.y;
                fStack_128 = (pCVar13->base).location.position.z -
                             (this_ptr->base).base.base.location.position.z;
                fStack_124 = fStack_130;
                afStack_174[(uint)bVar16 * -2 + 0x15] = afStack_174[(uint)bVar16 * -2 + 0x12];
                afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16] =
                     afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
                uStack_118 = uStack_100;
                afStack_174[(uint)bVar16 * -2 + 0x18] = afStack_174[(uint)bVar16 * -2 + 0x1e];
                afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19] =
                     afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f];
                fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                      (fStack_114 - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(fStack_14) < (float)_DAT_005d8ba8) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,9,1);
                }
              }
              else if (fStack_2c + 1.0 <= fStack_20) {
                if (((float)_DAT_005d8ba0 < this_ptr->firing_blend) &&
                   (this_ptr->firing_cooldown <= 0.0)) {
                  core_zombiepriest_cpp_CZombiePriest_startFiringAttack_FUN_0058f4a0(this_ptr);
                }
              }
              else {
                fStack_178 = (pCVar15->position).x - (pCVar1->position).x;
                afStack_174[0] =
                     (pCVar13->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
                afStack_174[1] =
                     (pCVar13->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
                fStack_1a8 = fStack_178;
                afStack_1d4[(uint)bVar16 * -2 + 0xc] = afStack_174[(uint)bVar16 * -2];
                afStack_1d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
                     afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250();
                uStack_10c = uStack_64;
                afStack_174[(uint)bVar16 * -2 + 0x1b] = afStack_c0[(uint)bVar16 * -2 + 0x18];
                afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c] =
                     afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
                fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                      (fStack_108 - (this_ptr->base).base.base.orient.vec.y);
                if ((ABS(fStack_14) < (float)_DAT_005d8ba8) &&
                   ((this_ptr->base).attack_cooldown <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,9,1);
                  (this_ptr->base).attack_cooldown = 2.0;
                }
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
            if ((this_ptr->base).guard_distance < fStack_38) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
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
        uStack_1f0 = 0;
        fStack_1e8 = 0x40400000;
        uStack_1ec = 0;
        pCVar14 = (*((this_ptr->our_post->vtable)._ub)->getPathMap)(this_ptr->our_post);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,&(this_ptr->our_post->location).position,pCVar14,
                           pCVar19,fVar17,(float)in_stack_fffffdac);
        if (iVar6 < 1) {
          if (iVar6 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
            this_ptr->our_post = (CDemonActor *)0x0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,param_2);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        pCVar13 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            ((this_ptr->base).base.carry_hands[1].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        if (pCVar13 != (CCharacter *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          fStack_34 = (pCVar13->model).bone_origins[0x4f].y;
          (pCVar13->model).bone_origins[0x1c].y = (float)this_ptr;
          pCVar5 = (pCVar13->base).vtable._uc;
          (pCVar13->model).bone_origins[0x4f].y = 1.4013e-43;
          iVar6 = (*(pCVar5->_uc).canBeGrabbed)(pCVar13,in_stack_fffffdac,(int)in_stack_fffffdb0);
          if (iVar6 != 0) {
            (*(((pCVar13->base).vtable._uc)->_uc).isGrabbable)
                      (pCVar13,(CDemonActor *)in_stack_fffffdb8);
          }
          (pCVar13->model).bone_origins[0x4f].y = fStack_34;
        }
        pCVar13 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            ((this_ptr->base).base.carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        if (pCVar13 != (CCharacter *)0x0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          afStack_48[3] = (pCVar13->model).bone_origins[0x4f].y;
          (pCVar13->model).bone_origins[0x1c].y = (float)this_ptr;
          pCVar5 = (pCVar13->base).vtable._uc;
          (pCVar13->model).bone_origins[0x4f].y = 1.4013e-43;
          iVar6 = (*(pCVar5->_uc).canBeGrabbed)(pCVar13,in_stack_fffffdc0,(int)in_stack_fffffdc4);
          if (iVar6 == 0) {
            (pCVar13->model).bone_origins[0x4f].y = afStack_48[3];
          }
          else {
            (*(((pCVar13->base).vtable._uc)->_uc).isGrabbable)(pCVar13,in_stack_fffffdcc);
            (pCVar13->model).bone_origins[0x4f].y = afStack_48[3];
          }
        }
      }
      if ((this_ptr->firing_blend < (float)_DAT_005d8ba0) || (this_ptr->firing_cooldown <= 0.0)) {
        if (this_ptr->hold_pos_flag == 0) {
          max_value = 4.0;
          fVar17 = 2.0;
        }
        else {
          max_value = 5.0;
          fVar17 = 4.0;
        }
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar17,max_value);
        this_ptr->firing_cooldown = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0,1);
      }
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_18,0,&CStack_184);
        fStack_ac = CStack_184.x;
        afStack_c0[(uint)bVar16 * -2 + 6] = *(float *)((int)&CStack_184 + (uint)bVar16 * -8 + 4);
        afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
             *(float *)((int)&CStack_184 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_actor_cpp_FUN_00408b80();
        fVar17 = 0.0;
        pCVar19 = &CStack_d0;
        CStack_d0.x = fStack_94;
        *(float *)((int)&CStack_d0 + (uint)bVar16 * -8 + 4) = afStack_c0[(uint)bVar16 * -2 + 0xc];
        this_ptr_00 = g_CGorePtr;
        *(float *)((int)&CStack_d0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar19,(EBloodType)fVar17);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffd98);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] != 0) {
        pSVar18 = (SDamageInfo *)&stack0xfffffd98;
        fVar17 = 0.4;
        core_xform_cpp_FUN_00583260(&DAT_02cfd900);
        uStack_f4 = uStack_148;
        afStack_174[(uint)bVar16 * -2 + 0x21] = afStack_174[(uint)bVar16 * -2 + 0xc];
        afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x22] =
             afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
        core_actor_cpp_FUN_00408b80(this_ptr);
        pCVar19 = &CStack_1e4;
        CStack_1e4.x = afStack_1d4[2];
        *(float *)((int)&CStack_1e4 + (uint)bVar16 * -8 + 4) = afStack_1d4[(uint)bVar16 * -2 + 3];
        pCVar11 = this_ptr;
        *(float *)((int)&CStack_1e4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_1d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar11->base,pCVar19,fVar17,pSVar18);
      }
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] != 0) {
        pSVar18 = (SDamageInfo *)&stack0xfffffd98;
        fVar17 = 0.4;
        core_xform_cpp_FUN_00583260(&DAT_02cfd900);
        uStack_19c = afStack_174[2];
        afStack_1d4[(uint)bVar16 * -2 + 0xf] = afStack_174[(uint)bVar16 * -2 + 3];
        afStack_1d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10] =
             afStack_174[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_actor_cpp_FUN_00408b80(this_ptr);
        pCVar19 = &CStack_190;
        CStack_190.x = fStack_7c;
        *(float *)((int)&CStack_190 + (uint)bVar16 * -8 + 4) = afStack_c0[(uint)bVar16 * -2 + 0x12];
        pCVar11 = this_ptr;
        *(float *)((int)&CStack_190 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar11->base,pCVar19,fVar17,pSVar18);
      }
    }
    goto switchD_0058e8bf_caseD_3;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_0058dc3d:
      fVar17 = 1.4013e-45;
    }
    else {
LAB_0058de9d:
      fVar17 = 0.0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,(int)fVar17,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_0058dc3d;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0058de9d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_18->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0058e8bf_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - param_2;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    pCVar13 = (this_ptr->base).victim;
    if ((pCVar13 != (CCharacter *)0x0) &&
       (pCVar11 = (CZombiePriest *)(*(((pCVar13->base).vtable._uc)->_uc).getGrabber)(pCVar13),
       pCVar11 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042c1e0();
    fStack_70 = (this_ptr->base).base.velocity.x * param_2;
    fStack_6c = (this_ptr->base).base.velocity.y * param_2;
    fStack_68 = (this_ptr->base).base.velocity.z * param_2;
    fStack_a0 = fStack_70;
    afStack_c0[(uint)bVar16 * -2 + 9] = afStack_c0[(uint)bVar16 * -2 + 0x15];
    afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
         afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16];
    pCVar19 = &(this_ptr->base).base.position_delta;
    fStack_dc = fStack_a0 + pCVar19->x;
    afStack_d8[0] = fStack_9c + (this_ptr->base).base.position_delta.y;
    afStack_d8[1] = fStack_98 + (this_ptr->base).base.position_delta.z;
    fStack_1b4 = fStack_dc;
    afStack_1d4[(uint)bVar16 * -2 + 9] = afStack_d8[(uint)bVar16 * -2];
    afStack_1d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
         afStack_d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1d8 = fStack_1b4 + pCVar3->x;
    afStack_1d4[0] = fStack_1b0 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_1d4[1] = fStack_1ac + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_58.x = fStack_1d8;
    *(float *)((int)&CStack_58 + (uint)bVar16 * -8 + 4) = afStack_1d4[(uint)bVar16 * -2];
    *(float *)((int)&CStack_58 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_1d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar19->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar3->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_58);
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                      ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash
                      );
  if (pCVar12 != (CDemonActor *)0x0) {
    (*((pCVar12->vtable)._ub)->process)(pCVar12,param_2);
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c840
                      ((this_ptr->base).base.carry_hands[0].carry_actor,g_CWeaponClassInfo.name_hash
                      );
  if (pCVar12 != (CDemonActor *)0x0) {
    (*((pCVar12->vtable)._ub)->process)(pCVar12,param_2);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    core_zombiepriest_cpp_FUN_0058e8d0();
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,param_2);
  return;
}
