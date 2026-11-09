// Name: core_lightgun.cpp_CLightGun_dtor_FUN_00501560
// Address: 00501560
// Address Range: [[00501560, 005015ad]]
// Convention: __cdecl
// Signature: CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_00501560(CLightGun *this_ptr,uint flags)

#include "nocturne.h"

CLightGun * __cdecl core_lightgun_cpp_CLightGun_dtor_FUN_00501560(CLightGun *this_ptr,uint flags)

{
  CLightGun *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLightGunTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CLightGun *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
