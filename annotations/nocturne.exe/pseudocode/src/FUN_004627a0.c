// Name: FUN_004627a0
// Address: 004627a0
// Address Range: [[004627a0, 0046287b]]
// Convention: unknown
// Signature: undefined4 * FUN_004627a0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_004627a0(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2cc) != 2) {
    *param_2 = 0xbf000000;
    param_2[1] = 0;
    param_2[2] = 0xbf000000;
    param_2[3] = 0x3f000000;
    param_2[4] = 0x3f800000;
    param_2[5] = 0x3f800000;
    return param_2;
  }
  iVar2 = FUN_00454530(param_1 + 0x150);
  puVar1 = *(uint **)(iVar2 + 0x350);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  param_2[4] = puVar1[4];
  param_2[5] = puVar1[5];
  return param_2;
}
