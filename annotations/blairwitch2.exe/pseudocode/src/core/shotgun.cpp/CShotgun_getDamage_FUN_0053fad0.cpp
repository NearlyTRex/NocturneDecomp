// Name: core_shotgun.cpp_CShotgun_getDamage_FUN_0053fad0
// Address: 0053fad0
// Address Range: [[0053fad0, 0053fb0f]]
// Convention: __cdecl
// Signature: float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_0053fad0(CShotgun *this_ptr)

#include "nocturne.h"

float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_0053fad0(CShotgun *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == AMMO_TYPE_BLANKS) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(150.0,200.0);
  return fVar1;
}
