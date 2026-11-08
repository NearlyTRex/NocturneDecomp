// Name: FUN_00484e20
// Address: 00484e20
// Address Range: [[00484e20, 00484e4c]]
// Convention: unknown
// Signature: void FUN_00484e20(undefined4 *param_1)

#include "nocturne.h"

void FUN_00484e20(uint *param_1)

{
  uint uVar1;
  
  *(byte *)(param_1 + 1) = 0;
  *(byte *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  uVar1 = param_1[5];
  param_1[4] = uVar1;
  param_1[3] = uVar1;
  param_1[2] = uVar1;
  return;
}
