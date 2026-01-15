// Name: core_shovel.cpp_CShovel_dtor_FUN_00588c80
// Address: 00588c80
// Address Range: [[00588c80, 00588ccd]]
// Convention: __cdecl
// Signature: CShovel * core_shovel.cpp_CShovel_dtor_FUN_00588c80(CShovel * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00588c80(CShovel *this_ptr,uint d1,uint d2)

{
  CWeapon *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CShovelTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base_weapon,1,unaff_EBX,unaff_retaddr);
  if ((d1 & 2) == 0) {
    return (CShovel *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CShovel *)ptr;
}
