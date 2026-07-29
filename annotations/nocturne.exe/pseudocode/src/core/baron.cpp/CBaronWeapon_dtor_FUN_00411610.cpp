// Name: core_baron.cpp_CBaronWeapon_dtor_FUN_00411610
// Address: 00411610
// Address Range: [[00411610, 0041165d]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00411610(CBaronWeapon *this_ptr,uint flags)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00411610(CBaronWeapon *this_ptr,uint flags)

{
  CBaronWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBaronWeaponTypeInfo_00599d10);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CBaronWeapon *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
