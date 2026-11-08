// Name: FUN_005a8220
// Address: 005a8220
// Address Range: [[005a8220, 005a8243]]
// Convention: unknown
// Signature: void FUN_005a8220(int param_1)

#include "nocturne.h"

void FUN_005a8220(int param_1)

{
  *(uint *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x3c));
  return;
}
