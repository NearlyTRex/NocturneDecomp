// Name: FUN_00420dc0
// Address: 00420dc0
// Address Range: [[00420dc0, 00420eda]]
// Convention: unknown
// Signature: float FUN_00420dc0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00420dc0(float *param_1)

{
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = (int)ROUND((*param_1 + param_1[3]) * _DAT_005d4bc4 * _DAT_005fce08);
  local_24 = (int)ROUND((param_1[1] + param_1[4]) * _DAT_005d4bc4 * _DAT_005fce08);
  local_20 = (int)ROUND((param_1[2] + param_1[5]) * _DAT_005d4bc4 * _DAT_005fce08);
  FUN_00580173(*DAT_00612560 + 0xea5d0,&local_28);
  if (0 < *(int *)(*DAT_00612560 + 0xea5d8)) {
    return ABS(((float)_DAT_01c4effc *
               ((param_1[4] - param_1[1]) /
               ((float)*(int *)(*DAT_00612560 + 0xea5d8) * (float)_DAT_005d4bc8))) /
               (float)DAT_0061b4c4);
  }
  return 99999.0;
}
