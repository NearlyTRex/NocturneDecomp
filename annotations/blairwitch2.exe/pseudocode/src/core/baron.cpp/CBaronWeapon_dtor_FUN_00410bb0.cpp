// Name: core_baron.cpp_CBaronWeapon_dtor_FUN_00410bb0
// Address: 00410bb0
// Address Range: [[00410bb0, 00410bfd]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00410bb0(CBaronWeapon *this_ptr,uint flags)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00410bb0(CBaronWeapon *this_ptr,uint flags)

{
  CBaronWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBaronWeaponTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
