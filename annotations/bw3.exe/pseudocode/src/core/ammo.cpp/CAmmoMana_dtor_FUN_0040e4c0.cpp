// Name: core_ammo.cpp_CAmmoMana_dtor_FUN_0040e4c0
// Address: 0040e4c0
// Address Range: [[0040e4c0, 0040e50d]]
// Convention: __cdecl
// Signature: CAmmoMana * __cdecl core_ammo_cpp_CAmmoMana_dtor_FUN_0040e4c0(CAmmoMana *this_ptr,uint flags)

#include "nocturne.h"

CAmmoMana * __cdecl core_ammo_cpp_CAmmoMana_dtor_FUN_0040e4c0(CAmmoMana *this_ptr,uint flags)

{
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAmmoManaTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CAmmoMana *)ptr;
  }
  debugFreeChecked(ptr);
  return (CAmmoMana *)ptr;
}
