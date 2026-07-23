// Name: core_stairs.cpp_CStairs_getBoundingBox_FUN_00534860
// Address: 00534860
// Address Range: [[00534860, 005348b3]]
// Convention: unknown
// Signature: void core_stairs_cpp_CStairs_getBoundingBox_FUN_00534860(int param_1,float *param_2)

#include "nocturne.h"

void core_stairs_cpp_CStairs_getBoundingBox_FUN_00534860(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)0.5;
  *param_2 = -*(float *)(param_1 + 0x158) * fVar2;
  fVar1 = *(float *)(param_1 + 0x158);
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar1 * fVar2;
  param_2[4] = (float)*(int *)(param_1 + 0x164) * *(float *)(param_1 + 0x150);
  param_2[5] = (float)*(int *)(param_1 + 0x164) * *(float *)(param_1 + 0x154);
  return;
}
