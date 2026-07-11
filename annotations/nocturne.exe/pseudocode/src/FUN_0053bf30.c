// Name: FUN_0053bf30
// Address: 0053bf30
// Address Range: [[0053bf30, 0053bf81]]
// Convention: unknown
// Signature: void FUN_0053bf30(int param_1)

#include "nocturne.h"

void FUN_0053bf30(int param_1)

{
  *(uint *)(param_1 + 0x1faa8) = 0x40800000;
  if (*(int *)(param_1 + 0x24f0) == *(int *)(param_1 + 0x1fa94)) {
    *(uint *)(param_1 + 0x1fa94) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
  FUN_004e16b0(param_1 + 0x150,0,1);
  return;
}
