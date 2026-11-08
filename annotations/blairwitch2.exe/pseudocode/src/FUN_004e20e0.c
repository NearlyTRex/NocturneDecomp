// Name: FUN_004e20e0
// Address: 004e20e0
// Address Range: [[004e20e0, 004e213d]]
// Convention: unknown
// Signature: void FUN_004e20e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e20e0(int param_1)

{
  *(uint *)(param_1 + 0x574) = 1;
  if (*(float *)(param_1 + 0x438) < (float)_DAT_005dbf52) {
    *(uint *)(param_1 + 0x578) = 0x3f800000;
    return;
  }
  *(uint *)(param_1 + 0x578) = 0;
  return;
}
