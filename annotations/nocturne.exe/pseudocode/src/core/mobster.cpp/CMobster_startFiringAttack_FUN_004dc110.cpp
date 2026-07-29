// Name: core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110
// Address: 004dc110
// Address Range: [[004dc110, 004dc17f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(CMobster *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar1;
  float fVar2;
  
  if (0.0 < this_ptr->firing_cooldown) {
    return;
  }
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.5,1.0);
  pCVar1 = (this_ptr->base).base.carry_hands[0].carry_actor;
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr->firing_cooldown = fVar2;
  if (pCVar1 != (CDemonActor *)0x0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,6,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&this_ptr_00->motion_controller,2,1);
  return;
}
