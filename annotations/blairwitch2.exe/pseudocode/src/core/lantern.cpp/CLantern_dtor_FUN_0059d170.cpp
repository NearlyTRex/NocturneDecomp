// Name: core_lantern.cpp_CLantern_dtor_FUN_0059d170
// Address: 0059d170
// Address Range: [[0059d170, 0059d1bd]]
// Convention: __cdecl
// Signature: CLantern * __cdecl core_lantern_cpp_CLantern_dtor_FUN_0059d170(CLantern *this_ptr,uint flags)

#include "nocturne.h"

CLantern * __cdecl core_lantern_cpp_CLantern_dtor_FUN_0059d170(CLantern *this_ptr,uint flags)

{
  CLantern *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLanternTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CLantern *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
