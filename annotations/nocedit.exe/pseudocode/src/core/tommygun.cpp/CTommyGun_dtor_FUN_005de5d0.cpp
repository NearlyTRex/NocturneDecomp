// Name: core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0
// Address: 005de5d0
// Address Range: [[005de5d0, 005de61d]]
// Convention: __cdecl
// Signature: CTommyGun * core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0(CTommyGun * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CTommyGun * __cdecl
core_tommygun_cpp_CTommyGun_dtor_FUN_005de5d0(CTommyGun *this_ptr,uint d1,uint d2)

{
  CTommyGun *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTommyGunTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTommyGun *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1,unaff_EBX,unaff_retaddr);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
