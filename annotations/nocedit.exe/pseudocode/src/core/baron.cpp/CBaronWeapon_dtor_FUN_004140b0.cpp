// Name: core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0
// Address: 004140b0
// Address Range: [[004140b0, 004140fd]]
// Convention: __cdecl
// Signature: CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_dtor_FUN_004140b0(CBaronWeapon *this_ptr,uint flags)

#include "nocturne.h"

CBaronWeapon * __cdecl
core_baron_cpp_CBaronWeapon_dtor_FUN_004140b0(CBaronWeapon *this_ptr,uint flags)

{
  CBaronWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBaronWeaponTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CBaronWeapon *)core_weapon_cpp_CWeapon_dtor_FUN_005edf80(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
