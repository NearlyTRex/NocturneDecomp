// Name: FUN_00516230
// Address: 00516230
// Address Range: [[00516230, 0051624f]]
// Convention: unknown
// Signature: void FUN_00516230(int param_1)

#include "nocturne.h"

void FUN_00516230(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x14));
  *(uint *)(param_1 + 0x14) = 0;
  return;
}
