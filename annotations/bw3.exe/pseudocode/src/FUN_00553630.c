// Name: FUN_00553630
// Address: 00553630
// Address Range: [[00553630, 00553655]]
// Convention: unknown
// Signature: void FUN_00553630(int param_1)

#include "nocturne.h"

void FUN_00553630(int param_1)

{
  if (*(int *)(param_1 + 0x120) == 0) {
    return;
  }
  FUN_005a3770(*(int *)(param_1 + 0x120));
  *(uint *)(param_1 + 0x120) = 0;
  return;
}
