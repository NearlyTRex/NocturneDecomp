// Name: core_litecone.cpp_CLightCone_getBoundingBox_FUN_004c8290
// Address: 004c8290
// Address Range: [[004c8290, 004c82d6]]
// Convention: unknown
// Signature: void core_litecone_cpp_CLightCone_getBoundingBox_FUN_004c8290(int param_1,float *param_2)

#include "nocturne.h"

void core_litecone_cpp_CLightCone_getBoundingBox_FUN_004c8290(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = ((float)18 / *(float *)(param_1 + 0x150)) * *(float *)(param_1 + 0x154);
  param_2[2] = 0.0;
  param_2[3] = fVar1;
  param_2[4] = fVar1;
  *param_2 = -fVar1;
  param_2[1] = -fVar1;
  param_2[5] = *(float *)(param_1 + 0x154);
  return;
}
