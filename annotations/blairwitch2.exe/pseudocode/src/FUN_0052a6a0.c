// Name: FUN_0052a6a0
// Address: 0052a6a0
// Address Range: [[0052a6a0, 0052a6b1]]
// Convention: unknown
// Signature: undefined4 FUN_0052a6a0(int param_1)

#include "nocturne.h"

uint FUN_0052a6a0(int param_1)

{
  return *(uint *)(param_1 + 0x5fc + *(int *)(param_1 + 0x468) * 4);
}
