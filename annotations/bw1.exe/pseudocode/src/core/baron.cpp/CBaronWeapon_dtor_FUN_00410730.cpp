// Name: core_baron.cpp_CBaronWeapon_dtor_FUN_00410730
// Address: 00410730
// Address Range: [[00410730, 0041077d]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00410730(CBaronWeapon *this_ptr,uint flags)

#include "nocturne.h"

CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_00410730(CBaronWeapon *this_ptr,uint flags)

{
  CBaronWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBaronWeaponTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CBaronWeapon *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
