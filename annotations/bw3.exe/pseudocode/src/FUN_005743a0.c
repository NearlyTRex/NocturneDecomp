// Name: FUN_005743a0
// Address: 005743a0
// Address Range: [[005743a0, 005743b9]]
// Convention: unknown
// Signature: undefined4 FUN_005743a0(int param_1)

#include "nocturne.h"

uint FUN_005743a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0xc);
}
