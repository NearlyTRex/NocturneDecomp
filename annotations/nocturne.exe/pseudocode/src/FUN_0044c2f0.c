// Name: FUN_0044c2f0
// Address: 0044c2f0
// Address Range: [[0044c2f0, 0044c30f]]
// Convention: unknown
// Signature: void FUN_0044c2f0(int param_1)

#include "nocturne.h"

void FUN_0044c2f0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_005638d0(*(int *)(param_1 + 4));
  *(uint *)(param_1 + 4) = 0;
  return;
}
