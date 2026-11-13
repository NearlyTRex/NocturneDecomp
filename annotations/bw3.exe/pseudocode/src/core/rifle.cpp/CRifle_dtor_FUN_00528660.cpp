// Name: core_rifle.cpp_CRifle_dtor_FUN_00528660
// Address: 00528660
// Address Range: [[00528660, 005286ad]]
// Convention: __cdecl
// Signature: CRifle * __cdecl core_rifle_cpp_CRifle_dtor_FUN_00528660(CRifle *this_ptr,uint flags)

#include "nocturne.h"

CRifle * __cdecl core_rifle_cpp_CRifle_dtor_FUN_00528660(CRifle *this_ptr,uint flags)

{
  CRifle *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CRifleTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CRifle *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
