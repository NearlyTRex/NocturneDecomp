// Name: core_rifle.cpp_CRifle_getDamage_FUN_00528610
// Address: 00528610
// Address Range: [[00528610, 0052864f]]
// Convention: __cdecl
// Signature: float __cdecl core_rifle_cpp_CRifle_getDamage_FUN_00528610(CRifle *this_ptr)

#include "nocturne.h"

float __cdecl core_rifle_cpp_CRifle_getDamage_FUN_00528610(CRifle *this_ptr)

{
  float fVar1;
  
  if (*(int *)&this_ptr->field_0x56c == 6) {
    return 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(25.0,55.0);
  return fVar1;
}
