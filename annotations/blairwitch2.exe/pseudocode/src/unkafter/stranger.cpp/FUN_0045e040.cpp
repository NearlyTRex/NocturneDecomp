// Name: unkafter_stranger.cpp_FUN_0045e040
// Address: 0045e040
// Address Range: [[0045e040, 0045e06e]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045e040(float *param_1,float *param_2)

#include "nocturne.h"

void unkafter_stranger_cpp_FUN_0045e040(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = 1.0 / *param_2;
  *param_1 = *param_1 * fVar1;
  param_1[1] = param_1[1] * fVar1;
  param_1[2] = param_1[2] * fVar1;
  return;
}
