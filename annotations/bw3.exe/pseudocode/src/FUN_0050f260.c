// Name: FUN_0050f260
// Address: 0050f260
// Address Range: [[0050f260, 0050f27f]]
// Convention: unknown
// Signature: void FUN_0050f260(int param_1)

#include "nocturne.h"

void FUN_0050f260(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_005a3770(*(int *)(param_1 + 0x14));
  *(uint *)(param_1 + 0x14) = 0;
  return;
}
