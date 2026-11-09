// Name: core_elephant.cpp_CElephantGun_getDamage_FUN_00487690
// Address: 00487690
// Address Range: [[00487690, 004876cf]]
// Convention: __cdecl
// Signature: float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_00487690(CElephantGun *this_ptr)

#include "nocturne.h"

float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_00487690(CElephantGun *this_ptr)

{
  float fVar1;
  
  if (*(int *)&this_ptr->field_0x56c == 6) {
    return 0.0;
  }
  fVar1 = (float)core_actor_cpp_FUN_0040ce40(0x43e10000,0x44160000);
  return fVar1;
}
