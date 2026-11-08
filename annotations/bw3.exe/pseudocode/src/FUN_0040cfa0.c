// Name: FUN_0040cfa0
// Address: 0040cfa0
// Address Range: [[0040cfa0, 0040d052]]
// Convention: unknown
// Signature: float FUN_0040cfa0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0040cfa0(float param_1)

{
  double dVar1;
  uint local_4;
  
  if (param_1 < _DAT_005b5f09) {
    dVar1 = (double)FUN_005a3600((double)((param_1 + _DAT_005b5f0d) * (float)_DAT_005b5f21));
    local_4 = ((float)dVar1 + 1.0) * (float)_DAT_005b5f29 + param_1;
  }
  else {
    if (_DAT_005b5f0d < param_1) {
      dVar1 = (double)FUN_005a3600((double)((param_1 + _DAT_005b5f09) * (float)_DAT_005b5f11));
      return ((float)dVar1 + 1.0) * (float)_DAT_005b5f19 + param_1;
    }
    local_4 = param_1;
  }
  return local_4;
}
