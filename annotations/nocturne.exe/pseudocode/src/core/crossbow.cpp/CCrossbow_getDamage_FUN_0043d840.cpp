// Name: core_crossbow.cpp_CCrossbow_getDamage_FUN_0043d840
// Address: 0043d840
// Address Range: [[0043d840, 0043d866]]
// Convention: __cdecl
// Signature: float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_0043d840(CCrossbow *this_ptr)

#include "nocturne.h"

float __cdecl core_crossbow_cpp_CCrossbow_getDamage_FUN_0043d840(CCrossbow *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,15.0);
  return fVar1;
}
