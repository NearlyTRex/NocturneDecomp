// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
// Address: 0040d0c0
// Address Range: [[0040d0c0, 0040d172]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)

{
  double dVar1;
  uint local_4;
  
  if (angle_radians < _DAT_005caf3e) {
    dVar1 = floor
                      ((double)((angle_radians + _DAT_005caf42) * (float)_DAT_005caf56));
    local_4 = ((float)dVar1 + 1.0) * (float)_DAT_005caf5e + angle_radians;
  }
  else {
    if (_DAT_005caf42 < angle_radians) {
      dVar1 = floor
                        ((double)((angle_radians + _DAT_005caf3e) * (float)_DAT_005caf46));
      return ((float)dVar1 + 1.0) * (float)_DAT_005caf4e + angle_radians;
    }
    local_4 = angle_radians;
  }
  return local_4;
}
