// Name: FUN_0040df00
// Address: 0040df00
// Address Range: [[0040df00, 0040dfb4]]
// Convention: unknown
// Signature: float FUN_0040df00(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0040df00(float param_1)

{
  double dVar1;
  uint local_8;
  
  dVar1 = (double)param_1;
  if (param_1 < (float)_DAT_00578069) {
    dVar1 = (double)FUN_005648c0((dVar1 + _DAT_00578071) * _DAT_00578089);
    local_8 = ((float)dVar1 + 1.0) * (float)_DAT_00578091 + param_1;
  }
  else {
    if (_DAT_00578071 < dVar1) {
      dVar1 = (double)FUN_005648c0((dVar1 + _DAT_00578069) * _DAT_00578079);
      return ((float)dVar1 + 1.0) * (float)_DAT_00578081 + param_1;
    }
    local_8 = param_1;
  }
  return local_8;
}
