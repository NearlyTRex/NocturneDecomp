// Name: FUN_0045da10
// Address: 0045da10
// Address Range: [[0045da10, 0045da2f]]
// Convention: unknown
// Signature: void FUN_0045da10(int param_1)

#include "nocturne.h"

void FUN_0045da10(int param_1)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_005c09f0(*(int *)(param_1 + 0x48));
  *(uint *)(param_1 + 0x48) = 0;
  return;
}
