// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
// Address: 0040cd60
// Address Range: [[0040cd60, 0040ce12]]
// Convention: unknown
// Signature: float core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(float param_1)

{
  double dVar1;
  uint local_4;
  
  if (param_1 < _DAT_005d2eb9) {
    dVar1 = floor
                      ((double)((param_1 + _DAT_005d2ebd) * (float)_DAT_005d2ed1));
    local_4 = ((float)dVar1 + 1.0) * (float)_DAT_005d2ed9 + param_1;
  }
  else {
    if (_DAT_005d2ebd < param_1) {
      dVar1 = floor
                        ((double)((param_1 + _DAT_005d2eb9) * (float)_DAT_005d2ec1));
      return ((float)dVar1 + 1.0) * (float)_DAT_005d2ec9 + param_1;
    }
    local_4 = param_1;
  }
  return local_4;
}
