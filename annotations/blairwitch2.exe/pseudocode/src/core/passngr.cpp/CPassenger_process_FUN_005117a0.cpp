// Name: core_passngr.cpp_CPassenger_process_FUN_005117a0
// Address: 005117a0
// Address Range: [[005117a0, 0051197c]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_process_FUN_005117a0(CPassenger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_passngr_cpp_CPassenger_process_FUN_005117a0(CPassenger *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  float fVar2;
  float fVar3;
  CWerewolf *pCVar4;
  CDemonMission *pCVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1014 [1014];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar8 = 0;
  if (1.0 <= this_ptr->morph_time) {
    return;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  iVar6 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  iVar6 = *(int *)(iVar6 + 0x24);
  if ((iVar6 == 1) || (iVar6 == 2)) {
    if ((iVar6 == 2) &&
       ((fVar2 = delta_time / _DAT_005fa918 + this_ptr->morph_time, this_ptr->morph_time = fVar2,
        1.0 <= fVar2 && (this_ptr->werewolf_actor != (CWerewolf *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200
                (0x01D182F0,(CDemonActor *)this_ptr->werewolf_actor);
      pCVar5 = 0x01D182F0;
      this_ptr->werewolf_actor = (CWerewolf *)0x0;
      core_mission_cpp_FUN_004fc7b0(pCVar5,this_ptr,1);
    }
  }
  else {
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->transform_event);
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1);
      if (this_ptr->transform_wav[0] != '\0') {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,this_ptr->transform_wav);
        this_ptr->transform_wav[0] = '\0';
      }
    }
  }
  fStack_30 = delta_time;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  while (0.0 < fStack_30) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      (&(this_ptr->base).base.model.base,&stack0xffffffd0);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar7);
  }
  if (iVar6 != 0) {
    core_actor_cpp_FUN_00408cf0(this_ptr,&(this_ptr->base).base.model.accumulated_root_motion);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_2c = fStack_20;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    fVar2 = (this_ptr->base).base.base.location.position.y;
    fVar3 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_2c;
    (this_ptr->base).base.base.location.position.y = fVar2 + fStack_28;
    (this_ptr->base).base.base.location.position.z = fVar3 + fStack_24;
    pCVar4 = this_ptr->werewolf_actor;
    if (pCVar4 != (CWerewolf *)0x0) {
      (pCVar4->base).base.base.location.position.x = (pCVar1->position).x;
      (pCVar4->base).base.base.location.position.y = (this_ptr->base).base.base.location.position.y;
      (pCVar4->base).base.base.location.position.z = (this_ptr->base).base.base.location.position.z;
      (pCVar4->base).base.base.location.area_id = (this_ptr->base).base.base.location.area_id;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
