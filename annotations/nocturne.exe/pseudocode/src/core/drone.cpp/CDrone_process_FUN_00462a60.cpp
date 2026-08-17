// Name: core_drone.cpp_CDrone_process_FUN_00462a60
// Address: 00462a60
// Address Range: [[00462a60, 004630da]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_process_FUN_00462a60(CDrone *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_drone_cpp_CDrone_process_FUN_00462a60(CDrone *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  CCharacter *pCVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CDrone *pCVar7;
  CVector3f *pCVar8;
  CPathMap *path_map;
  uint uVar9;
  float fVar10;
  float fVar11;
  SDamageInfo *pSVar12;
  float fVar13;
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
  
  iVar4 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
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
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr_00->motion_controller,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar4);
  }
  fVar10 = (this_ptr->base).speed;
  fVar3 = (float)3.1415926535000001;
  fVar13 = (float)0.5;
  fVar11 = (float)2;
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).base.model.accumulated_root_motion.z * fVar11;
  (this_ptr->base).base.turn_speed = delta_time * fVar3 * fVar10 * fVar13 * fVar11;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr_00->motion_controller);
  iVar4 = pSVar5->state_index;
  local_1c = iVar4;
  iVar6 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
      if (iVar4 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr_00->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar10 = 3.0f;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,0,1);
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
        local_64.z = fVar10;
        pCVar8 = &local_64;
        local_64.y = 0.0;
        pCVar2 = (this_ptr->base).victim;
        path_map = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar8,
                           fVar11,fVar13);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,0,1);
        }
        else if ((0 < iVar4) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr_00->motion_controller,2,1);
          uVar9 = this_ptr->sfx_handles[2];
          (this_ptr->base).attack_cooldown = 1.0;
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uVar9);
          if (iVar4 == 0) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"drone-attack?.wav");
            this_ptr->sfx_handles[2] = uVar9;
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_dc);
      local_dc.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,15.0);
      local_dc.attacker = (CDemonActor *)this_ptr;
      local_dc.wielder = (CDemonActor *)this_ptr;
      pSVar12 = &local_dc;
      fVar10 = 0.4;
      local_14 = local_dc.damage_amount;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_88,(CVector3f *)&DAT_02dd1184,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          this_ptr->bone_indices[0]);
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)this_ptr,&local_58,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar10,pSVar12);
      local_dc.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,15.0);
      local_dc.attacker = (CDemonActor *)this_ptr;
      local_dc.wielder = (CDemonActor *)this_ptr;
      pSVar12 = &local_dc;
      fVar10 = 0.4;
      local_14 = local_dc.damage_amount;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_4c,(CVector3f *)&DAT_02dd1184,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          this_ptr->bone_indices[1]);
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)this_ptr,&local_34,pCVar8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&this_ptr->base,pCVar8,fVar10,pSVar12);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (this_ptr_00,&local_a0,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_94,pCVar8);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_94,1);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      if ((this_ptr->base).base.is_on_ground != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&this_ptr_00->motion_controller,10,1);
      }
    }
    goto switchD_00463074_caseD_3;
  }
  uVar9 = (this_ptr->base).base.is_walking;
  if (uVar9 < 2) {
    if (uVar9 == 1) {
LAB_00462b41:
      iVar4 = 1;
    }
    else {
LAB_00462d6a:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
  }
  else {
    if (uVar9 < 3) goto LAB_00462b41;
    if (uVar9 != 3) goto LAB_00462d6a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00463074_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if ((local_1c == 1) &&
     (iVar4 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,50.0), iVar4 != 0))
  {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      iVar4 = 2;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_14,iVar4);
      uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,"slime.wav");
      this_ptr->sfx_handles[1] = uVar9;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[1]);
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar7 = (CDrone *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (g_CDemonSet_PTR_005be368,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_7c = (this_ptr->base).base.velocity.x * delta_time;
    local_78 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar8 = &(this_ptr->base).base.position_delta;
    local_74 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_70 = local_7c + pCVar8->x;
    local_6c = local_78 + (this_ptr->base).base.position_delta.y;
    local_68 = local_74 + (this_ptr->base).base.position_delta.z;
    local_40.x = local_70 + pCVar1->x;
    local_40.y = local_6c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_40.z = local_68 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar8->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar10 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar10;
    pCVar1->x = fVar10;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_40);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
