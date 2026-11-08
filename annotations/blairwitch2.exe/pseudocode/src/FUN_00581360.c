// Name: FUN_00581360
// Address: 00581360
// Address Range: [[00581360, 00581388]]
// Convention: unknown
// Signature: undefined4 FUN_00581360(int param_1)

#include "nocturne.h"

uint FUN_00581360(int param_1)

{
  if ((0.0 < *(float *)(param_1 + 0x25a8)) && (*(int *)(param_1 + 0x10cb4) != 3)) {
    return 1;
  }
  return 0;
}
