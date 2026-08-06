// Name: core_turret.cpp_CTurret_getDamage_FUN_0054aab0
// Address: 0054aab0
// Address Range: [[0054aab0, 0054aad6]]
// Convention: __cdecl
// Signature: float __cdecl core_turret_cpp_CTurret_getDamage_FUN_0054aab0(CTurret *this_ptr)

#include "nocturne.h"

float __cdecl core_turret_cpp_CTurret_getDamage_FUN_0054aab0(CTurret *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,15.0);
  return fVar1;
}
