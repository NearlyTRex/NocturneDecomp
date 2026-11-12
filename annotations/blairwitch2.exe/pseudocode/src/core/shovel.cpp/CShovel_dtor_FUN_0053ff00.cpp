// Name: core_shovel.cpp_CShovel_dtor_FUN_0053ff00
// Address: 0053ff00
// Address Range: [[0053ff00, 0053ff4d]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_0053ff00(CShovel *this_ptr,uint flags)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_0053ff00(CShovel *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CShovelTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CShovel *)pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return (CShovel *)pCVar1;
}
