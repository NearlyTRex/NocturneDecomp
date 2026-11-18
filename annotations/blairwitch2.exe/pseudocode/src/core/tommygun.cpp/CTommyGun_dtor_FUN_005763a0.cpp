// Name: core_tommygun.cpp_CTommyGun_dtor_FUN_005763a0
// Address: 005763a0
// Address Range: [[005763a0, 005763ed]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_005763a0(CTommyGun *this_ptr,uint flags)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_005763a0(CTommyGun *this_ptr,uint flags)

{
  CTommyGun *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTommyGunTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CTommyGun *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
