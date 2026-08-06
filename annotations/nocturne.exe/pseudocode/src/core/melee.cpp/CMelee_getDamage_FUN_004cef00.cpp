// Name: core_melee.cpp_CMelee_getDamage_FUN_004cef00
// Address: 004cef00
// Address Range: [[004cef00, 004cef2f]]
// Convention: __cdecl
// Signature: float __cdecl core_melee_cpp_CMelee_getDamage_FUN_004cef00(CMelee *this_ptr)

#include "nocturne.h"

float __cdecl core_melee_cpp_CMelee_getDamage_FUN_004cef00(CMelee *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                    (this_ptr->strength_lo,this_ptr->strength_hi);
  return fVar1;
}
