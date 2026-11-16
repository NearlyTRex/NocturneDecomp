// Name: core_sentinel.cpp_CSentinel_process_FUN_0054bc90
// Address: 0054bc90
// Address Range: [[0054bc90, 0054c9b2]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_process_FUN_0054bc90(CSentinel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sentinel_cpp_CSentinel_process_FUN_0054bc90(CSentinel *this_ptr,float delta_time)

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
  CVector3f *pCVar12;
  float fVar13;
  EBloodType blood_type;
  SDamageInfo *pSVar14;
  float max_distance;
  float fVar15;
  SDamageInfo SStack_290;
  SDamageInfo SStack_254;
  float fStack_218;
  float afStack_214 [2];
  CVector3f CStack_20c;
  float fStack_200;
  float afStack_1fc [2];
  CVector3f CStack_1f4;
  CVector3f CStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  CVector3f CStack_1c4;
  float fStack_1b8;
  float afStack_1b4 [4];
  float fStack_1a4;
  CVector3f CStack_1a0;
  float fStack_194;
  float afStack_190 [2];
  CVector3f CStack_188;
  CVector3f CStack_17c;
  float fStack_170;
  float afStack_16c [4];
  float fStack_15c;
  CVector3f CStack_158;
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [4];
  float fStack_12c;
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [5];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [4];
  float fStack_6c;
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [2];
  CVector3f CStack_50;
  CMatrix3x4f *pCStack_44;
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
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_40[0] = delta_time * (this_ptr->base).speed;
  pCStack_24 = &(this_ptr->base).base.model.base;
LAB_0054bcec:
  if (0.0 < afStack_40[0]) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_24,afStack_40);
    switch(iVar4) {
    case 100:
      pCVar3 = (this_ptr->base).victim;
      iStack_20 = 1;
      if ((((pCVar3 != (CCharacter *)0x0) &&
           (EVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar7 == DEATH_STATE_ALIVE)) &&
          (pCVar3 = (this_ptr->base).victim,
          pCVar8 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
          pCVar8 == (CDemonActor *)0x0)) &&
         (pCVar3 = (this_ptr->base).victim,
         iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                           (pCVar3,(CDemonActor *)this_ptr,0), iVar4 != 0)) {
        CStack_20c.z = 0x40800000;
        CStack_20c.x = 0.0;
        CStack_20c.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,&CStack_20c,&CStack_11c);
        fStack_200 = CStack_11c.x;
        afStack_1fc[(uint)bVar10 * -2] = *(float *)((int)&CStack_11c + (uint)bVar10 * -8 + 4);
        afStack_1fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)((int)&CStack_11c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        pCVar3 = (this_ptr->base).victim;
        fVar13 = fStack_200 - (pCVar3->base).location.position.x;
        fVar15 = afStack_1fc[1] - (pCVar3->base).location.position.z;
        if ((float)_DAT_005f0411 < SQRT(fVar15 * fVar15 + fVar13 * fVar13)) {
          iStack_20 = 0;
        }
        pCVar3 = (this_ptr->base).victim;
        if (((ABS(afStack_1fc[0] - (pCVar3->base).location.position.y) <= (float)_DAT_005f0419) &&
            ((iStack_20 == 0 ||
             (iVar4 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar3,(CDemonActor *)this_ptr,0), iVar4 != 0)))) &&
           (iStack_20 != 0)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,0,1);
      break;
    case 0x65:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).releaseVictim)((CCharacter *)this_ptr);
      break;
    case 0x66:
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_254);
        SStack_254.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,5.0);
        pCVar3 = (this_ptr->base).victim;
        fStack_14 = SStack_254.damage_amount;
        (*(((pCVar3->base).vtable._uc)->_uc).processDamage)(pCVar3,&SStack_254);
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
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar4);
    }
    goto LAB_0054bcec;
  }
  fVar13 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar13);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_24);
  iVar4 = pSVar5->state_index;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if ((iVar4 == 10) || (iVar4 == 0xb)) {
      (this_ptr->base).base.collision_cylinder_radius = 0.5;
      switch(iVar4) {
      case 0:
        goto switchD_0054c14a_caseD_0;
      case 1:
        goto switchD_0054c14a_caseD_1;
      case 2:
        goto switchD_0054c14a_caseD_2;
      case 3:
        goto switchD_0054c14a_caseD_3;
      case 4:
        goto switchD_0054c14a_caseD_4;
      default:
        goto switchD_0054c14a_caseD_5;
      case 9:
        goto switchD_0054c14a_caseD_9;
      case 10:
        goto switchD_0054c14a_caseD_a;
      case 0xe:
      case 0xf:
        goto switchD_0054c14a_caseD_e;
      }
    }
    (this_ptr->base).base.collision_cylinder_radius = 2.0;
    switch(iVar4) {
    case 0:
switchD_0054c14a_caseD_0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,2,1);
        }
      }
      else {
        afStack_1d8[2] =
             (pCVar3->base).location.position.x - (this_ptr->base).base.base.location.position.x;
        afStack_1d8[3] =
             (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        fStack_1c8 = (pCVar3->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        fStack_c8 = afStack_1d8[2];
        afStack_e8[(uint)bVar10 * -2 + 9] = afStack_1d8[(uint)bVar10 * -2 + 3];
        afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        afStack_e8[2] = fStack_c8;
        afStack_e8[(uint)bVar10 * -2 + 3] = afStack_e8[(uint)bVar10 * -2 + 9];
        afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        fStack_d4 = afStack_e8[2];
        afStack_e8[(uint)bVar10 * -2 + 6] = afStack_e8[(uint)bVar10 * -2 + 3];
        afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        fStack_34 = fStack_cc * fStack_cc + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0;
        if (SQRT(fStack_34) <= _DAT_00604e54) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,2,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,3,1);
        }
      }
      break;
    case 1:
switchD_0054c14a_caseD_1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0,1);
      }
      break;
    case 2:
switchD_0054c14a_caseD_2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar13 = 0x40800000;
      pCStack_2c = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,2,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_1c = 0x40800000;
        fVar15 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_104.x = 0.0;
        CStack_104.z = fVar13;
        pCVar12 = &CStack_104;
        CStack_104.y = 0.0;
        pCVar3 = (this_ptr->base).victim;
        pCVar9 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,pCVar9,pCVar12,
                           fVar15,max_distance);
        if (-1 < iVar4) {
          pCVar3 = (this_ptr->base).victim;
          fStack_5c = (this_ptr->base).base.base.location.position.x -
                      (pCVar3->base).location.position.x;
          afStack_58[0] =
               (this_ptr->base).base.base.location.position.y - (pCVar3->base).location.position.y;
          afStack_58[1] =
               (this_ptr->base).base.base.location.position.z - (pCVar3->base).location.position.z;
          fStack_80 = fStack_5c;
          afStack_7c[(uint)bVar10 * -2] = afStack_58[(uint)bVar10 * -2];
          afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_58[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          fStack_30 = SQRT(afStack_7c[1] * afStack_7c[1] + fStack_80 * fStack_80);
          afStack_7c[0] = 0.0;
          fStack_18 = fStack_30;
          if (_DAT_00604e54 < fStack_30) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,3,1);
          }
          if ((fStack_18 <= fStack_1c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar3 = (this_ptr->base).victim;
            afStack_1b4[2] =
                 (pCVar3->base).location.position.x - (this_ptr->base).base.base.location.position.x
            ;
            afStack_1b4[3] =
                 (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            fStack_1a4 = (pCVar3->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            CStack_128.x = afStack_1b4[2];
            *(float *)((int)&CStack_128 + (uint)bVar10 * -8 + 4) =
                 afStack_1b4[(uint)bVar10 * -2 + 3];
            *(float *)((int)&CStack_128 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                      (&CStack_128,&CStack_1f4);
            fStack_218 = CStack_1f4.x;
            afStack_214[(uint)bVar10 * -2] = *(float *)((int)&CStack_1f4 + (uint)bVar10 * -8 + 4);
            afStack_214[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 *(float *)((int)&CStack_1f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  (afStack_214[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005f0409) {
              iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
              this_ptr_00 = &(this_ptr->base).base.model;
              if (iVar4 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&this_ptr_00->base,10,1);
                this_ptr->hover_timer = 5.0;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&this_ptr_00->base,4,1);
              }
              (this_ptr->base).attack_cooldown = 1.0;
            }
          }
          if ((this_ptr->base).guard_distance < fStack_18) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
      }
      break;
    case 3:
switchD_0054c14a_caseD_3:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCStack_28 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0,1);
      }
      else {
        fVar15 = 0.17453292;
        fVar13 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_188.x = 0.0;
        CStack_188.z = 0x40800000;
        pCVar12 = &CStack_188;
        CStack_188.y = 0.0;
        pCVar3 = (this_ptr->base).victim;
        pCVar9 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                  ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position,
                   pCVar9,pCVar12,fVar13,fVar15);
        pCVar3 = (this_ptr->base).victim;
        fStack_140 = (this_ptr->base).base.base.location.position.x -
                     (pCVar3->base).location.position.x;
        afStack_13c[0] =
             (this_ptr->base).base.base.location.position.y - (pCVar3->base).location.position.y;
        afStack_13c[1] =
             (this_ptr->base).base.base.location.position.z - (pCVar3->base).location.position.z;
        afStack_13c[2] = fStack_140;
        afStack_13c[(uint)bVar10 * -2 + 3] = afStack_13c[(uint)bVar10 * -2];
        afStack_13c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_13c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if (_DAT_00604e54 <=
            SQRT(fStack_12c * fStack_12c +
                 afStack_13c[2] * afStack_13c[2] + afStack_13c[3] * afStack_13c[3])) {
          iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.1);
          if (iVar4 != 0) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0xe,1);
            }
          }
        }
        else {
          iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
          if (iVar4 == 0) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,4,1);
            }
          }
          else {
            iVar4 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0xf,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_28,0xe,1);
            }
          }
        }
      }
      break;
    case 4:
switchD_0054c14a_caseD_4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_290);
      SStack_290.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar14 = &SStack_290;
      SStack_290.attacker = (CDemonActor *)this_ptr;
      SStack_290.wielder = (CDemonActor *)this_ptr;
      pCStack_44 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      fVar13 = 1.0;
      fStack_14 = SStack_290.damage_amount;
      core_xform_cpp_transformVector3x4_FUN_005b5080
                ((CVector3f *)&DAT_02c8af28,pCStack_44 + _DAT_01e82104,&CStack_bc);
      pCVar12 = &CStack_110;
      CStack_110.x = CStack_bc.x;
      *(uint *)((int)&CStack_110 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_bc + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_110 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar12,&CStack_a4);
      pCVar12 = &CStack_68;
      CStack_68.x = CStack_a4.x;
      *(uint *)((int)&CStack_68 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_a4 + (uint)bVar10 * -8 + 4);
      pCVar11 = this_ptr;
      *(uint *)((int)&CStack_68 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar11->base,pCVar12,fVar13,pSVar14);
      SStack_290.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,30.0);
      pSVar14 = &SStack_290;
      SStack_290.attacker = (CDemonActor *)this_ptr;
      fVar13 = 1.0;
      SStack_290.wielder = (CDemonActor *)this_ptr;
      fStack_14 = SStack_290.damage_amount;
      core_xform_cpp_transformVector3x4_FUN_005b5080
                ((CVector3f *)&DAT_02c8af28,pCStack_44 + _DAT_01e820fc,&CStack_1a0);
      pCVar12 = &CStack_f8;
      CStack_f8.x = CStack_1a0.x;
      *(uint *)((int)&CStack_f8 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_1a0 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_f8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_1a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar12,&CStack_8c);
      pCVar12 = &CStack_50;
      CStack_50.x = CStack_8c.x;
      *(uint *)((int)&CStack_50 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_8c + (uint)bVar10 * -8 + 4);
      pCVar11 = this_ptr;
      *(uint *)((int)&CStack_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_8c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar11->base,pCVar12,fVar13,pSVar14);
    default:
      break;
    case 9:
switchD_0054c14a_caseD_9:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (&(this_ptr->base).base.model,0,&CStack_158);
        pCVar12 = &CStack_b0;
        CStack_b0.x = CStack_158.x;
        *(uint *)((int)&CStack_b0 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_158 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_158 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar12,&CStack_14c);
        blood_type = BLOOD_TYPE_RED;
        pCVar12 = &CStack_17c;
        CStack_17c.x = CStack_14c.x;
        *(uint *)((int)&CStack_17c + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_14c + (uint)bVar10 * -8 + 4);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_17c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_14c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar12,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 10:
switchD_0054c14a_caseD_a:
      fVar13 = this_ptr->hover_timer - delta_time;
      this_ptr->hover_timer = fVar13;
      if (fVar13 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
switchD_0054c14a_caseD_e:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0,1);
      }
      else {
        fStack_1dc = (pCVar3->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        afStack_1d8[0] =
             (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        afStack_1d8[1] =
             (pCVar3->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        CStack_98.x = fStack_1dc;
        *(float *)((int)&CStack_98 + (uint)bVar10 * -8 + 4) = afStack_1d8[(uint)bVar10 * -2];
        *(float *)((int)&CStack_98 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_98,&CStack_1c4);
        fStack_170 = CStack_1c4.x;
        afStack_16c[(uint)bVar10 * -2] = *(float *)((int)&CStack_1c4 + (uint)bVar10 * -8 + 4);
        afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)((int)&CStack_1c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        (this_ptr->base).base.base.orient.vec.y = afStack_16c[0];
      }
    }
    goto switchD_0054c14a_caseD_5;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_0054bd63:
      iVar4 = 2;
    }
    else {
LAB_0054c125:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_0054bd63;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_0054c125;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0054c14a_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_1b8 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_1b4[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_1b4[1] = (this_ptr->base).base.velocity.z * delta_time;
    afStack_16c[2] = fStack_1b8;
    afStack_16c[(uint)bVar10 * -2 + 3] = afStack_1b4[(uint)bVar10 * -2];
    afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pCVar12 = &(this_ptr->base).base.position_delta;
    fStack_ec = afStack_16c[2] + pCVar12->x;
    afStack_e8[0] = afStack_16c[3] + (this_ptr->base).base.position_delta.y;
    afStack_e8[1] = fStack_15c + (this_ptr->base).base.position_delta.z;
    fStack_194 = fStack_ec;
    afStack_190[(uint)bVar10 * -2] = afStack_e8[(uint)bVar10 * -2];
    afStack_190[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_7c[2] = fStack_194 + pCVar1->x;
    afStack_7c[3] = afStack_190[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_6c = afStack_190[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_1e8.x = afStack_7c[2];
    *(float *)((int)&CStack_1e8 + (uint)bVar10 * -8 + 4) = afStack_7c[(uint)bVar10 * -2 + 3];
    *(float *)((int)&CStack_1e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar12->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_1e8);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
