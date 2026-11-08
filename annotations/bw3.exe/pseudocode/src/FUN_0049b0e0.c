// Name: FUN_0049b0e0
// Address: 0049b0e0
// Address Range: [[0049b0e0, 0049b1c7]]
// Convention: unknown
// Signature: float FUN_0049b0e0(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0049b0e0(float param_1,float param_2)

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
  local_34 = (int)ROUND(_DAT_005df8e4 * 0.0);
  local_30 = (int)ROUND(_DAT_005df8e4 * 0.0);
  local_2c = (int)ROUND(param_1 * _DAT_005df8e4);
  FUN_005632a3(*DAT_005f2afc,&local_34);
  fVar2 = (float)_DAT_005c05f0;
  fVar1 = (((float)*(int *)(*DAT_005f2afc + 8) * (float)_DAT_005c05e8) /
          ((float)DAT_005fba44 * fVar2)) * _DAT_005c05f8;
  local_8 = param_2;
  fVar3 = ABS(fVar1 / ((float)_DAT_01c6b598 * fVar2));
  fVar1 = ABS(fVar1 / ((float)_DAT_01c6b59c * fVar2));
  if (param_2 < fVar3) {
    local_8 = fVar3;
  }
  if (fVar1 <= local_8) {
    return local_8;
  }
  return fVar1;
}
