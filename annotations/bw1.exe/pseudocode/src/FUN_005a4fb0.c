// Name: FUN_005a4fb0
// Address: 005a4fb0
// Address Range: [[005a4fb0, 005a4fd8]]
// Convention: unknown
// Signature: undefined4 FUN_005a4fb0(int param_1)

#include "nocturne.h"

uint FUN_005a4fb0(int param_1)

{
  if ((0.0 < *(float *)(param_1 + 0x2538)) && (*(int *)(param_1 + 0xc424) != 3)) {
    return 1;
  }
  return 0;
}
