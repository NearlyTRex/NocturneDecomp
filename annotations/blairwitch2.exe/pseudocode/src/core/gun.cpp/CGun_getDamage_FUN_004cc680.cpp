// Name: core_gun.cpp_CGun_getDamage_FUN_004cc680
// Address: 004cc680
// Address Range: [[004cc680, 004cc6a6]]
// Convention: __cdecl
// Signature: float __cdecl core_gun_cpp_CGun_getDamage_FUN_004cc680(CGun *this_ptr)

#include "nocturne.h"

float __cdecl core_gun_cpp_CGun_getDamage_FUN_004cc680(CGun *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(25.0,35.0);
  return fVar1;
}
