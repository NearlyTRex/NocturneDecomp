// Name: FUN_005a1d20
// Address: 005a1d20
// Address Range: [[005a1d20, 005a1d5a]]
// Convention: unknown
// Signature: void FUN_005a1d20(int param_1)

#include "nocturne.h"

void FUN_005a1d20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_005c09f0(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x14) = 1;
  *(uint *)(param_1 + 8) = 0;
  return;
}
