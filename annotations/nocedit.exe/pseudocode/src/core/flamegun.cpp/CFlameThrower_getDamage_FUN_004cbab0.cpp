// Name: core_flamegun.cpp_CFlameThrower_getDamage_FUN_004cbab0
// Address: 004cbab0
// Address Range: [[004cbab0, 004cbacf]]
// Convention: __cdecl
// Signature: float __cdecl core_flamegun_cpp_CFlameThrower_getDamage_FUN_004cbab0(CFlameThrower *this_ptr)

#include "nocturne.h"

float __cdecl core_flamegun_cpp_CFlameThrower_getDamage_FUN_004cbab0(CFlameThrower *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(150.0,200.0);
  return fVar1;
}
