// Name: core_tommygun.cpp_CTommyGun_getDamage_FUN_00546470
// Address: 00546470
// Address Range: [[00546470, 00546496]]
// Convention: __cdecl
// Signature: float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_00546470(CTommyGun *this_ptr)

#include "nocturne.h"

float __cdecl core_tommygun_cpp_CTommyGun_getDamage_FUN_00546470(CTommyGun *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,15.0);
  return fVar1;
}
