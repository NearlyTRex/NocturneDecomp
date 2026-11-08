// Name: FUN_005749a0
// Address: 005749a0
// Address Range: [[005749a0, 005749c9]]
// Convention: unknown
// Signature: undefined4 FUN_005749a0(int param_1)

#include "nocturne.h"

uint FUN_005749a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  FUN_005a3a90(*(int *)(param_1 + 4));
  *(uint *)(param_1 + 4) = 0;
  return 1;
}
