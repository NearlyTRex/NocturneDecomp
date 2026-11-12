// Name: core_flintlck.cpp_CFlintlock_dtor_FUN_004af630
// Address: 004af630
// Address Range: [[004af630, 004af67d]]
// Convention: unknown
// Signature: CFlintlock * core_flintlck_cpp_CFlintlock_dtor_FUN_004af630(CFlintlock *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFlintlock * core_flintlck_cpp_CFlintlock_dtor_FUN_004af630(CFlintlock *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFlintlockTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CFlintlock *)pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return (CFlintlock *)pCVar1;
}
