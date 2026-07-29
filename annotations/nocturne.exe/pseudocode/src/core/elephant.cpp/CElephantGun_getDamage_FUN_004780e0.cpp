// Name: core_elephant.cpp_CElephantGun_getDamage_FUN_004780e0
// Address: 004780e0
// Address Range: [[004780e0, 0047811f]]
// Convention: __cdecl
// Signature: float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_004780e0(CElephantGun *this_ptr)

#include "nocturne.h"

float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_004780e0(CElephantGun *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(450.0,600.0);
  return fVar1;
}
