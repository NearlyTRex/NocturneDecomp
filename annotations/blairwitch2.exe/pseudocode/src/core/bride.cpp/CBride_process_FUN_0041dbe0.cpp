// Name: core_bride.cpp_CBride_process_FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041e7f6]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_process_FUN_0041dbe0(CBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_CBride_process_FUN_0041dbe0(CBride *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  CPathMap *pCVar5;
  byte bVar6;
  float afStackY_1174 [952];
  CBride *pCVar7;
  CVector3f *pCVar8;
  uint *puVar9;
  float *pfVar10;
  float fVar11;
  EBloodType blood_type;
  SDamageInfo *pSVar12;
  float fVar13;
  CDeformableModelInstance *pCVar14;
  SDamageInfo aSStack_27c [4];
  float fStack_278;
  CBride *pCStack_248;
  CBride *pCStack_244;
  SDamageInfo aSStack_240 [4];
  float fStack_23c;
  CBride *pCStack_20c;
  CBride *pCStack_208;
  SDamageInfo aSStack_204 [4];
  float fStack_200;
  CBride *pCStack_1d0;
  CBride *pCStack_1cc;
  SDamageInfo aSStack_1c8 [4];
  float fStack_1c4;
  CBride *pCStack_194;
  CBride *pCStack_190;
  float fStack_18c;
  float afStack_188 [2];
  CVector3f CStack_180;
  float fStack_174;
  float afStack_170 [2];
  CVector3f CStack_168;
  CVector3f CStack_15c;
  uint uStack_150;
  float afStack_14c [5];
  float fStack_138;
  CVector3f CStack_12c;
  uint uStack_120;
  float afStack_11c [5];
  uint uStack_108;
  float fStack_fc;
  float fStack_f0;
  CVector3f CStack_e4;
  uint uStack_d8;
  float afStack_d4 [5];
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  uint uStack_9c;
  float afStack_98 [5];
  CVector3f CStack_84;
  uint uStack_78;
  float afStack_74 [5];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
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
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 != 0) {
    if (0.0 <= this_ptr->action_timer) {
      this_ptr->action_timer = this_ptr->action_timer - delta_time;
    }
    pCVar14 = &(this_ptr->base).base.model;
    fStack_18 = -1.0;
    iVar2 = core_motion_cpp_FUN_005035c0(pCVar14);
    uVar4 = *(uint *)(iVar2 + 0x24);
    if (uVar4 < 5) {
      if (uVar4 == 0) {
        iVar2 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar2 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar14,1,1);
            iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
            if ((iVar2 == 0) &&
               (iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]), iVar2 == 0)) {
              uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              this_ptr->sfx_handles[1] = uVar4;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,1,1);
        }
      }
      else if (uVar4 == 1) {
        if (this_ptr->action_timer <= 0.0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,20.0);
          this_ptr->action_timer = fStack_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar14,3,1);
          iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
          if ((iVar2 == 0) &&
             (iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]), iVar2 == 0)) {
            uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"ub-howl?.wav");
            this_ptr->sfx_handles[1] = uVar4;
          }
        }
        fVar11 = (this_ptr->base).speed;
        *(float *)&(this_ptr->base).base.field_0x2594 =
             delta_time * (this_ptr->base).speed * (float)_DAT_005cc869;
        core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar11);
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar14 = &(this_ptr->base).base.model;
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          iVar2 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar14,0,1);
          }
        }
        else {
          fVar13 = 0.17453292;
          fVar11 = 1.0;
          CStack_180.x = 0.0;
          CStack_180.z = 0x40200000;
          pCVar8 = &CStack_180;
          CStack_180.y = 0.0;
          pCVar1 = (this_ptr->base).victim;
          pCVar5 = (*((pCVar1->base).vtable._ub)->getPathMap)(&pCVar1->base);
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)this_ptr,
                             (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar5,
                             pCVar8,fVar11,fVar13);
          if (iVar2 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar14,0,1);
          }
          else if (((0 < iVar2) && ((this_ptr->base).attack_cooldown <= 0.0)) &&
                  (pCVar1 = (this_ptr->base).victim,
                  pCVar3 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
                  pCVar3 == (CDemonActor *)0x0)) {
            iVar2 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
            if (iVar2 == 0) {
              iVar2 = 6;
            }
            else {
              iVar2 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar14,iVar2,1);
            iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
            if ((iVar2 == 0) &&
               (iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]), iVar2 == 0)) {
              uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"ub-attack?.wav");
              this_ptr->sfx_handles[1] = uVar4;
            }
          }
        }
      }
    }
    else if (uVar4 < 6) {
      pCVar1 = (this_ptr->base).victim;
      if (pCVar1 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar14,1,1);
      }
      else {
        pCVar3 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1);
        if (pCVar3 == (CDemonActor *)0x0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
          (this_ptr->base).attack_cooldown = fStack_14;
          fStack_20 = core_motion_cpp_FUN_00503e60((CMotionController *)pCVar14);
          dStack_34 = (double)fStack_20;
          fStack_14 = fStack_20;
          if (fStack_20 <= (float)_DAT_005cc869) {
            fStack_18 = 0x40200000;
            if ((dStack_34 < 1.0) || (_DAT_005cc851 < dStack_34)) {
              dStack_4c = (double)fStack_20;
              if (((float)_DAT_005cc869 <= fStack_20) &&
                 ((dStack_4c <= _DAT_005cc871 &&
                  (*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                           this_ptr->part_indices[1] * 4) != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_1c8);
                fStack_1c4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
                pSVar12 = aSStack_1c8;
                pCStack_194 = this_ptr;
                pCStack_190 = this_ptr;
                fVar11 = 0.4;
                fStack_14 = fStack_1c4;
                core_xform_cpp_FUN_00591530
                          (&DAT_007bcc94,
                           &(this_ptr->base).base.model.field_0xe80 + DAT_007bcce0 * 0x30);
                puVar9 = &uStack_78;
                uStack_78 = uStack_108;
                afStack_74[(uint)bVar6 * -2] = afStack_11c[(uint)bVar6 * -2 + 6];
                afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                     afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
                core_actor_cpp_FUN_00408d70(this_ptr,puVar9);
                pCVar8 = &CStack_12c;
                CStack_12c.x = fStack_f0;
                *(float *)((int)&CStack_12c + (uint)bVar6 * -8 + 4) =
                     afStack_11c[(uint)bVar6 * -2 + 0xc];
                pCVar7 = this_ptr;
                *(float *)((int)&CStack_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                     afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                          (&pCVar7->base,pCVar8,fVar11,pSVar12);
              }
            }
            else if (*(int *)(&(this_ptr->base).base.model.field_0x2140 +
                             this_ptr->part_indices[3] * 4) != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_27c);
              fStack_278 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
              pSVar12 = aSStack_27c;
              pCStack_248 = this_ptr;
              pCStack_244 = this_ptr;
              fVar11 = 0.4;
              fStack_14 = fStack_278;
              core_xform_cpp_FUN_00591530
                        (&DAT_007bcc94,
                         &(this_ptr->base).base.model.field_0xe80 + DAT_007bcce4 * 0x30);
              puVar9 = &uStack_120;
              uStack_120 = afStack_14c[2];
              afStack_11c[(uint)bVar6 * -2] = afStack_14c[(uint)bVar6 * -2 + 3];
              afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                   afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
              core_actor_cpp_FUN_00408d70(this_ptr,puVar9);
              pCVar8 = &CStack_a8;
              CStack_a8.x = fStack_18c;
              *(float *)((int)&CStack_a8 + (uint)bVar6 * -8 + 4) = afStack_188[(uint)bVar6 * -2];
              pCVar7 = this_ptr;
              *(float *)((int)&CStack_a8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                   afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                        (&pCVar7->base,pCVar8,fVar11,pSVar12);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar14,1,1);
        }
      }
    }
    else if (uVar4 < 7) {
      pCVar1 = (this_ptr->base).victim;
      if (pCVar1 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar14,1,1);
      }
      else {
        pCVar3 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1);
        if (pCVar3 == (CDemonActor *)0x0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.5);
          (this_ptr->base).attack_cooldown = fStack_14;
          fStack_1c = core_motion_cpp_FUN_00503e60((CMotionController *)pCVar14);
          dStack_54 = (double)fStack_1c;
          fStack_14 = fStack_1c;
          if (fStack_1c <= (float)_DAT_005cc849) {
            fStack_18 = 0x40200000;
            if (((1.0 <= dStack_54) && (dStack_54 <= _DAT_005cc851)) ||
               ((dStack_3c = (double)fStack_1c, (float)_DAT_005cc859 <= fStack_1c &&
                (dStack_3c <= _DAT_005cc861)))) {
              if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4
                          ) != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_240);
                fStack_23c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
                pSVar12 = aSStack_240;
                pCStack_20c = this_ptr;
                pCStack_208 = this_ptr;
                fVar11 = 0.4;
                fStack_14 = fStack_23c;
                core_xform_cpp_FUN_00591530
                          (&DAT_007bcc94,
                           &(this_ptr->base).base.model.field_0xe80 + DAT_007bcce4 * 0x30);
                pfVar10 = afStack_74 + 2;
                afStack_74[2] = (float)uStack_9c;
                afStack_74[(uint)bVar6 * -2 + 3] = afStack_98[(uint)bVar6 * -2];
                afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                     afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
                core_actor_cpp_FUN_00408d70(this_ptr,pfVar10);
                pCVar8 = &CStack_c0;
                CStack_c0.x = fStack_138;
                *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + 4) =
                     afStack_14c[(uint)bVar6 * -2 + 6];
                pCVar7 = this_ptr;
                *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                     afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                          (&pCVar7->base,pCVar8,fVar11,pSVar12);
              }
            }
            else {
              dStack_44 = (double)fStack_1c;
              if (((((float)_DAT_005cc869 <= fStack_1c) && (dStack_44 <= _DAT_005cc871)) ||
                  ((dStack_2c = (double)fStack_1c, (float)_DAT_005cc879 <= fStack_1c &&
                   (dStack_2c <= _DAT_005cc849)))) &&
                 (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[1] * 4
                          ) != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_204);
                fStack_200 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
                pSVar12 = aSStack_204;
                pCStack_1d0 = this_ptr;
                pCStack_1cc = this_ptr;
                fVar11 = 0.4;
                fStack_14 = fStack_200;
                core_xform_cpp_FUN_00591530
                          (&DAT_007bcc94,
                           &(this_ptr->base).base.model.field_0xe80 + DAT_007bcce0 * 0x30);
                pfVar10 = afStack_98 + 2;
                afStack_98[2] = afStack_11c[2];
                afStack_98[(uint)bVar6 * -2 + 3] = afStack_11c[(uint)bVar6 * -2 + 3];
                afStack_98[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                     afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
                core_actor_cpp_FUN_00408d70(this_ptr,pfVar10);
                pCVar8 = &CStack_84;
                CStack_84.x = fStack_fc;
                *(float *)((int)&CStack_84 + (uint)bVar6 * -8 + 4) =
                     afStack_11c[(uint)bVar6 * -2 + 9];
                pCVar7 = this_ptr;
                *(float *)((int)&CStack_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                     afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                          (&pCVar7->base,pCVar8,fVar11,pSVar12);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar14,1,1);
        }
      }
    }
    else if ((uVar4 == 0xe) && ((this_ptr->base).pool_me == 0)) {
      core_skeleton_cpp_FUN_005469a0(pCVar14,0);
      puVar9 = &uStack_150;
      uStack_150 = uStack_d8;
      afStack_14c[(uint)bVar6 * -2] = afStack_d4[(uint)bVar6 * -2];
      afStack_14c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar9);
      blood_type = BLOOD_TYPE_RED;
      CStack_15c.x = afStack_d4[2];
      *(float *)((int)&CStack_15c + (uint)bVar6 * -8 + 4) = afStack_d4[(uint)bVar6 * -2 + 3];
      *(float *)((int)&CStack_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_15c,blood_type);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      (this_ptr->base).pool_me = 1;
    }
    if (((this_ptr->base).victim != (CCharacter *)0x0) && (0.0 <= fStack_18)) {
      fVar11 = (this_ptr->base).speed;
      *(float *)&(this_ptr->base).base.field_0x2594 =
           delta_time * (float)_DAT_005cc881 * (this_ptr->base).speed;
      core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar11);
      fVar13 = 0.5235988;
      CStack_e4.x = 0.0;
      fVar11 = 3.0;
      CStack_e4.z = fStack_18;
      pCVar8 = &CStack_e4;
      CStack_e4.y = 0.0;
      pCVar1 = (this_ptr->base).victim;
      pCVar5 = (*((pCVar1->base).vtable._ub)->getPathMap)(&pCVar1->base);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,
                         (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar5,pCVar8,
                         fVar11,fVar13);
      if (iVar2 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,1,1);
        *(uint *)&(this_ptr->base).base.field_0x2578 = 0;
      }
    }
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)&(this_ptr->base).base.model.field_0x2254 =
         *(uint *)&(this_ptr->base).base.model.field_0x2258;
    fStack_24 = delta_time * (this_ptr->base).speed;
    while (0.0 < fStack_24) {
      iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                        ((CMotionController *)&(this_ptr->base).base.model,&fStack_24);
      if (iVar2 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar2);
      }
    }
    if (0.0 < (this_ptr->base).attack_cooldown) {
      (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
    }
    (this_ptr->base).base.base.orient.vec.y =
         *(float *)&(this_ptr->base).base.field_0x2578 + (this_ptr->base).base.base.orient.vec.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    iVar2 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
    if (iVar2 != 0) {
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
      fStack_60 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
      pCVar14 = &(this_ptr->base).base.model;
      fStack_5c = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
      fStack_58 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
      fStack_b4 = fStack_60;
      afStack_b0[(uint)bVar6 * -2] = afStack_74[(uint)bVar6 * -2 + 6];
      afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      fStack_174 = fStack_b4 + *(float *)&(this_ptr->base).base.field_0x257c;
      afStack_170[0] = afStack_b0[0] + *(float *)&(this_ptr->base).base.field_0x2580;
      afStack_170[1] = afStack_b0[1] + *(float *)&(this_ptr->base).base.field_0x2584;
      CStack_168.x = fStack_174;
      *(float *)((int)&CStack_168 + (uint)bVar6 * -8 + 4) = afStack_170[(uint)bVar6 * -2];
      *(float *)((int)&CStack_168 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_170[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      iVar2 = core_motion_cpp_FUN_005035c0(pCVar14);
      if (*(int *)(iVar2 + 0x24) != 1) {
        CStack_168.x = CStack_168.x + *(float *)&(this_ptr->base).base.model.field_0x2254;
        CStack_168.y = CStack_168.y + *(float *)&(this_ptr->base).base.model.field_0x2258;
        CStack_168.z = CStack_168.z + *(float *)&(this_ptr->base).base.model.field_0x225c;
      }
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_168);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
    if ((this_ptr->base).pool_me == 0) {
      core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[0],DAT_007bccf0,0x3e4ccccd);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[0] * 4) != 0)
      {
        core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[1],DAT_007bcce8,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[2],DAT_007bccf4,0x3e4ccccd);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[2] * 4) != 0)
      {
        core_charactr_cpp_FUN_00427060(this_ptr,this_ptr->part_indices[3],DAT_007bccec,0x3e4ccccd);
      }
      core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427130
                ((CCharacter *)this_ptr,this_ptr->part_indices[8],DAT_007bccdc,0.7);
      core_charactr_cpp_FUN_00426f30(this_ptr);
    }
  }
  return;
}
