// Name: FUN_0044cdf0
// Address: 0044cdf0
// Address Range: [[0044cdf0, 0044ce54]]
// Convention: unknown
// Signature: void FUN_0044cdf0(int param_1)

#include "nocturne.h"

void FUN_0044cdf0(int param_1)

{
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x160));
  }
  *(uint *)(param_1 + 0x160) = 0;
  *(uint *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x164));
  }
  *(uint *)(param_1 + 0x164) = 0;
  *(uint *)(param_1 + 0x1d0) = 0;
  *(uint *)(param_1 + 0x15c) = 0;
  return;
}
