// Name: core_tbplayer.cpp_FUN_005da240
// Address: 005da240
// Address Range: [[005da240, 005da27e]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_005da240(void)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da240(void)

{
  float fVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  *(uint *)(in_stack_00000004 + 0x243c) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),3,1);
  return;
}
