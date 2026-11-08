// Name: FUN_00578550
// Address: 00578550
// Address Range: [[00578550, 00578568]]
// Convention: unknown
// Signature: void FUN_00578550(int param_1)

#include "nocturne.h"

void FUN_00578550(int param_1)

{
  if (*(int *)(param_1 + 0x2d0) != 4) {
    return;
  }
  *(uint *)(param_1 + 0x44c) = 1;
  return;
}
