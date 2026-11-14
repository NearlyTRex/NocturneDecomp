// Name: core_turret.cpp_CTurret_getDamage_FUN_0057fbc0
// Address: 0057fbc0
// Address Range: [[0057fbc0, 0057fbe6]]
// Convention: __cdecl
// Signature: float __cdecl core_turret_cpp_CTurret_getDamage_FUN_0057fbc0(CTurret *this_ptr)

#include "nocturne.h"

float __cdecl core_turret_cpp_CTurret_getDamage_FUN_0057fbc0(CTurret *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
  return fVar1;
}
