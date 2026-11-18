// Name: core_tommygun.cpp_CTommyGun_dtor_FUN_00598fc0
// Address: 00598fc0
// Address Range: [[00598fc0, 0059900d]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_00598fc0(CTommyGun *this_ptr,uint flags)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_00598fc0(CTommyGun *this_ptr,uint flags)

{
  CTommyGun *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTommyGunTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CTommyGun *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
