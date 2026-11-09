// Name: core_stranger.cpp_FUN_00591ce0
// Address: 00591ce0
// Address Range: [[00591ce0, 00591d44]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00591ce0(int param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_00591ce0(int param_1)

{
  core_hero_cpp_FUN_004ec570(param_1);
  *(uint *)(param_1 + 0x20000) = 0;
  *(uint *)(param_1 + 0x20004) = 0;
  *(uint *)(param_1 + 0x1ff5c) = 0;
  *(uint *)(param_1 + 0x2c98) = 0;
  *(uint *)(param_1 + 0x2c9c) = 0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            ((CMotionController *)(param_1 + 0x158),"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)(param_1 + 0x158),0,1);
  return;
}
