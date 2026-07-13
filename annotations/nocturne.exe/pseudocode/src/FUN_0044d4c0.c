// Name: FUN_0044d4c0
// Address: 0044d4c0
// Address Range: [[0044d4c0, 0044d4e5]]
// Convention: unknown
// Signature: void FUN_0044d4c0(int param_1)

#include "nocturne.h"

void FUN_0044d4c0(int param_1)

{
  if (*(int *)(param_1 + 0x300) == 0) {
    return;
  }
  FUN_005638d0(*(int *)(param_1 + 0x300));
  *(uint *)(param_1 + 0x300) = 0;
  return;
}
