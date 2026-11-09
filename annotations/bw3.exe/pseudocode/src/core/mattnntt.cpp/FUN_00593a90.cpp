// Name: core_mattnntt.cpp_FUN_00593a90
// Address: 00593a90
// Address Range: [[00593a90, 00593adc]]
// Convention: unknown
// Signature: void core_mattnntt_cpp_FUN_00593a90(int param_1)

#include "nocturne.h"

void core_mattnntt_cpp_FUN_00593a90(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xd0a8) = 0;
  if (*(int *)(param_1 + 0xd098) == 0) {
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
    if (iVar1 < 0x55) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 0x158),1,1);
      return;
    }
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)(param_1 + 0x158),2,1);
  return;
}
