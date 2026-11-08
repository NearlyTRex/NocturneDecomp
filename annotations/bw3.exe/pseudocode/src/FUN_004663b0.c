// Name: FUN_004663b0
// Address: 004663b0
// Address Range: [[004663b0, 004663f1]]
// Convention: unknown
// Signature: void FUN_004663b0(int param_1)

#include "nocturne.h"

void FUN_004663b0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_005a3770(*(int *)(param_1 + 0x2c));
    *(uint *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_005a3770(*(int *)(param_1 + 0x34));
    *(uint *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_005a3770(*(int *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x30) = 0;
  return;
}
