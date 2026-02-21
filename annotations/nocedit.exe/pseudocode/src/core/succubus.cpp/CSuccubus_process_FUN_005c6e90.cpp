// Name: core_succubus.cpp_CSuccubus_process_FUN_005c6e90
// Address: 005c6e90
// Address Range: [[005c6e90, 005c7552]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c7515) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  char cVar3;
  CCloth *pCVar4;
  CDemonActor *pCVar5;
  CDemonActor_vtable *pCVar6;
  CDemonMission *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  CHotDemon *this_ptr_00;
  CHotDemon *pCVar10;
  CPathMap *path_map;
  uint uVar11;
  UOrientationVector *pUVar12;
  char *pcVar13;
  CDeformableModelInstance *pCVar14;
  char (*pacVar15) [40];
  CVector3f *pCVar16;
  float fVar17;
  float fVar18;
  float in_stack_ffffff8c;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  SMotion *local_20;
  float local_1c;
  CHotDemon *local_18;
  float local_14;
  
  iVar8 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_24 = delta_time * (this_ptr->base).speed;
  while (0.0 < local_24) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar11);
  }
  (this_ptr->hotdemon_model).accumulated_root_motion.z = 0.0;
  (this_ptr->hotdemon_model).accumulated_root_motion.y =
       (this_ptr->hotdemon_model).accumulated_root_motion.z;
  (this_ptr->hotdemon_model).accumulated_root_motion.x =
       (this_ptr->hotdemon_model).accumulated_root_motion.y;
  local_24 = delta_time * (this_ptr->base).speed;
  while (0.0 < local_24) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->hotdemon_model).motion_controller);
  }
  fVar17 = (this_ptr->base).speed;
  fVar18 = (float)3.1415926535000001;
  pCVar14 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar18 * fVar17;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar14->motion_controller);
  uVar11 = pSVar9->state_index;
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    if (uVar11 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar5 = (this_ptr->base).victim;
      if (pCVar5 == (CDemonActor *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar8 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar14->motion_controller,1,1);
        }
      }
      else {
        local_38 = (this_ptr->base).base.base.location.position.x - (pCVar5->location).position.x;
        local_34 = (this_ptr->base).base.base.location.position.y - (pCVar5->location).position.y;
        local_30 = (this_ptr->base).base.base.location.position.z - (pCVar5->location).position.z;
        if (SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34) <
            (this_ptr->base).guard_distance) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar14->motion_controller,1,1);
        }
      }
    }
    else if ((uVar11 < 2) || (uVar11 == 2)) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        pCVar14 = &(this_ptr->base).base.model;
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar14->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar14->motion_controller,1,1);
        }
      }
      else {
        fVar18 = 0.17453292;
        fVar17 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_68.x = 0.0;
        local_68.z = 1.5f;
        pCVar16 = &local_68;
        local_68.y = 0.0;
        pCVar5 = (this_ptr->base).victim;
        path_map = (*((pCVar5->vtable)._ub)->getPathMap)(pCVar5);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                           path_map,pCVar16,fVar17,fVar18);
        if (-1 < iVar8) {
          pCVar5 = (this_ptr->base).victim;
          in_stack_ffffff8c =
               (pCVar5->location).position.x - (this_ptr->base).base.base.location.position.x;
          fVar17 = (pCVar5->location).position.y - (this_ptr->base).base.base.location.position.y;
          fVar18 = (pCVar5->location).position.z - (this_ptr->base).base.base.location.position.z;
          if ((SQRT(fVar18 * fVar18 + in_stack_ffffff8c * in_stack_ffffff8c + fVar17 * fVar17) <
               15.0f) && (this_ptr->morph_started == 0)) {
            this_ptr->morph_started = 1;
            this_ptr->morph_timer = 0.0;
            sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
            pCVar6 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->ambient_sfx_cooldown = 9999.9;
            (*pCVar6->playAmbientSound)((CDemonActor *)this_ptr,"succubus-morph.wav");
          }
        }
      }
    }
    goto LAB_005c6fd0;
  }
  uVar11 = (this_ptr->base).base.is_walking;
  if (uVar11 < 2) {
    if (uVar11 == 1) {
LAB_005c6fa5:
      iVar8 = 1;
    }
    else {
LAB_005c731a:
      iVar8 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar8,1);
  }
  else {
    if (uVar11 < 3) goto LAB_005c6fa5;
    if (uVar11 != 3) goto LAB_005c731a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar14->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005c6fd0:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar8 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_5c = (this_ptr->base).base.velocity.x * delta_time;
    local_58 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar16 = &(this_ptr->base).base.position_delta;
    local_54 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_50 = local_5c + pCVar16->x;
    local_4c = local_58 + (this_ptr->base).base.position_delta.y;
    local_48 = local_54 + (this_ptr->base).base.position_delta.z;
    local_44.x = local_50 + pCVar2->x;
    local_44.y = local_4c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_44.z = local_48 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar16->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_44);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar14 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar14);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffff8c);
  local_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar14->motion_controller);
  local_1c = (float)(this_ptr->base).base.model.motion_controller.current_frame_number;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            (&(this_ptr->hotdemon_model).motion_controller,local_20->motion_name,local_1c);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            (&this_ptr->hotdemon_model);
  if ((this_ptr->morph_started != 0) &&
     (fVar17 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar17,
     4.0f < fVar17)) {
    this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                            (0xbef0,"..\\core\\succubus.cpp",0x16c);
    pCVar10 = (CHotDemon *)0x0;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      pCVar10 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(this_ptr_00);
    }
    pCVar7 = g_CDemonMissionPtr;
    local_18 = pCVar10;
    if (pCVar10 != (CHotDemon *)0x0) {
      (this_ptr->base).base.base.was_created = 2;
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(pCVar7,(CDemonActor *)pCVar10);
      (pCVar10->base).base.base.location.position.x = (this_ptr->base).base.base.location.position.x
      ;
      (pCVar10->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y
      ;
      (pCVar10->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z
      ;
      pUVar12 = &(pCVar10->base).base.base.orient;
      (pCVar10->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
      pUVar1 = &(this_ptr->base).base.base.orient;
      if (pUVar12 != pUVar1) {
        (pUVar12->vec).x = (pUVar1->vec).x;
        (pCVar10->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y;
        (pCVar10->base).base.base.orient.vec.z = (this_ptr->base).base.base.orient.vec.z;
      }
      pcVar13 = "hdwing.cth";
      pacVar15 = (local_18->base).base.cloth_list.filenames;
      (local_18->base).base.cloth_list.count = 1;
      do {
        cVar3 = *pcVar13;
        (*pacVar15)[0] = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        (*pacVar15)[1] = cVar3;
        pacVar15 = (char (*) [40])(*pacVar15 + 2);
      } while (cVar3 != '\0');
      (*((local_18->base).base.base.vtable._ub)->setup)((CDemonActor *)local_18);
      pCVar14 = &(local_18->base).base.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar14->motion_controller,local_20->motion_name,local_1c);
      pCVar10 = local_18;
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar14);
      (pCVar10->base).base.base.scale.x = (this_ptr->base).base.base.scale.x;
      (pCVar10->base).base.base.scale.y = (this_ptr->base).base.base.scale.y;
      pCVar7 = g_CDemonMissionPtr;
      (pCVar10->base).base.base.scale.z = (this_ptr->base).base.base.scale.z;
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(pCVar7,(CDemonActor *)pCVar10);
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
  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,"succubusShutUp");
  if (iVar8 == 0) {
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
    if ((iVar8 == 0) &&
       (fVar17 = this_ptr->ambient_sfx_cooldown - delta_time,
       this_ptr->ambient_sfx_cooldown = fVar17, fVar17 < 0.0)) {
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
      pCVar6 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->ambient_sfx_cooldown = local_14;
      uVar11 = (*pCVar6->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      this_ptr->sfx_handle = uVar11;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  return;
}
