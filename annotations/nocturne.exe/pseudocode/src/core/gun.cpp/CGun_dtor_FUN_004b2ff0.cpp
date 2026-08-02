// Name: core_gun.cpp_CGun_dtor_FUN_004b2ff0
// Address: 004b2ff0
// Address Range: [[004b2ff0, 004b303d]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004b2ff0(CGun *this_ptr,uint flags)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004b2ff0(CGun *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGunTypeInfo_0059e840);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CGun *)pCVar1;
  }
  FUN_00564494(pCVar1);
  return (CGun *)pCVar1;
}
