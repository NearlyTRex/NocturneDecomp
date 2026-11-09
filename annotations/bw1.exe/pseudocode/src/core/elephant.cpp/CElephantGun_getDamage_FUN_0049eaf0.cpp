// Name: core_elephant.cpp_CElephantGun_getDamage_FUN_0049eaf0
// Address: 0049eaf0
// Address Range: [[0049eaf0, 0049eb2f]]
// Convention: __cdecl
// Signature: float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_0049eaf0(CElephantGun *this_ptr)

#include "nocturne.h"

float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_0049eaf0(CElephantGun *this_ptr)

{
  float fVar1;
  
  if (*(int *)&this_ptr->field_0x56c == 6) {
    return 0.0;
  }
  fVar1 = (float)core_actor_cpp_FUN_0040cc00(0x43e10000,0x44160000);
  return fVar1;
}
