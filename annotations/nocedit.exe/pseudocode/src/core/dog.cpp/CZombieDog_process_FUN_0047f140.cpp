// Name: core_dog.cpp_CZombieDog_process_FUN_0047f140
// Address: 0047f140
// Address Range: [[0047f140, 0047f7a9]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_process_FUN_0047f140(CZombieDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_dog_cpp_CZombieDog_process_FUN_0047f140(CZombieDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar4;
  CCharacter *pCVar5;
  float fVar6;
  float fVar7;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CZombieDog *pCVar7;
  CVector3f *pCVar8;
  uint uVar8;
  CVector3f *pCVar9;
  uint uVar9;
  CPathMap *path_map;
  int iVar10;
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
  float fVar11;
  float fVar10;
  SDamageInfo *damage_info;
  CCharacter *pCVar3;
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_20 = delta_time * (this_ptr->base).speed;
  pCVar4 = &(this_ptr->base).base.model;
  while (0.0 < local_20) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&pCVar4->motion_controller,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar10);
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar4->motion_controller);
  fVar12 = (this_ptr->base).speed;
  fVar6 = (float)3.1415926535000001;
  iVar10 = pSVar5->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar6 * fVar12;
  if (iVar10 == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)2;
  }
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar10) {
    case 0:
      iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      pCVar4 = &(this_ptr->base).base.model;
      if (iVar10 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar5 = (this_ptr->base).victim;
        if (pCVar5 != (CCharacter *)0x0) {
          fVar12 = (pCVar5->base).location.position.x -
                   (this_ptr->base).base.base.location.position.x;
          fVar6 = (pCVar5->base).location.position.y -
                  (this_ptr->base).base.base.location.position.y;
          fVar7 = (pCVar5->base).location.position.z -
                  (this_ptr->base).base.base.location.position.z;
          local_18 = (float)(((int)(fVar7 * fVar7 + fVar12 * fVar12 + fVar6 * fVar6) >> 1) +
                            INT_02d7a7b8);
          if (local_18 < 8.0f) {
            iVar10 = 1;
          }
          else {
            iVar10 = 2;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,iVar10,1);
          iVar10 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
                             (g_CSoundPtr,this_ptr->sfx_handle);
          if (iVar10 == 0) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"dog5.wav");
            this_ptr->sfx_handle = uVar9;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar4->motion_controller,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar5 = (this_ptr->base).victim;
      pCVar4 = &(this_ptr->base).base.model;
      if (pCVar5 == (CCharacter *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar10 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,1,1);
        }
      }
      else {
        fVar12 = (this_ptr->base).base.base.location.position.x - (pCVar5->base).location.position.x
        ;
        fVar6 = (this_ptr->base).base.base.location.position.y - (pCVar5->base).location.position.y;
        fVar7 = (this_ptr->base).base.base.location.position.z - (pCVar5->base).location.position.z;
        if ((8.0f < SQRT(fVar7 * fVar7 + fVar12 * fVar12 + fVar6 * fVar6)) &&
           (iVar10 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,2,1);
        }
        local_a4.z = 3.0f;
        fVar11 = 0.17453292;
        local_1c = 3.0f;
        fVar12 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_a4.x = 0.0;
        pCVar8 = &local_a4;
        local_a4.y = 0.0;
        pCVar5 = (this_ptr->base).victim;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                           ((CCharacter *)this_ptr,
                            &(((this_ptr->base).victim)->base).location.position,path_map,pCVar8,
                            fVar12,fVar11);
        pCVar4 = &(this_ptr->base).base.model;
        if (iVar10 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,0,1);
        }
        else if ((0 < iVar10) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
          if ((float)0.5 < local_14) {
            iVar10 = 3;
          }
          else {
            iVar10 = 4;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar4->motion_controller,iVar10,1);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_e0);
      local_e0.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_e0.attacker = (CDemonActor *)this_ptr;
      local_e0.wielder = (CDemonActor *)this_ptr;
      damage_info = &local_e0;
      fVar10 = 0.7;
      local_14 = local_e0.damage_amount;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_98,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          this_ptr->bone_indices[1]);
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_8c,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar8,fVar10,damage_info)
      ;
      iVar10 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,this_ptr->sfx_handle);
      if (iVar10 == 0) {
        uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"dog5.wav");
        this_ptr->sfx_handle = uVar8;
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (&(this_ptr->base).base.model,&local_50,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_44,pCVar9);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_44,0);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_0047f7a3_caseD_5;
  }
  uVar9 = (this_ptr->base).base.is_walking;
  if (uVar9 < 2) {
    if (uVar9 == 1) {
LAB_0047f227:
      iVar10 = 1;
    }
    else {
LAB_0047f3ed:
      iVar10 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar10,1);
  }
  else {
    if (uVar9 < 3) goto LAB_0047f227;
    if (uVar9 != 3) goto LAB_0047f3ed;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0047f7a3_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar10 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar10 != 0) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar7 = (CZombieDog *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar8 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_80.x = (this_ptr->base).base.velocity.x * delta_time + pCVar8->x + pCVar2->x;
    local_80.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_80.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar8->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar12 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar12;
    pCVar2->x = fVar12;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_80);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
