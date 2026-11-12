// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
// Address: 0040cfa0
// Address Range: [[0040cfa0, 0040d052]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)

{
  double dVar1;
  uint local_4;
  
  if (angle_radians < _DAT_005b5f09) {
    dVar1 = floor
                      ((double)((angle_radians + _DAT_005b5f0d) * (float)_DAT_005b5f21));
    local_4 = ((float)dVar1 + 1.0) * (float)_DAT_005b5f29 + angle_radians;
  }
  else {
    if (_DAT_005b5f0d < angle_radians) {
      dVar1 = floor
                        ((double)((angle_radians + _DAT_005b5f09) * (float)_DAT_005b5f11));
      return ((float)dVar1 + 1.0) * (float)_DAT_005b5f19 + angle_radians;
    }
    local_4 = angle_radians;
  }
  return local_4;
}
