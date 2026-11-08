// Name: FUN_0044a0c0
// Address: 0044a0c0
// Address Range: [[0044a0c0, 0044a0e8]]
// Convention: unknown
// Signature: float FUN_0044a0c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0044a0c0(int param_1)

{
  return ((float)_DAT_005d73aa - *(float *)(param_1 + 0x300)) * (float)_DAT_005d73b2 *
         (float)_DAT_005d73ba;
}
