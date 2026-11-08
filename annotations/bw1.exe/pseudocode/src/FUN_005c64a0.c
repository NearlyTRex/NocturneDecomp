// Name: FUN_005c64a0
// Address: 005c64a0
// Address Range: [[005c64a0, 005c6530]]
// Convention: unknown
// Signature: void FUN_005c64a0(undefined4 *param_1)

#include "nocturne.h"

void FUN_005c64a0(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  
  FUN_005c74d0(param_1);
  if (param_1[5] == 0) {
    if ((*(byte *)((int)param_1 + 0xd) & 2) == 0) {
      if ((*(byte *)((int)param_1 + 0xd) & 4) == 0) {
        param_1[5] = 0x1000;
      }
      else {
        param_1[5] = 1;
      }
    }
    else {
      param_1[5] = 0x86;
    }
  }
  uVar1 = FUN_005c08d0(param_1[5]);
  *(uint *)(param_1[2] + 8) = uVar1;
  if (*(int *)(param_1[2] + 8) == 0) {
    bVar2 = *(byte *)((int)param_1 + 0xd) & 0xf8;
    *(byte *)((int)param_1 + 0xd) = bVar2;
    *(byte *)((int)param_1 + 0xd) = bVar2 | 4;
    *(uint **)(param_1[2] + 8) = param_1 + 6;
    param_1[5] = 1;
  }
  else {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 8;
  }
  uVar1 = *(uint *)(param_1[2] + 8);
  param_1[1] = 0;
  *param_1 = uVar1;
  return;
}
