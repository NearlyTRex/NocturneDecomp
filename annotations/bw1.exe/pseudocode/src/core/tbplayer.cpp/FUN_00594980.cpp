// Name: core_tbplayer.cpp_FUN_00594980
// Address: 00594980
// Address Range: [[00594980, 005949c4]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_00594980(int param_1,int param_2)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_00594980(int param_1,int param_2)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x27b0) == 0) &&
     (fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4),
     *(float *)(param_1 + 0x2538) = fVar1, fVar1 <= 0.0)) {
    *(uint *)(param_1 + 0x2538) = 0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)(param_1 + 0x158),3,1);
    return;
  }
  return;
}
