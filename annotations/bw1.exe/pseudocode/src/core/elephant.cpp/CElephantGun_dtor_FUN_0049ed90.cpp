// Name: core_elephant.cpp_CElephantGun_dtor_FUN_0049ed90
// Address: 0049ed90
// Address Range: [[0049ed90, 0049eddd]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_0049ed90(CElephantGun *this_ptr,uint flags)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_0049ed90(CElephantGun *this_ptr,uint flags)

{
  CElephantGun *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CElephantGunTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CElephantGun *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
