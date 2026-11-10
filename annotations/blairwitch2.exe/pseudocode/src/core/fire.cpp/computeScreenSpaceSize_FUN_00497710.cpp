// Name: core_fire.cpp_computeScreenSpaceSize_FUN_00497710
// Address: 00497710
// Address Range: [[00497710, 004977f7]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_00497710(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_00497710(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3i local_34;
  uint local_28;
  uint local_24;
  float local_20;
  float local_8;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = param_1;
  local_34.x = (int)ROUND(_DAT_005f64e4 * 0.0);
  local_34.y = (int)ROUND(_DAT_005f64e4 * 0.0);
  local_34.z = (int)ROUND(param_1 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)*DAT_0060b280,&local_34);
  fVar2 = (float)_DAT_005d547a;
  fVar1 = (((float)*(int *)(*DAT_0060b280 + 8) * (float)_DAT_005d5472) /
          ((float)DAT_006141e4 * fVar2)) * _DAT_005d5482;
  local_8 = param_2;
  fVar3 = ABS(fVar1 / ((float)_DAT_01c35e38 * fVar2));
  fVar1 = ABS(fVar1 / ((float)_DAT_01c35e3c * fVar2));
  if (param_2 < fVar3) {
    local_8 = fVar3;
  }
  if (fVar1 <= local_8) {
    return local_8;
  }
  return fVar1;
}
