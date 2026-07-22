// Name: core_fire.cpp_computeScreenSpaceSize_FUN_004859a0
// Address: 004859a0
// Address Range: [[004859a0, 00485a87]]
// Convention: unknown
// Signature: float core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  float local_8;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = param_1;
  local_34 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  local_30 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  local_2c = (int)ROUND(param_1 * _DAT_0059d1f8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_34);
  fVar2 = (float)1.52587890625e-05;
  fVar1 = (((float)*(int *)(*DAT_005ae704 + 8) * (float)0.00390625) /
          ((float)DAT_005b7648 * fVar2)) * 5.1640756954075245e-315._0_4_;
  local_8 = param_2;
  fVar3 = ABS(fVar1 / ((float)_DAT_01c00c48 * fVar2));
  fVar1 = ABS(fVar1 / ((float)_DAT_01c00c4c * fVar2));
  if (param_2 < fVar3) {
    local_8 = fVar3;
  }
  if (fVar1 <= local_8) {
    return local_8;
  }
  return fVar1;
}
