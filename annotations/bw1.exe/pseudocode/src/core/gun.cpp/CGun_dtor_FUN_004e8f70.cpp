// Name: core_gun.cpp_CGun_dtor_FUN_004e8f70
// Address: 004e8f70
// Address Range: [[004e8f70, 004e8fbd]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004e8f70(CGun *this_ptr,uint flags)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004e8f70(CGun *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGunTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CGun *)pCVar1;
  }
  FUN_005c0344(pCVar1);
  return (CGun *)pCVar1;
}
