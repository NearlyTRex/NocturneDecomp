// Name: core_imp.cpp_CImp_process_FUN_004d6a90
// Address: 004d6a90
// Address Range: [[004d6a90, 004d793e]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_process_FUN_004d6a90(CImp *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_CImp_process_FUN_004d6a90(CImp *this_ptr,float delta_time)

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
  float afStackY_11f4 [982];
  CGore *this_ptr_01;
  float *pfVar14;
  CVector3f *pCVar15;
  float fVar16;
  float fVar17;
  EBloodType EVar18;
  SDamageInfo *pSVar19;
  float max_distance;
  SDamageInfo SStack_284;
  SDamageInfo SStack_248;
  float fStack_20c;
  float afStack_208 [4];
  float fStack_1f8;
  uint uStack_1f4;
  float fStack_1f0;
  uint uStack_1e8;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  uint uStack_1d0;
  float fStack_1cc;
  uint uStack_1c4;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint uStack_1a8;
  float fStack_1a4;
  CVector3f CStack_1a0;
  float fStack_194;
  float afStack_190 [5];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float afStack_170 [3];
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [4];
  float fStack_144;
  CVector3f CStack_140;
  uint uStack_134;
  float afStack_130 [5];
  float fStack_11c;
  float fStack_110;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [3];
  uint uStack_ec;
  float fStack_e8;
  uint uStack_e0;
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [5];
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [4];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [3];
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float afStack_48 [2];
  float fStack_40;
  float fStack_3c;
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
  iVar5 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar5 == 0) {
    return;
  }
  if (((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0) &&
     (EVar8 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                        ((CCharacter *)this_ptr), EVar8 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,6,1);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_48[0] = delta_time * (this_ptr->base).speed;
  pCStack_1c = &(this_ptr->base).base.model.base;
LAB_004d6b03:
  if (0.0 < afStack_48[0]) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_1c,afStack_48);
    if (uVar6 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar6);
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
            fStack_50 = 0x40000000;
            afStack_c4[2] = 0.0;
            afStack_c4[3] = 0.0;
            afStack_c4[4] = 0x40000000;
            core_actor_cpp_FUN_00408b80(this_ptr,afStack_c4 + 2);
            afStack_154[2] = fStack_c8;
            afStack_154[(uint)bVar12 * -2 + 3] = afStack_c4[(uint)bVar12 * -2];
            afStack_154[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                 afStack_c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            pCVar2 = (this_ptr->base).victim;
            fVar16 = afStack_154[2] - (pCVar2->base).location.position.x;
            fVar17 = fStack_144 - (pCVar2->base).location.position.z;
            if ((float)_DAT_005c5630 < SQRT(fVar17 * fVar17 + fVar16 * fVar16)) {
              iStack_18 = 0;
            }
            if ((float)_DAT_005c5638 <
                ABS(afStack_154[3] - (((this_ptr->base).victim)->base).location.position.y))
            goto LAB_004d6b7a;
          }
          if (((iStack_18 == 0) ||
              (pCVar2 = (this_ptr->base).victim,
              iVar5 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar2,(CDemonActor *)this_ptr,0), iVar5 != 0)) && (iStack_18 != 0)
             ) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,9,1);
            goto LAB_004d6b03;
          }
        }
LAB_004d6b7a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
        goto LAB_004d6b03;
      }
      if (uVar6 == 0x29b) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
        }
        else {
          core_skeleton_cpp_FUN_0054dbd0(pCStack_1c,_DAT_01d5bc0c);
          pfVar14 = afStack_94 + 8;
          afStack_74[0] = (float)uStack_1c4;
          afStack_94[(uint)bVar12 * -2 + 9] = afStack_208[(uint)bVar12 * -2 + 0x12];
          afStack_94[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
               afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar14);
          pSVar19 = &SStack_284;
          fStack_194 = fStack_110;
          afStack_190[(uint)bVar12 * -2] = afStack_130[(uint)bVar12 * -2 + 9];
          afStack_190[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
          CStack_a4.x = fStack_194;
          *(float *)((int)&CStack_a4 + (uint)bVar12 * -8 + 4) = afStack_190[(uint)bVar12 * -2];
          *(float *)((int)&CStack_a4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               afStack_190[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(pSVar19);
          SStack_284.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,10.0);
          SStack_284.attacker = (CDemonActor *)this_ptr;
          SStack_284.wielder = (CDemonActor *)this_ptr;
          pCVar2 = (this_ptr->base).victim;
          fStack_14 = SStack_284.damage_amount;
          (*(((pCVar2->base).vtable._uc)->_uc).processDamage)(pCVar2,&SStack_284);
          fVar13 = (float10)SStack_284.damage_amount * (float10)_DAT_005c5620 *
                   (float10)_DAT_005c5628;
          EVar18 = BLOOD_TYPE_RED;
          round();
          iStack_4c = (int)ROUND(fVar13);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                    (g_CGorePtr,&CStack_a4,(CVector3f *)0x0,iStack_4c,EVar18);
          pCVar2 = (this_ptr->base).victim;
          EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
          if ((int)EVar8 < 1) {
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar2 = (this_ptr->base).victim;
            (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar6);
      }
    }
    goto LAB_004d6b03;
  }
  fVar16 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar16);
  pCStack_20 = &(this_ptr->base).base.model.base;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_20);
  iVar5 = pSVar9->state_index;
  iStack_2c = iVar5;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5);
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar2 = (this_ptr->base).victim;
        if (pCVar2 == (CCharacter *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,1,1);
          }
        }
        else if (pCVar2->grabbed_by == (CDemonActor *)0x0) {
          fStack_80 = (pCVar2->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          fStack_7c = (pCVar2->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_78 = (pCVar2->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_1b8 = fStack_80;
          afStack_208[(uint)bVar12 * -2 + 0x15] = afStack_94[(uint)bVar12 * -2 + 6];
          afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16] =
               afStack_94[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
          fStack_40 = SQRT(fStack_1b0 * fStack_1b0 +
                           fStack_1b8 * fStack_1b8 + fStack_1b4 * fStack_1b4);
          fStack_34 = fStack_40;
          if (fStack_40 < 0x40000000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_208 + 0x14);
            uStack_ec = uStack_e0;
            afStack_130[(uint)bVar12 * -2 + 0x12] = afStack_130[(uint)bVar12 * -2 + 0x15];
            afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
                 afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (fStack_e8 - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005c5618) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,4,1);
            }
          }
          if (fStack_34 < (this_ptr->base).guard_distance) {
            this_ptr_00 = &(this_ptr->base).base.model;
            if (_DAT_005e1ef8 <= fStack_34) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,2,1)
              ;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,1,1)
              ;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,3,1);
        }
      }
      else {
        iVar5 = core_actor_cpp_randomChance_FUN_0040cf40(0.1);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
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
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,1,1);
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
          CStack_1a0.z = fVar16;
          pCVar15 = &CStack_1a0;
          pCVar2 = (this_ptr->base).victim;
          CStack_1a0.x = (float)pCVar7;
          CStack_1a0.y = (float)pCVar7;
          path_map = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,pCVar15,
                             fVar17,max_distance);
          if (-1 < iVar5) {
            pCVar2 = (this_ptr->base).victim;
            afStack_94[2] =
                 (this_ptr->base).base.base.location.position.x - (pCVar2->base).location.position.x
            ;
            afStack_94[3] =
                 (this_ptr->base).base.base.location.position.y - (pCVar2->base).location.position.y
            ;
            fStack_84 = (this_ptr->base).base.base.location.position.z -
                        (pCVar2->base).location.position.z;
            fStack_1ac = afStack_94[2];
            afStack_208[(uint)bVar12 * -2 + 0x18] = afStack_94[(uint)bVar12 * -2 + 3];
            afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
                 afStack_94[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            fStack_3c = SQRT(fStack_1a4 * fStack_1a4 + fStack_1ac * fStack_1ac);
            uStack_1a8 = 0;
            fStack_28 = fStack_3c;
            if ((_DAT_005e1ef8 < fStack_3c) && (iStack_2c == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,2,1);
            }
            if (((fStack_28 < _DAT_005e1efc) &&
                (pCVar2 = (this_ptr->base).victim,
                pCVar7 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
                pCVar7 == (CDemonActor *)0x0)) &&
               ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]]
                != 0)) {
              pCVar2 = (this_ptr->base).victim;
              afStack_208[2] =
                   (pCVar2->base).location.position.x -
                   (this_ptr->base).base.base.location.position.x;
              afStack_208[3] =
                   (pCVar2->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
              fStack_1f8 = (pCVar2->base).location.position.z -
                           (this_ptr->base).base.base.location.position.z;
              fStack_b0 = afStack_208[2];
              afStack_ac[(uint)bVar12 * -2] = afStack_208[(uint)bVar12 * -2 + 3];
              afStack_ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                   afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&fStack_b0);
              uStack_1d0 = uStack_98;
              afStack_208[(uint)bVar12 * -2 + 0xf] = afStack_94[(uint)bVar12 * -2];
              afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                   afStack_94[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                    (fStack_1cc - (this_ptr->base).base.base.orient.vec.y);
              if ((ABS(fStack_14) < (float)_DAT_005c5618) &&
                 (iVar5 = core_actor_cpp_randomChance_FUN_0040cf40(0.1), iVar5 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(this_ptr->base).base.model.base,8,1);
                iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]);
                if (iVar5 == 0) {
                  uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                    ((CDemonActor *)this_ptr,"imp-jump?.wav");
                  this_ptr->sfx_handles[0] = uVar6;
                }
              }
            }
            if ((fStack_28 <= fStack_30) && ((this_ptr->base).attack_cooldown <= 0.0)) {
              pCVar2 = (this_ptr->base).victim;
              fStack_5c = (pCVar2->base).location.position.x -
                          (this_ptr->base).base.base.location.position.x;
              fStack_58 = (pCVar2->base).location.position.y -
                          (this_ptr->base).base.base.location.position.y;
              fStack_54 = (pCVar2->base).location.position.z -
                          (this_ptr->base).base.base.location.position.z;
              afStack_f8[0] = fStack_5c;
              afStack_130[(uint)bVar12 * -2 + 0xf] = afStack_94[(uint)bVar12 * -2 + 0xf];
              afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                   afStack_94[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_130 + 0xe);
              uStack_1f4 = uStack_1e8;
              afStack_208[(uint)bVar12 * -2 + 6] = afStack_208[(uint)bVar12 * -2 + 9];
              afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                   afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                    (fStack_1f0 - (this_ptr->base).base.base.orient.vec.y);
              if (ABS(fStack_14) < (float)_DAT_005c5618) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&(this_ptr->base).base.model.base,4,1);
                (this_ptr->base).attack_cooldown = 4.0;
              }
            }
            if ((this_ptr->base).guard_distance < fStack_28) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,0,1);
            }
            fVar16 = this_ptr->laugh_timer - delta_time;
            this_ptr->laugh_timer = fVar16;
            if (fVar16 < 0.0) {
              this_ptr->laugh_timer = 0.0;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]),
                 iVar5 == 0)) {
                uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"imp-laugh?.wav");
                this_ptr->sfx_handles[0] = uVar6;
                fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
                this_ptr->laugh_timer = fStack_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,3,1);
        }
      }
      break;
    case 3:
      fVar16 = this_ptr->laugh_timer - delta_time * _DAT_005c5610;
      this_ptr->laugh_timer = fVar16;
      if (fVar16 < 0.0) {
        this_ptr->laugh_timer = 0.0;
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]);
        if ((iVar5 == 0) &&
           (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[1]),
           iVar5 == 0)) {
          uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"imp-laugh?.wav");
          this_ptr->sfx_handles[0] = uVar6;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
          this_ptr->laugh_timer = fStack_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_248);
      SStack_248.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(3.0,5.0);
      pSVar19 = &SStack_248;
      SStack_248.attacker = (CDemonActor *)this_ptr;
      SStack_248.wielder = (CDemonActor *)this_ptr;
      fVar16 = 0.4;
      fStack_14 = SStack_248.damage_amount;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01d5bc14);
      pfVar14 = afStack_190 + 8;
      afStack_170[0] = afStack_190[2];
      afStack_190[(uint)bVar12 * -2 + 9] = afStack_190[(uint)bVar12 * -2 + 3];
      afStack_190[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
           afStack_190[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar14);
      pCVar15 = &CStack_164;
      CStack_164.x = fStack_11c;
      *(float *)((int)&CStack_164 + (uint)bVar12 * -8 + 4) = afStack_130[(uint)bVar12 * -2 + 6];
      pCVar11 = this_ptr;
      *(float *)((int)&CStack_164 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
      iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                        (&pCVar11->base,pCVar15,fVar16,pSVar19);
      if (iVar5 != 0) {
        iVar10 = 0;
        iVar5 = 0;
        while (iVar5 < g_CDemonSetPtr->enemy_count) {
          pCVar11 = (CImp *)core_actor_cpp_castToClassHash_FUN_0040c840
                                      (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar10),
                                       g_CImpClassInfo.name_hash);
          if (((pCVar11 == (CImp *)0x0) || (pCVar11 == this_ptr)) ||
             ((this_ptr->base).victim != (pCVar11->base).victim)) {
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
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
        core_skeleton_cpp_FUN_0054dbd0(pCStack_20,0);
        pfVar14 = afStack_130 + 2;
        afStack_130[2] = (float)uStack_134;
        afStack_130[(uint)bVar12 * -2 + 3] = afStack_130[(uint)bVar12 * -2];
        afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
             afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar14);
        EVar18 = BLOOD_TYPE_RED;
        pCVar15 = &CStack_140;
        CStack_140.x = fStack_68;
        *(float *)((int)&CStack_140 + (uint)bVar12 * -8 + 4) = afStack_94[(uint)bVar12 * -2 + 0xc];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_140 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             afStack_94[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar15,EVar18);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      pCVar2 = (this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,5,1);
      }
      else {
        EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
        if (EVar8 == DEATH_STATE_ALIVE) {
          pCVar2 = (this_ptr->base).victim;
          pCVar11 = (CImp *)pCVar2->grabbed_by;
          if (this_ptr == pCVar11) {
            fVar16 = (float)_DAT_005c5608;
            pCVar4 = (pCVar11->base).victim;
            (pCVar11->base).base.base.location.position.x =
                 (pCVar2->base).location.position.x -
                 (pCVar11->base).base.base.orient_matrix.m[0].z * fVar16;
            (pCVar11->base).base.base.location.position.z =
                 (pCVar4->base).location.position.z -
                 (pCVar11->base).base.base.orient_matrix.m[2].z * fVar16;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,5,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,5,1);
        }
      }
    }
    goto switchD_004d7938_caseD_5;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_004d6ea3:
      iVar5 = 1;
    }
    else {
LAB_004d7078:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_004d6ea3;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004d7078;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004d7938_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if ((iVar5 != 0) && (iStack_2c != 9)) {
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    fStack_20c = (this_ptr->base).base.velocity.x * delta_time;
    afStack_208[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_208[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_158 = fStack_20c;
    afStack_154[(uint)bVar12 * -2] = afStack_208[(uint)bVar12 * -2];
    afStack_154[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    pCVar15 = &(this_ptr->base).base.position_delta;
    fStack_104 = fStack_158 + pCVar15->x;
    fStack_100 = afStack_154[0] + (this_ptr->base).base.position_delta.y;
    fStack_fc = afStack_154[1] + (this_ptr->base).base.position_delta.z;
    fStack_1dc = fStack_104;
    afStack_208[(uint)bVar12 * -2 + 0xc] = afStack_130[(uint)bVar12 * -2 + 0xc];
    afStack_208[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
         afStack_130[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_17c = fStack_1dc + pCVar1->x;
    fStack_178 = fStack_1d8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_174 = fStack_1d4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_d4.x = fStack_17c;
    *(float *)((int)&CStack_d4 + (uint)bVar12 * -8 + 4) = afStack_190[(uint)bVar12 * -2 + 6];
    *(float *)((int)&CStack_d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         afStack_190[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar15->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_d4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
