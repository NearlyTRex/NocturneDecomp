// Name: core_zombiepriest.cpp_FUN_0058d960
// Address: 0058d960
// Address Range: [[0058d960, 0058e8c5]]
// Convention: unknown
// Signature: void core_zombiepriest_cpp_FUN_0058d960(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombiepriest_cpp_FUN_0058d960(CEnemy *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  uint uVar4;
  EWalkState EVar5;
  CCharacter *pCVar6;
  int iVar7;
  EDeathState EVar8;
  uint uVar9;
  SMotion *pSVar10;
  CEnemy *pCVar11;
  int iVar12;
  CPathMap *pCVar13;
  CLocation *pCVar14;
  byte bVar15;
  float afStackY_11cc [979];
  float *pfVar16;
  uint *puVar17;
  CGore *this_ptr;
  CVector3f *pCVar18;
  float fVar19;
  EBloodType blood_type;
  float fVar20;
  SDamageInfo aSStack_268 [4];
  float fStack_264;
  CEnemy *pCStack_234;
  CEnemy *pCStack_230;
  SDamageInfo aSStack_22c [4];
  uint uStack_228;
  CEnemy *pCStack_1f8;
  CEnemy *pCStack_1f4;
  CVector3f CStack_1f0;
  uint uStack_1e4;
  float afStack_1e0 [4];
  float fStack_1d0;
  uint uStack_1cc;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float afStack_1a8 [3];
  float afStack_19c [3];
  float afStack_190 [3];
  uint uStack_184;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  uint uStack_160;
  float fStack_15c;
  uint uStack_154;
  uint uStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float afStack_124 [3];
  uint uStack_118;
  float fStack_114;
  uint uStack_10c;
  float fStack_108;
  uint uStack_100;
  float afStack_f4 [3];
  CVector3f CStack_e8;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float afStack_ac [3];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  CMotionController *pCStack_24;
  float fStack_20;
  float fStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar15 = 0;
  iVar7 = (*(((param_1->base).base.vtable._ue)->_ue).randomize)(param_1);
  if (iVar7 == 0) {
    return;
  }
  if (*(int *)(&(param_1->base).model.field_0x2140 +
              *(int *)(param_1[1].base.base.create_event + 0x3c) * 4) == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_22c);
    pCStack_1f8 = param_1;
    pCStack_1f4 = param_1;
    uStack_228 = 0x4479f99a;
    (*(((param_1->base).base.vtable._uc)->_uc).processDamage)(&param_1->base,aSStack_22c);
  }
  if ((param_1->base).is_fully_burned != 0) {
    (param_1->base).burn_alpha = 0.0;
  }
  if (0 < (param_1->base).fire_count) {
    (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)(&param_1->base,1,(CVector3f *)0x0)
    ;
    (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)(&param_1->base,0,(CVector3f *)0x0)
    ;
    EVar8 = (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base);
    if (((EVar8 == DEATH_STATE_ALIVE) &&
        (iVar7 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1[1].base.base.create_event + 0x10))
        , iVar7 == 0)) &&
       (iVar7 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1[1].base.base.create_event + 8)),
       iVar7 == 0)) {
      uVar9 = (*((param_1->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"mob-scream?.wav");
      *(uint *)(param_1[1].base.base.create_event + 0x10) = uVar9;
    }
  }
  fVar19 = *(float *)(param_1[1].base.base.create_event + 0x44) - param_2;
  *(float *)(param_1[1].base.base.create_event + 0x44) = fVar19;
  if (fVar19 < 0.0) {
    pCVar6 = &param_1[1].base;
    (pCVar6->base).create_event[0x44] = '\0';
    (pCVar6->base).create_event[0x45] = '\0';
    (pCVar6->base).create_event[0x46] = '\0';
    (pCVar6->base).create_event[0x47] = '\0';
  }
  if (*(int *)(&(param_1->base).model.field_0x2140 +
              *(int *)(param_1[1].base.base.create_event + 0x20) * 4) == 0) {
    (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)(&param_1->base,1,(CVector3f *)0x0)
    ;
  }
  if (*(int *)(&(param_1->base).model.field_0x2140 +
              *(int *)(param_1[1].base.base.create_event + 0x18) * 4) == 0) {
    (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)(&param_1->base,0,(CVector3f *)0x0)
    ;
  }
  if ((*(int *)(param_1[1].base.base.actor_name + 0x18) == 0) &&
     (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,param_1[1].base.base.actor_name + 0x1c), iVar7 != 0)) {
    pCVar6 = &param_1[1].base;
    (pCVar6->base).actor_name[0x18] = '\x01';
    (pCVar6->base).actor_name[0x19] = '\0';
    (pCVar6->base).actor_name[0x1a] = '\0';
    (pCVar6->base).actor_name[0x1b] = '\0';
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  pCVar2 = &(param_1->base).model;
  afStack_48[2] = param_2 * *(float *)&param_1->field_0xcdcc;
  pCStack_18 = &pCVar2->base;
  while (0.0 < afStack_48[2]) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,afStack_48 + 2);
    if (iVar7 == 100) {
      iVar7 = *(int *)(param_1[1].base.base.actor_name + 0xc);
      if (iVar7 != 0) {
        pCVar6 = &param_1[1].base;
        (pCVar6->base).actor_name[0xc] = '\0';
        (pCVar6->base).actor_name[0xd] = '\0';
        (pCVar6->base).actor_name[0xe] = '\0';
        (pCVar6->base).actor_name[0xf] = '\0';
        core_charactr_cpp_FUN_004319d0(param_1,1,iVar7,0x3e4ccccd,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0(&param_1->base,iVar7);
    }
  }
  fVar19 = *(float *)&param_1->field_0xcdcc;
  *(float *)&(param_1->base).field_0x2524 = (param_1->base).model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * fVar19);
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_18);
  uVar4 = *(uint *)(pSVar10 + 0x24);
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660(&param_1->base,param_2);
  if (iVar7 == 0) {
    switch(uVar4) {
    case 0:
      if (*(int *)(param_1[1].base.base.actor_name + 0x18) == 0) {
        (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
        if (param_1->victim == (CCharacter *)0x0) {
          iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(param_1,param_2);
          if (iVar7 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_18,1,1);
          }
        }
        else {
          iVar7 = *(int *)(param_1[1].base.base.actor_name + 0x14);
          if (iVar7 != 0) {
            if (*(int *)(param_1[1].base.base.actor_name + 0x10) == 0) {
              fStack_c4 = (param_1->base).base.location.position.x - *(float *)(iVar7 + 0x20);
              afStack_c0[0] = (param_1->base).base.location.position.y - *(float *)(iVar7 + 0x24);
              afStack_c0[1] = (param_1->base).base.location.position.z - *(float *)(iVar7 + 0x28);
              fStack_13c = fStack_c4;
              afStack_1e0[(uint)bVar15 * -2 + 0x2a] = afStack_c0[(uint)bVar15 * -2];
              afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2b] =
                   afStack_c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              if ((float)_DAT_005d8bb0 <
                  SQRT(fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138))
              {
                pCVar6 = &param_1[1].base;
                (pCVar6->base).actor_name[0x10] = '\x01';
                (pCVar6->base).actor_name[0x11] = '\0';
                (pCVar6->base).actor_name[0x12] = '\0';
                (pCVar6->base).actor_name[0x13] = '\0';
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_18,8,1);
                break;
              }
            }
            else {
              pCVar6 = &param_1[1].base;
              (pCVar6->base).actor_name[0x10] = '\0';
              (pCVar6->base).actor_name[0x11] = '\0';
              (pCVar6->base).actor_name[0x12] = '\0';
              (pCVar6->base).actor_name[0x13] = '\0';
            }
          }
          pCVar6 = param_1->victim;
          afStack_c0[2] =
               (pCVar6->base).location.position.x - (param_1->base).base.location.position.x;
          afStack_c0[3] =
               (pCVar6->base).location.position.y - (param_1->base).base.location.position.y;
          fStack_b0 = (pCVar6->base).location.position.z - (param_1->base).base.location.position.z;
          fStack_1c0 = afStack_c0[2];
          afStack_1e0[(uint)bVar15 * -2 + 9] = afStack_c0[(uint)bVar15 * -2 + 3];
          afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          fStack_1c = SQRT(fStack_1b8 * fStack_1b8 +
                           fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc);
          pCStack_24 = &(param_1->base).model.base;
          if (fStack_1c < 0x40400000 + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_1e0 + 8);
            uStack_160 = uStack_154;
            afStack_1e0[(uint)bVar15 * -2 + 0x21] = afStack_1e0[(uint)bVar15 * -2 + 0x24];
            afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x22] =
                 afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x25];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                         (fStack_15c - (param_1->base).base.orient.vec.y);
            if ((ABS(fStack_14) < (float)_DAT_005d8ba8) && (param_1->attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,9,1);
              param_1->attack_cooldown = 2.0;
            }
          }
          else if (fStack_1c < param_1->guard_distance) {
            if (_DAT_005e7058 <= fStack_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,8,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,1,1);
            }
          }
        }
      }
      else {
        fVar19 = *(float *)(param_1[1].base.base.create_event + 0x40);
        param_1->victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        if ((float)_DAT_005d8ba0 < fVar19) {
          core_mobster_cpp_CMobster_startFiringAttack_FUN_0058f4a0((CMobster *)param_1);
        }
      }
      break;
    case 1:
    case 8:
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      pCVar2 = &(param_1->base).model;
      if (param_1->victim == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(param_1,param_2);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,1,1);
        }
      }
      else if (*(int *)(param_1[1].base.base.actor_name + 0x10) == 0) {
        iVar7 = unkafter_zombiepr_cpp_FUN_0058efb0(param_1,param_2);
        if (iVar7 == 0) {
          fStack_30 = 0x40400000 + 1.0;
          if ((*(int *)&(param_1->base).field_0x2628 != 0) ||
             (*(int *)&(param_1->base).field_0x25b0 != 0)) {
            fStack_30 = 0x41F00000;
          }
          fVar20 = 0.17453292;
          fVar19 = 0.5;
          (param_1->base).model.accumulated_root_motion.z = 0.0;
          (param_1->base).model.accumulated_root_motion.y =
               (param_1->base).model.accumulated_root_motion.z;
          (param_1->base).model.accumulated_root_motion.x =
               (param_1->base).model.accumulated_root_motion.y;
          CStack_e8.x = 0.0;
          fStack_2c = 0x40400000;
          CStack_e8.z = 0x40400000;
          pCVar18 = &CStack_e8;
          CStack_e8.y = 0.0;
          pCVar13 = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            (&param_1->base,&(param_1->victim->base).location.position,pCVar13,
                             pCVar18,fVar19,fVar20);
          if (-1 < iVar7) {
            pCVar1 = &(param_1->base).base.location;
            pCVar6 = param_1->victim;
            fStack_88 = (pCVar1->position).x - (pCVar6->base).location.position.x;
            fStack_84 = (param_1->base).base.location.position.y -
                        (pCVar6->base).location.position.y;
            fStack_80 = (param_1->base).base.location.position.z -
                        (pCVar6->base).location.position.z;
            fStack_4c = fStack_88;
            afStack_48[(uint)bVar15 * -2] = afStack_c0[(uint)bVar15 * -2 + 0xf];
            afStack_48[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
            fStack_20 = SQRT(afStack_48[1] * afStack_48[1] + fStack_4c * fStack_4c);
            pCVar14 = &(pCVar6->base).location;
            afStack_48[0] = 0.0;
            fStack_38 = fStack_20;
            if ((fStack_20 <= fStack_30) && (param_1->attack_cooldown <= 0.0)) {
              pCStack_28 = &(param_1->base).model.base;
              if (*(int *)&(param_1->base).field_0x25b0 == 0) {
                fStack_130 = (pCVar14->position).x - (pCVar1->position).x;
                fStack_12c = (pCVar6->base).location.position.y -
                             (param_1->base).base.location.position.y;
                fStack_128 = (pCVar6->base).location.position.z -
                             (param_1->base).base.location.position.z;
                afStack_124[0] = fStack_130;
                afStack_1e0[(uint)bVar15 * -2 + 0x30] = afStack_1e0[(uint)bVar15 * -2 + 0x2d];
                afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x31] =
                     afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2e];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_1e0 + 0x2f)
                ;
                uStack_118 = uStack_100;
                afStack_1e0[(uint)bVar15 * -2 + 0x33] = afStack_1e0[(uint)bVar15 * -2 + 0x39];
                afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x34] =
                     afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x3a];
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                             (fStack_114 - (param_1->base).base.orient.vec.y);
                if (ABS(fStack_14) < (float)_DAT_005d8ba8) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,9,1);
                }
              }
              else if (fStack_2c + 1.0 <= fStack_20) {
                if (((float)_DAT_005d8ba0 < *(float *)(param_1[1].base.base.create_event + 0x40)) &&
                   (*(float *)(param_1[1].base.base.create_event + 0x44) <= 0.0)) {
                  core_mobster_cpp_CMobster_startFiringAttack_FUN_0058f4a0((CMobster *)param_1);
                }
              }
              else {
                fStack_178 = (pCVar14->position).x - (pCVar1->position).x;
                fStack_174 = (pCVar6->base).location.position.y -
                             (param_1->base).base.location.position.y;
                fStack_170 = (pCVar6->base).location.position.z -
                             (param_1->base).base.location.position.z;
                afStack_1a8[0] = fStack_178;
                afStack_1e0[(uint)bVar15 * -2 + 0xf] = afStack_1e0[(uint)bVar15 * -2 + 0x1b];
                afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
                     afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_1e0 + 0xe);
                uStack_10c = uStack_64;
                afStack_1e0[(uint)bVar15 * -2 + 0x36] = afStack_c0[(uint)bVar15 * -2 + 0x18];
                afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x37] =
                     afStack_c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                             (fStack_108 - (param_1->base).base.orient.vec.y);
                if ((ABS(fStack_14) < (float)_DAT_005d8ba8) && (param_1->attack_cooldown <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,9,1);
                  param_1->attack_cooldown = 2.0;
                }
              }
              param_1->attack_cooldown = 1.0;
            }
            if (param_1->guard_distance < fStack_38) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(param_1->base).model.base,0,1);
            }
          }
        }
      }
      else {
        fVar20 = 0.17453292;
        fVar19 = 0.5;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        CStack_1f0.x = 0.0;
        CStack_1f0.z = 0x40400000;
        pCVar18 = &CStack_1f0;
        CStack_1f0.y = 0.0;
        iVar7 = *(int *)(param_1[1].base.base.actor_name + 0x14);
        pCVar13 = (CPathMap *)(**(code **)(*(int *)(iVar7 + 0x154) + 0xc4))(iVar7);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          (&param_1->base,
                           (CVector3f *)(*(int *)(param_1[1].base.base.actor_name + 0x14) + 0x20),
                           pCVar13,pCVar18,fVar19,fVar20);
        if (iVar7 < 1) {
          if (iVar7 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
            pCVar6 = &param_1[1].base;
            (pCVar6->base).actor_name[0x14] = '\0';
            (pCVar6->base).actor_name[0x15] = '\0';
            (pCVar6->base).actor_name[0x16] = '\0';
            (pCVar6->base).actor_name[0x17] = '\0';
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      if (param_1->victim != (CCharacter *)0x0) {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&(param_1->base).field_0x2628,g_CWeaponClassInfo.name_hash
                          );
        if (iVar7 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          uStack_34 = *(uint *)(iVar7 + 0x568);
          *(CEnemy **)(iVar7 + 0x304) = param_1;
          *(uint *)(iVar7 + 0x568) = 100;
          iVar12 = (**(code **)(*(int *)(iVar7 + 0x154) + 0xe8))(iVar7);
          if (iVar12 != 0) {
            (**(code **)(*(int *)(iVar7 + 0x154) + 0xe4))(iVar7);
          }
          *(uint *)(iVar7 + 0x568) = uStack_34;
        }
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&(param_1->base).field_0x25b0,g_CWeaponClassInfo.name_hash
                          );
        if (iVar7 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          afStack_48[3] = *(float *)(iVar7 + 0x568);
          *(CEnemy **)(iVar7 + 0x304) = param_1;
          *(uint *)(iVar7 + 0x568) = 100;
          iVar12 = (**(code **)(*(int *)(iVar7 + 0x154) + 0xe8))(iVar7);
          if (iVar12 == 0) {
            *(float *)(iVar7 + 0x568) = afStack_48[3];
          }
          else {
            (**(code **)(*(int *)(iVar7 + 0x154) + 0xe4))(iVar7);
            *(float *)(iVar7 + 0x568) = afStack_48[3];
          }
        }
      }
      if ((*(float *)(param_1[1].base.base.create_event + 0x40) < (float)_DAT_005d8ba0) ||
         (*(float *)(param_1[1].base.base.create_event + 0x44) <= 0.0)) {
        if (*(int *)(param_1[1].base.base.actor_name + 0x18) == 0) {
          fVar20 = 4.0;
          fVar19 = 2.0;
        }
        else {
          fVar20 = 5.0;
          fVar19 = 4.0;
        }
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(fVar19,fVar20);
        *(float *)(param_1[1].base.base.create_event + 0x44) = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(param_1->base).model.base,0,1);
      }
      break;
    case 5:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_18,0);
        pfVar16 = afStack_c0 + 5;
        afStack_ac[0] = (float)uStack_184;
        afStack_c0[(uint)bVar15 * -2 + 6] = afStack_1e0[(uint)bVar15 * -2 + 0x18];
        afStack_c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
             afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
        core_actor_cpp_FUN_00408b80(param_1,pfVar16);
        blood_type = BLOOD_TYPE_RED;
        pCVar18 = &CStack_d0;
        CStack_d0.x = fStack_94;
        *(float *)((int)&CStack_d0 + (uint)bVar15 * -8 + 4) = afStack_c0[(uint)bVar15 * -2 + 0xc];
        this_ptr = g_CGorePtr;
        *(float *)((int)&CStack_d0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             afStack_c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr,pCVar18,blood_type);
        param_1->pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_268);
      fStack_264 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      pCStack_234 = param_1;
      pCStack_230 = param_1;
      fStack_14 = fStack_264;
      if (*(int *)(&(param_1->base).model.field_0x2140 +
                  *(int *)(param_1[1].base.base.create_event + 0x18) * 4) != 0) {
        core_xform_cpp_FUN_00583260
                  (&DAT_02cfd900,&(param_1->base).model.field_0xe80 + _DAT_02d24974 * 0x30,
                   0x3ecccccd,aSStack_268);
        pfVar16 = afStack_1e0 + 0x3b;
        afStack_f4[0] = (float)uStack_148;
        afStack_1e0[(uint)bVar15 * -2 + 0x3c] = afStack_1e0[(uint)bVar15 * -2 + 0x27];
        afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x3d] =
             afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x28];
        core_actor_cpp_FUN_00408b80(param_1,pfVar16);
        puVar17 = &uStack_1e4;
        uStack_1e4 = uStack_1cc;
        afStack_1e0[(uint)bVar15 * -2] = afStack_1e0[(uint)bVar15 * -2 + 6];
        pCVar11 = param_1;
        afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        core_enemy_cpp_FUN_004893f0(pCVar11,puVar17);
      }
      fStack_264 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      fStack_14 = fStack_264;
      if (*(int *)(&(param_1->base).model.field_0x2140 +
                  *(int *)(param_1[1].base.base.create_event + 0x20) * 4) != 0) {
        core_xform_cpp_FUN_00583260
                  (&DAT_02cfd900,&(param_1->base).model.field_0xe80 + _DAT_02d24978 * 0x30,
                   0x3ecccccd,aSStack_268);
        pfVar16 = afStack_1e0 + 0x11;
        afStack_19c[0] = (float)uStack_16c;
        afStack_1e0[(uint)bVar15 * -2 + 0x12] = afStack_1e0[(uint)bVar15 * -2 + 0x1e];
        afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
             afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
        core_actor_cpp_FUN_00408b80(param_1,pfVar16);
        pfVar16 = afStack_1e0 + 0x14;
        afStack_190[0] = (float)uStack_7c;
        afStack_1e0[(uint)bVar15 * -2 + 0x15] = afStack_c0[(uint)bVar15 * -2 + 0x12];
        pCVar11 = param_1;
        afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
             afStack_c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
        core_enemy_cpp_FUN_004893f0(pCVar11,pfVar16);
      }
    }
    goto switchD_0058e8bf_caseD_3;
  }
  EVar5 = (param_1->base).walk_state;
  if (EVar5 < 2) {
    if (EVar5 == WALK_STATE_WALKING) {
LAB_0058dc3d:
      iVar7 = 1;
    }
    else {
LAB_0058de9d:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(param_1->base).model.base,iVar7,1);
  }
  else {
    if (EVar5 < WALK_STATE_NO_PATH) goto LAB_0058dc3d;
    if (EVar5 != WALK_STATE_NO_PATH) goto LAB_0058de9d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_18,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_0058e8bf_caseD_3:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0(&param_1->base);
  if (iVar7 != 0) {
    pCVar6 = param_1->victim;
    if ((pCVar6 != (CCharacter *)0x0) &&
       (pCVar11 = (CEnemy *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
       pCVar11 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->victim->base);
    }
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_70 = (param_1->base).velocity.x * param_2;
    fStack_6c = (param_1->base).velocity.y * param_2;
    fStack_68 = (param_1->base).velocity.z * param_2;
    fStack_a0 = fStack_70;
    afStack_c0[(uint)bVar15 * -2 + 9] = afStack_c0[(uint)bVar15 * -2 + 0x15];
    afStack_c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         afStack_c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
    pCVar18 = &(param_1->base).position_delta;
    fStack_dc = fStack_a0 + pCVar18->x;
    afStack_d8[0] = fStack_9c + (param_1->base).position_delta.y;
    afStack_d8[1] = fStack_98 + (param_1->base).position_delta.z;
    fStack_1b4 = fStack_dc;
    afStack_1e0[(uint)bVar15 * -2 + 0xc] = afStack_d8[(uint)bVar15 * -2];
    afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
         afStack_d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    pCVar3 = &(param_1->base).model.accumulated_root_motion;
    afStack_1e0[2] = fStack_1b4 + pCVar3->x;
    afStack_1e0[3] = fStack_1b0 + (param_1->base).model.accumulated_root_motion.y;
    fStack_1d0 = fStack_1ac + (param_1->base).model.accumulated_root_motion.z;
    CStack_58.x = afStack_1e0[2];
    *(float *)((int)&CStack_58 + (uint)bVar15 * -8 + 4) = afStack_1e0[(uint)bVar15 * -2 + 3];
    *(float *)((int)&CStack_58 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_1e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar18->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar3->x = (param_1->base).model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042c230(&param_1->base,&CStack_58);
  }
  iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&(param_1->base).field_0x2628,g_CWeaponClassInfo.name_hash);
  if (iVar7 != 0) {
    (**(code **)(*(int *)(iVar7 + 0x154) + 0xc))(iVar7,param_2);
  }
  iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&(param_1->base).field_0x25b0,g_CWeaponClassInfo.name_hash);
  if (iVar7 != 0) {
    (**(code **)(*(int *)(iVar7 + 0x154) + 0xc))(iVar7,param_2);
  }
  core_charactr_cpp_FUN_0042cd30(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(&(param_1->base).model);
  EVar8 = (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base);
  if (EVar8 == DEATH_STATE_ALIVE) {
    core_zombiepriest_cpp_FUN_0058e8d0(param_1,param_2);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350(&param_1->base,param_2);
  return;
}
