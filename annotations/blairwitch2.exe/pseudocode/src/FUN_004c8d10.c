// Name: FUN_004c8d10
// Address: 004c8d10
// Address Range: [[004c8d10, 004c8d9b]]
// Convention: unknown
// Signature: void FUN_004c8d10(int param_1,undefined4 *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8d10(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040cfc0(0,3);
  uVar2 = 0x01E661B8;
  *(uint *)(param_1 + 0x14) = uVar1;
  *(uint *)(param_1 + 4) = *param_2;
  uVar2 = FUN_00534ea0(uVar2,param_2,0);
  *(uint *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 0xc) = param_2[2];
  *(uint *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + _DAT_005d94ea;
  *(int *)(param_1 + 0x1c) = (int)ROUND(*(float *)(param_1 + 4) * _DAT_005f7ba8);
  *(int *)(param_1 + 0x20) = (int)ROUND(*(float *)(param_1 + 8) * _DAT_005f7ba8);
  *(int *)(param_1 + 0x24) = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005f7ba8);
  *(uint *)(param_1 + 0x10) = param_3;
  return;
}
