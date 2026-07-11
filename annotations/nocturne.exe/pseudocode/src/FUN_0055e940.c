// Name: FUN_0055e940
// Address: 0055e940
// Address Range: [[0055e940, 0055ea89]]
// Convention: unknown
// Signature: undefined4 FUN_0055e940(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055e940(float *param_1)

{
  if ((((((float)_DAT_005983ce <= *param_1) || ((float)_DAT_005983ce <= param_1[1])) ||
       ((float)_DAT_005983ce <= param_1[2])) ||
      ((*param_1 <= (float)_DAT_005983d6 || (param_1[1] <= (float)_DAT_005983d6)))) ||
     (param_1[2] <= (float)_DAT_005983d6)) {
    if (((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
       (((float)_DAT_005983ce < param_1[2] &&
        (((param_1[2] < (float)_DAT_005983de && (*param_1 <= param_1[2])) &&
         (param_1[1] <= param_1[2])))))) {
      return 1;
    }
    if ((((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
        ((1.0 < param_1[2] && ((param_1[2] < (float)_DAT_005983ce && (*param_1 < param_1[2])))))) &&
       (param_1[1] < param_1[2])) {
      return 3;
    }
  }
  return 0;
}
