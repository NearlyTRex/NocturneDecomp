// Name: core_baron.cpp_CBaronWeapon_dtor_FUN_00410730
// Address: 00410730
// Address Range: [[00410730, 0041077d]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00410730(CBaronWeapon *this_ptr,uint flags)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00410730(CBaronWeapon *this_ptr,uint flags)

{
  CBaronWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBaronWeaponTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
