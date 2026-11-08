// Name: FUN_004351e0
// Address: 004351e0
// Address Range: [[004351e0, 0043526e]]
// Convention: unknown
// Signature: void FUN_004351e0(int param_1)

#include "nocturne.h"

void FUN_004351e0(int param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 4);
  if (puVar1 != (uint *)0x0) {
    if ((*(int *)(param_1 + 0xc) != 0) && (puVar1 != (uint *)0x0)) {
      (**(code **)*puVar1)(puVar1,2);
    }
    *(uint *)(param_1 + 4) = 0;
  }
  puVar1 = *(uint **)(param_1 + 8);
  if (puVar1 != (uint *)0x0) {
    if ((*(int *)(param_1 + 0xc) != 0) && (puVar1 != (uint *)0x0)) {
      (**(code **)*puVar1)(puVar1,2);
    }
    *(uint *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x10));
    *(uint *)(param_1 + 0x10) = 0;
  }
  *(uint *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0xc) = 0;
  return;
}
