// Name: FUN_00458890
// Address: 00458890
// Address Range: [[00458890, 004589d9]]
// Convention: unknown
// Signature: undefined4 FUN_00458890(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00458890(float *param_1)

{
  if ((((((float)_DAT_005d7d3b <= *param_1) || ((float)_DAT_005d7d3b <= param_1[1])) ||
       ((float)_DAT_005d7d3b <= param_1[2])) ||
      ((*param_1 <= (float)_DAT_005d7d43 || (param_1[1] <= (float)_DAT_005d7d43)))) ||
     (param_1[2] <= (float)_DAT_005d7d43)) {
    if (((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
       (((float)_DAT_005d7d3b < param_1[2] &&
        (((param_1[2] < (float)_DAT_005d7d4b && (*param_1 <= param_1[2])) &&
         (param_1[1] <= param_1[2])))))) {
      return 1;
    }
    if ((((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
        ((1.0 < param_1[2] && ((param_1[2] < (float)_DAT_005d7d3b && (*param_1 < param_1[2])))))) &&
       (param_1[1] < param_1[2])) {
      return 3;
    }
  }
  return 0;
}
