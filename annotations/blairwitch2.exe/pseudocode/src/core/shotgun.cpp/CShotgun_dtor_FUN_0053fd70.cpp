// Name: core_shotgun.cpp_CShotgun_dtor_FUN_0053fd70
// Address: 0053fd70
// Address Range: [[0053fd70, 0053fdbd]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_0053fd70(CShotgun *this_ptr,uint flags)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_0053fd70(CShotgun *this_ptr,uint flags)

{
  CShotgun *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CShotgunTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CShotgun *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
