// Name: core_ammo.cpp_CAmmo_dtor_FUN_0040de50
// Address: 0040de50
// Address Range: [[0040de50, 0040dea7]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040de50(CAmmo *this_ptr,uint flags)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040de50(CAmmo *this_ptr,uint flags)

{
  CAmmo *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAmmoTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CAmmoVTable;
  pCVar1 = (CAmmo *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
