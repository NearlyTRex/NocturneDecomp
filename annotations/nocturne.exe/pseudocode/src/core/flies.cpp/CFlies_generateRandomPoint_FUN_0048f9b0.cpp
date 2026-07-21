// Name: core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0
// Address: 0048f9b0
// Address Range: [[0048f9b0, 0048fbde]]
// Convention: __cdecl
// Signature: float * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_0048f9b0(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_0048f9b0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_44 [6];
  float local_2c [5];
  float local_18;
  
  local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
  param_2[1] = local_18;
  param_2[1] = param_2[1] * param_2[1] * *(float *)(param_1 + 0x154);
  local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                              (*(float *)(param_1 + 0x150) * (float)_DAT_00581747,
                               *(float *)(param_1 + 0x150) * (float)_DAT_0058173f);
  *param_2 = local_18;
  fVar6 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                           (*(float *)(param_1 + 0x158) * (float)_DAT_00581747,
                            *(float *)(param_1 + 0x158) * (float)_DAT_0058173f);
  param_2[2] = fVar6;
  if (param_3 != (float *)0x0) {
    fVar6 = *param_2 - *param_3;
    fVar4 = param_2[1] - param_3[1];
    fVar5 = param_2[2] - param_3[2];
    fVar3 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
    if ((float)_DAT_0058174f < fVar3) {
      fVar4 = fVar4 * _DAT_00581757;
      fVar5 = fVar5 * _DAT_00581757;
      fVar3 = 1.0 / fVar3;
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      if (param_2 != local_2c) {
        *param_2 = *param_3 + fVar6 * _DAT_00581757 * fVar3;
        param_2[1] = fVar1 + fVar4 * fVar3;
        param_2[2] = fVar2 + fVar5 * fVar3;
        return param_2;
      }
    }
    else if ((fVar3 < 1.0) && (0.0 < fVar3)) {
      fVar3 = 1.0 / fVar3;
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      if (param_2 != local_44) {
        *param_2 = *param_3 + fVar6 * fVar3;
        param_2[1] = fVar1 + fVar4 * fVar3;
        param_2[2] = fVar2 + fVar5 * fVar3;
        return param_2;
      }
    }
  }
  return param_2;
}
