// Name: core_passngr.cpp_CPassenger_process_FUN_00545ef0
// Address: 00545ef0
// Address Range: [[00545ef0, 005460b6]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_process_FUN_00545ef0(CPassenger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_passngr_cpp_CPassenger_process_FUN_00545ef0(CPassenger *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  int iVar2;
  CDemonMission *this_ptr_01;
  SMotion *pSVar3;
  int iVar4;
  uint event_id;
  CVector3f *pCVar5;
  float fVar6;
  CVector3f local_1c;
  
  if (1.0 <= this_ptr->morph_time) {
    return;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  iVar2 = pSVar3->state_index;
  if ((iVar2 == 1) || (iVar2 == 2)) {
    if ((iVar2 == 2) &&
       ((fVar6 = delta_time / 2.0f + this_ptr->morph_time, this_ptr->morph_time = fVar6,
        1.0 <= fVar6 && (*(CDemonActor **)(this_ptr->unk + 0x60) != (CDemonActor *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70
                (g_CDemonMissionPtr,*(CDemonActor **)(this_ptr->unk + 0x60));
      this_ptr_01 = g_CDemonMissionPtr;
      this_ptr->unk[0x60] = '\0';
      this_ptr->unk[0x61] = '\0';
      this_ptr->unk[0x62] = '\0';
      this_ptr->unk[99] = '\0';
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                (this_ptr_01,(CDemonActor *)this_ptr,1);
    }
  }
  else {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->transform_event);
    if (iVar4 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,1,1);
      if (*(char *)&this_ptr->transform_wav != '\0') {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,(char *)&this_ptr->transform_wav);
        *(byte *)&this_ptr->transform_wav = 0;
      }
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fVar6 = delta_time;
  while (0.0 < fVar6) {
    event_id = core_motion_cpp_CMotionController_advance_FUN_0052d610
                         (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,event_id);
  }
  if (iVar2 != 0) {
    pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       ((CDemonActor *)this_ptr,&local_1c,
                        &(this_ptr->base).base.model.accumulated_root_motion);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar5->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar5->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar5->z + (this_ptr->base).base.base.location.position.z;
    iVar2 = *(int *)(this_ptr->unk + 0x60);
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x20) = (pCVar1->position).x;
      *(float *)(iVar2 + 0x24) = (this_ptr->base).base.base.location.position.y;
      *(float *)(iVar2 + 0x28) = (this_ptr->base).base.base.location.position.z;
      *(int *)(iVar2 + 0x2c) = (this_ptr->base).base.base.location.area_id;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,fVar6);
  return;
}
