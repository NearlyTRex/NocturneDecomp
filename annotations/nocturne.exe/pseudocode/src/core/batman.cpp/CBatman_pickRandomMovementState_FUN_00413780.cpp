// Name: core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780
// Address: 00413780
// Address Range: [[00413780, 004137b6]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(CBatman *this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(CBatman *this_ptr)

{
  int iVar1;
  CDeformableModelInstance *this_ptr_00;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
  this_ptr_00 = &(this_ptr->base).base.model;
  if (iVar1 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,1,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&this_ptr_00->motion_controller,2,1);
  return;
}
