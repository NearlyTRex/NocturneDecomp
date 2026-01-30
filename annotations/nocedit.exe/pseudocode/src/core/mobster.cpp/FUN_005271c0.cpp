// Name: core_mobster.cpp_FUN_005271c0
// Address: 005271c0
// Address Range: [[005271c0, 005271ea]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_005271c0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_005271c0(uint param_1) */

void __cdecl core_mobster_cpp_FUN_005271c0(void)

{
  float fVar1;
  int in_stack_00000004;
  
  if (0.0 < *(float *)(in_stack_00000004 + 0xbf90)) {
    return;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.0);
  *(float *)(in_stack_00000004 + 0xbf90) = fVar1;
  if (*(int *)(in_stack_00000004 + 0x24b4) != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158),6,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),2,1);
  return;
}
