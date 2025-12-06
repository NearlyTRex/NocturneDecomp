// Name: core_stranger.cpp_CStranger_FUN_005c1f80
// Address: 005c1f80
// Address Range: [[005c1f80, 005c1fd1]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c1f80()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c1f80(CStranger* param_1) */

void core_stranger_cpp_CStranger_FUN_005c1f80(void)

{
  int in_stack_00000004;
  
  *(uint *)(in_stack_00000004 + 0x1fc40) = 0x40800000;
  if (*(int *)(in_stack_00000004 + 0x24f8) == *(int *)(in_stack_00000004 + 0x1fc2c)) {
    *(uint *)(in_stack_00000004 + 0x1fc2c) = 0;
  }
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x13c))();
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),0,1);
  return;
}
