// Name: core_yow.cpp_CYow_process_FUN_00586500
// Address: 00586500
// Address Range: [[00586500, 00586e48]]
// Convention: __cdecl
// Signature: void __cdecl core_yow_cpp_CYow_process_FUN_00586500(CYow *this_ptr,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_yow_cpp_CYow_process_FUN_00586500(CYow *this_ptr,float param_2)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  CEventList *this_ptr_00;
  int iVar5;
  SMotion *pSVar6;
  CYow *pCVar7;
  uint uVar8;
  CPathMap *path_map;
  byte bVar9;
  float afStackY_1108 [997];
  float *pfVar10;
  CGore *this_ptr_01;
  CVector3f *pCVar11;
  float fVar12;
  int iVar13;
  SDamageInfo *damage_info;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo SStack_15c;
  float fStack_120;
  float afStack_11c [5];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [2];
  CVector3f CStack_90;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [2];
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar5 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar5 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(this_ptr,param_2);
  core_charactr_cpp_FUN_00432330(this_ptr,param_2,(this_ptr->base).pool_me == 1);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_34 = param_2 * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < fStack_34) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar1->base,afStack_5c + 10);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar5);
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar1->base);
  fVar12 = (this_ptr->base).speed;
  iVar5 = pSVar6->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iStack_20 = iVar5;
  core_charactr_cpp_FUN_00434850(this_ptr,param_2 * fVar12);
  if (iVar5 == 8) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005d82cf;
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660((CCharacter *)this_ptr,param_2);
  if (iVar5 == 0) {
    switch(iStack_20) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,param_2);
      pCStack_24 = &(this_ptr->base).base.model.base;
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,param_2);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 != (CCharacter *)0x0) {
          fStack_9c = (pCVar4->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          afStack_98[0] =
               (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_98[1] =
               (pCVar4->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          fStack_e4 = fStack_9c;
          afStack_11c[(uint)bVar9 * -2 + 0xf] = afStack_98[(uint)bVar9 * -2];
          afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
               afStack_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          fStack_2c = fStack_dc * fStack_dc + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0;
          fStack_30 = (float)(((int)fStack_2c >> 1) + _DAT_01d1a0a4);
          if (fStack_30 < _DAT_005e65e8) {
            iVar13 = 1;
            iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
            iVar5 = iVar5 + 5;
          }
          else {
            iVar13 = 1;
            iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            iVar5 = iVar5 + 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,iVar5,iVar13);
          iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                            (0x02CF5680,this_ptr->sfx_handle);
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"dog5.wav");
            this_ptr->sfx_handle = uVar8;
          }
        }
      }
      else {
        fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_24);
        if ((float)_DAT_005d82df < fStack_14) {
          iVar13 = 1;
          iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (pCStack_24,iVar5 + 5,iVar13);
        }
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,param_2);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,param_2);
        pCVar1 = &(this_ptr->base).base.model;
        if (iVar5 == 0) {
          iVar13 = 1;
          iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,iVar5,iVar13)
          ;
        }
        else {
          fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar1->base);
          if ((float)_DAT_005d82df < fStack_14) {
            iVar13 = 1;
            iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&pCVar1->base,iVar5 + 5,iVar13);
          }
        }
        break;
      }
      fStack_fc = (this_ptr->base).base.base.location.position.x -
                  (pCVar4->base).location.position.x;
      fStack_f8 = (this_ptr->base).base.base.location.position.y -
                  (pCVar4->base).location.position.y;
      fStack_f4 = (this_ptr->base).base.base.location.position.z -
                  (pCVar4->base).location.position.z;
      fStack_120 = fStack_fc;
      afStack_11c[(uint)bVar9 * -2] = afStack_11c[(uint)bVar9 * -2 + 9];
      afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
      fStack_28 = SQRT(afStack_11c[1] * afStack_11c[1] +
                       fStack_120 * fStack_120 + afStack_11c[0] * afStack_11c[0]);
      fStack_18 = fStack_28;
      if ((((_DAT_005e65e8 < fStack_28) && (iStack_20 == 5)) || (iStack_20 == 6)) ||
         (iStack_20 == 7)) {
        pCVar1 = &(this_ptr->base).base.model;
        if ((this_ptr->base).attack_cooldown <= (float)_DAT_005d82d7) {
          fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar1->base);
          if ((float)_DAT_005d82df < fStack_14) {
            iVar13 = 1;
            iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            iVar5 = iVar5 + 8;
            goto LAB_00586c35;
          }
        }
        else {
          fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar1->base);
          if ((float)_DAT_005d82df < fStack_14) {
            iVar13 = 1;
            iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
            iVar5 = iVar5 + 5;
LAB_00586c35:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&pCVar1->base,iVar5,iVar13);
          }
        }
      }
      if (((_DAT_005d82e7 < fStack_28) && (fStack_28 < _DAT_005d82eb)) &&
         (iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,10), iVar5 == 5)) {
        iVar13 = 1;
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,iVar5 + 9,iVar13);
        (this_ptr->base).attack_cooldown = 2.5;
      }
      CStack_90.z = 0x40800000;
      max_distance = 0.5235988;
      fStack_1c = 0x40800000;
      fVar12 = 1.5;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      CStack_90.x = 0.0;
      pCVar11 = &CStack_90;
      CStack_90.y = 0.0;
      pCVar4 = (this_ptr->base).victim;
      path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,path_map,pCVar11,fVar12,max_distance);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar5 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441ff0
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n");
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0,1);
      }
      else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
        iVar13 = 1;
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(2,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&pCVar1->base,iVar5 + 9,iVar13);
        (this_ptr->base).attack_cooldown = 2.5;
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_15c);
      SStack_15c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      SStack_15c.attacker = (CDemonActor *)this_ptr;
      SStack_15c.wielder = (CDemonActor *)this_ptr;
      damage_info = &SStack_15c;
      fVar12 = 0.7;
      fStack_14 = SStack_15c.damage_amount;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 this_ptr->bone_indices[1]);
      pfVar10 = afStack_11c + 2;
      afStack_11c[2] = (float)uStack_f0;
      afStack_11c[(uint)bVar9 * -2 + 3] = afStack_11c[(uint)bVar9 * -2 + 0xc];
      afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar10);
      pCVar11 = &CStack_6c;
      CStack_6c.x = fStack_d8;
      *(float *)((int)&CStack_6c + (uint)bVar9 * -8 + 4) = afStack_11c[(uint)bVar9 * -2 + 0x12];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_6c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar7->base,pCVar11,fVar12,damage_info);
      iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
      if (iVar5 == 0) {
        uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"dog5.wav");
        this_ptr->sfx_handle = uVar8;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (&(this_ptr->base).base.model,0,&CStack_c0);
        pfVar10 = &fStack_78;
        fStack_78 = CStack_c0.x;
        afStack_74[(uint)bVar9 * -2] = *(float *)((int)&CStack_c0 + (uint)bVar9 * -8 + 4);
        afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             *(float *)((int)&CStack_c0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar10);
        blood_type = BLOOD_TYPE_RED;
        pCVar11 = &CStack_a8;
        CStack_a8.x = fStack_b4;
        *(float *)((int)&CStack_a8 + (uint)bVar9 * -8 + 4) = afStack_b0[(uint)bVar9 * -2];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_a8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar11,blood_type);
        this_ptr_00 = 0x01C6E360;
        (this_ptr->base).pool_me = 1;
        core_event_cpp_CEventList_executeCommands_FUN_0048c150(this_ptr_00,"YowDead");
      }
    }
    goto switchD_00586e42_caseD_4;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  pCVar1 = &(this_ptr->base).base.model;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
      fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar1->base);
      if ((float)_DAT_005d82df < fStack_14) {
        iVar13 = 1;
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        iVar5 = iVar5 + 5;
LAB_00586670:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,iVar5,iVar13);
      }
    }
    else {
LAB_0058685d:
      fStack_14 = core_motion_cpp_FUN_004fc930(&(this_ptr->base).base.model.base);
      if ((float)_DAT_005d82df < fStack_14) {
        iVar13 = 1;
        iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
        goto LAB_00586670;
      }
    }
  }
  else if (EVar3 < WALK_STATE_NO_PATH) {
    fStack_14 = core_motion_cpp_FUN_004fc930(&pCVar1->base);
    if ((float)_DAT_005d82df < fStack_14) {
      iVar13 = 1;
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
      iVar5 = iVar5 + 8;
      goto LAB_00586670;
    }
  }
  else {
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_0058685d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00586e42_caseD_4:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - param_2;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar7 = (CYow *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042c1e0(this_ptr,param_2);
    fStack_108 = (this_ptr->base).base.velocity.x * param_2;
    fStack_104 = (this_ptr->base).base.velocity.y * param_2;
    fStack_100 = (this_ptr->base).base.velocity.z * param_2;
    fStack_cc = fStack_108;
    afStack_11c[(uint)bVar9 * -2 + 0x15] = afStack_11c[(uint)bVar9 * -2 + 6];
    afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
         afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    pCVar11 = &(this_ptr->base).base.position_delta;
    fStack_48 = fStack_cc + pCVar11->x;
    fStack_44 = fStack_c8 + (this_ptr->base).base.position_delta.y;
    fStack_40 = fStack_c4 + (this_ptr->base).base.position_delta.z;
    fStack_60 = fStack_48;
    afStack_5c[(uint)bVar9 * -2] = afStack_5c[(uint)bVar9 * -2 + 6];
    afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_5c[2] = fStack_60 + pCVar2->x;
    afStack_5c[3] = afStack_5c[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_4c = afStack_5c[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_84.x = afStack_5c[2];
    *(float *)((int)&CStack_84 + (uint)bVar9 * -8 + 4) = afStack_5c[(uint)bVar9 * -2 + 3];
    *(float *)((int)&CStack_84 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar11->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar12 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar12;
    pCVar2->x = fVar12;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_84);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,param_2);
  return;
}
