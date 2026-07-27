// Name: core_path.cpp_FUN_004f0360
// Address: 004f0360
// Address Range: [[004f0360, 004f049b]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_004f0360(float *param_1,float *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_004f0360(float *param_1,float *param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  float afStackY_1004 [1013];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  bVar3 = 0;
  if (param_3 == 0) {
    fVar2 = (float)((int)param_1[0x4e36] - _DAT_01bd1d80);
    param_1[0x4e36] = fVar2;
    if ((int)fVar2 < 0) {
      param_1[0x4e36] = (float)((int)fVar2 + 0x4000);
    }
    else {
      local_28 = *param_2 - param_1[0x4e30];
      local_24 = param_2[1] - param_1[0x4e31];
      local_20 = param_2[2] - param_1[0x4e32];
      if (((ABS(local_28) < (float)4) && (ABS(local_24) < (float)4)) &&
         (ABS(local_20) < (float)4)) {
        return;
      }
    }
  }
  else {
    uVar1 = rand();
    param_1[0x4e36] = (float)(uVar1 & 0x3fff);
  }
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(&DAT_01fba938,param_1);
  param_1[3] = local_1c;
  param_1[(uint)bVar3 * -2 + 4] = *(float *)(&stack0xffffffe8 + (uint)bVar3 * -8);
  (param_1 + (uint)bVar3 * -2 + 4)[(uint)bVar3 * -2 + 1] =
       *(float *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (((param_1[3] == param_1[0x4e2c]) && (param_1[0x4e2d] == param_1[4])) &&
     (param_1[0x4e2e] == param_1[5])) {
    return;
  }
  param_1[0x4e2c] = param_1[3];
  param_1[(uint)bVar3 * -2 + 0x4e2d] = param_1[(uint)bVar3 * -2 + 4];
  (param_1 + (uint)bVar3 * -2 + 0x4e2d)[(uint)bVar3 * -2 + 1] =
       (param_1 + (uint)bVar3 * -2 + 4)[(uint)bVar3 * -2 + 1];
  param_1[9] = (float)((int)param_1[3] + -0x32);
  param_1[0xb] = (float)((int)param_1[5] + -0x32);
  param_1[10] = param_1[4];
  core_path_cpp_CPathMap_reset_FUN_004f1e10(param_1);
  return;
}
