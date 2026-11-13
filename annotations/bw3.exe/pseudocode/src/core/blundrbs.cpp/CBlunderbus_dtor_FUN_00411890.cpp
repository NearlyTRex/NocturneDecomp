// Name: core_blundrbs.cpp_CBlunderbus_dtor_FUN_00411890
// Address: 00411890
// Address Range: [[00411890, 004118dd]]
// Convention: __cdecl
// Signature: CBlunderbus * __cdecl core_blundrbs_cpp_CBlunderbus_dtor_FUN_00411890(CBlunderbus *this_ptr,uint flags)

#include "nocturne.h"

CBlunderbus * __cdecl core_blundrbs_cpp_CBlunderbus_dtor_FUN_00411890(CBlunderbus *this_ptr,uint flags)

{
  CBlunderbus *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBlunderbusTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CBlunderbus *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
