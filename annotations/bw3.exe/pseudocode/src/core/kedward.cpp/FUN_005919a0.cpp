// Name: core_kedward.cpp_FUN_005919a0
// Address: 005919a0
// Address Range: [[005919a0, 005919e2]]
// Convention: unknown
// Signature: void core_kedward_cpp_FUN_005919a0(int param_1)

#include "nocturne.h"

void core_kedward_cpp_FUN_005919a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd084) == 0) {
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
