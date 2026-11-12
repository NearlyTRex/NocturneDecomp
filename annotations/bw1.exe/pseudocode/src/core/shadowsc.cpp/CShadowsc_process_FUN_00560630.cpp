// Name: core_shadowsc.cpp_CShadowsc_process_FUN_00560630
// Address: 00560630
// Address Range: [[00560630, 00560fdf]]
// Convention: __cdecl
// Signature: void __cdecl core_shadowsc_cpp_CShadowsc_process_FUN_00560630(CShadowsc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadowsc_cpp_CShadowsc_process_FUN_00560630(CShadowsc *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  CPathMap *path_map;
  byte bVar7;
  float10 fVar8;
  float afStackY_1100 [982];
  CShadowsc *this_ptr_00;
  float *pfVar9;
  CMotionController *pCVar10;
  CVector3f *pCVar11;
  float fVar12;
  int iVar13;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_190;
  SDamageInfo SStack_154;
  float fStack_118;
  float afStack_114 [4];
  float fStack_104;
  CVector3f CStack_100;
  float fStack_f4;
  float afStack_f0 [4];
  float fStack_e0;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [5];
  float afStack_b8 [3];
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  uint uStack_88;
  uint uStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_40;
  float afStack_3c [2];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  CMotionController *pCStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  fStack_18 = (this_ptr->base).base.model.base.current_frame_number;
  iStack_24 = pSVar6->state_index;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  fStack_34 = (float)pSVar6->frame_count;
  core_charactr_cpp_FUN_00434790(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432f10(this_ptr,delta_time,(this_ptr->base).pool_me == 1);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_3c[0] = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  while (0.0 < afStack_3c[0]) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      (&(this_ptr->base).base.model.base,afStack_3c);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar5);
  }
  fVar12 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar12);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(iStack_24) {
    case 0:
      fVar8 = ((float10)fStack_18 * (float10)_DAT_005f18bd) / (float10)fStack_34;
      this_ptr->is_opaque = 0;
      this_ptr->render_mode = 3;
      round(this_ptr);
      this_ptr->fade_alpha = (int)ROUND(fVar8);
      core_shadowsc_cpp_FUN_005610e0();
      break;
    case 1:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          iVar13 = 1;
          iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&pCVar1->base,iVar5 + 2,iVar13);
          core_shadowsc_cpp_FUN_00560fe0(this_ptr);
        }
      }
      else {
        fStack_14 = core_motion_cpp_FUN_00525020(&pCVar1->base);
        if ((float)_DAT_005f18ad < fStack_14) {
          iVar13 = 1;
          iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&pCVar1->base,iVar5 + 2,iVar13);
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_154);
      SStack_154.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,35.0);
      SStack_154.attacker = (CDemonActor *)this_ptr;
      SStack_154.wielder = (CDemonActor *)this_ptr;
      fStack_14 = SStack_154.damage_amount;
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      pCStack_20 = &(this_ptr->base).base.model.base;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        pCVar10 = pCStack_20;
        if (iVar5 == 0) {
          iVar13 = 1;
          iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (pCStack_20,iVar5 + 1,iVar13);
        }
        else {
          fStack_14 = core_motion_cpp_FUN_00525020(pCStack_20);
          if ((float)_DAT_005f18ad < fStack_14) {
            iVar13 = 1;
            iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar10,iVar5 + 2,iVar13)
            ;
          }
        }
        break;
      }
      fStack_64 = (this_ptr->base).base.base.location.position.x -
                  (pCVar4->base).location.position.x;
      fStack_60 = (this_ptr->base).base.base.location.position.y -
                  (pCVar4->base).location.position.y;
      fStack_5c = (this_ptr->base).base.base.location.position.z -
                  (pCVar4->base).location.position.z;
      afStack_f0[2] = fStack_64;
      afStack_f0[(uint)bVar7 * -2 + 3] = afStack_9c[(uint)bVar7 * -2 + 0xf];
      pCVar10 = pCStack_20;
      afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      fStack_2c = SQRT(fStack_e0 * fStack_e0 +
                       afStack_f0[2] * afStack_f0[2] + afStack_f0[3] * afStack_f0[3]);
      fStack_1c = fStack_2c;
      if ((_DAT_00605348 < fStack_2c) && (iStack_24 == 2)) {
        if ((this_ptr->base).attack_cooldown <= (float)_DAT_005f18a5) {
          fStack_14 = core_motion_cpp_FUN_00525020(pCStack_20);
          if ((float)_DAT_005f18ad < fStack_14) {
            iVar13 = 1;
            iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
            pCVar10 = pCStack_20;
            goto LAB_00560d8f;
          }
        }
        else {
          fStack_14 = core_motion_cpp_FUN_00525020(pCStack_20);
          if ((float)_DAT_005f18ad < fStack_14) {
            iVar13 = 1;
            iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
LAB_00560d8f:
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar10,iVar5 + 2,iVar13)
            ;
          }
        }
      }
      if (((_DAT_005f18b5 < fStack_2c) && (fStack_2c < _DAT_005f18b9)) &&
         (iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,10), iVar5 == 5)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,3,1);
        (this_ptr->base).attack_cooldown = 2.5;
      }
      CStack_dc.z = 0x41000000;
      fStack_40 = 0x41000000;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      CStack_dc.x = 0.0;
      CStack_dc.y = 0.0;
      max_distance = 0.17453292;
      pCVar11 = &CStack_dc;
      fVar12 = 0.5;
      pCVar4 = (this_ptr->base).victim;
      path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,path_map,pCVar11,fVar12,max_distance);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar5 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n");
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,1,1);
      }
      else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,3,1);
        (this_ptr->base).attack_cooldown = 2.5;
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_190);
      SStack_190.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,35.0);
      SStack_190.attacker = (CDemonActor *)this_ptr;
      SStack_190.wielder = (CDemonActor *)this_ptr;
      damage_info = &SStack_190;
      fVar12 = 4.0;
      fStack_14 = SStack_190.damage_amount;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 this_ptr->bone_indices[4]);
      pfVar9 = afStack_cc + 5;
      afStack_b8[0] = (float)uStack_7c;
      afStack_cc[(uint)bVar7 * -2 + 6] = afStack_9c[(uint)bVar7 * -2 + 9];
      afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
      pCVar11 = &CStack_ac;
      CStack_ac.x = fStack_a0;
      *(float *)((int)&CStack_ac + (uint)bVar7 * -8 + 4) = afStack_9c[(uint)bVar7 * -2];
      this_ptr_00 = this_ptr;
      *(float *)((int)&CStack_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                (&this_ptr_00->base,pCVar11,fVar12,damage_info);
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                (0x01C51D80,"ScorpTailAttack");
      iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(0x02C82A60,this_ptr->sfx_handle);
      if (iVar5 == 0) {
        core_shadowsc_cpp_FUN_00561020(this_ptr);
      }
      break;
    case 6:
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"ScorpDying");
      fVar8 = ((float10)1 - (float10)fStack_18 / (float10)fStack_34) * (float10)_DAT_005f189d;
      this_ptr->render_mode = 3;
      round();
      this_ptr->fade_alpha = (int)ROUND(fVar8);
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040(&(this_ptr->base).base.model,0);
        pfVar9 = afStack_cc + 2;
        afStack_cc[2] = (float)uStack_88;
        afStack_cc[(uint)bVar7 * -2 + 3] = afStack_9c[(uint)bVar7 * -2 + 6];
        afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
        (this_ptr->base).pool_me = 1;
        this_ptr->fade_alpha = 0;
        this_ptr->render_mode = 3;
      }
    }
    goto switchD_00560f6e_caseD_5;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_00560768:
      fStack_14 = core_motion_cpp_FUN_00525020(&(this_ptr->base).base.model.base);
      if (fStack_14 <= (float)_DAT_005f18ad) goto LAB_005607a9;
      iVar13 = 1;
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
      iVar5 = iVar5 + 2;
    }
    else {
LAB_005609e5:
      fStack_14 = core_motion_cpp_FUN_00525020(&(this_ptr->base).base.model.base);
      if (fStack_14 <= (float)_DAT_005f18ad) goto LAB_005607a9;
      iVar13 = 1;
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0);
      iVar5 = iVar5 + 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar5,iVar13);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_00560768;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_005609e5;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,1,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
LAB_005607a9:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00560f6e_caseD_5:
  if (((iStack_24 != 6) && (iStack_24 != 7)) && (iStack_24 != 0)) {
    pCVar4 = (this_ptr->base).victim;
    if (pCVar4 == (CCharacter *)0x0) {
      this_ptr->render_mode = 3;
      this_ptr->fade_alpha = 0;
    }
    else {
      afStack_9c[2] =
           (this_ptr->base).base.base.location.position.x - (pCVar4->base).location.position.x;
      afStack_9c[3] =
           (this_ptr->base).base.base.location.position.y - (pCVar4->base).location.position.y;
      fStack_8c = (this_ptr->base).base.base.location.position.z -
                  (pCVar4->base).location.position.z;
      fStack_118 = afStack_9c[2];
      afStack_114[(uint)bVar7 * -2] = afStack_9c[(uint)bVar7 * -2 + 3];
      afStack_114[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      fStack_30 = SQRT(afStack_114[1] * afStack_114[1] +
                       fStack_118 * fStack_118 + afStack_114[0] * afStack_114[0]);
      fStack_28 = (this_ptr->base).guard_distance * _DAT_005f18c5;
      if (fStack_30 <= fStack_28) {
        fVar8 = ((float10)fStack_28 - (float10)fStack_30) / (float10)fStack_28;
        fVar8 = (fVar8 * (float10)_DAT_005f18c9 - fVar8 * fVar8) * (float10)_DAT_005f18cd;
        round();
        this_ptr->fade_alpha = (int)ROUND(fVar8);
        this_ptr->render_mode = 0;
        if (0xffdc < this_ptr->fade_alpha) {
          this_ptr->fade_alpha = 0xffdc;
        }
      }
      else {
        this_ptr->fade_alpha = 0;
        this_ptr->render_mode = 3;
      }
    }
  }
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_f4 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_f0[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_f0[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_58 = fStack_f4;
    afStack_9c[(uint)bVar7 * -2 + 0x12] = afStack_f0[(uint)bVar7 * -2];
    afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
         afStack_f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pCVar11 = &(this_ptr->base).base.position_delta;
    fStack_70 = fStack_58 + pCVar11->x;
    fStack_6c = fStack_54 + (this_ptr->base).base.position_delta.y;
    fStack_68 = fStack_50 + (this_ptr->base).base.position_delta.z;
    fStack_d0 = fStack_70;
    afStack_cc[(uint)bVar7 * -2] = afStack_9c[(uint)bVar7 * -2 + 0xc];
    afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_9c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_114[2] = fStack_d0 + pCVar2->x;
    afStack_114[3] = afStack_cc[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_104 = afStack_cc[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_100.x = afStack_114[2];
    *(float *)((int)&CStack_100 + (uint)bVar7 * -8 + 4) = afStack_114[(uint)bVar7 * -2 + 3];
    *(float *)((int)&CStack_100 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_114[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar11->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_100);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
