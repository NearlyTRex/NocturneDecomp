// Name: core_yow.cpp_FUN_005b8440
// Address: 005b8440
// Address Range: [[005b8440, 005b882a] [005b8e8b, 005b8e9f]]
// Convention: unknown
// Signature: void core_yow_cpp_FUN_005b8440(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_yow_cpp_FUN_005b8440(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  CEventList *this_ptr;
  CSound *pCVar5;
  int iVar6;
  EDeathState EVar7;
  SMotion *pSVar8;
  CEnemy *pCVar9;
  CPathMap *path_map;
  byte bVar10;
  float afStackY_1108 [997];
  float *pfVar11;
  CGore *this_ptr_00;
  CVector3f *pCVar12;
  float fVar13;
  int iVar14;
  SDamageInfo *damage_info;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo SStack_15c;
  float fStack_120;
  float afStack_11c [4];
  float fStack_10c;
  float fStack_108;
  float afStack_fc [3];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float afStack_cc [3];
  uint uStack_c0;
  uint uStack_b4;
  float fStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [2];
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(&param_1->base,param_2);
  if (iVar6 == 0) {
    return;
  }
  if ((((param_1->base).model.part_data.visibility_flags[*(int *)&param_1[1].base.base.orient] == 0)
      || ((param_1->base).model.part_data.visibility_flags
          [*(int *)((int)&param_1[1].base.base.orient + 4)] == 0)) &&
     (EVar7 = (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base),
     EVar7 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(param_1->base).model.base,0x10,1);
  }
  core_charactr_cpp_FUN_00434790(param_1,param_2);
  core_charactr_cpp_FUN_00432f10(param_1,param_2,param_1->pool_me == 1);
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  fStack_2c = param_2 * param_1->speed * param_1[1].base.base.orient_matrix.m[1].y;
  pCVar1 = &(param_1->base).model;
  while (0.0 < fStack_2c) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar1->base,&fStack_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(&param_1->base,iVar6);
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  fVar13 = param_1->speed;
  iVar6 = pSVar8->state_index;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  iStack_20 = iVar6;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * fVar13);
  if (iVar6 == 8) {
    (param_1->base).turn_speed = (param_1->base).turn_speed * (float)_DAT_005fa324;
  }
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240(&param_1->base,param_2);
  if (iVar6 == 0) {
    switch(iStack_20) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(param_1,param_2);
      pCStack_24 = &(param_1->base).model.base;
      if (iVar6 == 0) {
        (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
        pCVar4 = param_1->victim;
        if (pCVar4 != (CCharacter *)0x0) {
          afStack_e0[2] =
               (pCVar4->base).location.position.x - (param_1->base).base.location.position.x;
          afStack_e0[3] =
               (pCVar4->base).location.position.y - (param_1->base).base.location.position.y;
          fStack_d0 = (pCVar4->base).location.position.z - (param_1->base).base.location.position.z;
          fStack_120 = afStack_e0[2];
          afStack_11c[(uint)bVar10 * -2] = afStack_e0[(uint)bVar10 * -2 + 3];
          afStack_11c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          fStack_34 = afStack_11c[1] * afStack_11c[1] +
                      fStack_120 * fStack_120 + afStack_11c[0] * afStack_11c[0];
          fStack_30 = (float)(((int)fStack_34 >> 1) + _DAT_01cc804c);
          if (fStack_30 < _DAT_00608218) {
            iVar14 = 1;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
            iVar6 = iVar6 + 5;
          }
          else {
            iVar14 = 1;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
            iVar6 = iVar6 + 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_24,iVar6,iVar14);
          iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                            (0x02C82A60,(uint)param_1[1].base.base.orient_matrix.m[1].x);
          if (iVar6 == 0) {
            fVar13 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                      ((CDemonActor *)param_1,"dog-alert?.wav");
            param_1[1].base.base.orient_matrix.m[1].x = fVar13;
          }
        }
      }
      else {
        fStack_14 = core_motion_cpp_FUN_00525020(pCStack_24);
        if ((float)_DAT_005fa334 < fStack_14) {
          iVar14 = 1;
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (pCStack_24,iVar6 + 5,iVar14);
        }
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar6 = core_actor_cpp_randomChance_FUN_0040cd00(0.01);
      if ((iVar6 != 0) &&
         (iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                            (0x02C82A60,(uint)param_1[1].base.base.orient_matrix.m[1].x),
         iVar6 == 0)) {
        fVar13 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                  ((CDemonActor *)param_1,"dog-alert?.wav");
        param_1[1].base.base.orient_matrix.m[1].x = fVar13;
      }
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      pCVar4 = param_1->victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(param_1,param_2);
        pCVar1 = &(param_1->base).model;
        if (iVar6 == 0) {
          iVar14 = 1;
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,iVar6,iVar14)
          ;
        }
        else {
          fStack_14 = core_motion_cpp_FUN_00525020(&pCVar1->base);
          if ((float)_DAT_005fa334 < fStack_14) {
            iVar14 = 1;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&pCVar1->base,iVar6 + 5,iVar14);
          }
        }
        break;
      }
      fStack_84 = (param_1->base).base.location.position.x - (pCVar4->base).location.position.x;
      afStack_80[0] = (param_1->base).base.location.position.y - (pCVar4->base).location.position.y;
      afStack_80[1] = (param_1->base).base.location.position.z - (pCVar4->base).location.position.z;
      afStack_11c[2] = fStack_84;
      afStack_11c[(uint)bVar10 * -2 + 3] = afStack_80[(uint)bVar10 * -2];
      afStack_11c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      fStack_28 = SQRT(fStack_10c * fStack_10c +
                       afStack_11c[2] * afStack_11c[2] + afStack_11c[3] * afStack_11c[3]);
      fStack_18 = fStack_28;
      if ((((_DAT_00608218 < fStack_28) && (iStack_20 == 5)) || (iStack_20 == 6)) ||
         (iStack_20 == 7)) {
        pCVar1 = &(param_1->base).model;
        if (param_1->attack_cooldown <= (float)_DAT_005fa32c) {
          fStack_14 = core_motion_cpp_FUN_00525020(&pCVar1->base);
          if ((float)_DAT_005fa334 < fStack_14) {
            iVar14 = 1;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
            iVar6 = iVar6 + 8;
            goto LAB_005b8bfc;
          }
        }
        else {
          fStack_14 = core_motion_cpp_FUN_00525020(&pCVar1->base);
          if ((float)_DAT_005fa334 < fStack_14) {
            iVar14 = 1;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
            iVar6 = iVar6 + 5;
LAB_005b8bfc:
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&pCVar1->base,iVar6,iVar14);
          }
        }
      }
      if (((_DAT_005fa33c < fStack_28) && (fStack_28 < _DAT_005fa340)) &&
         (iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,10), iVar6 == 5)) {
        iVar14 = 1;
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(param_1->base).model.base,iVar6 + 9,iVar14);
        pCVar5 = 0x02C82A60;
        fVar13 = param_1[1].base.base.orient_matrix.m[1].x;
        param_1->attack_cooldown = 2.5;
        iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(pCVar5,(uint)fVar13);
        if (iVar6 == 0) {
          fVar13 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                    ((CDemonActor *)param_1,"dog-attack?.wav");
          param_1[1].base.base.orient_matrix.m[1].x = fVar13;
        }
      }
      CStack_78.z = 0x40800000;
      max_distance = 0.5235988;
      fStack_1c = 0x40800000;
      fVar13 = 1.5;
      (param_1->base).model.accumulated_root_motion.z = 0.0;
      (param_1->base).model.accumulated_root_motion.y =
           (param_1->base).model.accumulated_root_motion.z;
      (param_1->base).model.accumulated_root_motion.x =
           (param_1->base).model.accumulated_root_motion.y;
      CStack_78.x = 0.0;
      pCVar12 = &CStack_78;
      CStack_78.y = 0.0;
      path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        (&param_1->base,&(param_1->victim->base).location.position,path_map,pCVar12,
                         fVar13,max_distance);
      pCVar1 = &(param_1->base).model;
      if (iVar6 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n");
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0,1);
      }
      else if ((0 < iVar6) && (param_1->attack_cooldown <= 0.0)) {
        iVar14 = 1;
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(2,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&pCVar1->base,iVar6 + 9,iVar14);
        pCVar5 = 0x02C82A60;
        fVar13 = param_1[1].base.base.orient_matrix.m[1].x;
        param_1->attack_cooldown = 2.5;
        iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(pCVar5,(uint)fVar13);
        if (iVar6 == 0) {
          fVar13 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                    ((CDemonActor *)param_1,"dog-attack?.wav");
          param_1[1].base.base.orient_matrix.m[1].x = fVar13;
        }
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_15c);
      SStack_15c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      SStack_15c.attacker = (CDemonActor *)param_1;
      SStack_15c.wielder = (CDemonActor *)param_1;
      damage_info = &SStack_15c;
      fVar13 = 0.7;
      fStack_14 = SStack_15c.damage_amount;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (param_1->base).model.bone_transform.bone_model_matrices +
                 *(int *)(param_1[1].base.base.actor_name + 4));
      pfVar11 = afStack_11c + 8;
      afStack_fc[0] = (float)uStack_c0;
      afStack_11c[(uint)bVar10 * -2 + 9] = afStack_e0[(uint)bVar10 * -2 + 9];
      afStack_11c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
           afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_actor_cpp_FUN_00408b40(param_1,pfVar11);
      pCVar12 = &CStack_90;
      CStack_90.x = fStack_108;
      *(float *)((int)&CStack_90 + (uint)bVar10 * -8 + 4) = afStack_11c[(uint)bVar10 * -2 + 6];
      pCVar9 = param_1;
      *(float *)((int)&CStack_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_11c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(pCVar9,pCVar12,fVar13,damage_info);
      iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                        (0x02C82A60,(uint)param_1[1].base.base.orient_matrix.m[1].x);
      if (iVar6 == 0) {
        fVar13 = (float)(*((param_1->base).base.vtable._ub)->playSound)
                                  ((CDemonActor *)param_1,"dog-attack?.wav");
        param_1[1].base.base.orient_matrix.m[1].x = fVar13;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040(&(param_1->base).model,0);
        pfVar11 = afStack_e0 + 5;
        afStack_cc[0] = (float)uStack_b4;
        afStack_e0[(uint)bVar10 * -2 + 6] = afStack_e0[(uint)bVar10 * -2 + 0xc];
        afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        core_actor_cpp_FUN_00408b40(param_1,pfVar11);
        blood_type = BLOOD_TYPE_RED;
        pCVar12 = &CStack_54;
        CStack_54.x = fStack_a8;
        *(float *)((int)&CStack_54 + (uint)bVar10 * -8 + 4) = afStack_e0[(uint)bVar10 * -2 + 0xf];
        this_ptr_00 = g_CGorePtr;
        *(float *)((int)&CStack_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar12,blood_type);
        this_ptr = 0x01C51D80;
        param_1->pool_me = 1;
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70(this_ptr,"YowDead");
      }
    }
    goto LAB_005b8626;
  }
  EVar3 = (param_1->base).walk_state;
  pCVar1 = &(param_1->base).model;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
      fStack_14 = core_motion_cpp_FUN_00525020(&pCVar1->base);
      if ((float)_DAT_005fa334 < fStack_14) {
        iVar14 = 1;
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
        iVar6 = iVar6 + 5;
LAB_005b8604:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(param_1->base).model.base,iVar6,iVar14);
      }
    }
    else {
LAB_005b87f4:
      fStack_14 = core_motion_cpp_FUN_00525020(&(param_1->base).model.base);
      if ((float)_DAT_005fa334 < fStack_14) {
        iVar14 = 1;
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
        goto LAB_005b8604;
      }
    }
  }
  else if (EVar3 < WALK_STATE_NO_PATH) {
    fStack_14 = core_motion_cpp_FUN_00525020(&pCVar1->base);
    if ((float)_DAT_005fa334 < fStack_14) {
      iVar14 = 1;
      iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
      iVar6 = iVar6 + 8;
      goto LAB_005b8604;
    }
  }
  else {
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_005b87f4;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
LAB_005b8626:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120(&param_1->base);
  if (iVar6 != 0) {
    pCVar4 = param_1->victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar9 = (CEnemy *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar9 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&param_1->victim->base);
    }
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_e4 = (param_1->base).velocity.x * param_2;
    afStack_e0[0] = (param_1->base).velocity.y * param_2;
    afStack_e0[1] = (param_1->base).velocity.z * param_2;
    fStack_48 = fStack_e4;
    afStack_44[(uint)bVar10 * -2] = afStack_e0[(uint)bVar10 * -2];
    afStack_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pCVar12 = &(param_1->base).position_delta;
    fStack_9c = fStack_48 + pCVar12->x;
    fStack_98 = afStack_44[0] + (param_1->base).position_delta.y;
    fStack_94 = afStack_44[1] + (param_1->base).position_delta.z;
    fStack_6c = fStack_9c;
    afStack_68[(uint)bVar10 * -2] = afStack_e0[(uint)bVar10 * -2 + 0x12];
    afStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    pCVar2 = &(param_1->base).model.accumulated_root_motion;
    afStack_68[2] = fStack_6c + pCVar2->x;
    afStack_68[3] = afStack_68[0] + (param_1->base).model.accumulated_root_motion.y;
    fStack_58 = afStack_68[1] + (param_1->base).model.accumulated_root_motion.z;
    CStack_f0.x = afStack_68[2];
    *(float *)((int)&CStack_f0 + (uint)bVar10 * -8 + 4) = afStack_68[(uint)bVar10 * -2 + 3];
    *(float *)((int)&CStack_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar12->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar2->x = (param_1->base).model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750(&param_1->base,&CStack_f0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(&(param_1->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80(&param_1->base,param_2);
  return;
}
