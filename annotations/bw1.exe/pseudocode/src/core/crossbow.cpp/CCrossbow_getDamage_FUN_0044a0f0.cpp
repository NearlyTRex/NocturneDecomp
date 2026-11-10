// Name: core_crossbow.cpp_CCrossbow_getDamage_FUN_0044a0f0
// Address: 0044a0f0
// Address Range: [[0044a0f0, 0044a116]]
// Convention: __cdecl
// Signature: float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_0044a0f0(CCrossbow *this_ptr)

#include "nocturne.h"

float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_0044a0f0(CCrossbow *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
  return fVar1;
}
