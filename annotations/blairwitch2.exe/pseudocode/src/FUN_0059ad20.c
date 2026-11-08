// Name: FUN_0059ad20
// Address: 0059ad20
// Address Range: [[0059ad20, 0059ad91]]
// Convention: unknown
// Signature: void FUN_0059ad20(int param_1,int param_2)

#include "nocturne.h"

void FUN_0059ad20(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = FUN_0040cfc0(10,DAT_006141b8 + -0x14);
  *(uint *)(param_1 + 4) = uVar1;
  uVar1 = FUN_0040cfc0(10,DAT_006141bc + -0x14);
  *(uint *)(param_1 + 8) = uVar1;
  uVar1 = FUN_0040cfc0(*(int *)(param_1 + 4) + 5,DAT_006141b8 + -10);
  *(uint *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_0040cfc0(*(int *)(param_1 + 8) + 5,DAT_006141bc + -10);
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}
