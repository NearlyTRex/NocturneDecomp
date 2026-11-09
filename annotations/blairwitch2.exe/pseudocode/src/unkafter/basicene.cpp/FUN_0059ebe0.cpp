// Name: unkafter_basicene.cpp_FUN_0059ebe0
// Address: 0059ebe0
// Address Range: [[0059ebe0, 0059ec00]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059ebe0(int param_1)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_0059ebe0(int param_1)

{
  if (*(int *)(param_1 + 0x11390) < 0) {
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),*(int *)(param_1 + 0x11390),1);
  return;
}
