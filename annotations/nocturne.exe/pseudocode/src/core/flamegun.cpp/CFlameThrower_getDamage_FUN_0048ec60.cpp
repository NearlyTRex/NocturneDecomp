// Name: core_flamegun.cpp_CFlameThrower_getDamage_FUN_0048ec60
// Address: 0048ec60
// Address Range: [[0048ec60, 0048ec7f] [0048ec81, 0048eca4]]
// Convention: __cdecl
// Signature: float __cdecl core_flamegun_cpp_CFlameThrower_getDamage_FUN_0048ec60(CFlameThrower *this_ptr)

#include "nocturne.h"

float __cdecl core_flamegun_cpp_CFlameThrower_getDamage_FUN_0048ec60(CFlameThrower *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(150.0,200.0);
  return fVar1;
}
