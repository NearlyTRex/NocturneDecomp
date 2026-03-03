// Name: core_stranger.cpp_CCloth_setWindVelocity_FUN_005c6970
// Address: 005c6970
// Address Range: [[005c6970, 005c6992]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CCloth_setWindVelocity_FUN_005c6970(CCloth *this_ptr,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CCloth_setWindVelocity_FUN_005c6970(CCloth *this_ptr,CVector3f *velocity)

{
  if (&this_ptr->wind_velocity == velocity) {
    return;
  }
  (this_ptr->wind_velocity).x = velocity->x;
  (this_ptr->wind_velocity).y = velocity->y;
  (this_ptr->wind_velocity).z = velocity->z;
  return;
}
