// Name: FUN_0054dac0
// Address: 0054dac0
// Address Range: [[0054dac0, 0054dae5]]
// Convention: unknown
// Signature: void FUN_0054dac0(int param_1)

#include "nocturne.h"

void FUN_0054dac0(int param_1)

{
  if (*(int *)(param_1 + 0x120) == 0) {
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x120));
  *(uint *)(param_1 + 0x120) = 0;
  return;
}
