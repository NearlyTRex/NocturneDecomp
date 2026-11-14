// Name: core_gun.cpp_CGun_getDamage_FUN_004d1880
// Address: 004d1880
// Address Range: [[004d1880, 004d18a6]]
// Convention: __cdecl
// Signature: float __cdecl core_gun_cpp_CGun_getDamage_FUN_004d1880(CGun *this_ptr)

#include "nocturne.h"

float __cdecl core_gun_cpp_CGun_getDamage_FUN_004d1880(CGun *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,25.0);
  return fVar1;
}
