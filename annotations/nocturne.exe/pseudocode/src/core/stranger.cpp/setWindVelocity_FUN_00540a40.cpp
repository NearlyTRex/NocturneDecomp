// Name: core_stranger.cpp_setWindVelocity_FUN_00540a40
// Address: 00540a40
// Address Range: [[00540a40, 00540a62]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_setWindVelocity_FUN_00540a40(CCloth *cloth_ptr,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_stranger_cpp_setWindVelocity_FUN_00540a40(CCloth *cloth_ptr,CVector3f *velocity)

{
  if (&cloth_ptr->wind_velocity == velocity) {
    return;
  }
  (cloth_ptr->wind_velocity).x = velocity->x;
  (cloth_ptr->wind_velocity).y = velocity->y;
  (cloth_ptr->wind_velocity).z = velocity->z;
  return;
}
