// Name: core_tommygun.cpp_CTommyGun_getDamage_FUN_00576100
// Address: 00576100
// Address Range: [[00576100, 00576126]]
// Convention: __cdecl
// Signature: float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_00576100(CTommyGun *this_ptr)

#include "nocturne.h"

float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_00576100(CTommyGun *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
  return fVar1;
}
