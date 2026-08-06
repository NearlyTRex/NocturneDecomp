// Name: core_elephant.cpp_CElephantGun_dtor_FUN_00478310
// Address: 00478310
// Address Range: [[00478310, 0047835d]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_00478310(CElephantGun *this_ptr,uint flags)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_00478310(CElephantGun *this_ptr,uint flags)

{
  CElephantGun *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CElephantGunTypeInfo_0059cc30);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CElephantGun *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
