// Name: core_conveyor.cpp_FUN_0043b3c0
// Address: 0043b3c0
// Address Range: [[0043b3c0, 0043b413]]
// Convention: unknown
// Signature: void core_conveyor_cpp_FUN_0043b3c0(int param_1,float *param_2)

#include "nocturne.h"

void core_conveyor_cpp_FUN_0043b3c0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x720);
  fVar2 = (float)0.5;
  param_2[1] = -0.1;
  *param_2 = -fVar1 * fVar2;
  param_2[2] = -*(float *)(param_1 + 0x728) * fVar2;
  param_2[3] = *(float *)(param_1 + 0x720) * fVar2;
  param_2[4] = *(float *)(param_1 + 0x724) + (float)0.10000000000000001;
  param_2[5] = fVar2 * *(float *)(param_1 + 0x728);
  return;
}
