// Name: FUN_0052c1d0
// Address: 0052c1d0
// Address Range: [[0052c1d0, 0052c226]]
// Convention: unknown
// Signature: float FUN_0052c1d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0052c1d0(int param_1)

{
  uint uStack_10;
  
  uStack_10 = (float)(_DAT_01d51da0 - param_1) * (float)_DAT_005eb5e8;
  if (uStack_10 < 0.0) {
    uStack_10 = 0.0;
  }
  if (uStack_10 <= (float)_DAT_005eb5f0) {
    return uStack_10;
  }
  return 30.0;
}
