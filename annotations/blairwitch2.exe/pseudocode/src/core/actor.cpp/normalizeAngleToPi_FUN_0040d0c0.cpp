// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
// Address: 0040d0c0
// Address Range: [[0040d0c0, 0040d172]]
// Convention: unknown
// Signature: float core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(float param_1)

{
  double dVar1;
  uint local_4;
  
  if (param_1 < _DAT_005caf3e) {
    dVar1 = floor
                      ((double)((param_1 + _DAT_005caf42) * (float)_DAT_005caf56));
    local_4 = ((float)dVar1 + 1.0) * (float)_DAT_005caf5e + param_1;
  }
  else {
    if (_DAT_005caf42 < param_1) {
      dVar1 = floor
                        ((double)((param_1 + _DAT_005caf3e) * (float)_DAT_005caf46));
      return ((float)dVar1 + 1.0) * (float)_DAT_005caf4e + param_1;
    }
    local_4 = param_1;
  }
  return local_4;
}
