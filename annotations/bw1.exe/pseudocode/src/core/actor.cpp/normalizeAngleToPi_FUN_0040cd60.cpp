// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
// Address: 0040cd60
// Address Range: [[0040cd60, 0040ce12]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)

{
  double dVar1;
  uint local_4;
  
  if (angle_radians < _DAT_005d2eb9) {
    dVar1 = floor
                      ((double)((angle_radians + _DAT_005d2ebd) * (float)_DAT_005d2ed1));
    local_4 = ((float)dVar1 + 1.0) * (float)_DAT_005d2ed9 + angle_radians;
  }
  else {
    if (_DAT_005d2ebd < angle_radians) {
      dVar1 = floor
                        ((double)((angle_radians + _DAT_005d2eb9) * (float)_DAT_005d2ec1));
      return ((float)dVar1 + 1.0) * (float)_DAT_005d2ec9 + angle_radians;
    }
    local_4 = angle_radians;
  }
  return local_4;
}
