// Name: FUN_004c9dd0
// Address: 004c9dd0
// Address Range: [[004c9dd0, 004c9e32]]
// Convention: unknown
// Signature: undefined4 FUN_004c9dd0(int param_1)

#include "nocturne.h"

uint FUN_004c9dd0(int param_1)

{
  int iVar1;
  
  if (((((*(byte *)(param_1 + 0x1ffac) & 2) != 0) && (1.0 <= *(float *)(param_1 + 0x1ffb4))) &&
      (1.0 <= *(float *)(param_1 + 0x1ffe8))) &&
     ((*(float *)(param_1 + 0x1ffe4) <= 0.0 &&
      (iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1fe20) + 0x154) + 0xe8))
                         (*(int *)(param_1 + 0x1fe20)), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}
