// Name: FUN_00428550
// Address: 00428550
// Address Range: [[00428550, 00428699]]
// Convention: unknown
// Signature: undefined4 FUN_00428550(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00428550(float *param_1)

{
  if ((((((float)_DAT_005d51cd <= *param_1) || ((float)_DAT_005d51cd <= param_1[1])) ||
       ((float)_DAT_005d51cd <= param_1[2])) ||
      ((*param_1 <= (float)_DAT_005d51d5 || (param_1[1] <= (float)_DAT_005d51d5)))) ||
     (param_1[2] <= (float)_DAT_005d51d5)) {
    if (((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
       (((float)_DAT_005d51cd < param_1[2] &&
        (((param_1[2] < (float)_DAT_005d51dd && (*param_1 <= param_1[2])) &&
         (param_1[1] <= param_1[2])))))) {
      return 1;
    }
    if ((((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
        ((1.0 < param_1[2] && ((param_1[2] < (float)_DAT_005d51cd && (*param_1 < param_1[2])))))) &&
       (param_1[1] < param_1[2])) {
      return 3;
    }
  }
  return 0;
}
