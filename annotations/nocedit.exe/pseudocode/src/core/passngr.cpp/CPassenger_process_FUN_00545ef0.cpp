// Name: core_passngr.cpp_CPassenger_process_FUN_00545ef0
// Address: 00545ef0
// Address Range: [[00545ef0, 005460b6]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_process_FUN_00545ef0(CPassenger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_passngr_cpp_CPassenger_process_FUN_00545ef0(CPassenger *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_02;
  SMotion *pSVar5;
  int iVar6;
  int bone_index;
  CVector3f *pCVar7;
  float local_20;
  CVector3f local_1c;
  CDemonMission *this_ptr_01;
  CDemonActor *pCVar3;
  float fVar4;
  CDeformableModelInstance *this_ptr_00;
  int iVar2;
  CLocation *pCVar1;
  
  if (1.0 <= this_ptr->morph_time) {
    return;
  }
  this_ptr_02 = &(this_ptr->base).base.model;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_02->motion_controller);
  iVar2 = pSVar5->state_index;
  if ((iVar2 == 1) || (iVar2 == 2)) {
    if ((iVar2 == 2) &&
       ((fVar4 = delta_time / 2.0f + this_ptr->morph_time, this_ptr->morph_time = fVar4,
        1.0 <= fVar4 && (this_ptr->werewolf_actor != (CDemonActor *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
                (g_CDemonMissionPtr,this_ptr->werewolf_actor);
      this_ptr_01 = g_CDemonMissionPtr;
      this_ptr->werewolf_actor = (CDemonActor *)0x0;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                (this_ptr_01,(CDemonActor *)this_ptr,1);
    }
  }
  else {
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->transform_event);
    if (iVar6 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_02->motion_controller,1,1);
      if (this_ptr->transform_wav[0] != '\0') {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,this_ptr->transform_wav);
        this_ptr->transform_wav[0] = '\0';
      }
    }
  }
  local_20 = delta_time;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  while (0.0 < local_20) {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_0052d610
                           (&(this_ptr->base).base.model.motion_controller,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,bone_index);
  }
  if (iVar2 != 0) {
    pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       ((CDemonActor *)this_ptr,&local_1c,
                        &(this_ptr->base).base.model.accumulated_root_motion);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar7->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar7->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar7->z + (this_ptr->base).base.base.location.position.z;
    pCVar3 = this_ptr->werewolf_actor;
    if (pCVar3 != (CDemonActor *)0x0) {
      (pCVar3->location).position.x = (pCVar1->position).x;
      (pCVar3->location).position.y = (this_ptr->base).base.base.location.position.y;
      (pCVar3->location).position.z = (this_ptr->base).base.base.location.position.z;
      (pCVar3->location).area_id = (this_ptr->base).base.base.location.area_id;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
