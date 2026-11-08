// Name: FUN_0041e100
// Address: 0041e100
// Address Range: [[0041e100, 0041e21a]]
// Convention: unknown
// Signature: float FUN_0041e100(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0041e100(float *param_1)

{
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = (int)ROUND((*param_1 + param_1[3]) * _DAT_005b74ad * _DAT_005dc948);
  local_24 = (int)ROUND((param_1[1] + param_1[4]) * _DAT_005b74ad * _DAT_005dc948);
  local_20 = (int)ROUND((param_1[2] + param_1[5]) * _DAT_005b74ad * _DAT_005dc948);
  FUN_005632a3(*DAT_005f2afc + 0x124f50,&local_28);
  if (0 < *(int *)(*DAT_005f2afc + 0x124f58)) {
    return ABS(((float)_DAT_01c6b59c *
               ((param_1[4] - param_1[1]) /
               ((float)*(int *)(*DAT_005f2afc + 0x124f58) * (float)_DAT_005b74b1))) /
               (float)DAT_005fba44);
  }
  return 99999.0;
}
