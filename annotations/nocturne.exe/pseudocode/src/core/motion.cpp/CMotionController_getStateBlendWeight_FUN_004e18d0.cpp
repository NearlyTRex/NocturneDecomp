// Name: core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
// Address: 004e18d0
// Address Range: [[004e18d0, 004e1957]]
// Convention: unknown
// Signature: float core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(int *param_1,int param_2)

#include "nocturne.h"

float core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(int *param_1,int param_2)

{
  float local_10;
  
  if ((float)param_1[5] <= 0.0) {
    if (param_2 != *(int *)(*param_1 + 0x98c + param_1[1] * 0x54c)) {
      return 0.0;
    }
    local_10 = 1.0;
  }
  else if (param_2 == *(int *)(param_1[6] * 0x54c + 0x98c + *param_1)) {
    local_10 = (float)param_1[5];
  }
  else {
    if (param_2 != *(int *)(param_1[1] * 0x54c + 0x98c + *param_1)) {
      return 0.0;
    }
    local_10 = 1.0 - (float)param_1[5];
  }
  return local_10;
}
