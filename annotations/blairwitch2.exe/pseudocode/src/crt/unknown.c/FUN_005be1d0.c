// Name: crt_unknown.c_FUN_005be1d0
// Address: 005be1d0
// Address Range: [[005be1d0, 005be260]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005be1d0(undefined4 *param_1)

#include "nocturne.h"

void FUN_005be1d0(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  byte bVar3;
  
  FUN_005bf210(param_1);
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
  pvVar2 = FUN_005b8580(param_1[5]);
  *(void **)(param_1[2] + 8) = pvVar2;
  if (*(int *)(param_1[2] + 8) == 0) {
    bVar3 = *(byte *)((int)param_1 + 0xd) & 0xf8;
    *(byte *)((int)param_1 + 0xd) = bVar3;
    *(byte *)((int)param_1 + 0xd) = bVar3 | 4;
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
