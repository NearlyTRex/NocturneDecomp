// Name: FUN_004cd450
// Address: 004cd450
// Address Range: [[004cd450, 004cd502]]
// Convention: unknown
// Signature: void FUN_004cd450(undefined4 *param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cd450(uint *param_1,float *param_2,uint param_3)

{
  uint uVar1;
  
  param_1[5] = 0;
  if ((float *)(param_1 + 1) != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  uVar1 = FUN_0040cea0(0,3);
  param_1[0xb] = uVar1;
  param_1[10] = 0;
  param_1[0xc] = (int)ROUND(*param_2 * _DAT_005e0e18);
  param_1[0xd] = (int)ROUND(param_2[1] * _DAT_005e0e18);
  param_1[0xe] = (int)ROUND(param_2[2] * _DAT_005e0e18);
  param_1[0xf] = 0;
  param_1[0x10] = 0xffff;
  param_1[0x11] = 0;
  param_1[6] = param_3;
  *param_1 = 0;
  param_1[9] = 0;
  param_1[8] = param_1[9];
  param_1[7] = param_1[8];
  param_1[4] = *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
