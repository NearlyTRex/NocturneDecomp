// Name: FUN_0044d2d0
// Address: 0044d2d0
// Address Range: [[0044d2d0, 0044d429]]
// Convention: unknown
// Signature: int FUN_0044d2d0(int param_1,int *param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044d2d0(int param_1,int *param_2,int *param_3)

{
  float fVar1;
  float local_48 [6];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  
  local_30 = (float)*param_2 * _DAT_0059bff8;
  local_2c = (float)param_2[1] * _DAT_0059bff8;
  local_28 = (float)param_2[2] * _DAT_0059bff8;
  if (&local_30 != local_48) {
    local_30 = (float)*param_2 * _DAT_0059bff8 - *(float *)(param_1 + 0x24);
    local_2c = (float)param_2[1] * _DAT_0059bff8 - *(float *)(param_1 + 0x28);
    local_28 = (float)param_2[2] * _DAT_0059bff8 - *(float *)(param_1 + 0x2c);
  }
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (*(float *)(param_1 + 0x18) < fVar1) {
    return 0;
  }
  local_20 = (float)*(int *)(param_1 + 0x3c) *
             (*(float *)(param_1 + 0x18) - fVar1) * *(float *)(param_1 + 0x38);
  if (param_3 != (int *)0x0) {
    fVar1 = (float)(_DAT_01c70710 - ((int)fVar1 >> 1));
    fVar1 = local_28 * fVar1 * (float)param_3[2] * _DAT_0059bffc +
            local_30 * fVar1 * (float)*param_3 * _DAT_0059bffc +
            local_2c * fVar1 * (float)param_3[1] * _DAT_0059bffc;
    if (0.0 < fVar1) {
      return 0;
    }
    local_20 = -fVar1 * local_20;
  }
  return (int)ROUND(local_20);
}
