// Name: FUN_00487a20
// Address: 00487a20
// Address Range: [[00487a20, 00487aec]]
// Convention: unknown
// Signature: void FUN_00487a20(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487a20(int *param_1)

{
  int *piVar1;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (*param_1 != 0) {
    if ((0.0 < (float)param_1[2]) &&
       (param_1[2] = (int)((float)param_1[2] - *(float *)(0x01C775EC + 0x264)),
       (float)param_1[2] < 0.0)) {
      param_1[1] = 1;
      param_1[2] = 0;
    }
    param_1[6] = (int)(*(float *)(0x01C775EC + 0x264) + (float)param_1[6]);
    if ((float)_DAT_005812ac < (float)param_1[6]) {
      param_1[6] = (int)((float)param_1[6] + _DAT_005812b4);
      local_18 = 0;
      local_14 = 0x3f800000;
      piVar1 = param_1 + 7;
      local_10 = 0;
      do {
        FUN_0048afe0(0x01C08D04,piVar1,0x3f800000,&local_18,0xffff);
        piVar1 = piVar1 + 3;
      } while (piVar1 != param_1 + 0x10);
    }
  }
  return;
}
