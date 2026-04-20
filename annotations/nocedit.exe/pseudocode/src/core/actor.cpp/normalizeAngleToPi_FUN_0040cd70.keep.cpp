// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
// Address: 0040cd70
// MANUAL RECONSTRUCTION
// Address Range: [[0040cd70, 0040ce24]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)

#include "nocturne.h"

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)

{
  double dVar2;
  double dVar1;
  float local_8;
  
  dVar2 = (double)angle_radians;
  if (angle_radians < (float)-3.1415926535000001) {
    dVar2 = floor((dVar2 + 3.1415926535000001) * -0.15915494309644401);
    local_8 = ((float)dVar2 + 1.0) * (float)6.2831853070000001 + angle_radians;
  }
  else {
    if (3.1415926535000001 < dVar2) {
      dVar1 = floor((dVar2 + -3.1415926535000001) * 0.15915494309644401);
      return ((float)dVar1 + 1.0) * (float)-6.2831853070000001 + angle_radians;
    }
    local_8 = angle_radians;
  }
  return local_8;
}
