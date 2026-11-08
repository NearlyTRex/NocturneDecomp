// Name: FUN_005760d0
// Address: 005760d0
// Address Range: [[005760d0, 005760f8]]
// Convention: unknown
// Signature: undefined4 FUN_005760d0(int param_1)

#include "nocturne.h"

uint FUN_005760d0(int param_1)

{
  if ((0.0 < *(float *)(param_1 + 0x2538)) && (*(int *)(param_1 + 0xd210) != 3)) {
    return 1;
  }
  return 0;
}
