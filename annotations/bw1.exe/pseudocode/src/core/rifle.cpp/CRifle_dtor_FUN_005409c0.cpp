// Name: core_rifle.cpp_CRifle_dtor_FUN_005409c0
// Address: 005409c0
// Address Range: [[005409c0, 00540a0d]]
// Convention: unknown
// Signature: CRifle * core_rifle_cpp_CRifle_dtor_FUN_005409c0(CRifle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CRifle * core_rifle_cpp_CRifle_dtor_FUN_005409c0(CRifle *this_ptr,uint flags)

{
  CRifle *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CRifleTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CRifle *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
