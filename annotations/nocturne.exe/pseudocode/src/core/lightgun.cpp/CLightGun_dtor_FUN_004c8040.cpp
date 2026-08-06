// Name: core_lightgun.cpp_CLightGun_dtor_FUN_004c8040
// Address: 004c8040
// Address Range: [[004c8040, 004c808d]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_004c8040(CLightGun *this_ptr,uint flags)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_004c8040(CLightGun *this_ptr,uint flags)

{
  CLightGun *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightGunTypeInfo_0059fe90);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CLightGun *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
