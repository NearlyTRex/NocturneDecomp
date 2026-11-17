// Name: core_sentinel.cpp_CSentinel_process_FUN_00531380
// Address: 00531380
// Address Range: [[00531380, 005320ab]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00531380(CSentinel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

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
  float afStack_1fc [4];
  float fStack_1ec;
  CVector3f CStack_1e8;
  CVector3f CStack_1dc;
  float fStack_1d0;
  float afStack_1cc [4];
  float fStack_1bc;
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [4];
  float fStack_198;
  CVector3f CStack_194;
  CVector3f CStack_188;
  CVector3f CStack_17c;
  CVector3f CStack_170;
  CVector3f CStack_164;
  CVector3f CStack_158;
  float fStack_14c;
  float afStack_148 [2];
  CVector3f CStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  float fStack_f8;
  float afStack_f4 [2];
  CVector3f CStack_ec;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [2];
  CVector3f CStack_98;
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [5];
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CMatrix3x4f *pCStack_40;
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
  afStack_3c[0] = delta_time * (this_ptr->base).speed;
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
        CStack_ec.z = 4.0f;
        CStack_ec.x = 0.0;
        CStack_ec.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,&CStack_ec,&CStack_bc);
        fStack_14c = CStack_bc.x;
        afStack_148[(uint)bVar10 * -2] = *(float *)((int)&CStack_bc + (uint)bVar10 * -8 + 4);
        afStack_148[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)((int)&CStack_bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        pCVar3 = (this_ptr->base).victim;
        fVar13 = fStack_14c - (pCVar3->base).location.position.x;
        fVar15 = afStack_148[1] - (pCVar3->base).location.position.z;
        if ((float)0.80000000000000004 < SQRT(fVar15 * fVar15 + fVar13 * fVar13)) {
          iStack_18 = 0;
        }
        pCVar3 = (this_ptr->base).victim;
        if (((ABS(afStack_148[0] - (pCVar3->base).location.position.y) <= (float)4)
            && ((iStack_18 == 0 ||
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
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_254);
        SStack_254.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,5.0);
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
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar4);
    }
    goto LAB_005313e3;
  }
  fVar13 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar13);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_1c);
  iVar4 = pSVar5->state_index;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if ((iVar4 == 10) || (iVar4 == 0xb)) {
      (this_ptr->base).base.collision_cylinder_radius = 0.5;
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
    (this_ptr->base).base.collision_cylinder_radius = 2.0;
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
        afStack_124[0] =
             (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        afStack_124[1] =
             (pCVar3->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        fStack_68 = fStack_128;
        afStack_7c[(uint)bVar10 * -2 + 6] = afStack_124[(uint)bVar10 * -2];
        afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_124[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        afStack_7c[2] = fStack_68;
        afStack_7c[(uint)bVar10 * -2 + 3] = afStack_7c[(uint)bVar10 * -2 + 6];
        afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        afStack_1fc[2] = afStack_7c[2];
        afStack_1fc[(uint)bVar10 * -2 + 3] = afStack_7c[(uint)bVar10 * -2 + 3];
        afStack_1fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        fStack_24 = fStack_1ec * fStack_1ec +
                    afStack_1fc[2] * afStack_1fc[2] + afStack_1fc[3] * afStack_1fc[3];
        if (SQRT(fStack_24) <= 12.0f) {
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
      fVar13 = 4.0f;
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
        fStack_2c = 4.0f;
        fVar15 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_188.x = 0.0;
        CStack_188.z = fVar13;
        pCVar12 = &CStack_188;
        CStack_188.y = 0.0;
        pCVar3 = (this_ptr->base).victim;
        pCVar9 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,pCVar9,pCVar12,
                           fVar15,max_distance);
        if (-1 < iVar4) {
          pCVar3 = (this_ptr->base).victim;
          fStack_a4 = (this_ptr->base).base.base.location.position.x -
                      (pCVar3->base).location.position.x;
          afStack_a0[0] =
               (this_ptr->base).base.base.location.position.y - (pCVar3->base).location.position.y;
          afStack_a0[1] =
               (this_ptr->base).base.base.location.position.z - (pCVar3->base).location.position.z;
          fStack_218 = fStack_a4;
          afStack_214[(uint)bVar10 * -2] = afStack_a0[(uint)bVar10 * -2];
          afStack_214[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          fStack_34 = SQRT(afStack_214[1] * afStack_214[1] + fStack_218 * fStack_218);
          afStack_214[0] = 0.0;
          fStack_30 = fStack_34;
          if (12.0f < fStack_34) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,3,1);
          }
          if ((fStack_30 <= fStack_2c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar3 = (this_ptr->base).victim;
            afStack_1a8[2] =
                 (pCVar3->base).location.position.x - (this_ptr->base).base.base.location.position.x
            ;
            afStack_1a8[3] =
                 (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            fStack_198 = (pCVar3->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            CStack_110.x = afStack_1a8[2];
            *(float *)((int)&CStack_110 + (uint)bVar10 * -8 + 4) =
                 afStack_1a8[(uint)bVar10 * -2 + 3];
            *(float *)((int)&CStack_110 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 afStack_1a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                      (&CStack_110,&CStack_1e8);
            fStack_e0 = CStack_1e8.x;
            afStack_dc[(uint)bVar10 * -2] = *(float *)((int)&CStack_1e8 + (uint)bVar10 * -8 + 4);
            afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 *(float *)((int)&CStack_1e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (afStack_dc[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)0.52359877558333301) {
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
        fVar15 = 0.17453292;
        fVar13 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_194.x = 0.0;
        CStack_194.z = 4.0f;
        pCVar12 = &CStack_194;
        CStack_194.y = 0.0;
        pCVar3 = (this_ptr->base).victim;
        pCVar9 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                  ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position,
                   pCVar9,pCVar12,fVar13,fVar15);
        pCVar3 = (this_ptr->base).victim;
        fStack_1ac = (this_ptr->base).base.base.location.position.x -
                     (pCVar3->base).location.position.x;
        afStack_1a8[0] =
             (this_ptr->base).base.base.location.position.y - (pCVar3->base).location.position.y;
        afStack_1a8[1] =
             (this_ptr->base).base.base.location.position.z - (pCVar3->base).location.position.z;
        fStack_1d0 = fStack_1ac;
        afStack_1cc[(uint)bVar10 * -2] = afStack_1a8[(uint)bVar10 * -2];
        afStack_1cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_1a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if (12.0f <=
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
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_290);
      SStack_290.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      pSVar14 = &SStack_290;
      SStack_290.attacker = (CDemonActor *)this_ptr;
      SStack_290.wielder = (CDemonActor *)this_ptr;
      pCStack_40 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      fVar13 = 1.0;
      fStack_14 = SStack_290.damage_amount;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_ZeroVector,pCStack_40 + g_SentinelIndices[2],&CStack_b0);
      pCVar12 = &CStack_104;
      CStack_104.x = CStack_b0.x;
      *(uint *)((int)&CStack_104 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_b0 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_104 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar12,&CStack_1b8);
      pCVar12 = &CStack_98;
      CStack_98.x = CStack_1b8.x;
      *(uint *)((int)&CStack_98 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_1b8 + (uint)bVar10 * -8 + 4);
      pCVar11 = this_ptr;
      *(uint *)((int)&CStack_98 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_1b8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar11->base,pCVar12,fVar13,pSVar14);
      SStack_290.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,30.0);
      pSVar14 = &SStack_290;
      SStack_290.attacker = (CDemonActor *)this_ptr;
      fVar13 = 1.0;
      SStack_290.wielder = (CDemonActor *)this_ptr;
      fStack_14 = SStack_290.damage_amount;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_ZeroVector,pCStack_40 + g_SentinelIndices[0],&CStack_c8);
      pCVar12 = &CStack_8c;
      CStack_8c.x = CStack_c8.x;
      *(uint *)((int)&CStack_8c + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_c8 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_8c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_c8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar12,&CStack_17c);
      pCVar12 = &CStack_134;
      CStack_134.x = CStack_17c.x;
      *(uint *)((int)&CStack_134 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_17c + (uint)bVar10 * -8 + 4);
      pCVar11 = this_ptr;
      *(uint *)((int)&CStack_134 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_17c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar11->base,pCVar12,fVar13,pSVar14);
    default:
      break;
    case 9:
switchD_00531823_caseD_9:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (&(this_ptr->base).base.model,0,&CStack_11c);
        pCVar12 = &CStack_164;
        CStack_164.x = CStack_11c.x;
        *(uint *)((int)&CStack_164 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_11c + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_164 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_11c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar12,&CStack_140);
        blood_type = BLOOD_TYPE_RED;
        pCVar12 = &CStack_170;
        CStack_170.x = CStack_140.x;
        *(uint *)((int)&CStack_170 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_140 + (uint)bVar10 * -8 + 4);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_170 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_140 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar12,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 10:
switchD_00531823_caseD_a:
      fVar13 = this_ptr->hover_timer - delta_time;
      this_ptr->hover_timer = fVar13;
      if (fVar13 < 0.0) {
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
        afStack_7c[0] =
             (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        afStack_7c[1] =
             (pCVar3->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        CStack_158.x = fStack_80;
        *(float *)((int)&CStack_158 + (uint)bVar10 * -8 + 4) = afStack_7c[(uint)bVar10 * -2];
        *(float *)((int)&CStack_158 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_158,&CStack_20c);
        fStack_5c = CStack_20c.x;
        afStack_7c[(uint)bVar10 * -2 + 9] = *(float *)((int)&CStack_20c + (uint)bVar10 * -8 + 4);
        afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             *(float *)((int)&CStack_20c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
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
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
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
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    afStack_1cc[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_1cc[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_1bc = (this_ptr->base).base.velocity.z * delta_time;
    fStack_200 = afStack_1cc[2];
    afStack_1fc[(uint)bVar10 * -2] = afStack_1cc[(uint)bVar10 * -2 + 3];
    afStack_1fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_1cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    pCVar12 = &(this_ptr->base).base.position_delta;
    fStack_f8 = fStack_200 + pCVar12->x;
    afStack_f4[0] = afStack_1fc[0] + (this_ptr->base).base.position_delta.y;
    afStack_f4[1] = afStack_1fc[1] + (this_ptr->base).base.position_delta.z;
    fStack_50 = fStack_f8;
    afStack_7c[(uint)bVar10 * -2 + 0xc] = afStack_f4[(uint)bVar10 * -2];
    afStack_7c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
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
    pCVar12->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_1dc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
