// Name: core_batman.cpp_CBatman_pickRandomMovementState_FUN_00412b20
// Address: 00412b20
// Address Range: [[00412b20, 00412b56]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_pickRandomMovementState_FUN_00412b20(CBatman *this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_pickRandomMovementState_FUN_00412b20(CBatman *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040cd00(0.5);
  if (iVar1 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,1,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,2,1);
  return;
}
