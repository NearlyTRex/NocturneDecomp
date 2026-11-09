// Name: core_hand.cpp_FUN_005aa230
// Address: 005aa230
// Address Range: [[005aa230, 005aa250]]
// Convention: unknown
// Signature: void core_hand_cpp_FUN_005aa230(int param_1)

#include "nocturne.h"

void core_hand_cpp_FUN_005aa230(int param_1)

{
  *(uint *)(param_1 + 0x342c) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),0,1);
  return;
}
