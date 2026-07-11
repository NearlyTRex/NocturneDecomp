// Name: FUN_0044bf70
// Address: 0044bf70
// Address Range: [[0044bf70, 0044bf8f]]
// Convention: unknown
// Signature: void FUN_0044bf70(int param_1)

#include "nocturne.h"

void FUN_0044bf70(int param_1)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_005638d0(*(int *)(param_1 + 0x48));
  *(uint *)(param_1 + 0x48) = 0;
  return;
}
