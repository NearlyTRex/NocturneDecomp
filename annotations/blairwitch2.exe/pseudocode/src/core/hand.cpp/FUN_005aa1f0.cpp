// Name: core_hand.cpp_FUN_005aa1f0
// Address: 005aa1f0
// Address Range: [[005aa1f0, 005aa229]]
// Convention: unknown
// Signature: void core_hand_cpp_FUN_005aa1f0(int param_1)

#include "nocturne.h"

void core_hand_cpp_FUN_005aa1f0(int param_1)

{
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),0,1);
  *(uint *)(param_1 + 0x11864) = *(uint *)(param_1 + 0x11860);
  unkaddr_0059d350_cpp_FUN_0059d8e0(param_1 + 0x10af8,"Sleeping");
  return;
}
