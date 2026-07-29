// Name: core_ammo.cpp_CAmmo_dtor_FUN_0040ef90
// Address: 0040ef90
// Address Range: [[0040ef90, 0040efdd]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040ef90(CAmmo *this_ptr,uint flags)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040ef90(CAmmo *this_ptr,uint flags)

{
  CAmmo *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAmmoTypeInfo_00599530);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CAmmo *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
