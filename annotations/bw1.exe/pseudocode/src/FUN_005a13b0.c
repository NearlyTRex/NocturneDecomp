// Name: FUN_005a13b0
// Address: 005a13b0
// Address Range: [[005a13b0, 005a13c9]]
// Convention: unknown
// Signature: undefined4 FUN_005a13b0(int param_1)

#include "nocturne.h"

uint FUN_005a13b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0xc);
}
