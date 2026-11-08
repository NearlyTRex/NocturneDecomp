// Name: FUN_005ba990
// Address: 005ba990
// Address Range: [[005ba990, 005baad9]]
// Convention: unknown
// Signature: undefined4 FUN_005ba990(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005ba990(float *param_1)

{
  if ((((((float)_DAT_005fa3fc <= *param_1) || ((float)_DAT_005fa3fc <= param_1[1])) ||
       ((float)_DAT_005fa3fc <= param_1[2])) ||
      ((*param_1 <= (float)_DAT_005fa404 || (param_1[1] <= (float)_DAT_005fa404)))) ||
     (param_1[2] <= (float)_DAT_005fa404)) {
    if (((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
       (((float)_DAT_005fa3fc < param_1[2] &&
        (((param_1[2] < (float)_DAT_005fa40c && (*param_1 <= param_1[2])) &&
         (param_1[1] <= param_1[2])))))) {
      return 1;
    }
    if ((((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
        ((1.0 < param_1[2] && ((param_1[2] < (float)_DAT_005fa3fc && (*param_1 < param_1[2])))))) &&
       (param_1[1] < param_1[2])) {
      return 3;
    }
  }
  return 0;
}
