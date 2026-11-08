// Name: FUN_0043e6a0
// Address: 0043e6a0
// Address Range: [[0043e6a0, 0043e6c5]]
// Convention: unknown
// Signature: void FUN_0043e6a0(int param_1)

#include "nocturne.h"

void FUN_0043e6a0(int param_1)

{
  if (*(int *)(param_1 + 0x3aafc) == 0) {
    return;
  }
  FUN_005c0336(*(int *)(param_1 + 0x3aafc));
  *(uint *)(param_1 + 0x3aafc) = 0;
  return;
}
