// Name: core_dog.cpp_CZombieDog_process_FUN_004768a0
// Address: 004768a0
// Address Range: [[004768a0, 00476fe6]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_process_FUN_004768a0(CZombieDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dog_cpp_CZombieDog_process_FUN_004768a0(CZombieDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  CZombieDog *pCVar7;
  uint uVar8;
  CPathMap *path_map;
  byte bVar9;
  float afStackY_1104 [997];
  float *pfVar10;
  CVector3f *pCVar11;
  float fVar12;
  SDamageInfo *damage_info;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo SStack_158;
  float fStack_11c;
  float afStack_118 [5];
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  CVector3f CStack_c8;
  float fStack_bc;
  float afStack_b8 [2];
  CVector3f CStack_b0;
  float fStack_a4;
  float afStack_a0 [5];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [7];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00434790(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432f10(this_ptr,delta_time,0);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_24 = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < fStack_24) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar1->base,&fStack_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar5);
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  fVar12 = (this_ptr->base).speed;
  iVar5 = pSVar6->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iStack_18 = iVar5;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar12);
  if (iVar5 == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005da708;
  }
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(iStack_18) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      pCStack_1c = &(this_ptr->base).base.model.base;
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 != (CCharacter *)0x0) {
          fStack_80 = (pCVar4->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          fStack_7c = (pCVar4->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_78 = (pCVar4->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_104 = fStack_80;
          afStack_118[(uint)bVar9 * -2 + 6] = afStack_a0[(uint)bVar9 * -2 + 9];
          afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
               afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
          fStack_2c = fStack_fc * fStack_fc + fStack_104 * fStack_104 + fStack_100 * fStack_100;
          fStack_28 = (float)(((int)fStack_2c >> 1) + _DAT_01cc804c);
          if (fStack_28 < _DAT_005fee94) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,iVar5,1);
          iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                            (0x02C82A60,this_ptr->sfx_handle);
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"dog5.wav");
            this_ptr->sfx_handle = uVar8;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      pCStack_20 = &(this_ptr->base).base.model.base;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,1,1);
        }
      }
      else {
        fStack_d4 = (this_ptr->base).base.base.location.position.x -
                    (pCVar4->base).location.position.x;
        afStack_d0[0] =
             (this_ptr->base).base.base.location.position.y - (pCVar4->base).location.position.y;
        afStack_d0[1] =
             (this_ptr->base).base.base.location.position.z - (pCVar4->base).location.position.z;
        fStack_f8 = fStack_d4;
        afStack_118[(uint)bVar9 * -2 + 9] = afStack_d0[(uint)bVar9 * -2];
        afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if ((_DAT_005fee94 <
             SQRT(fStack_f0 * fStack_f0 + fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4)) &&
           (iStack_18 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,2,1);
        }
        CStack_ec.z = 0x40400000;
        fStack_30 = 0x40400000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_ec.x = 0.0;
        CStack_ec.y = 0.0;
        max_distance = 0.17453292;
        pCVar11 = &CStack_ec;
        fVar12 = 0.5;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar11,
                           fVar12,max_distance);
        pCVar1 = &(this_ptr->base).base.model;
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0,1);
        }
        else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
          if ((float)_DAT_005da710 < fStack_14) {
            iVar5 = 3;
          }
          else {
            iVar5 = 4;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,iVar5,1);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_158);
      SStack_158.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      SStack_158.attacker = (CDemonActor *)this_ptr;
      SStack_158.wielder = (CDemonActor *)this_ptr;
      damage_info = &SStack_158;
      fVar12 = 0.7;
      fStack_14 = SStack_158.damage_amount;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 this_ptr->bone_indices[1]);
      pfVar10 = afStack_4c + 2;
      afStack_4c[2] = afStack_118[2];
      afStack_4c[(uint)bVar9 * -2 + 3] = afStack_118[(uint)bVar9 * -2 + 3];
      afStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar10);
      pCVar11 = &CStack_b0;
      CStack_b0.x = fStack_68;
      *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4) = afStack_a0[(uint)bVar9 * -2 + 0xf];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar7->base,pCVar11,fVar12,damage_info);
      iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(0x02C82A60,this_ptr->sfx_handle);
      if (iVar5 == 0) {
        uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"dog5.wav");
        this_ptr->sfx_handle = uVar8;
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (&(this_ptr->base).base.model,0,&CStack_5c);
        pfVar10 = &fStack_bc;
        fStack_bc = CStack_5c.x;
        afStack_b8[(uint)bVar9 * -2] = *(float *)((int)&CStack_5c + (uint)bVar9 * -8 + 4);
        afStack_b8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             *(float *)((int)&CStack_5c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar10);
        blood_type = BLOOD_TYPE_RED;
        CStack_c8.x = afStack_a0[2];
        *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4) = afStack_a0[(uint)bVar9 * -2 + 3];
        *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_c8,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00476fe0_caseD_5;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_004769c2:
      iVar5 = 1;
    }
    else {
LAB_00476b9c:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_004769c2;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_00476b9c;
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
switchD_00476fe0_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar7 = (CZombieDog *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_50 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_4c[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_4c[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_8c = fStack_50;
    afStack_a0[(uint)bVar9 * -2 + 6] = afStack_4c[(uint)bVar9 * -2];
    afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_4c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pCVar11 = &(this_ptr->base).base.position_delta;
    fStack_74 = fStack_8c + pCVar11->x;
    fStack_70 = fStack_88 + (this_ptr->base).base.position_delta.y;
    fStack_6c = fStack_84 + (this_ptr->base).base.position_delta.z;
    fStack_11c = fStack_74;
    afStack_118[(uint)bVar9 * -2] = afStack_a0[(uint)bVar9 * -2 + 0xc];
    afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_a4 = fStack_11c + pCVar2->x;
    afStack_a0[0] = afStack_118[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_a0[1] = afStack_118[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_e0.x = fStack_a4;
    *(float *)((int)&CStack_e0 + (uint)bVar9 * -8 + 4) = afStack_a0[(uint)bVar9 * -2];
    *(float *)((int)&CStack_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar11->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_e0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
