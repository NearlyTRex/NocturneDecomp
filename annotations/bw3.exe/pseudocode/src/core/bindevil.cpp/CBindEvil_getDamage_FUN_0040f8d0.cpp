// Name: core_bindevil.cpp_CBindEvil_getDamage_FUN_0040f8d0
// Address: 0040f8d0
// Address Range: [[0040f8d0, 0040f8f6]]
// Convention: __cdecl
// Signature: float __cdecl core_bindevil_cpp_CBindEvil_getDamage_FUN_0040f8d0(CBindEvil *this_ptr)

#include "nocturne.h"

float __cdecl core_bindevil_cpp_CBindEvil_getDamage_FUN_0040f8d0(CBindEvil *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,25.0);
  return fVar1;
}
