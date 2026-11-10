// Name: core_lightgun.cpp_CLightGun_getDamage_FUN_004e3ad0
// Address: 004e3ad0
// Address Range: [[004e3ad0, 004e3b0f]]
// Convention: __cdecl
// Signature: float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_004e3ad0(CLightGun *this_ptr)

#include "nocturne.h"

float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_004e3ad0(CLightGun *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == AMMO_TYPE_BLANKS) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,35.0);
  return fVar1;
}
