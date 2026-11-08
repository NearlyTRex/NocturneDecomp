// Name: FUN_0041ae50
// Address: 0041ae50
// Address Range: [[0041ae50, 0041af6a]]
// Convention: unknown
// Signature: float FUN_0041ae50(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0041ae50(float *param_1)

{
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = (int)ROUND((*param_1 + param_1[3]) * _DAT_005cc4d5 * _DAT_005f39d8);
  local_24 = (int)ROUND((param_1[1] + param_1[4]) * _DAT_005cc4d5 * _DAT_005f39d8);
  local_20 = (int)ROUND((param_1[2] + param_1[5]) * _DAT_005cc4d5 * _DAT_005f39d8);
  FUN_0055d723(*DAT_0060b280 + 0xea5d0,&local_28);
  if (0 < *(int *)(*DAT_0060b280 + 0xea5d8)) {
    return ABS(((float)_DAT_01c35e3c *
               ((param_1[4] - param_1[1]) /
               ((float)*(int *)(*DAT_0060b280 + 0xea5d8) * (float)_DAT_005cc4d9))) /
               (float)DAT_006141e4);
  }
  return 99999.0;
}
