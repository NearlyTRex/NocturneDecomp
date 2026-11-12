// Name: core_helldog.cpp_CDog_processChaseFoodState_FUN_005ac0c0
// Address: 005ac0c0
// Address Range: [[005ac0c0, 005ac1f9]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_CDog_processChaseFoodState_FUN_005ac0c0(CDog *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_helldog_cpp_CDog_processChaseFoodState_FUN_005ac0c0(CDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CDog *pCVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  SStateMachine *pSVar5;
  
  pSVar5 = &(this_ptr->base).state_machine;
  if (this_ptr->food == (CDemonActor *)0x0) {
    core_muzzle_cpp_FUN_0059d880(pSVar5,"?ChaseFoodComplete" + 1);
    return;
  }
  pCVar1 = (CDog *)this_ptr->food[1].particle_systems[1].fade_end;
  if ((pCVar1 != (CDog *)0x0) && (this_ptr != pCVar1)) {
    this_ptr->food = (CDemonActor *)0x0;
    core_muzzle_cpp_FUN_0059d880(pSVar5,"ChaseFoodComplete");
    return;
  }
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                    ((CCharacter *)this_ptr,&(this_ptr->food->location).position,(CPathMap *)0x0,
                     &(this_ptr->base).walk_direction,(this_ptr->base).walk_direction.z,0.34906584);
  this_ptr_00 = &(this_ptr->base).base.base.model;
  if (iVar3 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,2,1);
    return;
  }
  (*((this_ptr->food->vtable)._ub)->pickup)(this_ptr->food,(CDemonActor *)this_ptr);
  (this_ptr->base).base.victim = (CCharacter *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,9,1);
  fVar2 = this_ptr->eat_timer - delta_time;
  this_ptr->eat_timer = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  (*((this_ptr->food->vtable)._ub)->onDropped)(this_ptr->food,(CVector3f *)0x0);
  core_mission_cpp_FUN_004fc7b0(0x01D182F0,this_ptr->food,1);
  pSVar5 = &(this_ptr->base).state_machine;
  uVar4 = core_muzzle_cpp_FUN_0059db90(pSVar5);
  core_muzzle_cpp_FUN_0059d8e0(pSVar5,uVar4);
  return;
}
