// Name: core_sentinel.cpp_CSentinel_process_FUN_0052a9a0
// Address: 0052a9a0
// Address Range: [[0052a9a0, 0052b6c2]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_process_FUN_0052a9a0(CSentinel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sentinel_cpp_CSentinel_process_FUN_0052a9a0(CSentinel *this_ptr,float delta_time)

{
  byte *puVar1;
  byte *puVar2;
  CDeformableModelInstance *this_ptr_00;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  int iVar6;
  EDeathState EVar7;
  CDemonActor *pCVar8;
  CPathMap *pCVar9;
  byte bVar10;
  float afStackY_1200 [982];
  CSentinel *pCVar11;
  CGore *this_ptr_01;
  float *pfVar12;
  uint *puVar13;
  CVector3f *pCVar14;
  float fVar15;
  EBloodType blood_type;
  SDamageInfo *pSVar16;
  float max_distance;
  float fVar17;
  SDamageInfo aSStack_290 [4];
  float fStack_28c;
  CSentinel *pCStack_25c;
  CSentinel *pCStack_258;
  SDamageInfo aSStack_254 [4];
  float fStack_250;
  uint uStack_218;
  float afStack_214 [5];
  float fStack_200;
  float afStack_1fc [5];
  CVector3f CStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  uint uStack_1c4;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  uint uStack_1a0;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  CVector3f CStack_188;
  CVector3f CStack_17c;
  uint uStack_170;
  float afStack_16c [4];
  float fStack_15c;
  uint uStack_158;
  float fStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_128 [3];
  float fStack_11c;
  float afStack_110 [3];
  CVector3f CStack_104;
  uint uStack_f8;
  float afStack_f4 [4];
  float fStack_e4;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_bc;
  float afStack_b0 [3];
  float fStack_a4;
  float afStack_98 [3];
  float fStack_8c;
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [2];
  CVector3f CStack_50;
  byte *puStack_44;
  float afStack_40 [3];
  float fStack_34;
  float fStack_30;
  CMotionController *pCStack_2c;
  CMotionController *pCStack_28;
  CMotionController *pCStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  afStack_40[0] = delta_time * (this_ptr->base).speed;
  pCStack_24 = (CMotionController *)&(this_ptr->base).base.model;
LAB_0052a9fc:
  if (0.0 < afStack_40[0]) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_24,afStack_40);
    switch(iVar5) {
    case 100:
      pCVar4 = (this_ptr->base).victim;
      iStack_20 = 1;
      if ((((pCVar4 != (CCharacter *)0x0) &&
           (EVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
           EVar7 == DEATH_STATE_ALIVE)) &&
          (pCVar4 = (this_ptr->base).victim,
          pCVar8 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
          pCVar8 == (CDemonActor *)0x0)) &&
         (pCVar4 = (this_ptr->base).victim,
         iVar5 = (*(((pCVar4->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar4,(CDemonActor *)this_ptr,0), iVar5 != 0)) {
        afStack_214[4] = 0x40800000;
        afStack_214[2] = 0.0;
        afStack_214[3] = 0.0;
        core_actor_cpp_FUN_00408d70(this_ptr,afStack_214 + 2);
        fStack_200 = fStack_11c;
        afStack_1fc[(uint)bVar10 * -2] = afStack_16c[(uint)bVar10 * -2 + 0x15];
        afStack_1fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
        pCVar4 = (this_ptr->base).victim;
        fVar15 = fStack_200 - *(float *)&(pCVar4->base).field_0x20;
        fVar17 = afStack_1fc[1] - *(float *)&(pCVar4->base).field_0x28;
        if ((float)_DAT_005e53ed < SQRT(fVar17 * fVar17 + fVar15 * fVar15)) {
          iStack_20 = 0;
        }
        pCVar4 = (this_ptr->base).victim;
        if (((ABS(afStack_1fc[0] - *(float *)&(pCVar4->base).field_0x24) <= (float)_DAT_005e53f5) &&
            ((iStack_20 == 0 ||
             (iVar5 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar4,(CDemonActor *)this_ptr,0), iVar5 != 0)))) &&
           (iStack_20 != 0)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,0,1);
      break;
    case 0x65:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
      break;
    case 0x66:
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_254);
        fStack_250 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,5.0);
        pCVar4 = (this_ptr->base).victim;
        fStack_14 = fStack_250;
        (*(((pCVar4->base).vtable._uc)->_uc).processDamage)(pCVar4,aSStack_254);
      }
      break;
    case 0x67:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"wing?.wav");
      break;
    case 0x68:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"sentinel-fall.wav");
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar5);
    }
    goto LAB_0052a9fc;
  }
  fVar15 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar15);
  iVar5 = core_motion_cpp_FUN_005035c0(pCStack_24);
  iVar5 = *(int *)(iVar5 + 0x24);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if ((iVar5 == 10) || (iVar5 == 0xb)) {
      *(uint *)&(this_ptr->base).base.field_0x3434 = 0x3f000000;
      switch(iVar5) {
      case 0:
        goto switchD_0052ae5a_caseD_0;
      case 1:
        goto switchD_0052ae5a_caseD_1;
      case 2:
        goto switchD_0052ae5a_caseD_2;
      case 3:
        goto switchD_0052ae5a_caseD_3;
      case 4:
        goto switchD_0052ae5a_caseD_4;
      default:
        goto switchD_0052ae5a_caseD_5;
      case 9:
        goto switchD_0052ae5a_caseD_9;
      case 10:
        goto switchD_0052ae5a_caseD_a;
      case 0xe:
      case 0xf:
        goto switchD_0052ae5a_caseD_e;
      }
    }
    *(uint *)&(this_ptr->base).base.field_0x3434 = 0x40000000;
    switch(iVar5) {
    case 0:
switchD_0052ae5a_caseD_0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,2,1);
        }
      }
      else {
        afStack_1d8[2] =
             *(float *)&(pCVar4->base).field_0x20 - *(float *)&(this_ptr->base).base.base.field_0x20
        ;
        afStack_1d8[3] =
             *(float *)&(pCVar4->base).field_0x24 - *(float *)&(this_ptr->base).base.base.field_0x24
        ;
        fStack_1c8 = *(float *)&(pCVar4->base).field_0x28 -
                     *(float *)&(this_ptr->base).base.base.field_0x28;
        fStack_c8 = afStack_1d8[2];
        afStack_f4[(uint)bVar10 * -2 + 0xc] = afStack_1d8[(uint)bVar10 * -2 + 3];
        afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
             afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        fStack_e0 = fStack_c8;
        afStack_f4[(uint)bVar10 * -2 + 6] = afStack_f4[(uint)bVar10 * -2 + 0xc];
        afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        fStack_d4 = fStack_e0;
        afStack_f4[(uint)bVar10 * -2 + 9] = afStack_f4[(uint)bVar10 * -2 + 6];
        afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        fStack_34 = fStack_cc * fStack_cc + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0;
        if (SQRT(fStack_34) <= _DAT_005fb054) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,2,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,3,1);
        }
      }
      break;
    case 1:
switchD_0052ae5a_caseD_1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0,1);
      }
      break;
    case 2:
switchD_0052ae5a_caseD_2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar15 = 0x40800000;
      pCStack_2c = (CMotionController *)&(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,2,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_1c = 0x40800000;
        fVar17 = 0.5;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        CStack_104.x = 0.0;
        CStack_104.z = fVar15;
        pCVar14 = &CStack_104;
        CStack_104.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        pCVar9 = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar9,pCVar14
                           ,fVar17,max_distance);
        if (-1 < iVar5) {
          pCVar4 = (this_ptr->base).victim;
          fStack_5c = *(float *)&(this_ptr->base).base.base.field_0x20 -
                      *(float *)&(pCVar4->base).field_0x20;
          afStack_58[0] =
               *(float *)&(this_ptr->base).base.base.field_0x24 -
               *(float *)&(pCVar4->base).field_0x24;
          afStack_58[1] =
               *(float *)&(this_ptr->base).base.base.field_0x28 -
               *(float *)&(pCVar4->base).field_0x28;
          fStack_80 = fStack_5c;
          afStack_f4[(uint)bVar10 * -2 + 0x1e] = afStack_58[(uint)bVar10 * -2];
          afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
               afStack_58[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          fStack_30 = SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80);
          uStack_7c = 0;
          fStack_18 = fStack_30;
          if (_DAT_005fb054 < fStack_30) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,3,1);
          }
          if ((fStack_18 <= fStack_1c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar4 = (this_ptr->base).victim;
            fStack_1ac = *(float *)&(pCVar4->base).field_0x20 -
                         *(float *)&(this_ptr->base).base.base.field_0x20;
            fStack_1a8 = *(float *)&(pCVar4->base).field_0x24 -
                         *(float *)&(this_ptr->base).base.base.field_0x24;
            fStack_1a4 = *(float *)&(pCVar4->base).field_0x28 -
                         *(float *)&(this_ptr->base).base.base.field_0x28;
            afStack_128[0] = fStack_1ac;
            afStack_16c[(uint)bVar10 * -2 + 0x12] = afStack_1d8[(uint)bVar10 * -2 + 0xc];
            afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
                 afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_16c + 0x11);
            uStack_218 = afStack_1fc[2];
            afStack_214[(uint)bVar10 * -2] = afStack_1fc[(uint)bVar10 * -2 + 3];
            afStack_214[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_1fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                         (afStack_214[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005e53e5) {
              iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
              this_ptr_00 = &(this_ptr->base).base.model;
              if (iVar5 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)this_ptr_00,10,1);
                this_ptr->hover_timer = 5.0;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)this_ptr_00,4,1);
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
          }
          if ((this_ptr->base).guard_distance < fStack_18) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&(this_ptr->base).base.model,0,1);
          }
        }
      }
      break;
    case 3:
switchD_0052ae5a_caseD_3:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCStack_28 = (CMotionController *)&(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_28,0,1);
      }
      else {
        fVar17 = 0.17453292;
        fVar15 = 0.5;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        CStack_188.x = 0.0;
        CStack_188.z = 0x40800000;
        pCVar14 = &CStack_188;
        CStack_188.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        pCVar9 = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                  ((CCharacter *)this_ptr,(CVector3f *)&(((this_ptr->base).victim)->base).field_0x20
                   ,pCVar9,pCVar14,fVar15,fVar17);
        pCVar4 = (this_ptr->base).victim;
        fStack_140 = *(float *)&(this_ptr->base).base.base.field_0x20 -
                     *(float *)&(pCVar4->base).field_0x20;
        fStack_13c = *(float *)&(this_ptr->base).base.base.field_0x24 -
                     *(float *)&(pCVar4->base).field_0x24;
        fStack_138 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                     *(float *)&(pCVar4->base).field_0x28;
        fStack_134 = fStack_140;
        afStack_16c[(uint)bVar10 * -2 + 0xf] = afStack_16c[(uint)bVar10 * -2 + 0xc];
        afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        if (_DAT_005fb054 <=
            SQRT(fStack_12c * fStack_12c + fStack_134 * fStack_134 + fStack_130 * fStack_130)) {
          iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.1);
          if (iVar5 != 0) {
            iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
            if (iVar5 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_28,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_28,0xe,1);
            }
          }
        }
        else {
          iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
          if (iVar5 == 0) {
            iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
            if (iVar5 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_28,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_28,4,1);
            }
          }
          else {
            iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.5);
            if (iVar5 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_28,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_28,0xe,1);
            }
          }
        }
      }
      break;
    case 4:
switchD_0052ae5a_caseD_4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_290);
      fStack_28c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pSVar16 = aSStack_290;
      pCStack_25c = this_ptr;
      pCStack_258 = this_ptr;
      puStack_44 = &(this_ptr->base).base.model.field_0xe80;
      fVar15 = 1.0;
      fStack_14 = fStack_28c;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_44 + _DAT_01e66154 * 0x30);
      pfVar12 = afStack_16c + 0x17;
      afStack_110[0] = (float)uStack_bc;
      afStack_16c[(uint)bVar10 * -2 + 0x18] = afStack_f4[(uint)bVar10 * -2 + 0xf];
      afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
           afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar12);
      pCVar14 = &CStack_68;
      CStack_68.x = fStack_a4;
      *(float *)((int)&CStack_68 + (uint)bVar10 * -8 + 4) = afStack_f4[(uint)bVar10 * -2 + 0x15];
      pCVar11 = this_ptr;
      *(float *)((int)&CStack_68 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar11->base,pCVar14,fVar15,pSVar16);
      fStack_28c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,30.0);
      pSVar16 = aSStack_290;
      pCStack_25c = this_ptr;
      fVar15 = 1.0;
      pCStack_258 = this_ptr;
      fStack_14 = fStack_28c;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_44 + _DAT_01e6614c * 0x30);
      puVar13 = &uStack_f8;
      uStack_f8 = uStack_1a0;
      afStack_f4[(uint)bVar10 * -2] = afStack_1d8[(uint)bVar10 * -2 + 0xf];
      afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar13);
      pCVar14 = &CStack_50;
      CStack_50.x = fStack_8c;
      *(float *)((int)&CStack_50 + (uint)bVar10 * -8 + 4) = afStack_f4[(uint)bVar10 * -2 + 0x1b];
      pCVar11 = this_ptr;
      *(float *)((int)&CStack_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar11->base,pCVar14,fVar15,pSVar16);
    default:
      break;
    case 9:
switchD_0052ae5a_caseD_9:
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        core_skeleton_cpp_FUN_005469a0(&(this_ptr->base).base.model,0);
        pfVar12 = afStack_f4 + 0x11;
        afStack_b0[0] = (float)uStack_158;
        afStack_f4[(uint)bVar10 * -2 + 0x12] = afStack_16c[(uint)bVar10 * -2 + 6];
        afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar12);
        blood_type = BLOOD_TYPE_RED;
        pCVar14 = &CStack_17c;
        CStack_17c.x = fStack_14c;
        *(float *)((int)&CStack_17c + (uint)bVar10 * -8 + 4) = afStack_16c[(uint)bVar10 * -2 + 9];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_17c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar14,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 10:
switchD_0052ae5a_caseD_a:
      fVar15 = this_ptr->hover_timer - delta_time;
      this_ptr->hover_timer = fVar15;
      if (fVar15 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
switchD_0052ae5a_caseD_e:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0,1);
      }
      else {
        fStack_1dc = *(float *)&(pCVar4->base).field_0x20 -
                     *(float *)&(this_ptr->base).base.base.field_0x20;
        afStack_1d8[0] =
             *(float *)&(pCVar4->base).field_0x24 - *(float *)&(this_ptr->base).base.base.field_0x24
        ;
        afStack_1d8[1] =
             *(float *)&(pCVar4->base).field_0x28 - *(float *)&(this_ptr->base).base.base.field_0x28
        ;
        afStack_98[0] = fStack_1dc;
        afStack_f4[(uint)bVar10 * -2 + 0x18] = afStack_1d8[(uint)bVar10 * -2];
        afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
             afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_f4 + 0x17);
        uStack_170 = uStack_1c4;
        afStack_16c[(uint)bVar10 * -2] = afStack_1d8[(uint)bVar10 * -2 + 6];
        afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        (this_ptr->base).base.base.orient.vec.y = afStack_16c[0];
      }
    }
    goto switchD_0052ae5a_caseD_5;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_0052aa73:
      iVar5 = 2;
    }
    else {
LAB_0052ae35:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_0052aa73;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_0052ae35;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
switchD_0052ae5a_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_1b8 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_1b4 = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_1b0 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    afStack_16c[2] = fStack_1b8;
    afStack_16c[(uint)bVar10 * -2 + 3] = afStack_1d8[(uint)bVar10 * -2 + 9];
    afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    puVar1 = &(this_ptr->base).base.field_0x257c;
    afStack_f4[2] = afStack_16c[2] + *(float *)puVar1;
    afStack_f4[3] = afStack_16c[3] + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_e4 = fStack_15c + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_194 = afStack_f4[2];
    afStack_1d8[(uint)bVar10 * -2 + 0x12] = afStack_f4[(uint)bVar10 * -2 + 3];
    afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
         afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    puVar2 = &(this_ptr->base).base.model.field_0x2254;
    fStack_74 = fStack_194 + *(float *)puVar2;
    fStack_70 = fStack_190 + *(float *)&(this_ptr->base).base.model.field_0x2258;
    fStack_6c = fStack_18c + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_1e8.x = fStack_74;
    *(float *)((int)&CStack_1e8 + (uint)bVar10 * -8 + 4) = afStack_f4[(uint)bVar10 * -2 + 0x21];
    *(float *)((int)&CStack_1e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_1e8);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
