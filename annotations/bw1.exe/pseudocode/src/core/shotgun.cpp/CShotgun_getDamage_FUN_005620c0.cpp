// Name: core_shotgun.cpp_CShotgun_getDamage_FUN_005620c0
// Address: 005620c0
// Address Range: [[005620c0, 005620ff]]
// Convention: __cdecl
// Signature: float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_005620c0(CShotgun *this_ptr)

#include "nocturne.h"

float __cdecl core_shotgun_cpp_CShotgun_getDamage_FUN_005620c0(CShotgun *this_ptr)

{
  float fVar1;
  
  if (*(int *)&this_ptr->field_0x56c == 6) {
    return 0.0;
  }
  fVar1 = (float)core_actor_cpp_FUN_0040cc00(0x43160000,0x43480000);
  return fVar1;
}
