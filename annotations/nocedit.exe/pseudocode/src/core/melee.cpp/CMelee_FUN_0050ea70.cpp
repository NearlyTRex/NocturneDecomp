// Name: core_melee.cpp_CMelee_FUN_0050ea70
// Address: 0050ea70
// Address Range: [[0050ea70, 0050ea87]]
// Convention: __cdecl
// Signature: float __cdecl core_melee_cpp_CMelee_FUN_0050ea70(CMelee *this_ptr)

#include "nocturne.h"

float __cdecl core_melee_cpp_CMelee_FUN_0050ea70(CMelee *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(this_ptr->strength_lo,this_ptr->strength_hi);
  return fVar1;
}
