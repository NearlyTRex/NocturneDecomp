// Name: core_elephant.cpp_CElephantGun_getDamage_FUN_00486490
// Address: 00486490
// Address Range: [[00486490, 004864cf]]
// Convention: __cdecl
// Signature: float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_00486490(CElephantGun *this_ptr)

#include "nocturne.h"

float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_00486490(CElephantGun *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == AMMO_TYPE_BLANKS) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(450.0,600.0);
  return fVar1;
}
