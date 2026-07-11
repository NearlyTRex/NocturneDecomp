// Name: FUN_004ae960
// Address: 004ae960
// Address Range: [[004ae960, 004ae9fe]]
// Convention: unknown
// Signature: void FUN_004ae960(undefined4 *param_1,float *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae960(uint *param_1,float *param_2,uint param_3)

{
  uint uVar1;
  
  param_1[4] = 0;
  if ((float *)(param_1 + 1) != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  uVar1 = FUN_0040de00(0,3);
  param_1[10] = uVar1;
  param_1[9] = 0;
  param_1[0xb] = (int)ROUND(*param_2 * _DAT_0059e4d4);
  param_1[0xc] = (int)ROUND(param_2[1] * _DAT_0059e4d4);
  param_1[0xd] = (int)ROUND(param_2[2] * _DAT_0059e4d4);
  param_1[0xe] = 0;
  param_1[0xf] = 0xffff;
  param_1[0x10] = 0;
  *param_1 = 0;
  param_1[8] = 0;
  param_1[5] = param_3;
  param_1[7] = param_1[8];
  param_1[6] = param_1[7];
  return;
}
