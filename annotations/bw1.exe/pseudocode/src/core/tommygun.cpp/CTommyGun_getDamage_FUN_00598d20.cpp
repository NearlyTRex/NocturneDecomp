// Name: core_tommygun.cpp_CTommyGun_getDamage_FUN_00598d20
// Address: 00598d20
// Address Range: [[00598d20, 00598d46]]
// Convention: __cdecl
// Signature: float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_00598d20(CTommyGun *this_ptr)

#include "nocturne.h"

float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_00598d20(CTommyGun *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
  return fVar1;
}
