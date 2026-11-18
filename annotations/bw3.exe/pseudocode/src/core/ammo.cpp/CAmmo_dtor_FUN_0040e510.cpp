// Name: core_ammo.cpp_CAmmo_dtor_FUN_0040e510
// Address: 0040e510
// Address Range: [[0040e510, 0040e55d]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040e510(CAmmo *this_ptr,uint flags)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_0040e510(CAmmo *this_ptr,uint flags)

{
  CAmmo *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAmmoTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CAmmo *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
