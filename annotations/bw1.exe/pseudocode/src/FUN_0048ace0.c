// Name: FUN_0048ace0
// Address: 0048ace0
// Address Range: [[0048ace0, 0048ad21]]
// Convention: unknown
// Signature: void FUN_0048ace0(int param_1)

#include "nocturne.h"

void FUN_0048ace0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_005c0336(*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_005c0336(*(int *)(param_1 + 0xc));
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  return;
}
