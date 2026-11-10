// Name: core_imp.cpp_CImp_process_FUN_004d6980
// Address: 004d6980
// Address Range: [[004d6980, 004d781e]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_process_FUN_004d6980(CImp *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_CImp_process_FUN_004d6980(CImp *this_ptr,float delta_time)

{
  byte *puVar1;
  byte *puVar2;
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  int iVar6;
  uint uVar7;
  CDemonActor *pCVar8;
  EDeathState EVar9;
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
  uint *puVar18;
  EBloodType EVar19;
  SDamageInfo *pSVar20;
  float max_distance;
  SDamageInfo aSStack_280 [4];
  float fStack_27c;
  CImp *pCStack_24c;
  CImp *pCStack_248;
  SDamageInfo aSStack_244 [4];
  float fStack_240;
  CImp *pCStack_210;
  CImp *pCStack_20c;
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
  uint uStack_130;
  float fStack_124;
  float fStack_118;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_100 [3];
  uint uStack_f4;
  float afStack_f0 [5];
  CVector3f CStack_dc;
  uint uStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float afStack_b8 [3];
  CVector3f CStack_ac;
  uint uStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
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
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar12 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  if ((*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[9] * 4) == 0) &&
     (EVar9 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), EVar9 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,6,1);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  afStack_3c[0] = delta_time * (this_ptr->base).speed;
  pCStack_1c = (CMotionController *)&(this_ptr->base).base.model;
LAB_004d69ec:
  if (0.0 < afStack_3c[0]) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_1c,afStack_3c);
    if (uVar7 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar7);
    }
    else {
      if (uVar7 < 0x29b) {
        pCVar3 = (this_ptr->base).victim;
        iStack_18 = 1;
        if ((((pCVar3 != (CCharacter *)0x0) &&
             (EVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
             EVar9 == DEATH_STATE_ALIVE)) &&
            ((iStack_18 == 0 ||
             (pCVar3 = (this_ptr->base).victim,
             pCVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
             pCVar8 == (CDemonActor *)0x0)))) &&
           ((iStack_18 == 0 ||
            (pCVar3 = (this_ptr->base).victim,
            iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                              (pCVar3,(CDemonActor *)this_ptr,0), iVar6 != 0)))) {
          if (iStack_18 != 0) {
            afStack_100[2] = 0x40000000;
            afStack_100[0] = 0.0;
            afStack_100[1] = 0.0;
            core_actor_cpp_FUN_00408d70(this_ptr,afStack_198 + 0x26);
            fStack_154 = fStack_16c;
            afStack_198[(uint)bVar12 * -2 + 0x12] = afStack_198[(uint)bVar12 * -2 + 0xc];
            afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
                 afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
            pCVar3 = (this_ptr->base).victim;
            fVar16 = fStack_154 - *(float *)&(pCVar3->base).field_0x20;
            fVar17 = fStack_14c - *(float *)&(pCVar3->base).field_0x28;
            if ((float)_DAT_005dab09 < SQRT(fVar17 * fVar17 + fVar16 * fVar16)) {
              iStack_18 = 0;
            }
            if ((float)_DAT_005dab11 <
                ABS(fStack_150 - *(float *)&(((this_ptr->base).victim)->base).field_0x24))
            goto LAB_004d6a63;
          }
          if (((iStack_18 == 0) ||
              (pCVar3 = (this_ptr->base).victim,
              iVar6 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar3,(CDemonActor *)this_ptr,0), iVar6 != 0)) && (iStack_18 != 0)
             ) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,9,1);
            goto LAB_004d69ec;
          }
        }
LAB_004d6a63:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
        goto LAB_004d69ec;
      }
      if (uVar7 == 0x29b) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
        }
        else {
          core_skeleton_cpp_FUN_005469a0(pCStack_1c,_DAT_01cee138);
          puVar18 = &uStack_d0;
          uStack_d0 = uStack_130;
          afStack_cc[(uint)bVar12 * -2] = afStack_198[(uint)bVar12 * -2 + 0x1b];
          afStack_cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
          core_actor_cpp_FUN_00408d70(this_ptr,puVar18);
          pSVar20 = aSStack_244;
          fStack_19c = fStack_118;
          afStack_198[(uint)bVar12 * -2] = afStack_198[(uint)bVar12 * -2 + 0x21];
          afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x22];
          CStack_1b4.x = fStack_19c;
          *(float *)((int)&CStack_1b4 + (uint)bVar12 * -8 + 4) = afStack_198[(uint)bVar12 * -2];
          *(float *)((int)&CStack_1b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(pSVar20);
          fStack_240 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(5.0,10.0);
          pCStack_210 = this_ptr;
          pCStack_20c = this_ptr;
          pCVar3 = (this_ptr->base).victim;
          fStack_14 = fStack_240;
          (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,aSStack_244);
          fVar13 = (float10)fStack_240 * (float10)_DAT_005daaf9 * (float10)_DAT_005dab01;
          EVar19 = BLOOD_TYPE_RED;
          round();
          iStack_4c = (int)ROUND(fVar13);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                    (g_CGorePtr,&CStack_1b4,(CVector3f *)0x0,iStack_4c,EVar19);
          pCVar3 = (this_ptr->base).victim;
          EVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
          if ((int)EVar9 < 1) {
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar3 = (this_ptr->base).victim;
            (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,uVar7);
      }
    }
    goto LAB_004d69ec;
  }
  fVar16 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar16);
  pCStack_20 = (CMotionController *)&(this_ptr->base).base.model;
  iVar6 = core_motion_cpp_FUN_005035c0(pCStack_20);
  iVar6 = *(int *)(iVar6 + 0x24);
  iStack_2c = iVar6;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar6) {
    case 0:
      iVar6 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar6 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x114))(iVar6);
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
          if (iVar6 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
          }
        }
        else if (pCVar3->grabbed_by == (CDemonActor *)0x0) {
          afStack_cc[2] =
               *(float *)&(pCVar3->base).field_0x20 -
               *(float *)&(this_ptr->base).base.base.field_0x20;
          afStack_cc[3] =
               *(float *)&(pCVar3->base).field_0x24 -
               *(float *)&(this_ptr->base).base.base.field_0x24;
          fStack_bc = *(float *)&(pCVar3->base).field_0x28 -
                      *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_88 = afStack_cc[2];
          afStack_9c[(uint)bVar12 * -2 + 6] = afStack_cc[(uint)bVar12 * -2 + 3];
          afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
               afStack_cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          fStack_44 = SQRT(fStack_80 * fStack_80 + fStack_88 * fStack_88 + fStack_84 * fStack_84);
          fStack_34 = fStack_44;
          if (fStack_44 < 0x40000000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_9c + 5);
            uStack_f4 = afStack_f0[2];
            afStack_f0[(uint)bVar12 * -2] = afStack_f0[(uint)bVar12 * -2 + 3];
            afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                         (afStack_f0[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005daaf1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,4,1);
            }
          }
          if (fStack_34 < (this_ptr->base).guard_distance) {
            this_ptr_00 = &(this_ptr->base).base.model;
            if (_DAT_005f8d68 <= fStack_34) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)this_ptr_00,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)this_ptr_00,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,3,1);
        }
      }
      else {
        iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.1);
        if (iVar6 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar16 = 0x40000000;
      pCStack_24 = (CMotionController *)&(this_ptr->base).base.model;
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,1,1);
        }
      }
      else {
        pCVar8 = pCVar3->grabbed_by;
        if (pCVar8 == (CDemonActor *)0x0) {
          fStack_30 = 0x40000000;
          max_distance = 0.17453292;
          *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
          fVar17 = 0.5;
          *(uint *)&(this_ptr->base).base.model.field_0x2258 =
               *(uint *)&(this_ptr->base).base.model.field_0x225c;
          *(uint *)&(this_ptr->base).base.model.field_0x2254 =
               *(uint *)&(this_ptr->base).base.model.field_0x2258;
          CStack_1a8.z = fVar16;
          pCVar15 = &CStack_1a8;
          pCVar3 = (this_ptr->base).victim;
          CStack_1a8.x = (float)pCVar8;
          CStack_1a8.y = (float)pCVar8;
          path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)this_ptr,
                             (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,path_map,
                             pCVar15,fVar17,max_distance);
          if (-1 < iVar6) {
            pCVar3 = (this_ptr->base).victim;
            fStack_10c = *(float *)&(this_ptr->base).base.base.field_0x20 -
                         *(float *)&(pCVar3->base).field_0x20;
            fStack_108 = *(float *)&(this_ptr->base).base.base.field_0x24 -
                         *(float *)&(pCVar3->base).field_0x24;
            fStack_104 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                         *(float *)&(pCVar3->base).field_0x28;
            fStack_1c0 = fStack_10c;
            afStack_1f8[(uint)bVar12 * -2 + 0xf] = afStack_198[(uint)bVar12 * -2 + 0x24];
            afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                 afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x25];
            fStack_40 = SQRT(fStack_1b8 * fStack_1b8 + fStack_1c0 * fStack_1c0);
            uStack_1bc = 0;
            fStack_28 = fStack_40;
            if ((_DAT_005f8d68 < fStack_40) && (iStack_2c == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,2,1);
            }
            if (((fStack_28 < _DAT_005f8d6c) &&
                (pCVar3 = (this_ptr->base).victim,
                pCVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                pCVar8 == (CDemonActor *)0x0)) &&
               (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[10] * 4)
                != 0)) {
              pCVar3 = (this_ptr->base).victim;
              fStack_148 = *(float *)&(pCVar3->base).field_0x20 -
                           *(float *)&(this_ptr->base).base.base.field_0x20;
              fStack_144 = *(float *)&(pCVar3->base).field_0x24 -
                           *(float *)&(this_ptr->base).base.base.field_0x24;
              fStack_140 = *(float *)&(pCVar3->base).field_0x28 -
                           *(float *)&(this_ptr->base).base.base.field_0x28;
              afStack_b8[0] = fStack_148;
              afStack_cc[(uint)bVar12 * -2 + 6] = afStack_198[(uint)bVar12 * -2 + 0x15];
              afStack_cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                   afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_cc + 5);
              uStack_1d8 = afStack_9c[2];
              afStack_1f8[(uint)bVar12 * -2 + 9] = afStack_9c[(uint)bVar12 * -2 + 3];
              afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
                   afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                           (fStack_1d4 - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS(fStack_14) < (float)_DAT_005daaf1) &&
                 (iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.1), iVar6 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&(this_ptr->base).base.model,8,1);
                iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
                if (iVar6 == 0) {
                  uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  this_ptr->sfx_handles[0] = uVar7;
                }
              }
            }
            if ((fStack_28 <= fStack_30) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCVar3 = (this_ptr->base).victim;
              fStack_7c = *(float *)&(pCVar3->base).field_0x20 -
                          *(float *)&(this_ptr->base).base.base.field_0x20;
              fStack_78 = *(float *)&(pCVar3->base).field_0x24 -
                          *(float *)&(this_ptr->base).base.base.field_0x24;
              fStack_74 = *(float *)&(pCVar3->base).field_0x28 -
                          *(float *)&(this_ptr->base).base.base.field_0x28;
              afStack_58[0] = fStack_7c;
              afStack_9c[(uint)bVar12 * -2 + 0x12] = afStack_9c[(uint)bVar12 * -2 + 9];
              afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
                   afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_9c + 0x11);
              uStack_70 = afStack_1f8[2];
              afStack_9c[(uint)bVar12 * -2 + 0xc] = afStack_1f8[(uint)bVar12 * -2 + 3];
              afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
                   afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                           (fStack_6c - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(fStack_14) < (float)_DAT_005daaf1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&(this_ptr->base).base.model,4,1);
                (this_ptr->base).attack_cooldown = 4.0;
              }
            }
            if ((this_ptr->base).guard_distance < fStack_28) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,0,1);
            }
            fVar16 = this_ptr->laugh_timer - delta_time;
            this_ptr->laugh_timer = fVar16;
            if (fVar16 < 0.0) {
              this_ptr->laugh_timer = 0.0;
              iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
              if ((iVar6 == 0) &&
                 (iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]), iVar6 == 0)) {
                uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                this_ptr->sfx_handles[0] = uVar7;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,20.0);
                this_ptr->laugh_timer = fStack_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,3,1);
        }
      }
      break;
    case 3:
      fVar16 = this_ptr->laugh_timer - delta_time * _DAT_005daae9;
      this_ptr->laugh_timer = fVar16;
      if (fVar16 < 0.0) {
        this_ptr->laugh_timer = 0.0;
        iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]);
        if ((iVar6 == 0) &&
           (iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]), iVar6 == 0)) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          this_ptr->sfx_handles[0] = uVar7;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,20.0);
          this_ptr->laugh_timer = fStack_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_280);
      fStack_27c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,5.0);
      pSVar20 = aSStack_280;
      pCStack_24c = this_ptr;
      pCStack_248 = this_ptr;
      fVar16 = 0.4;
      fStack_14 = fStack_27c;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01cee140 * 0x30);
      pfVar14 = afStack_198 + 5;
      afStack_184[0] = afStack_198[2];
      afStack_198[(uint)bVar12 * -2 + 6] = afStack_198[(uint)bVar12 * -2 + 3];
      afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar14);
      pCVar15 = &CStack_208;
      CStack_208.x = fStack_124;
      *(float *)((int)&CStack_208 + (uint)bVar12 * -8 + 4) = afStack_198[(uint)bVar12 * -2 + 0x1e];
      pCVar11 = this_ptr;
      *(float *)((int)&CStack_208 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f];
      iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                        (&pCVar11->base,pCVar15,fVar16,pSVar20);
      if (iVar6 != 0) {
        iVar10 = 0;
        iVar6 = 0;
        while (iVar6 < g_CDemonSetPtr->enemy_count) {
          pCVar11 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                      (*(uint *)((int)g_CDemonSetPtr->enemies + iVar10),
                                       g_CImpClassInfo.name_hash);
          if (((pCVar11 == (CImp *)0x0) || (pCVar11 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar11->base).victim)) {
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(pCVar11->base).base.model,3,1);
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 4;
          }
        }
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        core_skeleton_cpp_FUN_005469a0(pCStack_20,0);
        pfVar14 = afStack_198 + 0x17;
        afStack_13c[0] = (float)uStack_a0;
        afStack_198[(uint)bVar12 * -2 + 0x18] = afStack_9c[(uint)bVar12 * -2];
        afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
             afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar14);
        EVar19 = BLOOD_TYPE_RED;
        pCVar15 = &CStack_ac;
        CStack_ac.x = fStack_64;
        *(float *)((int)&CStack_ac + (uint)bVar12 * -8 + 4) = afStack_9c[(uint)bVar12 * -2 + 0xf];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_ac + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             afStack_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar15,EVar19);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,5,1);
      }
      else {
        EVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
        if (EVar9 == DEATH_STATE_ALIVE) {
          pCVar3 = (this_ptr->base).victim;
          pCVar11 = (CImp *)pCVar3->grabbed_by;
          if (this_ptr == pCVar11) {
            fVar16 = (float)_DAT_005daae1;
            pCVar5 = (pCVar11->base).victim;
            *(float *)&(pCVar11->base).base.base.field_0x20 =
                 *(float *)&(pCVar3->base).field_0x20 -
                 (pCVar11->base).base.base.orient_matrix.m[0].z * fVar16;
            *(float *)&(pCVar11->base).base.base.field_0x28 =
                 *(float *)&(pCVar5->base).field_0x28 -
                 (pCVar11->base).base.base.orient_matrix.m[2].z * fVar16;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,5,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,5,1);
        }
      }
    }
    goto switchD_004d7818_caseD_5;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_004d6d91:
      iVar6 = 1;
    }
    else {
LAB_004d6f73:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar6,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_004d6d91;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_004d6f73;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
switchD_004d7818_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if ((iVar6 != 0) && (iStack_2c != 9)) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_178 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_174 = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_170 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_160 = fStack_178;
    afStack_198[(uint)bVar12 * -2 + 0xf] = afStack_198[(uint)bVar12 * -2 + 9];
    afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
         afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    puVar1 = &(this_ptr->base).base.field_0x257c;
    fStack_1cc = fStack_160 + *(float *)puVar1;
    fStack_1c8 = fStack_15c + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_1c4 = fStack_158 + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_1e4 = fStack_1cc;
    afStack_1f8[(uint)bVar12 * -2 + 6] = afStack_1f8[(uint)bVar12 * -2 + 0xc];
    afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
    puVar2 = &(this_ptr->base).base.model.field_0x2254;
    fStack_1fc = fStack_1e4 + *(float *)puVar2;
    afStack_1f8[0] = fStack_1e0 + *(float *)&(this_ptr->base).base.model.field_0x2258;
    afStack_1f8[1] = fStack_1dc + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_dc.x = fStack_1fc;
    *(float *)((int)&CStack_dc + (uint)bVar12 * -8 + 4) = afStack_1f8[(uint)bVar12 * -2];
    *(float *)((int)&CStack_dc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_dc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
