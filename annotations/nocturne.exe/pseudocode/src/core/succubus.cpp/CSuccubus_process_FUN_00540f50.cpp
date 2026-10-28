// Name: core_succubus.cpp_CSuccubus_process_FUN_00540f50
// Address: 00540f50
// Address Range: [[00540f50, 00541636]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_process_FUN_00540f50(CSuccubus *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005415cb) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_succubus_cpp_CSuccubus_process_FUN_00540f50(CSuccubus *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  char cVar3;
  EWalkState EVar4;
  CCloth *pCVar5;
  CCharacter *pCVar6;
  CDemonActor_vtable *pCVar7;
  float fVar8;
  CDemonMission *pCVar9;
  int iVar10;
  SMotion *pSVar11;
  CHotDemon *this_ptr_00;
  CHotDemon *pCVar12;
  CPathMap *path_map;
  uint uVar13;
  UOrientationVector *pUVar14;
  char *pcVar15;
  CDeformableModelInstance *pCVar16;
  char (*pacVar17) [40];
  CVector3f *pCVar18;
  float fVar19;
  float fVar20;
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
  
  iVar10 = core_charactr_cpp_CCharacter_processCharacter_FUN_004259f0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_24 = delta_time * (this_ptr->base).speed;
  while (0.0 < local_24) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                       (&(this_ptr->base).base.model.base,&local_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar10);
  }
  (this_ptr->hotdemon_model).accumulated_root_motion.z = 0.0;
  (this_ptr->hotdemon_model).accumulated_root_motion.y =
       (this_ptr->hotdemon_model).accumulated_root_motion.z;
  (this_ptr->hotdemon_model).accumulated_root_motion.x =
       (this_ptr->hotdemon_model).accumulated_root_motion.y;
  local_24 = delta_time * (this_ptr->base).speed;
  while (0.0 < local_24) {
    core_motion_cpp_CMotionController_advance_FUN_004e11c0
              (&(this_ptr->hotdemon_model).base,&local_24);
  }
  fVar19 = (this_ptr->base).speed;
  fVar20 = (float)3.1415926535000001;
  pCVar16 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar20 * fVar19;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(&pCVar16->base);
  uVar13 = pSVar11->state_index;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00428c00
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    if (uVar13 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar6 = (this_ptr->base).victim;
      if (pCVar6 == (CCharacter *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar10 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar16->base,1,1);
        }
      }
      else {
        local_38 = (this_ptr->base).base.base.location.position.x -
                   (pCVar6->base).location.position.x;
        local_34 = (this_ptr->base).base.base.location.position.y -
                   (pCVar6->base).location.position.y;
        local_30 = (this_ptr->base).base.base.location.position.z -
                   (pCVar6->base).location.position.z;
        if (SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34) <
            (this_ptr->base).guard_distance) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar16->base,1,1);
        }
      }
    }
    else if ((uVar13 < 2) || (uVar13 == 2)) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        pCVar16 = &(this_ptr->base).base.model;
        if (iVar10 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar16->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar16->base,1,1);
        }
      }
      else {
        fVar20 = 0.17453292;
        fVar19 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_68.x = 0.0;
        local_68.z = 1.5f;
        pCVar18 = &local_68;
        local_68.y = 0.0;
        pCVar6 = (this_ptr->base).victim;
        path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
        iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                           ((CCharacter *)this_ptr,
                            &(((this_ptr->base).victim)->base).location.position,path_map,pCVar18,
                            fVar19,fVar20);
        if (((-1 < iVar10) &&
            (pCVar6 = (this_ptr->base).victim,
            fVar19 = (pCVar6->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x,
            fVar20 = (pCVar6->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y,
            fVar8 = (pCVar6->base).location.position.z -
                    (this_ptr->base).base.base.location.position.z,
            SQRT(fVar8 * fVar8 + fVar19 * fVar19 + fVar20 * fVar20) < 15.0f)) &&
           (this_ptr->morph_started == 0)) {
          this_ptr->morph_started = 1;
          this_ptr->morph_timer = 0.0;
          sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
          pCVar7 = (this_ptr->base).base.base.vtable._ub;
          this_ptr->ambient_sfx_cooldown = 9999.9;
          (*pCVar7->playAmbientSound)((CDemonActor *)this_ptr,"succubus-morph.wav");
        }
      }
    }
    goto LAB_00541090;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_00541065:
      iVar10 = 1;
    }
    else {
LAB_005413d0:
      iVar10 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,iVar10,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_00541065;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_005413d0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar16->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_00541090:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar10 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
  if (iVar10 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_5c = (this_ptr->base).base.velocity.x * delta_time;
    local_58 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar18 = &(this_ptr->base).base.position_delta;
    local_54 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_50 = local_5c + pCVar18->x;
    local_4c = local_58 + (this_ptr->base).base.position_delta.y;
    local_48 = local_54 + (this_ptr->base).base.position_delta.z;
    local_44.x = local_50 + pCVar2->x;
    local_44.y = local_4c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_44.z = local_48 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar18->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_44);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  pCVar16 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar16);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  local_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(&pCVar16->base);
  local_1c = (this_ptr->base).base.model.base.current_frame_number;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
            (&(this_ptr->hotdemon_model).base,local_20->motion_name,local_1c);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            (&this_ptr->hotdemon_model);
  if ((this_ptr->morph_started != 0) &&
     (fVar19 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar19,
     4.0f < fVar19)) {
    this_ptr_00 = operator_new(0xbd58);
    pCVar12 = (CHotDemon *)0x0;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      pCVar12 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(this_ptr_00);
    }
    pCVar9 = g_CDemonMission_PTR_005baf90;
    local_18 = pCVar12;
    if (pCVar12 != (CHotDemon *)0x0) {
      (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(pCVar9,(CDemonActor *)pCVar12);
      (pCVar12->base).base.base.location.position.x = (this_ptr->base).base.base.location.position.x
      ;
      (pCVar12->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y
      ;
      (pCVar12->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z
      ;
      pUVar14 = &(pCVar12->base).base.base.orient;
      (pCVar12->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
      pUVar1 = &(this_ptr->base).base.base.orient;
      if (pUVar14 != pUVar1) {
        (pUVar14->vec).x = (pUVar1->vec).x;
        (pCVar12->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y;
        (pCVar12->base).base.base.orient.vec.z = (this_ptr->base).base.base.orient.vec.z;
      }
      pcVar15 = "hdwing.cth";
      pacVar17 = (local_18->base).base.cloth_list.filenames;
      (local_18->base).base.cloth_list.count = 1;
      do {
        cVar3 = *pcVar15;
        (*pacVar17)[0] = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        (*pacVar17)[1] = cVar3;
        pacVar17 = (char (*) [40])(*pacVar17 + 2);
      } while (cVar3 != '\0');
      (*((local_18->base).base.base.vtable._ub)->setup)((CDemonActor *)local_18);
      pCVar16 = &(local_18->base).base.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
                (&pCVar16->base,local_20->motion_name,local_1c);
      pCVar12 = local_18;
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(pCVar16);
      (pCVar12->base).base.base.scale.x = (this_ptr->base).base.base.scale.x;
      (pCVar12->base).base.base.scale.y = (this_ptr->base).base.base.scale.y;
      pCVar9 = g_CDemonMission_PTR_005baf90;
      (pCVar12->base).base.base.scale.z = (this_ptr->base).base.base.scale.z;
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(pCVar9,(CDemonActor *)pCVar12);
      pCVar5 = (this_ptr->hotdemon_cloth_list).cloths[0];
      (this_ptr->hotdemon_cloth_list).cloths[0] = (local_18->base).base.cloth_list.cloths[0];
      (local_18->base).base.cloth_list.cloths[0] = pCVar5;
    }
  }
  if ((this_ptr->base).base.was_rendered_opaque != 0) {
    core_cloth_cpp_CClothList_process_FUN_00438550
              (&this_ptr->hotdemon_cloth_list,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->hotdemon_model);
  }
  iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                     (0x01C03A10,"succubusShutUp");
  if (iVar10 == 0) {
    iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handle);
    if ((iVar10 == 0) &&
       (fVar19 = this_ptr->ambient_sfx_cooldown - delta_time,
       this_ptr->ambient_sfx_cooldown = fVar19, fVar19 < 0.0)) {
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(5.0,10.0);
      pCVar7 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->ambient_sfx_cooldown = local_14;
      uVar13 = (*pCVar7->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      this_ptr->sfx_handle = uVar13;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
  return;
}
