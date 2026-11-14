// Name: core_melee.cpp_CMelee_getDamage_FUN_004eab50
// Address: 004eab50
// Address Range: [[004eab50, 004eab7f]]
// Convention: __cdecl
// Signature: float __cdecl core_melee_cpp_CMelee_getDamage_FUN_004eab50(CMelee *this_ptr)

#include "nocturne.h"

float __cdecl core_melee_cpp_CMelee_getDamage_FUN_004eab50(CMelee *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                    (this_ptr->strength_lo,this_ptr->strength_hi);
  return fVar1;
}
