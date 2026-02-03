// Name: core_lightgun.cpp_CLightGun_dtor_FUN_00506a50
// Address: 00506a50
// Address Range: [[00506a50, 00506a9d]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_00506a50(CLightGun *this_ptr,uint flags)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_00506a50(CLightGun *this_ptr,uint flags)

{
  CLightGun *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightGunTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CLightGun *)core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
