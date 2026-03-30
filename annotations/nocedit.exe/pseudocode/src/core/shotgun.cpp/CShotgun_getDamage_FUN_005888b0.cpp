// Name: core_shotgun.cpp_CShotgun_getDamage_FUN_005888b0
// Address: 005888b0
// Address Range: [[005888b0, 005888da]]
// Convention: __cdecl
// Signature: float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_005888b0(CShotgun *this_ptr)

#include "nocturne.h"

float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_005888b0(CShotgun *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(150.0,200.0);
  return fVar1;
}
