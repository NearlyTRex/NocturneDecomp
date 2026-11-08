// Name: FUN_004b22d0
// Address: 004b22d0
// Address Range: [[004b22d0, 004b239c]]
// Convention: unknown
// Signature: void FUN_004b22d0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b22d0(int *param_1)

{
  int *piVar1;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (*param_1 != 0) {
    if ((0.0 < (float)param_1[2]) &&
       (param_1[2] = (int)((float)param_1[2] - *(float *)(0x01CCF390 + 0x294)),
       (float)param_1[2] < 0.0)) {
      param_1[1] = 1;
      param_1[2] = 0;
    }
    param_1[6] = (int)(*(float *)(0x01CCF390 + 0x294) + (float)param_1[6]);
    if ((float)_DAT_005df3f4 < (float)param_1[6]) {
      param_1[6] = (int)((float)param_1[6] + _DAT_005df3fc);
      local_18 = 0;
      local_14 = 0x3f800000;
      piVar1 = param_1 + 7;
      local_10 = 0;
      do {
        FUN_004b5b30(0x01C57074,piVar1,0x3f800000,&local_18,0xffff);
        piVar1 = piVar1 + 3;
      } while (piVar1 != param_1 + 0x10);
    }
  }
  return;
}
