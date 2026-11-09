// Name: core_ammo.cpp_CAmmo_dtor_FUN_0040e000
// Address: 0040e000
// Address Range: [[0040e000, 0040e04d]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040e000(CAmmo *this_ptr,uint flags)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040e000(CAmmo *this_ptr,uint flags)

{
  CAmmo *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAmmoTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CAmmo *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
