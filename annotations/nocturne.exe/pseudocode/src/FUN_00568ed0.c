// Name: FUN_00568ed0
// Address: 00568ed0
// Address Range: [[00568ed0, 00568f60]]
// Convention: unknown
// Signature: void FUN_00568ed0(undefined4 *param_1)

#include "nocturne.h"

void FUN_00568ed0(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  
  FUN_0056bbb0(param_1);
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
  uVar1 = FUN_005635b0(param_1[5]);
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
