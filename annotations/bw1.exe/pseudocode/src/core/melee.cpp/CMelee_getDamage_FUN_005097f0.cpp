// Name: core_melee.cpp_CMelee_getDamage_FUN_005097f0
// Address: 005097f0
// Address Range: [[005097f0, 0050981f]]
// Convention: __cdecl
// Signature: float __cdecl core_melee_cpp_CMelee_getDamage_FUN_005097f0(CMelee *this_ptr)

#include "nocturne.h"

float __cdecl core_melee_cpp_CMelee_getDamage_FUN_005097f0(CMelee *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                    (this_ptr->strength_lo,this_ptr->strength_hi);
  return fVar1;
}
