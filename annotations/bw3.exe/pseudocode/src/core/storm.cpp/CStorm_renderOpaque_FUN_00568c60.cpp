// Name: core_storm.cpp_CStorm_renderOpaque_FUN_00568c60
// Address: 00568c60
// Address Range: [[00568c60, 00568c7c]]
// Convention: __cdecl
// Signature: int __cdecl core_storm_cpp_CStorm_renderOpaque_FUN_00568c60(CStorm *this_ptr)

#include "nocturne.h"

int __cdecl core_storm_cpp_CStorm_renderOpaque_FUN_00568c60(CStorm *this_ptr)

{
  int iVar1;
  
  if ((*(uint *)&this_ptr->field_0x300 & 0x7fffffff) != 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_CWeapon_renderOpaque_FUN_0057af80((CWeapon *)this_ptr);
  return iVar1;
}
