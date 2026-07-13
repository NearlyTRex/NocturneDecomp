// Name: FUN_004f3f80
// Address: 004f3f80
// Address Range: [[004f3f80, 004f3f9f]]
// Convention: unknown
// Signature: void FUN_004f3f80(int param_1)

#include "nocturne.h"

void FUN_004f3f80(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_005638d0(*(int *)(param_1 + 0x14));
  *(uint *)(param_1 + 0x14) = 0;
  return;
}
