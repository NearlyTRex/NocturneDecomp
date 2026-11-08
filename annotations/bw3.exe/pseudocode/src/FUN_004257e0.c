// Name: FUN_004257e0
// Address: 004257e0
// Address Range: [[004257e0, 00425929]]
// Convention: unknown
// Signature: undefined4 FUN_004257e0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004257e0(float *param_1)

{
  if ((((((float)_DAT_005b79af <= *param_1) || ((float)_DAT_005b79af <= param_1[1])) ||
       ((float)_DAT_005b79af <= param_1[2])) ||
      ((*param_1 <= (float)_DAT_005b79b7 || (param_1[1] <= (float)_DAT_005b79b7)))) ||
     (param_1[2] <= (float)_DAT_005b79b7)) {
    if (((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
       (((float)_DAT_005b79af < param_1[2] &&
        (((param_1[2] < (float)_DAT_005b79bf && (*param_1 <= param_1[2])) &&
         (param_1[1] <= param_1[2])))))) {
      return 1;
    }
    if ((((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
        ((1.0 < param_1[2] && ((param_1[2] < (float)_DAT_005b79af && (*param_1 < param_1[2])))))) &&
       (param_1[1] < param_1[2])) {
      return 3;
    }
  }
  return 0;
}
