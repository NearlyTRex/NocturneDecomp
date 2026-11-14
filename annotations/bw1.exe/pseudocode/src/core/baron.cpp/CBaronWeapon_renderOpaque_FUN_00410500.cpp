// Name: core_baron.cpp_CBaronWeapon_renderOpaque_FUN_00410500
// Address: 00410500
// Address Range: [[00410500, 0041050d]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaronWeapon_renderOpaque_FUN_00410500(CBaronWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_renderOpaque_FUN_00410500(CBaronWeapon *this_ptr)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_renderOpaque_FUN_005ad680(&this_ptr->base);
  return iVar1;
}
