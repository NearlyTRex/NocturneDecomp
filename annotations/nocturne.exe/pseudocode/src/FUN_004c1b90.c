// Name: FUN_004c1b90
// Address: 004c1b90
// Address Range: [[004c1b90, 004c1bef]]
// Convention: unknown
// Signature: void FUN_004c1b90(int param_1)

#include "nocturne.h"

void FUN_004c1b90(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x330) == 0) {
    return;
  }
  *(uint *)(*(int *)(param_1 + 0x458) + 0x30c) =
       *(uint *)(*(int *)(param_1 + 0x330) + 0x560);
  *(uint *)(*(int *)(param_1 + 0x458) + 0x310) =
       *(uint *)(*(int *)(param_1 + 0x330) + 0x564);
  uVar1 = FUN_00409fa0(*(uint *)(param_1 + 0x330));
  FUN_0040ed80(*(uint *)(param_1 + 0x458),uVar1);
  return;
}
