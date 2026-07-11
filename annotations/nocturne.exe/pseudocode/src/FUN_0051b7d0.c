// Name: FUN_0051b7d0
// Address: 0051b7d0
// Address Range: [[0051b7d0, 0051b7f5]]
// Convention: unknown
// Signature: void FUN_0051b7d0(int param_1)

#include "nocturne.h"

void FUN_0051b7d0(int param_1)

{
  if (*(int *)(param_1 + 0x2234) == 0) {
    return;
  }
  FUN_00564486(*(int *)(param_1 + 0x2234));
  *(uint *)(param_1 + 0x2234) = 0;
  return;
}
