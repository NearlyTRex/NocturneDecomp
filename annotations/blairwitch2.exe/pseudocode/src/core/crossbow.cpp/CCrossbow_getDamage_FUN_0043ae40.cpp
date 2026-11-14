// Name: core_crossbow.cpp_CCrossbow_getDamage_FUN_0043ae40
// Address: 0043ae40
// Address Range: [[0043ae40, 0043ae66]]
// Convention: __cdecl
// Signature: float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_0043ae40(CCrossbow *this_ptr)

#include "nocturne.h"

float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_0043ae40(CCrossbow *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
  return fVar1;
}
