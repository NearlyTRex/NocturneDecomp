// Name: core_succubus.cpp_CSuccubus_process_FUN_005c6e90
// Address: 005c6e90
// Address Range: [[005c6e90, 005c7552]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c7515) */

void __cdecl core_succubus_cpp_CSuccubus_process_FUN_005c6e90(CSuccubus *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  char cVar3;
  CCloth *pCVar4;
  CDemonActor *pCVar5;
  CDemonActor_vtable *pCVar6;
  float fVar7;
  float fVar8;
  CDemonMission *pCVar9;
  int iVar10;
  uint uVar11;
  SMotion *pSVar12;
  CHotDemon *this_ptr_00;
  CHotDemon *pCVar13;
  CPathMap *path_map;
  uint uVar14;
  UOrientationVector *pUVar15;
  char *pcVar16;
  CDeformableModelInstance *pCVar17;
  char (*pacVar18) [40];
  CVector3f *pCVar19;
  float fVar20;
  float in_stack_ffffff94;
  float in_stack_ffffffa0;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  SMotion *local_20;
  float local_1c;
  CHotDemon *local_18;
  float local_14;
  
  iVar10 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
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
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar11);
  }
  this_ptr->unk[0x225c] = '\0';
  this_ptr->unk[0x225d] = '\0';
  this_ptr->unk[0x225e] = '\0';
  this_ptr->unk[0x225f] = '\0';
  *(uint *)(this_ptr->unk + 0x2258) = *(uint *)(this_ptr->unk + 0x225c);
  *(uint *)(this_ptr->unk + 0x2254) = *(uint *)(this_ptr->unk + 0x2258);
  local_24 = delta_time * (this_ptr->base).speed;
  while (0.0 < local_24) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610((CMotionController *)this_ptr->unk);
  }
  fVar20 = (this_ptr->base).speed;
  fVar7 = (float)3.1415926535000001;
  pCVar17 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar7 * fVar20;
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar17->motion_controller);
  uVar11 = pSVar12->state_index;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    if (uVar11 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar5 = (this_ptr->base).victim;
      if (pCVar5 == (CDemonActor *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (iVar10 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar17->motion_controller,1,1);
        }
      }
      else {
        local_38 = (this_ptr->base).base.base.location.position.x - (pCVar5->location).position.x;
        local_34 = (this_ptr->base).base.base.location.position.y - (pCVar5->location).position.y;
        local_30 = (this_ptr->base).base.base.location.position.z - (pCVar5->location).position.z;
        if (SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34) <
            (this_ptr->base).guard_distance) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar17->motion_controller,1,1);
        }
      }
    }
    else if ((uVar11 < 2) || (uVar11 == 2)) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        iVar10 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        pCVar17 = &(this_ptr->base).base.model;
        if (iVar10 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar17->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar17->motion_controller,1,1);
        }
      }
      else {
        fVar20 = 0.17453292;
        pCVar19 = (CVector3f *)0x3f000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        pCVar5 = (this_ptr->base).victim;
        in_stack_ffffffa0 = 1.5f;
        path_map = (*((pCVar5->vtable)._ub)->getPathMap)(pCVar5);
        iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                           ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                            path_map,pCVar19,fVar20,in_stack_ffffff94);
        if (((-1 < iVar10) &&
            (pCVar5 = (this_ptr->base).victim,
            fVar20 = (pCVar5->location).position.x - (this_ptr->base).base.base.location.position.x,
            fVar7 = (pCVar5->location).position.y - (this_ptr->base).base.base.location.position.y,
            fVar8 = (pCVar5->location).position.z - (this_ptr->base).base.base.location.position.z,
            SQRT(fVar8 * fVar8 + fVar20 * fVar20 + fVar7 * fVar7) < 15.0f)) &&
           (*(int *)(this_ptr->unk + 0x2478) == 0)) {
          uVar11 = *(uint *)(this_ptr->unk + 0x2470);
          this_ptr->unk[0x2478] = '\x01';
          this_ptr->unk[0x2479] = '\0';
          this_ptr->unk[0x247a] = '\0';
          this_ptr->unk[0x247b] = '\0';
          this_ptr->unk[0x247c] = '\0';
          this_ptr->unk[0x247d] = '\0';
          this_ptr->unk[0x247e] = '\0';
          this_ptr->unk[0x247f] = '\0';
          sound_sndmain_cpp_killSfx_FUN_005a9c40(uVar11);
          pCVar6 = (this_ptr->base).base.base.vtable._ub;
          this_ptr->unk[0x2474] = -0x66;
          this_ptr->unk[0x2475] = '?';
          this_ptr->unk[0x2476] = '\x1c';
          this_ptr->unk[0x2477] = 'F';
          (*pCVar6->playAmbientSound)((CDemonActor *)this_ptr,"succubus-morph.wav");
        }
      }
    }
    goto LAB_005c6fd0;
  }
  uVar11 = (this_ptr->base).base.is_walking;
  if (uVar11 < 2) {
    if (uVar11 == 1) {
LAB_005c6fa5:
      iVar10 = 1;
    }
    else {
LAB_005c731a:
      iVar10 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar10,1);
  }
  else {
    if (uVar11 < 3) goto LAB_005c6fa5;
    if (uVar11 != 3) goto LAB_005c731a;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar17->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_005c6fd0:
  if (0.0 < (float)(this_ptr->base).unk2) {
    (this_ptr->base).unk2 = (int)((float)(this_ptr->base).unk2 - delta_time);
  }
  iVar10 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar10 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar19 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_44.x = (this_ptr->base).base.velocity.x * delta_time + pCVar19->x + pCVar2->x;
    local_44.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_44.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar19->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_44);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCVar17 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar17);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffffa0);
  local_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar17->motion_controller);
  local_1c = (float)(this_ptr->base).base.model.motion_controller.current_frame_number;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            ((CMotionController *)this_ptr->unk,local_20->motion_name,local_1c);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)this_ptr->unk);
  if ((*(int *)(this_ptr->unk + 0x2478) != 0) &&
     (fVar20 = *(float *)(this_ptr->unk + 0x247c) + delta_time,
     *(float *)(this_ptr->unk + 0x247c) = fVar20, 4.0f < fVar20)) {
    this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                            (0xbef0,"..\\core\\succubus.cpp",0x16c);
    pCVar13 = (CHotDemon *)0x0;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      pCVar13 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004f6ca0(this_ptr_00);
    }
    pCVar9 = g_CDemonMissionPtr;
    local_18 = pCVar13;
    if (pCVar13 != (CHotDemon *)0x0) {
      (this_ptr->base).base.base.was_created = 2;
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(pCVar9,(CDemonActor *)pCVar13);
      (pCVar13->base).base.base.location.position.x = (this_ptr->base).base.base.location.position.x
      ;
      (pCVar13->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y
      ;
      (pCVar13->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z
      ;
      pUVar15 = &(pCVar13->base).base.base.orient;
      (pCVar13->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
      pUVar1 = &(this_ptr->base).base.base.orient;
      if (pUVar15 != pUVar1) {
        (pUVar15->vec).x = (pUVar1->vec).x;
        (pCVar13->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y;
        (pCVar13->base).base.base.orient.vec.z = (this_ptr->base).base.base.orient.vec.z;
      }
      pcVar16 = "hdwing.cth";
      pacVar18 = (local_18->base).base.cloth_list.filenames;
      (local_18->base).base.cloth_list.count = 1;
      do {
        cVar3 = *pcVar16;
        (*pacVar18)[0] = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = pcVar16[1];
        pcVar16 = pcVar16 + 2;
        (*pacVar18)[1] = cVar3;
        pacVar18 = (char (*) [40])(*pacVar18 + 2);
      } while (cVar3 != '\0');
      (*((local_18->base).base.base.vtable._ub)->setup)((CDemonActor *)local_18);
      pCVar17 = &(local_18->base).base.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar17->motion_controller,local_20->motion_name,local_1c);
      pCVar13 = local_18;
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar17);
      (pCVar13->base).base.base.scale.x = (this_ptr->base).base.base.scale.x;
      (pCVar13->base).base.base.scale.y = (this_ptr->base).base.base.scale.y;
      pCVar9 = g_CDemonMissionPtr;
      (pCVar13->base).base.base.scale.z = (this_ptr->base).base.base.scale.z;
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(pCVar9,(CDemonActor *)pCVar13);
      pCVar4 = *(CCloth **)(this_ptr->unk + 0x2448);
      *(CCloth **)(this_ptr->unk + 0x2448) = (local_18->base).base.cloth_list.cloths[0];
      (local_18->base).base.cloth_list.cloths[0] = pCVar4;
    }
  }
  if ((this_ptr->base).base.was_rendered_opaque != 0) {
    core_cloth_cpp_CClothList_process_FUN_0043c2d0
              ((CClothList *)(this_ptr->unk + 0x22b4),&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,
               (CDeformableModelInstance *)this_ptr->unk);
  }
  iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                     (g_CEventListPtr,"succubusShutUp");
  if (iVar10 == 0) {
    iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 0x2470));
    if ((iVar10 == 0) &&
       (fVar20 = *(float *)(this_ptr->unk + 0x2474) - delta_time,
       *(float *)(this_ptr->unk + 0x2474) = fVar20, fVar20 < 0.0)) {
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
      pCVar6 = (this_ptr->base).base.base.vtable._ub;
      *(float *)(this_ptr->unk + 0x2474) = local_14;
      uVar14 = (*pCVar6->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      *(uint *)(this_ptr->unk + 0x2470) = uVar14;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk + 0x2470));
  return;
}
