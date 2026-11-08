// Name: FUN_004cdff0
// Address: 004cdff0
// Address Range: [[004cdff0, 004ce08d]]
// Convention: unknown
// Signature: void FUN_004cdff0(int param_1,undefined4 *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cdff0(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040cea0(0,3);
  uVar2 = 0x01ED78C8;
  *(uint *)(param_1 + 0x18) = uVar1;
  *(uint *)(param_1 + 4) = *param_2;
  uVar2 = FUN_0053bc80(uVar2,param_2,0);
  *(uint *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 0xc) = param_2[2];
  *(uint *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + _DAT_005c46e9;
  *(int *)(param_1 + 0x20) = (int)ROUND(*(float *)(param_1 + 4) * _DAT_005e0e18);
  *(int *)(param_1 + 0x24) = (int)ROUND(*(float *)(param_1 + 8) * _DAT_005e0e18);
  *(int *)(param_1 + 0x28) = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005e0e18);
  *(uint *)(param_1 + 0x10) = param_3;
  *(uint *)(param_1 + 0x14) = *(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
