// Name: core_stranger.cpp_setWindVelocity_FUN_005c6970
// Address: 005c6970
// Address Range: [[005c6970, 005c6992]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_setWindVelocity_FUN_005c6970(CCloth *cloth_ptr,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_stranger_cpp_setWindVelocity_FUN_005c6970(CCloth *cloth_ptr,CVector3f *velocity)

{
  if (&cloth_ptr->wind_velocity == velocity) {
    return;
  }
  (cloth_ptr->wind_velocity).x = velocity->x;
  (cloth_ptr->wind_velocity).y = velocity->y;
  (cloth_ptr->wind_velocity).z = velocity->z;
  return;
}
