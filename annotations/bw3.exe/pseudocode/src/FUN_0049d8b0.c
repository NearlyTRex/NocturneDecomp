// Name: FUN_0049d8b0
// Address: 0049d8b0
// Address Range: [[0049d8b0, 0049d97c]]
// Convention: unknown
// Signature: void FUN_0049d8b0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d8b0(int *param_1)

{
  int *piVar1;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (*param_1 != 0) {
    if ((0.0 < (float)param_1[2]) &&
       (param_1[2] = (int)((float)param_1[2] - *(float *)(0x01D2130C + 0x314)),
       (float)param_1[2] < 0.0)) {
      param_1[1] = 1;
      param_1[2] = 0;
    }
    param_1[6] = (int)(*(float *)(0x01D2130C + 0x314) + (float)param_1[6]);
    if ((float)_DAT_005c0778 < (float)param_1[6]) {
      param_1[6] = (int)((float)param_1[6] + _DAT_005c0780);
      local_18 = 0;
      local_14 = 0x3f800000;
      piVar1 = param_1 + 7;
      local_10 = 0;
      do {
        FUN_004a2560(0x01C73654,piVar1,0x3f800000,&local_18,0x4000);
        piVar1 = piVar1 + 3;
      } while (piVar1 != param_1 + 0x10);
    }
  }
  return;
}
