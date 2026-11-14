// Name: core_elephant.cpp_CElephantGun_getDamage_FUN_0049eaf0
// Address: 0049eaf0
// Address Range: [[0049eaf0, 0049eb2f]]
// Convention: __cdecl
// Signature: float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_0049eaf0(CElephantGun *this_ptr)

#include "nocturne.h"

float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_0049eaf0(CElephantGun *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == AMMO_TYPE_BLANKS) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(450.0,600.0);
  return fVar1;
}
