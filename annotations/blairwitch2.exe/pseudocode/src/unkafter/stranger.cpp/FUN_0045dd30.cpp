// Name: unkafter_stranger.cpp_FUN_0045dd30
// Address: 0045dd30
// Address Range: [[0045dd30, 0045dd94]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045dd30(int param_1)

#include "nocturne.h"

void unkafter_stranger_cpp_FUN_0045dd30(int param_1)

{
  core_hero_cpp_FUN_004d02e0(param_1);
  *(uint *)(param_1 + 0x25694) = 0;
  *(uint *)(param_1 + 0x25698) = 0;
  *(uint *)(param_1 + 0x256a4) = 0;
  *(uint *)(param_1 + 0x2d04) = 0;
  *(uint *)(param_1 + 0x2d08) = 0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            ((CMotionController *)(param_1 + 0x2b4),"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),0,1);
  return;
}
