// Name: core_succubus.cpp_CSuccubus_process_FUN_005c6e90
// Address: 005c6e90
// MANUAL RECONSTRUCTION
// Address Range: [[005c6e90, 005c7552]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar3;
  float fVar4;
  uint uVar6;
  CCharacter *pCVar7;
  CDemonActor_vtable *pCVar9;
  float fVar10;
  float fVar11;
  CDemonMission *this_ptr_01;
  CHotDemon *actor;
  int iVar9;
  SMotion *pSVar10;
  int iVar12;
  CHotDemon *this_ptr_00;
  CHotDemon *pCVar11;
  CPathMap *path_map;
  uint uVar12;
  UOrientationVector *pUVar13;
  CDeformableModelInstance *pCVar15;
  CVector3f local_68;
  CVector3f local_44;
  float local_24;
  SMotion *local_20;
  float local_1c;
  CHotDemon *local_18;
  float local_14;
  float fVar19;
  CVector3f *pCVar17;
  float fVar18;
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar5;
  CDemonActor_vtable *pCVar6;
  CCloth *pCVar4;
  float fVar7;
  CDemonMission *pCVar8;
  
  iVar9 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
  local_24 = delta_time * (this_ptr->base).speed;
  while (0.0 < local_24) {
    iVar12 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&(this_ptr->base).base.model.motion_controller,&local_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar12);
  }
  (this_ptr->hotdemon_model).accumulated_root_motion.x = 0.0f;
  (this_ptr->hotdemon_model).accumulated_root_motion.y = 0.0f;
  (this_ptr->hotdemon_model).accumulated_root_motion.z = 0.0f;
  local_24 = delta_time * (this_ptr->base).speed;
  while (0.0 < local_24) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->hotdemon_model).motion_controller,&local_24);
  }
  fVar4 = (this_ptr->base).speed;
  fVar10 = (float)3.1415926535000001;
  pCVar1 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar10 * fVar4;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  uVar6 = pSVar10->state_index;
  iVar12 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar12 == 0) {
    if (uVar6 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar5 = (this_ptr->base).victim;
      if (pCVar5 == (CCharacter *)0x0) {
        iVar12 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar12 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        fVar4 = (this_ptr->base).base.base.location.position.x - (pCVar5->base).location.position.x;
        fVar10 = (this_ptr->base).base.base.location.position.y - (pCVar5->base).location.position.y
        ;
        fVar11 = (this_ptr->base).base.base.location.position.z - (pCVar5->base).location.position.z
        ;
        if (SQRT(fVar11 * fVar11 + fVar4 * fVar4 + fVar10 * fVar10) <
            (this_ptr->base).guard_distance) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
    }
    else if ((uVar6 < 2) || (uVar6 == 2)) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar12 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        pCVar1 = &(this_ptr->base).base.model;
        if (iVar12 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        fVar19 = 0.17453292;
        fVar18 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
        (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
        local_68.x = 0.0;
        local_68.z = 1.5f;
        pCVar17 = &local_68;
        local_68.y = 0.0;
        pCVar7 = (this_ptr->base).victim;
        path_map = (*((pCVar7->base).vtable._ub)->getPathMap)(&pCVar7->base);
        iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                           ((CCharacter *)this_ptr,
                            &(((this_ptr->base).victim)->base).location.position,path_map,pCVar17,
                            fVar18,fVar19);
        if (((-1 < iVar12) &&
            (pCVar7 = (this_ptr->base).victim,
            fVar4 = (pCVar7->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x,
            fVar10 = (pCVar7->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y,
            fVar7 = (pCVar7->base).location.position.z -
                    (this_ptr->base).base.base.location.position.z,
            SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar10 * fVar10) < 15.0f)) &&
           (this_ptr->morph_started == 0)) {
          this_ptr->morph_started = 1;
          this_ptr->morph_timer = 0.0;
          sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
          pCVar9 = (this_ptr->base).base.base.vtable._ub;
          this_ptr->ambient_sfx_cooldown = 9999.9;
          (*pCVar9->playAmbientSound)((CDemonActor *)this_ptr,"succubus-morph.wav");
        }
      }
    }
    goto LAB_005c6fd0;
  }
  uVar6 = (this_ptr->base).base.is_walking;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_005c6fa5:
      iVar12 = 1;
    }
    else {
LAB_005c731a:
      iVar12 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar12,1);
  }
  else {
    if (uVar6 < 3) goto LAB_005c6fa5;
    if (uVar6 != 3) goto LAB_005c731a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr->base.base.base.actor_name);
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
LAB_005c6fd0:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar12 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar12 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar3 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_44.x = (this_ptr->base).base.velocity.x * delta_time + pCVar3->x + pCVar2->x;
    local_44.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_44.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.x = 0.0f;
    (this_ptr->base).base.position_delta.y = 0.0f;
    (this_ptr->base).base.position_delta.z = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_44);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  local_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
  local_1c = (this_ptr->base).base.model.motion_controller.current_frame_number;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            (&(this_ptr->hotdemon_model).motion_controller,local_20->motion_name,local_1c);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            (&this_ptr->hotdemon_model);
  if ((this_ptr->morph_started != 0) &&
     (fVar4 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar4,
     4.0f < fVar4)) {
    this_ptr_00 = (CHotDemon *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                            (0xbef0,"..\\core\\succubus.cpp",0x16c);
    pCVar11 = (CHotDemon *)0x0;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      pCVar11 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(this_ptr_00);
    }
    pCVar8 = g_CDemonMissionPtr;
    local_18 = pCVar11;
    if (pCVar11 != (CHotDemon *)0x0) {
      (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(pCVar8,(CDemonActor *)pCVar11);
      (pCVar11->base).base.base.location.position.x = (this_ptr->base).base.base.location.position.x
      ;
      (pCVar11->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y
      ;
      (pCVar11->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z
      ;
      pUVar13 = &(pCVar11->base).base.base.orient;
      (pCVar11->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
      pUVar1 = &(this_ptr->base).base.base.orient;
      if (pUVar13 != pUVar1) {
        (pUVar13->vec).x = (pUVar1->vec).x;
        (pCVar11->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y;
        (pCVar11->base).base.base.orient.vec.z = (this_ptr->base).base.base.orient.vec.z;
      }
      (local_18->base).base.cloth_list.count = 1;
      strcpy((local_18->base).base.cloth_list.filenames[0],"hdwing.cth");
      (*((local_18->base).base.base.vtable._ub)->setup)((CDemonActor *)local_18);
      pCVar15 = &(local_18->base).base.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar15->motion_controller,local_20->motion_name,local_1c);
      actor = local_18;
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar15);
      (actor->base).base.base.scale.x = (this_ptr->base).base.base.scale.x;
      (actor->base).base.base.scale.y = (this_ptr->base).base.base.scale.y;
      this_ptr_01 = g_CDemonMissionPtr;
      (actor->base).base.base.scale.z = (this_ptr->base).base.base.scale.z;
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr_01,(CDemonActor *)actor);
      pCVar4 = (this_ptr->hotdemon_cloth_list).cloths[0];
      (this_ptr->hotdemon_cloth_list).cloths[0] = (local_18->base).base.cloth_list.cloths[0];
      (local_18->base).base.cloth_list.cloths[0] = pCVar4;
    }
  }
  if ((this_ptr->base).base.was_rendered_opaque != 0) {
    core_cloth_cpp_CClothList_process_FUN_0043c2d0
              (&this_ptr->hotdemon_cloth_list,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->hotdemon_model);
  }
  iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                     (g_CEventListPtr,"succubusShutUp");
  if (iVar12 == 0) {
    iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
    if ((iVar12 == 0) &&
       (fVar4 = this_ptr->ambient_sfx_cooldown - delta_time, this_ptr->ambient_sfx_cooldown = fVar4,
       fVar4 < 0.0)) {
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(5.0,10.0);
      pCVar6 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->ambient_sfx_cooldown = local_14;
      uVar12 = (*pCVar6->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      this_ptr->sfx_handle = uVar12;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  return;
}
