// Name: core_elephant.cpp_dtor_FUN_004a7be0
// Address: 004a7be0
// Address Range: [[004a7be0, 004a7c2d]]
// Convention: __cdecl
// Signature: void * core_elephant.cpp_dtor_FUN_004a7be0(CElephantGun * this_ptr, uint d1, uint d2)

#include "nocturne.h"

void * __cdecl core_elephant_cpp_dtor_FUN_004a7be0(CElephantGun *this_ptr,uint d1,uint d2)

{
  CWeapon *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CElephantGunTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1,unaff_EBX,unaff_retaddr);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
