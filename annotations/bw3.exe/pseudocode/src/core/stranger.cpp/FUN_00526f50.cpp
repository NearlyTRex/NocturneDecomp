// Name: core_stranger.cpp_FUN_00526f50
// Address: 00526f50
// Address Range: [[00526f50, 00526fb4]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00526f50(int param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_00526f50(int param_1)

{
  core_hero_cpp_FUN_004d4410(param_1);
  *(uint *)(param_1 + 0x20c20) = 0;
  *(uint *)(param_1 + 0x20c24) = 0;
  *(uint *)(param_1 + 0x20b64) = 0;
  *(uint *)(param_1 + 0x2f00) = 0;
  *(uint *)(param_1 + 0x2f04) = 0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
            ((CMotionController *)(param_1 + 0x158),"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)(param_1 + 0x158),0,1);
  return;
}
