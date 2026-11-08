// Name: FUN_0057d7b0
// Address: 0057d7b0
// Address Range: [[0057d7b0, 0057d7f1]]
// Convention: unknown
// Signature: void FUN_0057d7b0(int param_1)

#include "nocturne.h"

void FUN_0057d7b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_005b86a0(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 4) = 0;
  return;
}
