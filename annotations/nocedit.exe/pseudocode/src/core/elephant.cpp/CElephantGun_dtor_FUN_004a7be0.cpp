// Name: core_elephant.cpp_CElephantGun_dtor_FUN_004a7be0
// Address: 004a7be0
// Address Range: [[004a7be0, 004a7c2d]]
// Convention: __cdecl
// Signature: void * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_004a7be0(CElephantGun *this_ptr,uint flags)

#include "nocturne.h"

void * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_004a7be0(CElephantGun *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CElephantGunTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
