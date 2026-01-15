// Name: core_melee.cpp_FUN_0050edf0
// Address: 0050edf0
// Address Range: [[0050edf0, 0050ee3d]]
// Convention: __cdecl
// Signature: CMelee * core_melee.cpp_FUN_0050edf0(CMelee * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_FUN_0050edf0(CMelee *this_ptr,uint d1,uint d2)

{
  CMelee *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMeleeTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CMelee *)
        core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
