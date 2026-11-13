// Name: core_bride.cpp_CBride_process_FUN_00423b70
// Address: 00423b70
// Address Range: [[00423b70, 00424835]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_process_FUN_00423b70(CBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_CBride_process_FUN_00423b70(CBride *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CCharacter *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  CDemonActor *pCVar5;
  uint uVar6;
  CPathMap *pCVar7;
  byte bVar8;
  float afStackY_1174 [937];
  CBride *pCVar9;
  CVector3f *pCVar10;
  float *pfVar11;
  uint *puVar12;
  float fVar13;
  EBloodType blood_type;
  SDamageInfo *pSVar14;
  float fVar15;
  CMotionController *this_ptr_00;
  SDamageInfo SStack_2b8;
  SDamageInfo SStack_27c;
  SDamageInfo SStack_240;
  SDamageInfo SStack_204;
  SDamageInfo SStack_1c8;
  CVector3f CStack_18c;
  float fStack_180;
  float afStack_17c [4];
  float fStack_16c;
  CVector3f CStack_168;
  uint uStack_15c;
  float afStack_158 [2];
  CVector3f CStack_150;
  float fStack_144;
  float afStack_140 [5];
  CVector3f CStack_12c;
  uint uStack_120;
  float afStack_11c [2];
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [2];
  CVector3f CStack_fc;
  uint uStack_f0;
  float afStack_ec [2];
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [2];
  CVector3f CStack_cc;
  uint uStack_c0;
  float afStack_bc [5];
  uint uStack_a8;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float afStack_78 [3];
  uint uStack_6c;
  CVector3f CStack_60;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 != 0) {
    if (0.0 <= this_ptr->action_timer) {
      this_ptr->action_timer = this_ptr->action_timer - delta_time;
    }
    pCVar1 = &(this_ptr->base).base.model;
    fStack_1c = -1.0;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
    uVar6 = pSVar4->state_index;
    if (uVar6 < 5) {
      if (uVar6 == 0) {
        iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar3 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,1,1);
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
            if ((iVar3 == 0) &&
               (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]),
               iVar3 == 0)) {
              uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              this_ptr->sfx_handles[1] = uVar6;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,1,1);
        }
      }
      else if (uVar6 == 1) {
        if (this_ptr->action_timer <= 0.0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,20.0);
          this_ptr->action_timer = fStack_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,3,1);
          iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
          if ((iVar3 == 0) &&
             (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]),
             iVar3 == 0)) {
            uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"ub-howl?.wav");
            this_ptr->sfx_handles[1] = uVar6;
          }
        }
        fVar13 = (this_ptr->base).speed;
        (this_ptr->base).base.walk_step_speed =
             delta_time * (this_ptr->base).speed * (float)_DAT_005d4f58;
        core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar13);
        if (((((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]] ==
               0) && ((this_ptr->base).base.model.part_data.visibility_flags
                      [this_ptr->part_indices[1]] == 0)) ||
            ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] == 0)
            ) && ((0.0 <= this_ptr->dismember_death_timer &&
                  (fVar13 = this_ptr->dismember_death_timer + delta_time,
                  this_ptr->dismember_death_timer = fVar13, (float)_DAT_005d4f50 <= fVar13)))) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_27c);
          SStack_27c.damage_amount = 9999.9;
          SStack_27c.attacker = (CDemonActor *)this_ptr;
          SStack_27c.wielder = (CDemonActor *)this_ptr;
          (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
                    ((CCharacter *)this_ptr,&SStack_27c);
          this_ptr->dismember_death_timer = -1.0;
        }
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar1 = &(this_ptr->base).base.model;
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0,1);
          }
        }
        else {
          fVar15 = 0.17453292;
          fVar13 = 1.0;
          CStack_168.x = 0.0;
          CStack_168.z = 0x40200000;
          pCVar10 = &CStack_168;
          CStack_168.y = 0.0;
          pCVar2 = (this_ptr->base).victim;
          pCVar7 = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar7,pCVar10,
                             fVar13,fVar15);
          if (iVar3 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0,1);
          }
          else if (((0 < iVar3) && ((this_ptr->base).attack_cooldown <= 0.0)) &&
                  (pCVar2 = (this_ptr->base).victim,
                  pCVar5 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
                  pCVar5 == (CDemonActor *)0x0)) {
            iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
            if (iVar3 == 0) {
              iVar3 = 6;
            }
            else {
              iVar3 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,iVar3,1);
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
            if ((iVar3 == 0) &&
               (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]),
               iVar3 == 0)) {
              uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              this_ptr->sfx_handles[1] = uVar6;
            }
          }
        }
      }
    }
    else if (uVar6 < 6) {
      pCVar2 = (this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,1,1);
      }
      else {
        pCVar5 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar5 == (CDemonActor *)0x0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.2,0.5);
          (this_ptr->base).attack_cooldown = fStack_14;
          fStack_20 = core_motion_cpp_FUN_00525020(&pCVar1->base);
          dStack_34 = (double)fStack_20;
          fStack_14 = fStack_20;
          if (fStack_20 <= (float)_DAT_005d4f58) {
            fStack_1c = 0x40200000;
            if ((dStack_34 < 1.0) || (_DAT_005d4f40 < dStack_34)) {
              dStack_3c = (double)fStack_20;
              if (((float)_DAT_005d4f58 <= fStack_20) &&
                 ((dStack_3c <= _DAT_005d4f60 &&
                  ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                   != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_240);
                SStack_240.damage_amount =
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
                pSVar14 = &SStack_240;
                SStack_240.attacker = (CDemonActor *)this_ptr;
                SStack_240.wielder = (CDemonActor *)this_ptr;
                fVar13 = 0.4;
                fStack_14 = SStack_240.damage_amount;
                core_xform_cpp_FUN_005b5080
                          (&DAT_007c5340,
                           (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                           DAT_007c538c);
                puVar12 = &uStack_f0;
                uStack_f0 = afStack_bc[2];
                afStack_ec[(uint)bVar8 * -2] = afStack_bc[(uint)bVar8 * -2 + 3];
                afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                     afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
                core_actor_cpp_FUN_00408b40(this_ptr,puVar12);
                pCVar10 = &CStack_e4;
                CStack_e4.x = fStack_180;
                *(float *)((int)&CStack_e4 + (uint)bVar8 * -8 + 4) = afStack_17c[(uint)bVar8 * -2];
                pCVar9 = this_ptr;
                *(float *)((int)&CStack_e4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                          (&pCVar9->base,pCVar10,fVar13,pSVar14);
              }
            }
            else if ((this_ptr->base).base.model.part_data.visibility_flags
                     [this_ptr->part_indices[3]] != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_2b8);
              SStack_2b8.damage_amount =
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
              pSVar14 = &SStack_2b8;
              SStack_2b8.attacker = (CDemonActor *)this_ptr;
              SStack_2b8.wielder = (CDemonActor *)this_ptr;
              fVar13 = 0.4;
              fStack_14 = SStack_2b8.damage_amount;
              core_xform_cpp_FUN_005b5080
                        (&DAT_007c5340,
                         (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                         DAT_007c5390);
              puVar12 = &uStack_15c;
              uStack_15c = uStack_c0;
              afStack_158[(uint)bVar8 * -2] = afStack_bc[(uint)bVar8 * -2];
              afStack_158[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                   afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              core_actor_cpp_FUN_00408b40(this_ptr,puVar12);
              pCVar10 = &CStack_18c;
              CStack_18c.x = fStack_d8;
              *(float *)((int)&CStack_18c + (uint)bVar8 * -8 + 4) = afStack_d4[(uint)bVar8 * -2];
              pCVar9 = this_ptr;
              *(float *)((int)&CStack_18c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                   afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                        (&pCVar9->base,pCVar10,fVar13,pSVar14);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,1,1);
        }
      }
    }
    else if (uVar6 < 7) {
      pCVar2 = (this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,1,1);
      }
      else {
        pCVar5 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar5 == (CDemonActor *)0x0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.2,0.5);
          (this_ptr->base).attack_cooldown = fStack_14;
          fStack_18 = core_motion_cpp_FUN_00525020(&pCVar1->base);
          dStack_44 = (double)fStack_18;
          fStack_14 = fStack_18;
          if (fStack_18 <= (float)_DAT_005d4f38) {
            fStack_1c = 0x40200000;
            if (((1.0 <= dStack_44) && (dStack_44 <= _DAT_005d4f40)) ||
               ((dStack_2c = (double)fStack_18, (float)_DAT_005d4f48 <= fStack_18 &&
                (dStack_2c <= _DAT_005d4f50)))) {
              if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]]
                  != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_204);
                SStack_204.damage_amount =
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
                pSVar14 = &SStack_204;
                SStack_204.attacker = (CDemonActor *)this_ptr;
                SStack_204.wielder = (CDemonActor *)this_ptr;
                fVar13 = 0.4;
                fStack_14 = SStack_204.damage_amount;
                core_xform_cpp_FUN_005b5080
                          (&DAT_007c5340,
                           (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                           DAT_007c5390);
                pfVar11 = afStack_bc + 0xe;
                afStack_84[0] = (float)uStack_a8;
                afStack_bc[(uint)bVar8 * -2 + 0xf] = afStack_bc[(uint)bVar8 * -2 + 6];
                afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
                     afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
                core_actor_cpp_FUN_00408b40(this_ptr,pfVar11);
                pCVar10 = &CStack_150;
                CStack_150.x = fStack_9c;
                *(float *)((int)&CStack_150 + (uint)bVar8 * -8 + 4) =
                     afStack_bc[(uint)bVar8 * -2 + 9];
                pCVar9 = this_ptr;
                *(float *)((int)&CStack_150 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                          (&pCVar9->base,pCVar10,fVar13,pSVar14);
              }
            }
            else {
              dStack_54 = (double)fStack_18;
              if (((((float)_DAT_005d4f58 <= fStack_18) && (dStack_54 <= _DAT_005d4f60)) ||
                  ((dStack_4c = (double)fStack_18, (float)_DAT_005d4f68 <= fStack_18 &&
                   (dStack_4c <= _DAT_005d4f38)))) &&
                 ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                  != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_1c8);
                SStack_1c8.damage_amount =
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
                pSVar14 = &SStack_1c8;
                SStack_1c8.attacker = (CDemonActor *)this_ptr;
                SStack_1c8.wielder = (CDemonActor *)this_ptr;
                fVar13 = 0.4;
                fStack_14 = SStack_1c8.damage_amount;
                core_xform_cpp_FUN_005b5080
                          (&DAT_007c5340,
                           (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                           DAT_007c538c);
                puVar12 = &uStack_120;
                uStack_120 = uStack_6c;
                afStack_11c[(uint)bVar8 * -2] = afStack_bc[(uint)bVar8 * -2 + 0x15];
                afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                     afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
                core_actor_cpp_FUN_00408b40(this_ptr,puVar12);
                pCVar10 = &CStack_114;
                CStack_114.x = afStack_140[2];
                *(float *)((int)&CStack_114 + (uint)bVar8 * -8 + 4) =
                     afStack_140[(uint)bVar8 * -2 + 3];
                pCVar9 = this_ptr;
                *(float *)((int)&CStack_114 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                          (&pCVar9->base,pCVar10,fVar13,pSVar14);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,1,1);
        }
      }
    }
    else if ((uVar6 == 0xe) && ((this_ptr->base).pool_me == 0)) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (pCVar1,0,&CStack_60);
      pfVar11 = afStack_bc + 0x11;
      afStack_78[0] = CStack_60.x;
      afStack_bc[(uint)bVar8 * -2 + 0x12] = *(float *)((int)&CStack_60 + (uint)bVar8 * -8 + 4);
      afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
           *(float *)((int)&CStack_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar11);
      blood_type = BLOOD_TYPE_RED;
      CStack_fc.x = fStack_144;
      *(float *)((int)&CStack_fc + (uint)bVar8 * -8 + 4) = afStack_140[(uint)bVar8 * -2];
      *(float *)((int)&CStack_fc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_fc,blood_type);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      (this_ptr->base).pool_me = 1;
    }
    if (((this_ptr->base).victim != (CCharacter *)0x0) && (0.0 <= fStack_1c)) {
      fVar13 = (this_ptr->base).speed;
      (this_ptr->base).base.walk_step_speed =
           delta_time * (float)_DAT_005d4f70 * (this_ptr->base).speed;
      core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar13);
      fVar15 = 0.5235988;
      CStack_12c.x = 0.0;
      fVar13 = 3.0;
      CStack_12c.z = fStack_1c;
      pCVar10 = &CStack_12c;
      CStack_12c.y = 0.0;
      pCVar2 = (this_ptr->base).victim;
      pCVar7 = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar7,pCVar10,fVar13,fVar15);
      if (iVar3 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_24 = delta_time * (this_ptr->base).speed;
    while (0.0 < fStack_24) {
      iVar3 = core_motion_cpp_CMotionController_advance_FUN_00524270
                        (&(this_ptr->base).base.model.base,&fStack_24);
      if (iVar3 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar3);
      }
    }
    if (0.0 < (this_ptr->base).attack_cooldown) {
      (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.turn_angle_accumulator + (this_ptr->base).base.base.orient.vec.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
    iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
    if (iVar3 != 0) {
      core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
      fStack_108 = (this_ptr->base).base.velocity.x * delta_time;
      this_ptr_00 = &(this_ptr->base).base.model.base;
      afStack_104[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_104[1] = (this_ptr->base).base.velocity.z * delta_time;
      fStack_90 = fStack_108;
      afStack_bc[(uint)bVar8 * -2 + 0xc] = afStack_104[(uint)bVar8 * -2];
      afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
           afStack_104[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      afStack_17c[2] = fStack_90 + (this_ptr->base).base.position_delta.x;
      afStack_17c[3] = fStack_8c + (this_ptr->base).base.position_delta.y;
      fStack_16c = fStack_88 + (this_ptr->base).base.position_delta.z;
      CStack_cc.x = afStack_17c[2];
      *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + 4) = afStack_17c[(uint)bVar8 * -2 + 3];
      *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_17c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr_00);
      if (pSVar4->state_index != 1) {
        CStack_cc.x = CStack_cc.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        CStack_cc.y = CStack_cc.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_cc.z = CStack_cc.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
      core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_cc);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
    if ((this_ptr->base).pool_me == 0) {
      core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[0],DAT_007c539c,0x3e4ccccd);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[1],DAT_007c5394,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[2],DAT_007c53a0,0x3e4ccccd);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_FUN_00430a90(this_ptr,this_ptr->part_indices[3],DAT_007c5398,0x3e4ccccd);
      }
      core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00430b60
                ((CCharacter *)this_ptr,this_ptr->part_indices[8],DAT_007c5388,0.7);
      core_charactr_cpp_FUN_00430960(this_ptr);
    }
  }
  return;
}
