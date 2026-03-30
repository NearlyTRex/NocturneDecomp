// Name: core_drone.cpp_CDrone_process_FUN_0048ec70
// Address: 0048ec70
// MANUAL RECONSTRUCTION
// Address Range: [[0048ec70, 0048f2ea]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_process_FUN_0048ec70(CDrone *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_drone_cpp_CDrone_process_FUN_0048ec70(CDrone *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_01;
  CCharacter *this_ptr_02;
  float fVar1;
  float fVar2;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CDrone *pCVar7;
  CVector3f *pCVar3;
  CVector3f *pCVar8;
  CPathMap *path_map;
  uint uVar4;
  uint uVar9;
  int iVar5;
  float fVar6;
  SDamageInfo *damage_info;
  SDamageInfo local_dc;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  CVector3f *pCVar1;
  CCharacter *pCVar2;
  CDeformableModelInstance *this_ptr_00;
  float fVar3;
  SDamageInfo *pSVar12;
  float fVar13;
  float fVar10;
  float fVar11;
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_20 = delta_time * (this_ptr->base).speed;
  this_ptr_01 = &(this_ptr->base).base.model;
  while (0.0 < local_20) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&this_ptr_01->motion_controller,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar5);
  }
  fVar6 = (this_ptr->base).speed;
  fVar3 = (float)3.1415926535000001;
  fVar2 = (float)0.5;
  fVar1 = (float)2;
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).base.model.accumulated_root_motion.z * fVar1;
  (this_ptr->base).base.turn_speed = delta_time * fVar3 * fVar6 * fVar2 * fVar1;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_01->motion_controller);
  iVar5 = pSVar5->state_index;
  local_1c = iVar5;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_01->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar6 = 3.0f;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,0,1);
        }
      }
      else {
        fVar13 = 0.17453292;
        local_18 = 3.0f;
        fVar11 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_64.x = 0.0;
        local_64.z = fVar6;
        pCVar3 = &local_64;
        local_64.y = 0.0;
        this_ptr_02 = (this_ptr->base).victim;
        path_map = (*((this_ptr_02->base).vtable._ub)->getPathMap)(&this_ptr_02->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar3,
                           fVar11,fVar13);
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr->base.base.base.actor_name);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,0,1);
        }
        else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_01->motion_controller,2,1);
          uVar4 = this_ptr->sfx_handles[2];
          (this_ptr->base).attack_cooldown = 1.0;
          iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar4);
          if (iVar5 == 0) {
            uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"drone-attack?.wav");
            this_ptr->sfx_handles[2] = uVar4;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_dc);
      local_dc.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,15.0);
      local_dc.attacker = (CDemonActor *)this_ptr;
      local_dc.wielder = (CDemonActor *)this_ptr;
      pSVar12 = &local_dc;
      fVar10 = 0.4;
      local_14 = local_dc.damage_amount;
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_88,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          this_ptr->bone_indices[0]);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_58,pCVar3);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar3,fVar10,pSVar12);
      local_dc.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(10.0,15.0);
      local_dc.attacker = (CDemonActor *)this_ptr;
      local_dc.wielder = (CDemonActor *)this_ptr;
      damage_info = &local_dc;
      fVar6 = 0.4;
      local_14 = local_dc.damage_amount;
      pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_4c,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          this_ptr->bone_indices[1]);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)this_ptr,&local_34,pCVar3);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar3,fVar6,damage_info);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_01,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_94,pCVar8);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_94,1);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      if ((this_ptr->base).base.is_on_ground != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_01->motion_controller,10,1);
      }
    }
    goto switchD_0048f284_caseD_3;
  }
  uVar4 = (this_ptr->base).base.is_walking;
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_0048ed51:
      iVar5 = 1;
    }
    else {
LAB_0048ef7a:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
  else {
    if (uVar4 < 3) goto LAB_0048ed51;
    if (uVar4 != 3) goto LAB_0048ef7a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_01->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr->base.base.base.actor_name);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0048f284_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if ((local_1c == 1) &&
     (iVar5 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,50.0), iVar5 != 0))
  {
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
    if (iVar5 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      iVar5 = 2;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar5);
      uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,"slime.wav");
      this_ptr->sfx_handles[1] = uVar9;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar7 = (CDrone *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar3 = &(this_ptr->base).base.position_delta;
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_40.x = (this_ptr->base).base.velocity.x * delta_time + pCVar3->x + pCVar1->x;
    local_40.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_40.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar3->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar6 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar6;
    pCVar1->x = fVar6;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_40);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
