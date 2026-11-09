// Name: core_tbplayer.cpp_FUN_00572030
// Address: 00572030
// Address Range: [[00572030, 0057205e]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_00572030(int param_1,int param_2)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_00572030(int param_1,int param_2)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x281c) == 0) &&
     (fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4),
     *(float *)(param_1 + 0x25a8) = fVar1, fVar1 <= 0.0)) {
    *(uint *)(param_1 + 0x25a8) = 0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)(param_1 + 0x2b4),3,1);
    return;
  }
  return;
}
