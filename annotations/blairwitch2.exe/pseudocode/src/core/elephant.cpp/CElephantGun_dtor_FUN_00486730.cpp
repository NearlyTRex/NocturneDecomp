// Name: core_elephant.cpp_CElephantGun_dtor_FUN_00486730
// Address: 00486730
// Address Range: [[00486730, 0048677d]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_00486730(CElephantGun *this_ptr,uint flags)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_00486730(CElephantGun *this_ptr,uint flags)

{
  CElephantGun *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CElephantGunTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CElephantGun *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
