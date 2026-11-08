// Name: FUN_004b00b0
// Address: 004b00b0
// Address Range: [[004b00b0, 004b0197]]
// Convention: unknown
// Signature: float FUN_004b00b0(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004b00b0(float param_1,float param_2)

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
  local_34 = (int)ROUND(_DAT_005fff94 * 0.0);
  local_30 = (int)ROUND(_DAT_005fff94 * 0.0);
  local_2c = (int)ROUND(param_1 * _DAT_005fff94);
  FUN_00580173(*DAT_00612560,&local_34);
  fVar2 = (float)_DAT_005df2bc;
  fVar1 = (((float)*(int *)(*DAT_00612560 + 8) * (float)_DAT_005df2b4) /
          ((float)DAT_0061b4c4 * fVar2)) * _DAT_005df2c4;
  local_8 = param_2;
  fVar3 = ABS(fVar1 / ((float)_DAT_01c4eff8 * fVar2));
  fVar1 = ABS(fVar1 / ((float)_DAT_01c4effc * fVar2));
  if (param_2 < fVar3) {
    local_8 = fVar3;
  }
  if (fVar1 <= local_8) {
    return local_8;
  }
  return fVar1;
}
