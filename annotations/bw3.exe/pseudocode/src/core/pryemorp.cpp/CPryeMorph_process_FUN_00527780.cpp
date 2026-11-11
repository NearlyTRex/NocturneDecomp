// Name: core_pryemorp.cpp_CPryeMorph_process_FUN_00527780
// Address: 00527780
// Address Range: [[00527780, 00527969]]
// Convention: __cdecl
// Signature: void __cdecl core_pryemorp_cpp_CPryeMorph_process_FUN_00527780(CPryeMorph *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pryemorp_cpp_CPryeMorph_process_FUN_00527780(CPryeMorph *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  float fVar2;
  float fVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CDemonMission *pCVar6;
  SMotion *pSVar7;
  int iVar8;
  byte bVar9;
  float afStackY_1014 [1014];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar9 = 0;
  if (1.0 <= this_ptr->morph_time) {
    return;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  iVar4 = pSVar7->state_index;
  if ((iVar4 == 0x91) || (iVar4 == 0x92)) {
    if ((iVar4 == 0x92) &&
       ((fVar2 = delta_time / _DAT_005e36d8 + this_ptr->morph_time, this_ptr->morph_time = fVar2,
        1.0 <= fVar2 && (this_ptr->target_actor != (CDemonActor *)0x0)))) {
      core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930
                (0x01D81080,this_ptr->target_actor);
      pCVar6 = 0x01D81080;
      this_ptr->target_actor = (CDemonActor *)0x0;
      core_mission_cpp_FUN_004f6f10(pCVar6,this_ptr,1);
    }
  }
  else {
    iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->transform_event);
    if (iVar8 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0x91,1);
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
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      (&(this_ptr->base).base.model.base,&stack0xffffffd0);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar8);
  }
  if (iVar4 != 0) {
    core_actor_cpp_FUN_00408b00(this_ptr,&(this_ptr->base).base.model.accumulated_root_motion);
    pCVar1 = &(this_ptr->base).base.base.location;
    fStack_2c = fStack_20;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar9 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    fVar2 = (this_ptr->base).base.base.location.position.y;
    fVar3 = (this_ptr->base).base.base.location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + fStack_2c;
    (this_ptr->base).base.base.location.position.y = fVar2 + fStack_28;
    (this_ptr->base).base.base.location.position.z = fVar3 + fStack_24;
    pCVar5 = this_ptr->target_actor;
    if (pCVar5 != (CDemonActor *)0x0) {
      (pCVar5->location).position.x = (pCVar1->position).x;
      (pCVar5->location).position.y = (this_ptr->base).base.base.location.position.y;
      (pCVar5->location).position.z = (this_ptr->base).base.base.location.position.z;
      (pCVar5->location).area_id = (this_ptr->base).base.base.location.area_id;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
