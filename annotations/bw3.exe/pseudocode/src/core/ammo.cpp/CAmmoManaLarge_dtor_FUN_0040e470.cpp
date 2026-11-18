// Name: core_ammo.cpp_CAmmoManaLarge_dtor_FUN_0040e470
// Address: 0040e470
// Address Range: [[0040e470, 0040e4bd]]
// Convention: __cdecl
// Signature: CAmmoManaLarge * __cdecl core_ammo_cpp_CAmmoManaLarge_dtor_FUN_0040e470(CAmmoManaLarge *this_ptr,uint flags)

#include "nocturne.h"

CAmmoManaLarge * __cdecl core_ammo_cpp_CAmmoManaLarge_dtor_FUN_0040e470(CAmmoManaLarge *this_ptr,uint flags)

{
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAmmoManaLargeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CAmmoManaLarge *)ptr;
  }
  debugFreeChecked(ptr);
  return (CAmmoManaLarge *)ptr;
}
