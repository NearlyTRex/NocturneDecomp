// Name: core_fire.cpp_computeScreenSpaceSize_FUN_004b00b0
// Address: 004b00b0
// Address Range: [[004b00b0, 004b0197]]
// Convention: __cdecl
// Signature: float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004b00b0(float depth,float min_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004b00b0(float depth,float min_size)

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
  local_20 = depth;
  local_34.x = (int)ROUND(_DAT_005fff94 * 0.0);
  local_34.y = (int)ROUND(_DAT_005fff94 * 0.0);
  local_34.z = (int)ROUND(depth * _DAT_005fff94);
  engine_special_cpp_FUN_00580173((SProjectedVertex *)*DAT_00612560,&local_34);
  fVar2 = (float)_DAT_005df2bc;
  fVar1 = (((float)*(int *)(*DAT_00612560 + 8) * (float)_DAT_005df2b4) /
          ((float)DAT_0061b4c4 * fVar2)) * _DAT_005df2c4;
  local_8 = min_size;
  fVar3 = ABS(fVar1 / ((float)_DAT_01c4eff8 * fVar2));
  fVar1 = ABS(fVar1 / ((float)_DAT_01c4effc * fVar2));
  if (min_size < fVar3) {
    local_8 = fVar3;
  }
  if (fVar1 <= local_8) {
    return local_8;
  }
  return fVar1;
}
