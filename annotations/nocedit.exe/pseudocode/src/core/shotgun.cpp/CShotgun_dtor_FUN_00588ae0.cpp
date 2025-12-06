// Name: core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0
// Address: 00588ae0
// Address Range: [[00588ae0, 00588b2d]]
// Convention: __cdecl
// Signature: CShotgun * core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0(CShotgun * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_CShotgun_dtor_FUN_00588ae0(CShotgun *this_ptr,uint d1,uint d2)

{
  CShotgun *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CShotgunTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CShotgun *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
