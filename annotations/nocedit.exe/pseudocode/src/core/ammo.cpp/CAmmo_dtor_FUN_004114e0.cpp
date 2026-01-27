// Name: core_ammo.cpp_CAmmo_dtor_FUN_004114e0
// Address: 004114e0
// Address Range: [[004114e0, 0041152d]]
// Convention: __cdecl
// Signature: CAmmo * core_ammo.cpp_CAmmo_dtor_FUN_004114e0(CAmmo * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_dtor_FUN_004114e0(CAmmo *this_ptr,uint d1,uint d2)

{
  CAmmo *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CAmmoTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CAmmo *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
