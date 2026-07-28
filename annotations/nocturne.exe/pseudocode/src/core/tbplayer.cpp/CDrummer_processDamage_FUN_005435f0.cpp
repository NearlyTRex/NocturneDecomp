// Name: core_tbplayer.cpp_CDrummer_processDamage_FUN_005435f0
// Address: 005435f0
// Address Range: [[005435f0, 00543614]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_CDrummer_processDamage_FUN_005435f0(int param_1,int param_2)

#include "nocturne.h"

void core_tbplayer_cpp_CDrummer_processDamage_FUN_005435f0(int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2434) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            ((CMotionController *)(param_1 + 0x150),3,1);
  return;
}
