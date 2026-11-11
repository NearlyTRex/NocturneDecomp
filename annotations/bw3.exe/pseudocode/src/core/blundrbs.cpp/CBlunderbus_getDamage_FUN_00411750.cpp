// Name: core_blundrbs.cpp_CBlunderbus_getDamage_FUN_00411750
// Address: 00411750
// Address Range: [[00411750, 0041178f]]
// Convention: __cdecl
// Signature: float __cdecl core_blundrbs_cpp_CBlunderbus_getDamage_FUN_00411750(CBlunderbus *this_ptr)

#include "nocturne.h"

float __cdecl core_blundrbs_cpp_CBlunderbus_getDamage_FUN_00411750(CBlunderbus *this_ptr)

{
  float fVar1;
  
  if ((this_ptr->base).ammo_type == AMMO_TYPE_BLANKS) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(150.0,200.0);
  return fVar1;
}
