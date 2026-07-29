// Name: core_lightgun.cpp_CLightGun_getDamage_FUN_004c7c60
// Address: 004c7c60
// Address Range: [[004c7c60, 004c7c9f]]
// Convention: __cdecl
// Signature: float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_004c7c60(CLightGun *this_ptr)

#include "nocturne.h"

float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_004c7c60(CLightGun *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(150.0,200.0);
  return fVar1;
}
