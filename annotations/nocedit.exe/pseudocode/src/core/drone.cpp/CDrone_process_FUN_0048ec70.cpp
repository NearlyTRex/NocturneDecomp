// Name: core_drone.cpp_CDrone_process_FUN_0048ec70
// Address: 0048ec70
// Address Range: [[0048ec70, 0048f2ea]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_process_FUN_0048ec70(CDrone *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_drone_cpp_CDrone_process_FUN_0048ec70(CDrone *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  float fVar2;
  CCharacter *pCVar3;
  float fVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  CDrone *pCVar8;
  CVector3f *pCVar9;
  CPathMap *path_map;
  uint uVar10;
  float fVar11;
  float fVar12;
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
  
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_20 = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < local_20) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&this_ptr_00->motion_controller,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar5);
  }
  fVar2 = (this_ptr->base).speed;
  fVar4 = (float)3.1415926535000001;
  fVar12 = (float)0.5;
  fVar11 = (float)2;
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).base.model.accumulated_root_motion.z * fVar11;
  (this_ptr->base).base.turn_speed = delta_time * fVar4 * fVar2 * fVar12 * fVar11;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  iVar5 = pSVar6->state_index;
  local_1c = iVar5;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar2 = 3.0f;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
      }
      else {
        fVar12 = 0.17453292;
        local_18 = 3.0f;
        fVar11 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_64.x = 0.0;
        local_64.z = fVar2;
        pCVar9 = &local_64;
        local_64.y = 0.0;
        pCVar3 = (this_ptr->base).victim;
        path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar9,
                           fVar11,fVar12);
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
        else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,2,1);
          uVar10 = this_ptr->sfx_handles[2];
          (this_ptr->base).attack_cooldown = 1.0;
          iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar10);
          if (iVar5 == 0) {
            uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"drone-attack?.wav");
            this_ptr->sfx_handles[2] = uVar10;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_dc);
      local_dc.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
      local_dc.attacker = (CDemonActor *)this_ptr;
      local_dc.wielder = (CDemonActor *)this_ptr;
      local_14 = local_dc.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_88,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          this_ptr->bone_indices[0]);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_58,pCVar9);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      local_dc.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
      local_dc.attacker = (CDemonActor *)this_ptr;
      local_dc.wielder = (CDemonActor *)this_ptr;
      local_14 = local_dc.damage_amount;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_4c,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          this_ptr->bone_indices[1]);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_34,pCVar9);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_94,pCVar9);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_94,1);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      if ((this_ptr->base).base.is_on_ground != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,10,1);
      }
    }
    goto switchD_0048f284_caseD_3;
  }
  uVar10 = (this_ptr->base).base.is_walking;
  if (uVar10 < 2) {
    if (uVar10 == 1) {
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
    if (uVar10 < 3) goto LAB_0048ed51;
    if (uVar10 != 3) goto LAB_0048ef7a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
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
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar5);
      uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,"slime.wav");
      this_ptr->sfx_handles[1] = uVar10;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar8 = (CDrone *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar8 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_7c = (this_ptr->base).base.velocity.x * delta_time;
    local_78 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar9 = &(this_ptr->base).base.position_delta;
    local_74 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_70 = local_7c + pCVar9->x;
    local_6c = local_78 + (this_ptr->base).base.position_delta.y;
    local_68 = local_74 + (this_ptr->base).base.position_delta.z;
    local_40.x = local_70 + pCVar1->x;
    local_40.y = local_6c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_40.z = local_68 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar9->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar2 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar2;
    pCVar1->x = fVar2;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_40);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
