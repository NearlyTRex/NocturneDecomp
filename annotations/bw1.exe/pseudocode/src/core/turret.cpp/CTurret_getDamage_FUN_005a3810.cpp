// Name: core_turret.cpp_CTurret_getDamage_FUN_005a3810
// Address: 005a3810
// Address Range: [[005a3810, 005a3836]]
// Convention: __cdecl
// Signature: float __cdecl core_turret_cpp_CTurret_getDamage_FUN_005a3810(CTurret *this_ptr)

#include "nocturne.h"

float __cdecl core_turret_cpp_CTurret_getDamage_FUN_005a3810(CTurret *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
  return fVar1;
}
