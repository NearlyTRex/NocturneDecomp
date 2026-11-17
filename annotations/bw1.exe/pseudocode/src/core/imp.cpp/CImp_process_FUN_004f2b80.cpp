// Name: core_imp.cpp_CImp_process_FUN_004f2b80
// Address: 004f2b80
// Address Range: [[004f2b80, 004f3a1e]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_process_FUN_004f2b80(CImp *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

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
  double dVar13;
  float afStackY_11f0 [982];
  CGore *this_ptr_01;
  CVector3f *pCVar14;
  EBloodType EVar15;
  float fVar16;
  float fVar17;
  SDamageInfo *pSVar18;
  float max_distance;
  SDamageInfo SStack_280;
  SDamageInfo SStack_244;
  CVector3f CStack_208;
  float fStack_1fc;
  float afStack_1f8 [2];
  CVector3f CStack_1f0;
  float fStack_1e4;
  float afStack_1e0 [5];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  float fStack_1b8;
  CVector3f CStack_1b4;
  CVector3f CStack_1a8;
  float fStack_19c;
  float afStack_198 [2];
  CVector3f CStack_190;
  CVector3f CStack_184;
  float fStack_178;
  float afStack_174 [2];
  CVector3f CStack_16c;
  float fStack_160;
  float afStack_15c [4];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  CVector3f CStack_13c;
  CVector3f CStack_130;
  CVector3f CStack_124;
  CVector3f CStack_118;
  float fStack_10c;
  float afStack_108 [2];
  CVector3f CStack_100;
  float fStack_f4;
  float afStack_f0 [2];
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [5];
  CVector3f CStack_64;
  CVector3f CStack_58;
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
            CStack_100.z = 2.0f;
            CStack_100.x = 0.0;
            CStack_100.y = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                      ((CDemonActor *)this_ptr,&CStack_100,&CStack_16c);
            afStack_15c[2] = CStack_16c.x;
            afStack_15c[(uint)bVar12 * -2 + 3] =
                 *(float *)((int)&CStack_16c + (uint)bVar12 * -8 + 4);
            afStack_15c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                 *(float *)((int)&CStack_16c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            pCVar2 = (this_ptr->base).victim;
            fVar16 = afStack_15c[2] - (pCVar2->base).location.position.x;
            fVar17 = fStack_14c - (pCVar2->base).location.position.z;
            if ((float)0.80000000000000004 < SQRT(fVar17 * fVar17 + fVar16 * fVar16)) {
              iStack_18 = 0;
            }
            if ((float)4 <
                ABS(afStack_15c[3] - (((this_ptr->base).victim)->base).location.position.y))
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
                    (pCStack_1c,g_INT_ARRAY_01d06cf8[0],&CStack_130);
          pCVar14 = &CStack_d0;
          CStack_d0.x = CStack_130.x;
          *(uint *)((int)&CStack_d0 + (uint)bVar12 * -8 + 4) =
               *(uint *)((int)&CStack_130 + (uint)bVar12 * -8 + 4);
          *(uint *)((int)&CStack_d0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               *(uint *)((int)&CStack_130 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                    ((CDemonActor *)this_ptr,pCVar14,&CStack_118);
          pSVar18 = &SStack_244;
          fStack_19c = CStack_118.x;
          afStack_198[(uint)bVar12 * -2] = *(float *)((int)&CStack_118 + (uint)bVar12 * -8 + 4);
          afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               *(float *)((int)&CStack_118 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          CStack_1b4.x = fStack_19c;
          *(float *)((int)&CStack_1b4 + (uint)bVar12 * -8 + 4) = afStack_198[(uint)bVar12 * -2];
          *(float *)((int)&CStack_1b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               afStack_198[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(pSVar18);
          SStack_244.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,10.0);
          SStack_244.attacker = (CDemonActor *)this_ptr;
          SStack_244.wielder = (CDemonActor *)this_ptr;
          pCVar2 = (this_ptr->base).victim;
          fStack_14 = SStack_244.damage_amount;
          (*(((pCVar2->base).vtable._uc)->_uc).processDamage)(pCVar2,&SStack_244);
          EVar15 = 0x4f2e88;
          dVar13 = round
                             ((double)(SStack_244.damage_amount * (float)2.5 *
                                      (float)0.25));
          iStack_4c = (int)ROUND(dVar13);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                    (g_CGorePtr,&CStack_1b4,(CVector3f *)0x0,iStack_4c,EVar15);
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
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320
            ((CCharacter *)this_ptr,delta_time * fVar16);
  pCStack_20 = &(this_ptr->base).base.model;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCStack_20->base);
  iVar5 = pSVar9->state_index;
  iStack_2c = iVar5;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar5) {
    case 0:
      EVar8 = (*(((g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.vtable._uc)->_uc).
                getDeathState)(&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base);
      if (EVar8 == DEATH_STATE_ALIVE) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar2 = (this_ptr->base).victim;
        if (pCVar2 == (CCharacter *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,1,1);
          }
        }
        else if (pCVar2->grabbed_by == (CDemonActor *)0x0) {
          fStack_c4 = (pCVar2->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          afStack_c0[0] =
               (pCVar2->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_c0[1] =
               (pCVar2->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          CStack_88.x = fStack_c4;
          *(float *)((int)&CStack_88 + (uint)bVar12 * -8 + 4) = afStack_c0[(uint)bVar12 * -2];
          *(float *)((int)&CStack_88 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               afStack_c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          fStack_44 = SQRT(CStack_88.z * CStack_88.z +
                           CStack_88.x * CStack_88.x + CStack_88.y * CStack_88.y);
          fStack_34 = fStack_44;
          if (fStack_44 < 2.0f) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_88,&CStack_e8);
            fStack_f4 = CStack_e8.x;
            afStack_f0[(uint)bVar12 * -2] = *(float *)((int)&CStack_e8 + (uint)bVar12 * -8 + 4);
            afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 *(float *)((int)&CStack_e8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  (afStack_f0[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_20->base,4,1);
            }
          }
          if (fStack_34 < (this_ptr->base).guard_distance) {
            this_ptr_00 = &(this_ptr->base).base.model;
            if (10.0f <= fStack_34) {
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
      fVar16 = 2.0f;
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
          fStack_30 = 2.0f;
          max_distance = 0.17453292;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          fVar17 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          (this_ptr->base).base.model.accumulated_root_motion.x =
               (this_ptr->base).base.model.accumulated_root_motion.y;
          CStack_1a8.z = fVar16;
          pCVar14 = &CStack_1a8;
          pCVar2 = (this_ptr->base).victim;
          CStack_1a8.x = (float)pCVar7;
          CStack_1a8.y = (float)pCVar7;
          path_map = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,pCVar14,
                             fVar17,max_distance);
          if (-1 < iVar5) {
            pCVar2 = (this_ptr->base).victim;
            fStack_10c = (this_ptr->base).base.base.location.position.x -
                         (pCVar2->base).location.position.x;
            afStack_108[0] =
                 (this_ptr->base).base.base.location.position.y - (pCVar2->base).location.position.y
            ;
            afStack_108[1] =
                 (this_ptr->base).base.base.location.position.z - (pCVar2->base).location.position.z
            ;
            fStack_1c0 = fStack_10c;
            afStack_1e0[(uint)bVar12 * -2 + 9] = afStack_108[(uint)bVar12 * -2];
            afStack_1e0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
                 afStack_108[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            fStack_40 = SQRT(fStack_1b8 * fStack_1b8 + fStack_1c0 * fStack_1c0);
            uStack_1bc = 0;
            fStack_28 = fStack_40;
            if ((10.0f < fStack_40) && (iStack_2c == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,2,1);
            }
            if (((fStack_28 < 4.0f) &&
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
              CStack_b8.x = fStack_148;
              *(float *)((int)&CStack_b8 + (uint)bVar12 * -8 + 4) =
                   afStack_15c[(uint)bVar12 * -2 + 6];
              *(float *)((int)&CStack_b8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                   afStack_15c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                        (&CStack_b8,&CStack_94);
              afStack_1e0[2] = CStack_94.x;
              afStack_1e0[(uint)bVar12 * -2 + 3] =
                   *(float *)((int)&CStack_94 + (uint)bVar12 * -8 + 4);
              afStack_1e0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                   *(float *)((int)&CStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                    (afStack_1e0[3] - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS(fStack_14) < (float)0.52359877558333301) &&
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
              afStack_78[0] =
                   (pCVar2->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
              afStack_78[1] =
                   (pCVar2->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
              CStack_58.x = fStack_7c;
              *(float *)((int)&CStack_58 + (uint)bVar12 * -8 + 4) = afStack_78[(uint)bVar12 * -2];
              *(float *)((int)&CStack_58 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                   afStack_78[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                        (&CStack_58,&CStack_1f0);
              afStack_78[2] = CStack_1f0.x;
              afStack_78[(uint)bVar12 * -2 + 3] =
                   *(float *)((int)&CStack_1f0 + (uint)bVar12 * -8 + 4);
              afStack_78[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                   *(float *)((int)&CStack_1f0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                    (afStack_78[3] - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(fStack_14) < (float)0.52359877558333301) {
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
      fVar16 = this_ptr->laugh_timer - delta_time * 4.0f;
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
      pSVar18 = &SStack_280;
      SStack_280.attacker = (CDemonActor *)this_ptr;
      SStack_280.wielder = (CDemonActor *)this_ptr;
      fVar16 = 0.4;
      fStack_14 = SStack_280.damage_amount;
      core_xform_cpp_transformVector3x4_FUN_005b5080
                (&g_CVector3f_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 g_INT_ARRAY_01d06cf8[2],&CStack_190);
      pCVar14 = &CStack_184;
      CStack_184.x = CStack_190.x;
      *(uint *)((int)&CStack_184 + (uint)bVar12 * -8 + 4) =
           *(uint *)((int)&CStack_190 + (uint)bVar12 * -8 + 4);
      *(uint *)((int)&CStack_184 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           *(uint *)((int)&CStack_190 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar14,&CStack_124);
      pCVar14 = &CStack_208;
      CStack_208.x = CStack_124.x;
      *(uint *)((int)&CStack_208 + (uint)bVar12 * -8 + 4) =
           *(uint *)((int)&CStack_124 + (uint)bVar12 * -8 + 4);
      pCVar11 = this_ptr;
      *(uint *)((int)&CStack_208 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           *(uint *)((int)&CStack_124 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
      iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                        (&pCVar11->base,pCVar14,fVar16,pSVar18);
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
        pCVar14 = &CStack_13c;
        CStack_13c.x = CStack_a0.x;
        *(uint *)((int)&CStack_13c + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&CStack_a0 + (uint)bVar12 * -8 + 4);
        *(uint *)((int)&CStack_13c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             *(uint *)((int)&CStack_a0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar14,&CStack_64);
        EVar15 = BLOOD_TYPE_RED;
        pCVar14 = &CStack_ac;
        CStack_ac.x = CStack_64.x;
        *(uint *)((int)&CStack_ac + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&CStack_64 + (uint)bVar12 * -8 + 4);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_ac + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             *(uint *)((int)&CStack_64 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar14,EVar15);
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
            fVar16 = (float)0.75;
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
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700((CCharacter *)this_ptr,delta_time);
    fStack_178 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_174[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_174[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_160 = fStack_178;
    afStack_15c[(uint)bVar12 * -2] = afStack_174[(uint)bVar12 * -2];
    afStack_15c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_174[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    pCVar14 = &(this_ptr->base).base.position_delta;
    fStack_1cc = fStack_160 + pCVar14->x;
    fStack_1c8 = afStack_15c[0] + (this_ptr->base).base.position_delta.y;
    fStack_1c4 = afStack_15c[1] + (this_ptr->base).base.position_delta.z;
    fStack_1e4 = fStack_1cc;
    afStack_1e0[(uint)bVar12 * -2] = afStack_1e0[(uint)bVar12 * -2 + 6];
    afStack_1e0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_1e0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1fc = fStack_1e4 + pCVar1->x;
    afStack_1f8[0] = afStack_1e0[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_1f8[1] = afStack_1e0[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_dc.x = fStack_1fc;
    *(float *)((int)&CStack_dc + (uint)bVar12 * -8 + 4) = afStack_1f8[(uint)bVar12 * -2];
    *(float *)((int)&CStack_dc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar14->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_dc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
