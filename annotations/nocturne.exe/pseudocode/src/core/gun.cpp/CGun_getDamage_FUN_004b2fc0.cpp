// Name: core_gun.cpp_CGun_getDamage_FUN_004b2fc0
// Address: 004b2fc0
// Address Range: [[004b2fc0, 004b2fe6]]
// Convention: __cdecl
// Signature: float __cdecl core_gun_cpp_CGun_getDamage_FUN_004b2fc0(CGun *this_ptr)

#include "nocturne.h"

float __cdecl core_gun_cpp_CGun_getDamage_FUN_004b2fc0(CGun *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,15.0);
  return fVar1;
}
