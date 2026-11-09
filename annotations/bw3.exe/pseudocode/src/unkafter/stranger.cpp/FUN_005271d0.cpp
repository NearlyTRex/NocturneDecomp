// Name: unkafter_stranger.cpp_FUN_005271d0
// Address: 005271d0
// Address Range: [[005271d0, 005271fe]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_005271d0(float *param_1,float *param_2)

#include "nocturne.h"

void unkafter_stranger_cpp_FUN_005271d0(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = 1.0 / *param_2;
  *param_1 = *param_1 * fVar1;
  param_1[1] = param_1[1] * fVar1;
  param_1[2] = param_1[2] * fVar1;
  return;
}
