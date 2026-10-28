// Name: core_dog.cpp_CZombieDog_process_FUN_00454750
// Address: 00454750
// Address Range: [[00454750, 00454db9]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_process_FUN_00454750(CZombieDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_dog_cpp_CZombieDog_process_FUN_00454750(CZombieDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  CZombieDog *pCVar8;
  uint uVar9;
  CVector3f *pCVar10;
  CPathMap *path_map;
  float fVar11;
  SDamageInfo *damage_info;
  float fVar12;
  SDamageInfo local_e0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004259f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_20 = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < local_20) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(&pCVar1->base,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar5);
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(&pCVar1->base);
  fVar11 = (this_ptr->base).speed;
  fVar12 = (float)3.1415926535000001;
  iVar5 = pSVar6->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar12 * fVar11;
  if (iVar5 == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)2;
  }
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00428c00
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 != (CCharacter *)0x0) {
          local_74 = (pCVar4->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
          local_70 = (pCVar4->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
          local_6c = (pCVar4->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
          local_24 = local_6c * local_6c + local_74 * local_74 + local_70 * local_70;
          local_18 = (float)(((int)local_24 >> 1) + g_FastSqrtMagic);
          if (local_18 < 8.0f) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,iVar5,1);
          iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                            (g_CSound_PTR_005bed68,this_ptr->sfx_handle);
          if (iVar5 == 0) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"dog5.wav");
            this_ptr->sfx_handle = uVar9;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      pCVar1 = &(this_ptr->base).base.model;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,1,1);
        }
      }
      else {
        local_5c = (this_ptr->base).base.base.location.position.x -
                   (pCVar4->base).location.position.x;
        local_58 = (this_ptr->base).base.base.location.position.y -
                   (pCVar4->base).location.position.y;
        local_54 = (this_ptr->base).base.base.location.position.z -
                   (pCVar4->base).location.position.z;
        if ((8.0f < SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58))
           && (iVar5 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,2,1);
        }
        local_a4.z = 3.0f;
        fVar12 = 0.17453292;
        local_1c = 3.0f;
        fVar11 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_a4.x = 0.0;
        pCVar10 = &local_a4;
        local_a4.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                           fVar11,fVar12);
        pCVar1 = &(this_ptr->base).base.model;
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,0,1);
        }
        else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
          if ((float)0.5 < local_14) {
            iVar5 = 3;
          }
          else {
            iVar5 = 4;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->base,iVar5,1);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_e0);
      local_e0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      local_e0.attacker = (CDemonActor *)this_ptr;
      local_e0.wielder = (CDemonActor *)this_ptr;
      damage_info = &local_e0;
      fVar11 = 0.7;
      local_14 = local_e0.damage_amount;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                          (&local_98,&g_ZeroVector.f,
                           (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                           this_ptr->bone_indices[1]);
      pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          ((CDemonActor *)this_ptr,&local_8c,pCVar10);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                (&this_ptr->base,pCVar10,fVar11,damage_info);
      iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                        (g_CSound_PTR_005bed68,this_ptr->sfx_handle);
      if (iVar5 == 0) {
        uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"dog5.wav");
        this_ptr->sfx_handle = uVar9;
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0051d2a0
                            (&(this_ptr->base).base.model,&local_50,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_44,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_44,0);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00454db3_caseD_5;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_00454837:
      iVar5 = 1;
    }
    else {
LAB_004549fd:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_00454837;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004549fd;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00454db3_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar8 = (CZombieDog *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar8 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_68 = (this_ptr->base).base.velocity.x * delta_time;
    local_64 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar10 = &(this_ptr->base).base.position_delta;
    local_60 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_38 = local_68 + pCVar10->x;
    local_34 = local_64 + (this_ptr->base).base.position_delta.y;
    local_30 = local_60 + (this_ptr->base).base.position_delta.z;
    local_80.x = local_38 + pCVar2->x;
    local_80.y = local_34 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_80.z = local_30 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar11 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar11;
    pCVar2->x = fVar11;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_80);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
