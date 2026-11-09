// Name: core_lightgun.cpp_CLightGun_getDamage_FUN_004e3ad0
// Address: 004e3ad0
// Address Range: [[004e3ad0, 004e3b0f]]
// Convention: __cdecl
// Signature: float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_004e3ad0(CLightGun *this_ptr)

#include "nocturne.h"

float __cdecl core_lightgun_cpp_CLightGun_getDamage_FUN_004e3ad0(CLightGun *this_ptr)

{
  float fVar1;
  
  if (*(int *)&this_ptr->field_0x6c8 == 6) {
    return 0.0;
  }
  fVar1 = (float)core_actor_cpp_FUN_0040cf60(0x41700000,0x420c0000);
  return fVar1;
}
