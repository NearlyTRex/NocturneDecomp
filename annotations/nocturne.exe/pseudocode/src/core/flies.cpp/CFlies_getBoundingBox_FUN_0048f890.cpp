// Name: core_flies.cpp_CFlies_getBoundingBox_FUN_0048f890
// Address: 0048f890
// Address Range: [[0048f890, 0048f8df]]
// Convention: unknown
// Signature: void core_flies_cpp_CFlies_getBoundingBox_FUN_0048f890(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flies_cpp_CFlies_getBoundingBox_FUN_0048f890(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  param_2[1] = 0.0;
  param_2[4] = *(float *)(param_1 + 0x154);
  fVar1 = (float)_DAT_0058172f;
  *param_2 = *(float *)(param_1 + 0x150) * fVar1;
  fVar2 = (float)_DAT_00581737;
  param_2[3] = *(float *)(param_1 + 0x150) * fVar2;
  param_2[2] = *(float *)(param_1 + 0x158) * fVar1;
  param_2[5] = fVar2 * *(float *)(param_1 + 0x158);
  return;
}
