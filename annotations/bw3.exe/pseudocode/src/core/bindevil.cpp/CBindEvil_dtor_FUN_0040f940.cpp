// Name: core_bindevil.cpp_CBindEvil_dtor_FUN_0040f940
// Address: 0040f940
// Address Range: [[0040f940, 0040f98d]]
// Convention: unknown
// Signature: CBindEvil * core_bindevil_cpp_CBindEvil_dtor_FUN_0040f940(CBindEvil *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBindEvil * core_bindevil_cpp_CBindEvil_dtor_FUN_0040f940(CBindEvil *this_ptr,uint flags)

{
  CBindEvil *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBindEvilTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CBindEvil *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
