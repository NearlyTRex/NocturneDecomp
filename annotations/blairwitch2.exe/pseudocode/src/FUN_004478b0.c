// Name: FUN_004478b0
// Address: 004478b0
// Address Range: [[004478b0, 004478cf]]
// Convention: unknown
// Signature: void FUN_004478b0(int param_1)

#include "nocturne.h"

void FUN_004478b0(int param_1)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x48));
  *(uint *)(param_1 + 0x48) = 0;
  return;
}
