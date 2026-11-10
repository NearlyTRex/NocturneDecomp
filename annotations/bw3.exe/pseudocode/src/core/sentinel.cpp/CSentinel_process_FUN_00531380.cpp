// Name: core_sentinel.cpp_CSentinel_process_FUN_00531380
// Address: 00531380
// Address Range: [[00531380, 005320ab]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00531380(CSentinel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00531380(CSentinel *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  EWalkState EVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  EDeathState EVar7;
  CDemonActor *pCVar8;
  CPathMap *pCVar9;
  byte bVar10;
  float afStackY_1200 [982];
  CSentinel *pCVar11;
  CGore *this_ptr_01;
  float *pfVar12;
  CVector3f *pCVar13;
  float fVar14;
  uint *puVar15;
  EBloodType blood_type;
  float max_distance;
  float fVar16;
  SDamageInfo aSStack_290 [4];
  float fStack_28c;
  CSentinel *pCStack_25c;
  CSentinel *pCStack_258;
  SDamageInfo aSStack_254 [4];
  float fStack_250;
  float fStack_218;
  float afStack_214 [5];
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  CVector3f CStack_1dc;
  float fStack_1d0;
  float afStack_1cc [4];
  float fStack_1bc;
  uint uStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  CVector3f CStack_194;
  CVector3f CStack_188;
  uint uStack_17c;
  float afStack_178 [2];
  CVector3f CStack_170;
  uint uStack_164;
  float afStack_160 [5];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float afStack_134 [3];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float afStack_110 [3];
  float afStack_104 [3];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [3];
  uint uStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  uint uStack_c8;
  float fStack_bc;
  uint uStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float afStack_98 [3];
  float afStack_8c [3];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  uint uStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  byte *puStack_40;
  float afStack_3c [2];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar10 = 0;
  iVar4 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_3c[0] = delta_time * *(float *)&(this_ptr->base).field_0xcdcc;
  pCStack_1c = &(this_ptr->base).base.model.base;
LAB_005313e3:
  if (0.0 < afStack_3c[0]) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_1c,afStack_3c);
    switch(iVar4) {
    case 100:
      pCVar3 = (this_ptr->base).victim;
      iStack_18 = 1;
      if ((((pCVar3 != (CCharacter *)0x0) &&
           (EVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar7 == DEATH_STATE_ALIVE)) &&
          (pCVar3 = (this_ptr->base).victim,
          pCVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
          pCVar8 == (CDemonActor *)0x0)) &&
         (pCVar3 = (this_ptr->base).victim,
         iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar3,(CDemonActor *)this_ptr,0), iVar4 != 0)) {
        afStack_ec[2] = 0x40800000;
        afStack_ec[0] = 0.0;
        afStack_ec[1] = 0.0;
        core_actor_cpp_FUN_00408b80(this_ptr,afStack_160 + 0x1d);
        fStack_14c = fStack_bc;
        afStack_160[(uint)bVar10 * -2 + 6] = afStack_dc[(uint)bVar10 * -2 + 9];
        afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        pCVar3 = (this_ptr->base).victim;
        fVar14 = fStack_14c - (pCVar3->base).location.position.x;
        fVar16 = fStack_144 - (pCVar3->base).location.position.z;
        if ((float)_DAT_005d00a2 < SQRT(fVar16 * fVar16 + fVar14 * fVar14)) {
          iStack_18 = 0;
        }
        pCVar3 = (this_ptr->base).victim;
        if (((ABS(fStack_148 - (pCVar3->base).location.position.y) <= (float)_DAT_005d00aa) &&
            ((iStack_18 == 0 ||
             (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar3,(CDemonActor *)this_ptr,0), iVar4 != 0)))) &&
           (iStack_18 != 0)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
      break;
    case 0x65:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
      break;
    case 0x66:
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_254);
        fStack_250 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,5.0);
        pCVar3 = (this_ptr->base).victim;
        fStack_14 = fStack_250;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,aSStack_254);
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
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar4);
    }
    goto LAB_005313e3;
  }
  fVar14 = *(float *)&(this_ptr->base).field_0xcdcc;
  *(float *)&(this_ptr->base).base.field_0x2524 =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar14);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_1c);
  iVar4 = *(int *)(pSVar5 + 0x24);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if ((iVar4 == 10) || (iVar4 == 0xb)) {
      *(uint *)&(this_ptr->base).base.field_0x3270 = 0x3f000000;
      switch(iVar4) {
      case 0:
        goto switchD_00531823_caseD_0;
      case 1:
        goto switchD_00531823_caseD_1;
      case 2:
        goto switchD_00531823_caseD_2;
      case 3:
        goto switchD_00531823_caseD_3;
      case 4:
        goto switchD_00531823_caseD_4;
      default:
        goto switchD_00531823_caseD_5;
      case 9:
        goto switchD_00531823_caseD_9;
      case 10:
        goto switchD_00531823_caseD_a;
      case 0xe:
      case 0xf:
        goto switchD_00531823_caseD_e;
      }
    }
    *(uint *)&(this_ptr->base).base.field_0x3270 = 0x40000000;
    switch(iVar4) {
    case 0:
switchD_00531823_caseD_0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,2,1);
        }
      }
      else {
        fStack_128 = (pCVar3->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        fStack_124 = (pCVar3->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        fStack_120 = (pCVar3->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        fStack_68 = fStack_128;
        afStack_dc[(uint)bVar10 * -2 + 0x1e] = afStack_160[(uint)bVar10 * -2 + 0xf];
        afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
             afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
        fStack_74 = fStack_68;
        afStack_dc[(uint)bVar10 * -2 + 0x1b] = afStack_dc[(uint)bVar10 * -2 + 0x1e];
        afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c] =
             afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
        fStack_1f4 = fStack_74;
        afStack_214[(uint)bVar10 * -2 + 9] = afStack_dc[(uint)bVar10 * -2 + 0x1b];
        afStack_214[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
        fStack_24 = fStack_1ec * fStack_1ec + fStack_1f4 * fStack_1f4 + fStack_1f0 * fStack_1f0;
        if (SQRT(fStack_24) <= _DAT_005e3a14) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,2,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,3,1);
        }
      }
      break;
    case 1:
switchD_00531823_caseD_1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0,1);
      }
      break;
    case 2:
switchD_00531823_caseD_2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar14 = 0x40800000;
      pCStack_28 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,2,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_2c = 0x40800000;
        fVar16 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_188.x = 0.0;
        CStack_188.z = fVar14;
        pCVar13 = &CStack_188;
        CStack_188.y = 0.0;
        pCVar3 = (this_ptr->base).victim;
        pCVar9 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,pCVar9,pCVar13,
                           fVar16,max_distance);
        if (-1 < iVar4) {
          pCVar3 = (this_ptr->base).victim;
          fStack_a4 = (this_ptr->base).base.base.location.position.x -
                      (pCVar3->base).location.position.x;
          fStack_a0 = (this_ptr->base).base.base.location.position.y -
                      (pCVar3->base).location.position.y;
          fStack_9c = (this_ptr->base).base.base.location.position.z -
                      (pCVar3->base).location.position.z;
          fStack_218 = fStack_a4;
          afStack_214[(uint)bVar10 * -2] = afStack_dc[(uint)bVar10 * -2 + 0xf];
          afStack_214[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
          fStack_34 = SQRT(afStack_214[1] * afStack_214[1] + fStack_218 * fStack_218);
          afStack_214[0] = 0.0;
          fStack_30 = fStack_34;
          if (_DAT_005e3a14 < fStack_34) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,3,1);
          }
          if ((fStack_30 <= fStack_2c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar3 = (this_ptr->base).victim;
            fStack_1a0 = (pCVar3->base).location.position.x -
                         (this_ptr->base).base.base.location.position.x;
            fStack_19c = (pCVar3->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_198 = (pCVar3->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            afStack_110[0] = fStack_1a0;
            afStack_160[(uint)bVar10 * -2 + 0x15] = afStack_1cc[(uint)bVar10 * -2 + 0xc];
            afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
                 afStack_1cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_160 + 0x14);
            uStack_e0 = uStack_1e8;
            afStack_dc[(uint)bVar10 * -2] = afStack_214[(uint)bVar10 * -2 + 0xc];
            afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_214[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                         (afStack_dc[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d009a) {
              iVar4 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
              this_ptr_00 = &(this_ptr->base).base.model;
              if (iVar4 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&this_ptr_00->base,10,1);
                this_ptr->hover_timer = 5.0;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&this_ptr_00->base,4,1);
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
          }
          if ((this_ptr->base).guard_distance < fStack_30) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
      }
      break;
    case 3:
switchD_00531823_caseD_3:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCStack_20 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0,1);
      }
      else {
        fVar16 = 0.17453292;
        fVar14 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_194.x = 0.0;
        CStack_194.z = 0x40800000;
        pCVar13 = &CStack_194;
        CStack_194.y = 0.0;
        pCVar3 = (this_ptr->base).victim;
        pCVar9 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                  ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position,
                   pCVar9,pCVar13,fVar14,fVar16);
        pCVar3 = (this_ptr->base).victim;
        fStack_1ac = (this_ptr->base).base.base.location.position.x -
                     (pCVar3->base).location.position.x;
        fStack_1a8 = (this_ptr->base).base.base.location.position.y -
                     (pCVar3->base).location.position.y;
        fStack_1a4 = (this_ptr->base).base.base.location.position.z -
                     (pCVar3->base).location.position.z;
        fStack_1d0 = fStack_1ac;
        afStack_1cc[(uint)bVar10 * -2] = afStack_1cc[(uint)bVar10 * -2 + 9];
        afStack_1cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_1cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        if (_DAT_005e3a14 <=
            SQRT(afStack_1cc[1] * afStack_1cc[1] +
                 fStack_1d0 * fStack_1d0 + afStack_1cc[0] * afStack_1cc[0])) {
          iVar4 = core_actor_cpp_randomChance_FUN_0040cf40(0.1);
          if (iVar4 != 0) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0xe,1);
            }
          }
        }
        else {
          iVar4 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
          if (iVar4 == 0) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,4,1);
            }
          }
          else {
            iVar4 = core_actor_cpp_randomChance_FUN_0040cf40(0.5);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0xe,1);
            }
          }
        }
      }
      break;
    case 4:
switchD_00531823_caseD_4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_290);
      fStack_28c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      pCStack_25c = this_ptr;
      pCStack_258 = this_ptr;
      puStack_40 = &(this_ptr->base).base.model.field_0xe80;
      fStack_14 = fStack_28c;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,puStack_40 + _DAT_01ed7864 * 0x30,0x3f800000,aSStack_290);
      pfVar12 = afStack_160 + 0x17;
      afStack_104[0] = (float)uStack_b0;
      afStack_160[(uint)bVar10 * -2 + 0x18] = afStack_dc[(uint)bVar10 * -2 + 0xc];
      afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
           afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
      pfVar12 = afStack_dc + 0x11;
      afStack_98[0] = (float)uStack_1b8;
      afStack_dc[(uint)bVar10 * -2 + 0x12] = afStack_1cc[(uint)bVar10 * -2 + 6];
      pCVar11 = this_ptr;
      afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
           afStack_1cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_enemy_cpp_FUN_004893f0(pCVar11,pfVar12);
      fStack_28c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,30.0);
      pCStack_25c = this_ptr;
      pCStack_258 = this_ptr;
      fStack_14 = fStack_28c;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,puStack_40 + _DAT_01ed785c * 0x30,0x3f800000,aSStack_290);
      pfVar12 = afStack_dc + 0x14;
      afStack_8c[0] = (float)uStack_c8;
      afStack_dc[(uint)bVar10 * -2 + 0x15] = afStack_dc[(uint)bVar10 * -2 + 6];
      afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
           afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
      pfVar12 = afStack_160 + 0xb;
      afStack_134[0] = (float)uStack_17c;
      afStack_160[(uint)bVar10 * -2 + 0xc] = afStack_178[(uint)bVar10 * -2];
      pCVar11 = this_ptr;
      afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
           afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_enemy_cpp_FUN_004893f0(pCVar11,pfVar12);
    default:
      break;
    case 9:
switchD_00531823_caseD_9:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_0054dbd0(&(this_ptr->base).base.model,0);
        puVar15 = &uStack_164;
        uStack_164 = uStack_11c;
        afStack_160[(uint)bVar10 * -2] = afStack_160[(uint)bVar10 * -2 + 0x12];
        afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
        core_actor_cpp_FUN_00408b80(this_ptr,puVar15);
        blood_type = BLOOD_TYPE_RED;
        pCVar13 = &CStack_170;
        CStack_170.x = fStack_140;
        *(float *)((int)&CStack_170 + (uint)bVar10 * -8 + 4) = afStack_160[(uint)bVar10 * -2 + 9];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_170 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar13,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 10:
switchD_00531823_caseD_a:
      fVar14 = this_ptr->hover_timer - delta_time;
      this_ptr->hover_timer = fVar14;
      if (fVar14 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
switchD_00531823_caseD_e:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,0,1);
      }
      else {
        fStack_80 = (pCVar3->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        fStack_7c = (pCVar3->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y;
        fStack_78 = (pCVar3->base).location.position.z -
                    (this_ptr->base).base.base.location.position.z;
        afStack_160[2] = fStack_80;
        afStack_160[(uint)bVar10 * -2 + 3] = afStack_dc[(uint)bVar10 * -2 + 0x18];
        afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_160 + 2);
        uStack_5c = afStack_214[2];
        afStack_dc[(uint)bVar10 * -2 + 0x21] = afStack_214[(uint)bVar10 * -2 + 3];
        afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22] =
             afStack_214[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        (this_ptr->base).base.base.orient.vec.y = fStack_58;
      }
    }
    goto switchD_00531823_caseD_5;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_0053145a:
      iVar4 = 2;
    }
    else {
LAB_005317fe:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_0053145a;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_005317fe;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00531823_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    afStack_1cc[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_1cc[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_1bc = (this_ptr->base).base.velocity.z * delta_time;
    fStack_200 = afStack_1cc[2];
    afStack_214[(uint)bVar10 * -2 + 6] = afStack_1cc[(uint)bVar10 * -2 + 3];
    afStack_214[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_1cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    pCVar13 = &(this_ptr->base).base.position_delta;
    fStack_f8 = fStack_200 + pCVar13->x;
    fStack_f4 = fStack_1fc + (this_ptr->base).base.position_delta.y;
    fStack_f0 = fStack_1f8 + (this_ptr->base).base.position_delta.z;
    fStack_50 = fStack_f8;
    afStack_dc[(uint)bVar10 * -2 + 0x24] = afStack_160[(uint)bVar10 * -2 + 0x1b];
    afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
         afStack_160[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_dc[2] = fStack_50 + pCVar1->x;
    afStack_dc[3] = fStack_4c + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_cc = fStack_48 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_1dc.x = afStack_dc[2];
    *(float *)((int)&CStack_1dc + (uint)bVar10 * -8 + 4) = afStack_dc[(uint)bVar10 * -2 + 3];
    *(float *)((int)&CStack_1dc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar13->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_1dc);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
