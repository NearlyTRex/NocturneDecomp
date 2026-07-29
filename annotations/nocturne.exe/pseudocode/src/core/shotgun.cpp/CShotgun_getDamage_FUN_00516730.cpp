// Name: core_shotgun.cpp_CShotgun_getDamage_FUN_00516730
// Address: 00516730
// Address Range: [[00516730, 0051676f]]
// Convention: __cdecl
// Signature: float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_00516730(CShotgun *this_ptr)

#include "nocturne.h"

float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_00516730(CShotgun *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(150.0,200.0);
  return fVar1;
}
