// Name: core_dcamera.cpp_resetFogSamplingOffset_FUN_0043fa20
// Address: 0043fa20
// Address Range: [[0043fa20, 0043fa42]]
// Convention: unknown
// Signature: void core_dcamera_cpp_resetFogSamplingOffset_FUN_0043fa20(int param_1)

#include "nocturne.h"

void core_dcamera_cpp_resetFogSamplingOffset_FUN_0043fa20(int param_1)

{
  *(uint *)(param_1 + 0x1004) = 0;
  *(uint *)(param_1 + 0x1008) = 0;
  *(uint *)(param_1 + 0x1000) = 0;
  return;
}
