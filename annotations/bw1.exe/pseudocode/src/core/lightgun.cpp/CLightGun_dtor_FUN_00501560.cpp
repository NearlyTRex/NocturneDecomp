// Name: core_lightgun.cpp_CLightGun_dtor_FUN_00501560
// Address: 00501560
// Address Range: [[00501560, 005015ad]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_00501560(CLightGun *this_ptr,uint flags)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_00501560(CLightGun *this_ptr,uint flags)

{
  CLightGun *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightGunTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CLightGun *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
