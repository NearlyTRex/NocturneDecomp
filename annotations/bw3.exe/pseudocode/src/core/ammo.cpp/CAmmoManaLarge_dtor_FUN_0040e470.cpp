// Name: core_ammo.cpp_CAmmoManaLarge_dtor_FUN_0040e470
// Address: 0040e470
// Address Range: [[0040e470, 0040e4bd]]
// Convention: unknown
// Signature: CAmmoManaLarge * core_ammo_cpp_CAmmoManaLarge_dtor_FUN_0040e470(CAmmoManaLarge *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAmmoManaLarge * core_ammo_cpp_CAmmoManaLarge_dtor_FUN_0040e470(CAmmoManaLarge *this_ptr,uint flags)

{
  CAmmoManaLarge *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAmmo_ManaLargeTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CAmmoManaLarge *)core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1)
  ;
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
