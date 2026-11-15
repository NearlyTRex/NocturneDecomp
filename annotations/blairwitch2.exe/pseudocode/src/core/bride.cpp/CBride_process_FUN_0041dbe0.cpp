// Name: core_bride.cpp_CBride_process_FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041e7f6]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_process_FUN_0041dbe0(CBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_CBride_process_FUN_0041dbe0(CBride *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CCharacter *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  CDemonActor *pCVar5;
  uint uVar6;
  CPathMap *pCVar7;
  byte bVar8;
  float afStackY_1174 [952];
  CBride *pCVar9;
  CVector3f *pCVar10;
  float fVar11;
  EBloodType blood_type;
  SDamageInfo *pSVar12;
  float fVar13;
  CMotionController *this_ptr_00;
  SDamageInfo SStack_27c;
  SDamageInfo SStack_240;
  SDamageInfo SStack_204;
  SDamageInfo SStack_1c8;
  CVector3f CStack_18c;
  CVector3f CStack_180;
  float fStack_174;
  float afStack_170 [2];
  CVector3f CStack_168;
  CVector3f CStack_15c;
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_114;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [2];
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
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 != 0) {
    if (0.0 <= this_ptr->action_timer) {
      this_ptr->action_timer = this_ptr->action_timer - delta_time;
    }
    pCVar1 = &(this_ptr->base).base.model;
    fStack_18 = -1.0;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
    uVar6 = pSVar4->state_index;
    if (uVar6 < 5) {
      if (uVar6 == 0) {
        iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar3 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,1,1);
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]);
            if ((iVar3 == 0) &&
               (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]),
               iVar3 == 0)) {
              uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              this_ptr->sfx_handles[1] = uVar6;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,1,1);
        }
      }
      else if (uVar6 == 1) {
        if (this_ptr->action_timer <= 0.0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,20.0);
          this_ptr->action_timer = fStack_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,3,1);
          iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]);
          if ((iVar3 == 0) &&
             (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]),
             iVar3 == 0)) {
            uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"ub-howl?.wav");
            this_ptr->sfx_handles[1] = uVar6;
          }
        }
        fVar11 = (this_ptr->base).speed;
        (this_ptr->base).base.walk_step_speed =
             delta_time * (this_ptr->base).speed * (float)_DAT_005cc869;
        core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar11);
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar1 = &(this_ptr->base).base.model;
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
          }
        }
        else {
          fVar13 = 0.17453292;
          fVar11 = 1.0;
          CStack_180.x = 0.0;
          CStack_180.z = 0x40200000;
          pCVar10 = &CStack_180;
          CStack_180.y = 0.0;
          pCVar2 = (this_ptr->base).victim;
          pCVar7 = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,pCVar7,pCVar10,
                             fVar11,fVar13);
          if (iVar3 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
          }
          else if (((0 < iVar3) && ((this_ptr->base).attack_cooldown <= 0.0)) &&
                  (pCVar2 = (this_ptr->base).victim,
                  pCVar5 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
                  pCVar5 == (CDemonActor *)0x0)) {
            iVar3 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
            if (iVar3 == 0) {
              iVar3 = 6;
            }
            else {
              iVar3 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,iVar3,1);
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]);
            if ((iVar3 == 0) &&
               (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]),
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
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,1,1);
      }
      else {
        pCVar5 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar5 == (CDemonActor *)0x0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
          (this_ptr->base).attack_cooldown = fStack_14;
          fStack_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                (&pCVar1->base);
          dStack_34 = (double)fStack_20;
          fStack_14 = fStack_20;
          if (fStack_20 <= (float)_DAT_005cc869) {
            fStack_18 = 0x40200000;
            if ((dStack_34 < 1.0) || (_DAT_005cc851 < dStack_34)) {
              dStack_4c = (double)fStack_20;
              if (((float)_DAT_005cc869 <= fStack_20) &&
                 ((dStack_4c <= _DAT_005cc871 &&
                  ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                   != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_1c8);
                SStack_1c8.damage_amount =
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
                pSVar12 = &SStack_1c8;
                SStack_1c8.attacker = (CDemonActor *)this_ptr;
                SStack_1c8.wielder = (CDemonActor *)this_ptr;
                fVar11 = 0.4;
                fStack_14 = SStack_1c8.damage_amount;
                core_xform_cpp_transformVector3x4_FUN_00591530
                          ((CVector3f *)&DAT_007bcc94,
                           (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                           DAT_007bcce0,&CStack_108);
                pCVar10 = &CStack_78;
                CStack_78.x = CStack_108.x;
                *(uint *)((int)&CStack_78 + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + 4);
                *(uint *)((int)&CStack_78 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                          ((CDemonActor *)this_ptr,pCVar10,&CStack_f0);
                pCVar10 = &CStack_12c;
                CStack_12c.x = CStack_f0.x;
                *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_f0 + (uint)bVar8 * -8 + 4);
                pCVar9 = this_ptr;
                *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_f0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                          (&pCVar9->base,pCVar10,fVar11,pSVar12);
              }
            }
            else if ((this_ptr->base).base.model.part_data.visibility_flags
                     [this_ptr->part_indices[3]] != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_27c);
              SStack_27c.damage_amount =
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
              pSVar12 = &SStack_27c;
              SStack_27c.attacker = (CDemonActor *)this_ptr;
              SStack_27c.wielder = (CDemonActor *)this_ptr;
              fVar11 = 0.4;
              fStack_14 = SStack_27c.damage_amount;
              core_xform_cpp_transformVector3x4_FUN_00591530
                        ((CVector3f *)&DAT_007bcc94,
                         (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                         DAT_007bcce4,&CStack_144);
              pCVar10 = &CStack_120;
              CStack_120.x = CStack_144.x;
              *(uint *)((int)&CStack_120 + (uint)bVar8 * -8 + 4) =
                   *(uint *)((int)&CStack_144 + (uint)bVar8 * -8 + 4);
              *(uint *)((int)&CStack_120 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                   *(uint *)((int)&CStack_144 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)this_ptr,pCVar10,&CStack_18c);
              pCVar10 = &CStack_a8;
              CStack_a8.x = CStack_18c.x;
              *(uint *)((int)&CStack_a8 + (uint)bVar8 * -8 + 4) =
                   *(uint *)((int)&CStack_18c + (uint)bVar8 * -8 + 4);
              pCVar9 = this_ptr;
              *(uint *)((int)&CStack_a8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                   *(uint *)((int)&CStack_18c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
              core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                        (&pCVar9->base,pCVar10,fVar11,pSVar12);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,1,1);
        }
      }
    }
    else if (uVar6 < 7) {
      pCVar2 = (this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,1,1);
      }
      else {
        pCVar5 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar5 == (CDemonActor *)0x0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
          (this_ptr->base).attack_cooldown = fStack_14;
          fStack_1c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                (&pCVar1->base);
          dStack_54 = (double)fStack_1c;
          fStack_14 = fStack_1c;
          if (fStack_1c <= (float)_DAT_005cc849) {
            fStack_18 = 0x40200000;
            if (((1.0 <= dStack_54) && (dStack_54 <= _DAT_005cc851)) ||
               ((dStack_3c = (double)fStack_1c, (float)_DAT_005cc859 <= fStack_1c &&
                (dStack_3c <= _DAT_005cc861)))) {
              if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[3]]
                  != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_240);
                SStack_240.damage_amount =
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
                pSVar12 = &SStack_240;
                SStack_240.attacker = (CDemonActor *)this_ptr;
                SStack_240.wielder = (CDemonActor *)this_ptr;
                fVar11 = 0.4;
                fStack_14 = SStack_240.damage_amount;
                core_xform_cpp_transformVector3x4_FUN_00591530
                          ((CVector3f *)&DAT_007bcc94,
                           (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                           DAT_007bcce4,&CStack_9c);
                pCVar10 = &CStack_6c;
                CStack_6c.x = CStack_9c.x;
                *(uint *)((int)&CStack_6c + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_9c + (uint)bVar8 * -8 + 4);
                *(uint *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_9c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                          ((CDemonActor *)this_ptr,pCVar10,&CStack_138);
                pCVar10 = &CStack_c0;
                CStack_c0.x = CStack_138.x;
                *(uint *)((int)&CStack_c0 + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_138 + (uint)bVar8 * -8 + 4);
                pCVar9 = this_ptr;
                *(uint *)((int)&CStack_c0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_138 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                          (&pCVar9->base,pCVar10,fVar11,pSVar12);
              }
            }
            else {
              dStack_44 = (double)fStack_1c;
              if (((((float)_DAT_005cc869 <= fStack_1c) && (dStack_44 <= _DAT_005cc871)) ||
                  ((dStack_2c = (double)fStack_1c, (float)_DAT_005cc879 <= fStack_1c &&
                   (dStack_2c <= _DAT_005cc849)))) &&
                 ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]]
                  != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_204);
                SStack_204.damage_amount =
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
                pSVar12 = &SStack_204;
                SStack_204.attacker = (CDemonActor *)this_ptr;
                SStack_204.wielder = (CDemonActor *)this_ptr;
                fVar11 = 0.4;
                fStack_14 = SStack_204.damage_amount;
                core_xform_cpp_transformVector3x4_FUN_00591530
                          ((CVector3f *)&DAT_007bcc94,
                           (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                           DAT_007bcce0,&CStack_114);
                pCVar10 = &CStack_90;
                CStack_90.x = CStack_114.x;
                *(uint *)((int)&CStack_90 + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_114 + (uint)bVar8 * -8 + 4);
                *(uint *)((int)&CStack_90 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_114 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                          ((CDemonActor *)this_ptr,pCVar10,&CStack_fc);
                pCVar10 = &CStack_84;
                CStack_84.x = CStack_fc.x;
                *(uint *)((int)&CStack_84 + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_fc + (uint)bVar8 * -8 + 4);
                pCVar9 = this_ptr;
                *(uint *)((int)&CStack_84 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_fc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                          (&pCVar9->base,pCVar10,fVar11,pSVar12);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,1,1);
        }
      }
    }
    else if ((uVar6 == 0xe) && ((this_ptr->base).pool_me == 0)) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                (pCVar1,0,&CStack_d8);
      pCVar10 = &CStack_150;
      CStack_150.x = CStack_d8.x;
      *(uint *)((int)&CStack_150 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_d8 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_150 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_d8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar10,&CStack_cc);
      blood_type = BLOOD_TYPE_RED;
      CStack_15c.x = CStack_cc.x;
      *(uint *)((int)&CStack_15c + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_cc + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_15c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_15c,blood_type);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      (this_ptr->base).pool_me = 1;
    }
    if (((this_ptr->base).victim != (CCharacter *)0x0) && (0.0 <= fStack_18)) {
      fVar11 = (this_ptr->base).speed;
      (this_ptr->base).base.walk_step_speed =
           delta_time * (float)_DAT_005cc881 * (this_ptr->base).speed;
      core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar11);
      fVar13 = 0.5235988;
      CStack_e4.x = 0.0;
      fVar11 = 3.0;
      CStack_e4.z = fStack_18;
      pCVar10 = &CStack_e4;
      CStack_e4.y = 0.0;
      pCVar2 = (this_ptr->base).victim;
      pCVar7 = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar7,pCVar10,fVar11,fVar13);
      if (iVar3 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
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
      iVar3 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                        (&(this_ptr->base).base.model.base,&fStack_24);
      if (iVar3 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar3);
      }
    }
    if (0.0 < (this_ptr->base).attack_cooldown) {
      (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.turn_angle_accumulator + (this_ptr->base).base.base.orient.vec.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
    if (iVar3 != 0) {
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
      fStack_60 = (this_ptr->base).base.velocity.x * delta_time;
      this_ptr_00 = &(this_ptr->base).base.model.base;
      afStack_5c[0] = (this_ptr->base).base.velocity.y * delta_time;
      afStack_5c[1] = (this_ptr->base).base.velocity.z * delta_time;
      fStack_b4 = fStack_60;
      afStack_b0[(uint)bVar8 * -2] = afStack_5c[(uint)bVar8 * -2];
      afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      fStack_174 = fStack_b4 + (this_ptr->base).base.position_delta.x;
      afStack_170[0] = afStack_b0[0] + (this_ptr->base).base.position_delta.y;
      afStack_170[1] = afStack_b0[1] + (this_ptr->base).base.position_delta.z;
      CStack_168.x = fStack_174;
      *(float *)((int)&CStack_168 + (uint)bVar8 * -8 + 4) = afStack_170[(uint)bVar8 * -2];
      *(float *)((int)&CStack_168 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_170[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(this_ptr_00);
      if (pSVar4->state_index != 1) {
        CStack_168.x = CStack_168.x + (this_ptr->base).base.model.accumulated_root_motion.x;
        CStack_168.y = CStack_168.y + (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_168.z = CStack_168.z + (this_ptr->base).base.model.accumulated_root_motion.z;
      }
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_168);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
    if ((this_ptr->base).pool_me == 0) {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],DAT_007bccf0,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],DAT_007bcce8,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],DAT_007bccf4,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_00427060
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],DAT_007bccec,0.2);
      }
      core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130
                ((CCharacter *)this_ptr,this_ptr->part_indices[8],DAT_007bccdc,0.7);
      core_charactr_cpp_CCharacter_processDamageDecals_FUN_00426f30((CCharacter *)this_ptr);
    }
  }
  return;
}
