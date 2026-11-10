// Name: core_flamegun.cpp_CFlameThrower_getDamage_FUN_004b9810
// Address: 004b9810
// Address Range: [[004b9810, 004b982f] [004b9831, 004b9854]]
// Convention: __cdecl
// Signature: float __cdecl core_flamegun_cpp_CFlameThrower_getDamage_FUN_004b9810(CFlameThrower *this_ptr)

#include "nocturne.h"

float __cdecl core_flamegun_cpp_CFlameThrower_getDamage_FUN_004b9810(CFlameThrower *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == AMMO_TYPE_BLANKS) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(150.0,200.0);
  return fVar1;
}
