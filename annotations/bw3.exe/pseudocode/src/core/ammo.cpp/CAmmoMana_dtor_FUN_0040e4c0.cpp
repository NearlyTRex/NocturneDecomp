// Name: core_ammo.cpp_CAmmoMana_dtor_FUN_0040e4c0
// Address: 0040e4c0
// Address Range: [[0040e4c0, 0040e50d]]
// Convention: unknown
// Signature: CAmmoMana * core_ammo_cpp_CAmmoMana_dtor_FUN_0040e4c0(CAmmoMana *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAmmoMana * core_ammo_cpp_CAmmoMana_dtor_FUN_0040e4c0(CAmmoMana *this_ptr,uint flags)

{
  CAmmoMana *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAmmoManaTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CAmmoMana *)core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
