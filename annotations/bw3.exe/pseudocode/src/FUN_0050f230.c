// Name: FUN_0050f230
// Address: 0050f230
// Address Range: [[0050f230, 0050f25f]]
// Convention: unknown
// Signature: void FUN_0050f230(int param_1)

#include "nocturne.h"

void FUN_0050f230(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_005a3770(*(int *)(param_1 + 0x14));
  }
  FUN_005a30b6(*(uint *)(param_1 + 0x20));
  FUN_0050f200(param_1);
  return;
}
