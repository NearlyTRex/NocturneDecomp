// Name: core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780
// Address: 00413780
// Address Range: [[00413780, 004137b6]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(int param_1)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(int param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
  if (iVar1 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
  return;
}
