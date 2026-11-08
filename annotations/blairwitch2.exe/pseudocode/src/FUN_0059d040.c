// Name: FUN_0059d040
// Address: 0059d040
// Address Range: [[0059d040, 0059d0a0]]
// Convention: unknown
// Signature: undefined4 FUN_0059d040(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0059d040(int param_1)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x700) <= 0.0) {
    return 0;
  }
  fVar1 = (float)_DAT_005ef7d9;
  *(float *)(param_1 + 0x6e8) = *(float *)(param_1 + 0x6e8) + _DAT_005ef7d1;
  FUN_0044d060(param_1 + 0x6d8,param_1 + 0x6e4,*(uint *)(param_1 + 0x6f4),
               *(float *)(param_1 + 0x6f0) * fVar1);
  return 1;
}
