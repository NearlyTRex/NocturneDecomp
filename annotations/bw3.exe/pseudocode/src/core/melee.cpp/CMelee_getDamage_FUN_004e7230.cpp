// Name: core_melee.cpp_CMelee_getDamage_FUN_004e7230
// Address: 004e7230
// Address Range: [[004e7230, 004e725f]]
// Convention: __cdecl
// Signature: float __cdecl core_melee_cpp_CMelee_getDamage_FUN_004e7230(CMelee *this_ptr)

#include "nocturne.h"

float __cdecl core_melee_cpp_CMelee_getDamage_FUN_004e7230(CMelee *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                    (this_ptr->strength_lo,this_ptr->strength_hi);
  return fVar1;
}
