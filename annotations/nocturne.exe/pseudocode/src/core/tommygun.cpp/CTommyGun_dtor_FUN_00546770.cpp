// Name: core_tommygun.cpp_CTommyGun_dtor_FUN_00546770
// Address: 00546770
// Address Range: [[00546770, 005467bd]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_00546770(CTommyGun *this_ptr,uint flags)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_00546770(CTommyGun *this_ptr,uint flags)

{
  CTommyGun *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTommyGunTypeInfo_005a33e0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CTommyGun *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
