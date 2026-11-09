// Name: core_tommygun.cpp_CTommyGun_dtor_FUN_0056bfb0
// Address: 0056bfb0
// Address Range: [[0056bfb0, 0056bffd]]
// Convention: __cdecl
// Signature: CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_0056bfb0(CTommyGun *this_ptr,uint flags)

#include "nocturne.h"

CTommyGun * __cdecl core_tommygun_cpp_CTommyGun_dtor_FUN_0056bfb0(CTommyGun *this_ptr,uint flags)

{
  CTommyGun *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTommyGunTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CTommyGun *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
