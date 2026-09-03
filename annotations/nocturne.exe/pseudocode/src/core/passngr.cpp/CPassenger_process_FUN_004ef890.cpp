// Name: core_passngr.cpp_CPassenger_process_FUN_004ef890
// Address: 004ef890
// Address Range: [[004ef890, 004efa56]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_process_FUN_004ef890(CPassenger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_passngr_cpp_CPassenger_process_FUN_004ef890(CPassenger *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  int iVar2;
  CWerewolf *pCVar3;
  float fVar4;
  CDemonMission *this_ptr_01;
  SMotion *pSVar5;
  int iVar6;
  CVector3f *pCVar7;
  float local_20;
  CVector3f local_1c;
  
  if (1.0 <= this_ptr->morph_time) {
    return;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr_00->motion_controller);
  iVar2 = pSVar5->state_index;
  if ((iVar2 == 1) || (iVar2 == 2)) {
    if ((iVar2 == 2) &&
       ((fVar4 = delta_time / _DAT_005a1068 + this_ptr->morph_time, this_ptr->morph_time = fVar4,
        1.0 <= fVar4 && (this_ptr->werewolf_actor != (CWerewolf *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60
                (g_CDemonMission_PTR_005baf90,(CDemonActor *)this_ptr->werewolf_actor);
      this_ptr_01 = g_CDemonMission_PTR_005baf90;
      this_ptr->werewolf_actor = (CWerewolf *)0x0;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004d9110
                (this_ptr_01,(CDemonActor *)this_ptr,1);
    }
  }
  else {
    iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->transform_event);
    if (iVar6 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,1,1);
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
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(this_ptr->base).base.model.motion_controller,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar6);
  }
  if (iVar2 != 0) {
    pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                       ((CDemonActor *)this_ptr,&local_1c,
                        &(this_ptr->base).base.model.accumulated_root_motion);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar7->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar7->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar7->z + (this_ptr->base).base.base.location.position.z;
    pCVar3 = this_ptr->werewolf_actor;
    if (pCVar3 != (CWerewolf *)0x0) {
      (pCVar3->base).base.base.location.position.x = (pCVar1->position).x;
      (pCVar3->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y;
      (pCVar3->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z;
      (pCVar3->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
