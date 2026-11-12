// Name: core_heal.cpp_CHeal_dtor_FUN_004d1cb0
// Address: 004d1cb0
// Address Range: [[004d1cb0, 004d1cfd]]
// Convention: unknown
// Signature: CHeal * core_heal_cpp_CHeal_dtor_FUN_004d1cb0(CHeal *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHeal * core_heal_cpp_CHeal_dtor_FUN_004d1cb0(CHeal *this_ptr,uint flags)

{
  CHeal *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CHealTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CHeal *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
