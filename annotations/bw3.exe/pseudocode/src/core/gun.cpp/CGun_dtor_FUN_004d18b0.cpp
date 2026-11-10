// Name: core_gun.cpp_CGun_dtor_FUN_004d18b0
// Address: 004d18b0
// Address Range: [[004d18b0, 004d18fd]]
// Convention: __cdecl
// Signature: CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004d18b0(CGun *this_ptr,uint flags)

#include "nocturne.h"

CGun * __cdecl core_gun_cpp_CGun_dtor_FUN_004d18b0(CGun *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CGunTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CGun *)pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return (CGun *)pCVar1;
}
