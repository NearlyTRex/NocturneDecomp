// Name: core_lightgun.cpp_CLightGun_dtor_FUN_004c8040
// Address: 004c8040
// Address Range: [[004c8040, 004c808d]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_004c8040(CLightGun *this_ptr,uint flags)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_004c8040(CLightGun *this_ptr,uint flags)

{
  CLightGun *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLightGunTypeInfo_0059fe90);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CLightGun *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
