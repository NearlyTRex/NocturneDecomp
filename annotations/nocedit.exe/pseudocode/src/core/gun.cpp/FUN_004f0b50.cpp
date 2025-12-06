// Name: core_gun.cpp_FUN_004f0b50
// Address: 004f0b50
// Address Range: [[004f0b50, 004f0b9d]]
// Convention: __cdecl
// Signature: CGun * core_gun.cpp_FUN_004f0b50(CGun * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_FUN_004f0b50(CGun *this_ptr,uint d1,uint d2)

{
  CWeapon *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGunTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d2 & 2) == 0) {
    return (CGun *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CGun *)ptr;
}
