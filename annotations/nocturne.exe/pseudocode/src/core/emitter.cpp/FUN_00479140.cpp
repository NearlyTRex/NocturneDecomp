// Name: core_emitter.cpp_FUN_00479140
// Address: 00479140
// Address Range: [[00479140, 00479193]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00479140(int param_1,float *param_2)

#include "nocturne.h"

void core_emitter_cpp_FUN_00479140(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x154);
  fVar2 = (float)0.5;
  param_2[1] = -0.1;
  *param_2 = -fVar1 * fVar2;
  param_2[2] = -*(float *)(param_1 + 0x15c) * fVar2;
  param_2[3] = *(float *)(param_1 + 0x154) * fVar2;
  param_2[4] = *(float *)(param_1 + 0x158) + (float)0.10000000000000001;
  param_2[5] = fVar2 * *(float *)(param_1 + 0x15c);
  return;
}
