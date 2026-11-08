// Name: FUN_004627f0
// Address: 004627f0
// Address Range: [[004627f0, 00462812]]
// Convention: unknown
// Signature: void FUN_004627f0(int param_1)

#include "nocturne.h"

void FUN_004627f0(int param_1)

{
  if (*(int *)(param_1 + 0x2f9c) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x164) = 0;
  *(uint *)(param_1 + 0x2f9c) = 0;
  return;
}
