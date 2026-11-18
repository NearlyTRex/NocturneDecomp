// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
// Address: 0040cd60
// Address Range: [[0040cd60, 0040ce12]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)

#include "nocturne.h"

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)

{
  double dVar1;
  uint local_4;
  
  if (angle_radians < -3.141593f) {
    dVar1 = floor
                      ((double)((angle_radians + 3.141593f) * (float)-0.15915494309644401));
    local_4 = ((float)dVar1 + 1.0) * (float)6.2831853070000001 + angle_radians;
  }
  else {
    if (3.141593f < angle_radians) {
      dVar1 = floor
                        ((double)((angle_radians + -3.141593f) * (float)0.15915494309644401));
      return ((float)dVar1 + 1.0) * (float)-6.2831853070000001 + angle_radians;
    }
    local_4 = angle_radians;
  }
  return local_4;
}
