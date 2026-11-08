// Name: FUN_005674d0
// Address: 005674d0
// Address Range: [[005674d0, 005674f5]]
// Convention: unknown
// Signature: void FUN_005674d0(int param_1)

#include "nocturne.h"

void FUN_005674d0(int param_1)

{
  if (*(int *)(param_1 + 0x2324) == 0) {
    return;
  }
  FUN_005c0336(*(int *)(param_1 + 0x2324));
  *(uint *)(param_1 + 0x2324) = 0;
  return;
}
