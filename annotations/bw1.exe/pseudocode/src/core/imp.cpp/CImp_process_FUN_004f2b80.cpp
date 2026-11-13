// Name: core_imp.cpp_CImp_process_FUN_004f2b80
// Address: 004f2b80
// Address Range: [[004f2b80, 004f3a1e]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_process_FUN_004f2b80(CImp *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_CImp_process_FUN_004f2b80(CImp *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  uint uVar6;
  CDemonActor *pCVar7;
  EDeathState EVar8;
  SMotion *pSVar9;
  int iVar10;
  CImp *pCVar11;
  CPathMap *path_map;
  byte bVar12;
  float10 fVar13;
  float afStackY_11f0 [982];
  CGore *this_ptr_01;
  float *pfVar14;
  CVector3f *pCVar15;
  float fVar16;
  float fVar17;
  EBloodType EVar18;
  SDamageInfo *pSVar19;
  float max_distance;
  SDamageInfo SStack_280;
  SDamageInfo SStack_244;
  CVector3f CStack_208;
  float fStack_1fc;
  float afStack_1f8 [5];
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  float fStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  float fStack_1b8;
  CVector3f CStack_1b4;
  CVector3f CStack_1a8;
  float fStack_19c;
  float afStack_198 [5];
  float afStack_184 [3];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float afStack_13c [3];
  CVector3f CStack_130;
  float fStack_124;
  float afStack_120 [5];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_100 [3];
  uint uStack_f4;
  float afStack_f0 [5];
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float afStack_b8 [3];
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  uint uStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float fStack_6c;
  float fStack_64;
  float afStack_58 [3];
  int iStack_4c;
  float fStack_44;
  float fStack_40;
  float afStack_3c [2];
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  CDeformableModelInstance *pCStack_20;
  CDeformableModelInstance *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar12 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) &&
     (EVar8 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), EVar8 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,6,1);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_3c[0] = delta_time * (this_ptr->base).speed;
  pCStack_1c = &(this_ptr->base).base.model;
LAB_004f2bec:
  if (0.0 < afStack_3c[0]) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCStack_1c->base,afStack_3c);
    if (uVar6 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar6);
    }
    else {
      if (uVar6 < 0x29b) {
        pCVar2 = (this_ptr->base).victim;
        iStack_18 = 1;
        if ((((pCVar2 != (CCharacter *)0x0) &&
             (EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
             EVar8 == DEATH_STATE_ALIVE)) &&
            ((iStack_18 == 0 ||
             (pCVar2 = (this_ptr->base).victim,
             pCVar7 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
             pCVar7 == (CDemonActor *)0x0)))) &&
           ((iStack_18 == 0 ||
            (pCVar2 = (this_ptr->base).victim,
            iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                              (pCVar2,(CDemonActor *)this_ptr,0), iVar5 != 0)))) {
          if (iStack_18 != 0) {
            afStack_100[2] = 0x40000000;
            afStack_100[0] = 0.0;
            afStack_100[1] = 0.0;
            core_actor_cpp_FUN_00408b40(this_ptr,afStack_120 + 8);
            fStack_154 = fStack_16c;
            afStack_198[(uint)bVar12 * -2 + 0x12] = afStack_198[(uint)bVar12 * -2 + 0xc];
            afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
                 afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
            pCVar2 = (this_ptr->base).victim;
            fVar16 = fStack_154 - (pCVar2->base).location.position.x;
            fVar17 = fStack_14c - (pCVar2->base).location.position.z;
            if ((float)_DAT_005e566a < SQRT(fVar17 * fVar17 + fVar16 * fVar16)) {
              iStack_18 = 0;
            }
            if ((float)_DAT_005e5672 <
                ABS(fStack_150 - (((this_ptr->base).victim)->base).location.position.y))
            goto LAB_004f2c63;
          }
          if (((iStack_18 == 0) ||
              (pCVar2 = (this_ptr->base).victim,
              iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar2,(CDemonActor *)this_ptr,0), iVar5 != 0)) && (iStack_18 != 0)
             ) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,9,1);
            goto LAB_004f2bec;
          }
        }
LAB_004f2c63:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,0,1);
        goto LAB_004f2bec;
      }
      if (uVar6 == 0x29b) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,0,1);
        }
        else {
          core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                    (pCStack_1c,_DAT_01d06cf8,&CStack_130);
          pfVar14 = &fStack_d0;
          fStack_d0 = CStack_130.x;
          afStack_cc[(uint)bVar12 * -2] = *(float *)((int)&CStack_130 + (uint)bVar12 * -8 + 4);
          afStack_cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               *(float *)((int)&CStack_130 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          core_actor_cpp_FUN_00408b40(this_ptr,pfVar14);
          pSVar19 = &SStack_244;
          fStack_19c = afStack_120[2];
          afStack_198[(uint)bVar12 * -2] = afStack_120[(uint)bVar12 * -2 + 3];
          afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_120[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          CStack_1b4.x = fStack_19c;
          *(float *)((int)&CStack_1b4 + (uint)bVar12 * -8 + 4) = afStack_198[(uint)bVar12 * -2];
          *(float *)((int)&CStack_1b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(pSVar19);
          SStack_244.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,10.0);
          SStack_244.attacker = (CDemonActor *)this_ptr;
          SStack_244.wielder = (CDemonActor *)this_ptr;
          pCVar2 = (this_ptr->base).victim;
          fStack_14 = SStack_244.damage_amount;
          (*(((pCVar2->base).vtable._uc)->_uc).processDamage)(pCVar2,&SStack_244);
          fVar13 = (float10)SStack_244.damage_amount * (float10)_DAT_005e565a *
                   (float10)_DAT_005e5662;
          EVar18 = BLOOD_TYPE_RED;
          round();
          iStack_4c = (int)ROUND(fVar13);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                    (g_CGorePtr,&CStack_1b4,(CVector3f *)0x0,iStack_4c,EVar18);
          pCVar2 = (this_ptr->base).victim;
          EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
          if ((int)EVar8 < 1) {
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar2 = (this_ptr->base).victim;
            (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_1c->base,0,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar6);
      }
    }
    goto LAB_004f2bec;
  }
  fVar16 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar16);
  pCStack_20 = &(this_ptr->base).base.model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCStack_20->base);
  iVar5 = pSVar9->state_index;
  iStack_2c = iVar5;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar2 = (this_ptr->base).victim;
        if (pCVar2 == (CCharacter *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,1,1);
          }
        }
        else if (pCVar2->grabbed_by == (CDemonActor *)0x0) {
          afStack_cc[2] =
               (pCVar2->base).location.position.x - (this_ptr->base).base.base.location.position.x;
          afStack_cc[3] =
               (pCVar2->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          fStack_bc = (pCVar2->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          afStack_90[2] = afStack_cc[2];
          afStack_90[(uint)bVar12 * -2 + 3] = afStack_cc[(uint)bVar12 * -2 + 3];
          afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
               afStack_cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          fStack_44 = SQRT(fStack_80 * fStack_80 +
                           afStack_90[2] * afStack_90[2] + afStack_90[3] * afStack_90[3]);
          fStack_34 = fStack_44;
          if (fStack_44 < 0x40000000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_90 + 2);
            uStack_f4 = afStack_f0[2];
            afStack_f0[(uint)bVar12 * -2] = afStack_f0[(uint)bVar12 * -2 + 3];
            afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  (afStack_f0[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005e5652) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,4,1);
            }
          }
          if (fStack_34 < (this_ptr->base).guard_distance) {
            this_ptr_00 = &(this_ptr->base).base.model;
            if (_DAT_006027e8 <= fStack_34) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,2,1)
              ;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1)
              ;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,3,1);
        }
      }
      else {
        iVar5 = core_actor_cpp_randomChance_FUN_0040cd00(0.1);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar16 = 0x40000000;
      pCStack_24 = &(this_ptr->base).base.model.base;
      pCVar2 = (this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,1,1);
        }
      }
      else {
        pCVar7 = pCVar2->grabbed_by;
        if (pCVar7 == (CDemonActor *)0x0) {
          fStack_30 = 0x40000000;
          max_distance = 0.17453292;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          fVar17 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          CStack_1a8.z = fVar16;
          pCVar15 = &CStack_1a8;
          pCVar2 = (this_ptr->base).victim;
          CStack_1a8.x = (float)pCVar7;
          CStack_1a8.y = (float)pCVar7;
          path_map = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,pCVar15,
                             fVar17,max_distance);
          if (-1 < iVar5) {
            pCVar2 = (this_ptr->base).victim;
            fStack_10c = (this_ptr->base).base.base.location.position.x -
                         (pCVar2->base).location.position.x;
            fStack_108 = (this_ptr->base).base.base.location.position.y -
                         (pCVar2->base).location.position.y;
            fStack_104 = (this_ptr->base).base.base.location.position.z -
                         (pCVar2->base).location.position.z;
            fStack_1c0 = fStack_10c;
            afStack_1f8[(uint)bVar12 * -2 + 0xf] = afStack_120[(uint)bVar12 * -2 + 6];
            afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                 afStack_120[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
            fStack_40 = SQRT(fStack_1b8 * fStack_1b8 + fStack_1c0 * fStack_1c0);
            uStack_1bc = 0;
            fStack_28 = fStack_40;
            if ((_DAT_006027e8 < fStack_40) && (iStack_2c == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,2,1);
            }
            if (((fStack_28 < _DAT_006027ec) &&
                (pCVar2 = (this_ptr->base).victim,
                pCVar7 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
                pCVar7 == (CDemonActor *)0x0)) &&
               ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]]
                != 0)) {
              pCVar2 = (this_ptr->base).victim;
              fStack_148 = (pCVar2->base).location.position.x -
                           (this_ptr->base).base.base.location.position.x;
              fStack_144 = (pCVar2->base).location.position.y -
                           (this_ptr->base).base.base.location.position.y;
              fStack_140 = (pCVar2->base).location.position.z -
                           (this_ptr->base).base.base.location.position.z;
              afStack_b8[0] = fStack_148;
              afStack_cc[(uint)bVar12 * -2 + 6] = afStack_198[(uint)bVar12 * -2 + 0x15];
              afStack_cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                   afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_cc + 5);
              uStack_1d8 = uStack_94;
              afStack_1f8[(uint)bVar12 * -2 + 9] = afStack_90[(uint)bVar12 * -2];
              afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
                   afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                    (fStack_1d4 - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS(fStack_14) < (float)_DAT_005e5652) &&
                 (iVar5 = core_actor_cpp_randomChance_FUN_0040cd00(0.1), iVar5 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,8,1);
                iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
                if (iVar5 == 0) {
                  uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  this_ptr->sfx_handles[0] = uVar6;
                }
              }
            }
            if ((fStack_28 <= fStack_30) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCVar2 = (this_ptr->base).victim;
              fStack_7c = (pCVar2->base).location.position.x -
                          (this_ptr->base).base.base.location.position.x;
              fStack_78 = (pCVar2->base).location.position.y -
                          (this_ptr->base).base.base.location.position.y;
              fStack_74 = (pCVar2->base).location.position.z -
                          (this_ptr->base).base.base.location.position.z;
              afStack_58[0] = fStack_7c;
              afStack_90[(uint)bVar12 * -2 + 0xf] = afStack_90[(uint)bVar12 * -2 + 6];
              afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                   afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_90 + 0xe);
              uStack_70 = afStack_1f8[2];
              afStack_90[(uint)bVar12 * -2 + 9] = afStack_1f8[(uint)bVar12 * -2 + 3];
              afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
                   afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                    (fStack_6c - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(fStack_14) < (float)_DAT_005e5652) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,4,1);
                (this_ptr->base).attack_cooldown = 4.0;
              }
            }
            if ((this_ptr->base).guard_distance < fStack_28) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,0,1);
            }
            fVar16 = this_ptr->laugh_timer - delta_time;
            this_ptr->laugh_timer = fVar16;
            if (fVar16 < 0.0) {
              this_ptr->laugh_timer = 0.0;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]),
                 iVar5 == 0)) {
                uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                this_ptr->sfx_handles[0] = uVar6;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,20.0);
                this_ptr->laugh_timer = fStack_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,3,1);
        }
      }
      break;
    case 3:
      fVar16 = this_ptr->laugh_timer - delta_time * _DAT_005e564a;
      this_ptr->laugh_timer = fVar16;
      if (fVar16 < 0.0) {
        this_ptr->laugh_timer = 0.0;
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[0]);
        if ((iVar5 == 0) &&
           (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]),
           iVar5 == 0)) {
          uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          this_ptr->sfx_handles[0] = uVar6;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,20.0);
          this_ptr->laugh_timer = fStack_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_280);
      SStack_280.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(3.0,5.0);
      pSVar19 = &SStack_280;
      SStack_280.attacker = (CDemonActor *)this_ptr;
      SStack_280.wielder = (CDemonActor *)this_ptr;
      fVar16 = 0.4;
      fStack_14 = SStack_280.damage_amount;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01d06d00);
      pfVar14 = afStack_198 + 5;
      afStack_184[0] = afStack_198[2];
      afStack_198[(uint)bVar12 * -2 + 6] = afStack_198[(uint)bVar12 * -2 + 3];
      afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar14);
      pCVar15 = &CStack_208;
      CStack_208.x = fStack_124;
      *(float *)((int)&CStack_208 + (uint)bVar12 * -8 + 4) = afStack_120[(uint)bVar12 * -2];
      pCVar11 = this_ptr;
      *(float *)((int)&CStack_208 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           afStack_120[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                        (&pCVar11->base,pCVar15,fVar16,pSVar19);
      if (iVar5 != 0) {
        iVar10 = 0;
        iVar5 = 0;
        while (iVar5 < g_CDemonSetPtr->enemy_count) {
          pCVar11 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c600
                                      (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar10),
                                       g_CImpClassInfo.name_hash);
          if (((pCVar11 == (CImp *)0x0) || (pCVar11 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar11->base).victim)) {
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(pCVar11->base).base.model.base,3,1);
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 4;
          }
        }
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (pCStack_20,0,&CStack_a0);
        pfVar14 = afStack_198 + 0x17;
        afStack_13c[0] = CStack_a0.x;
        afStack_198[(uint)bVar12 * -2 + 0x18] = *(float *)((int)&CStack_a0 + (uint)bVar12 * -8 + 4);
        afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
             *(float *)((int)&CStack_a0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar14);
        EVar18 = BLOOD_TYPE_RED;
        pCVar15 = &CStack_ac;
        CStack_ac.x = fStack_64;
        *(float *)((int)&CStack_ac + (uint)bVar12 * -8 + 4) = afStack_90[(uint)bVar12 * -2 + 0xc];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_ac + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar15,EVar18);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar2 = (this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,5,1);
      }
      else {
        EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
        if (EVar8 == DEATH_STATE_ALIVE) {
          pCVar2 = (this_ptr->base).victim;
          pCVar11 = (CImp *)pCVar2->grabbed_by;
          if (this_ptr == pCVar11) {
            fVar16 = (float)_DAT_005e5642;
            pCVar4 = (pCVar11->base).victim;
            (pCVar11->base).base.base.location.position.x =
                 (pCVar2->base).location.position.x -
                 (pCVar11->base).base.base.orient_matrix.m[0].z * fVar16;
            (pCVar11->base).base.base.location.position.z =
                 (pCVar4->base).location.position.z -
                 (pCVar11->base).base.base.orient_matrix.m[2].z * fVar16;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,5,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,5,1);
        }
      }
    }
    goto switchD_004f3a18_caseD_5;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_004f2f91:
      iVar5 = 1;
    }
    else {
LAB_004f3173:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_004f2f91;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004f3173;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004f3a18_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if ((iVar5 != 0) && (iStack_2c != 9)) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_178 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_174 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_170 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_160 = fStack_178;
    afStack_198[(uint)bVar12 * -2 + 0xf] = afStack_198[(uint)bVar12 * -2 + 9];
    afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
         afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    pCVar15 = &(this_ptr->base).base.position_delta;
    fStack_1cc = fStack_160 + pCVar15->x;
    fStack_1c8 = fStack_15c + (this_ptr->base).base.position_delta.y;
    fStack_1c4 = fStack_158 + (this_ptr->base).base.position_delta.z;
    fStack_1e4 = fStack_1cc;
    afStack_1f8[(uint)bVar12 * -2 + 6] = afStack_1f8[(uint)bVar12 * -2 + 0xc];
    afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1fc = fStack_1e4 + pCVar1->x;
    afStack_1f8[0] = fStack_1e0 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_1f8[1] = fStack_1dc + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_dc.x = fStack_1fc;
    *(float *)((int)&CStack_dc + (uint)bVar12 * -8 + 4) = afStack_1f8[(uint)bVar12 * -2];
    *(float *)((int)&CStack_dc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar15->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_dc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
