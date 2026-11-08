// Name: FUN_00503ae0
// Address: 00503ae0
// Address Range: [[00503ae0, 00503b36]]
// Convention: unknown
// Signature: float FUN_00503ae0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00503ae0(int param_1)

{
  uint uStack_10;
  
  uStack_10 = (float)(_DAT_01da6478 - param_1) * (float)_DAT_005ca3f9;
  if (uStack_10 < 0.0) {
    uStack_10 = 0.0;
  }
  if (uStack_10 <= (float)_DAT_005ca401) {
    return uStack_10;
  }
  return 30.0;
}
