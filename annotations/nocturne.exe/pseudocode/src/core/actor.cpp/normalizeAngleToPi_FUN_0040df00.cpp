// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040df00
// Address: 0040df00
// Address Range: [[0040df00, 0040dfb4]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)

#include "nocturne.h"

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)

{
  double dVar1;
  uint local_8;
  
  dVar1 = (double)angle_radians;
  if (angle_radians < (float)-3.1415926535000001) {
    dVar1 = floor((dVar1 + 3.1415926535000001) * -0.15915494309644401);
    local_8 = ((float)dVar1 + 1.0) * (float)6.2831853070000001 + angle_radians;
  }
  else {
    if (3.1415926535000001 < dVar1) {
      dVar1 = floor((dVar1 + -3.1415926535000001) * 0.15915494309644401);
      return ((float)dVar1 + 1.0) * (float)-6.2831853070000001 + angle_radians;
    }
    local_8 = angle_radians;
  }
  return local_8;
}
