// Name: core_shovel.cpp_CShovel_dtor_FUN_005624f0
// Address: 005624f0
// Address Range: [[005624f0, 0056253d]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_005624f0(CShovel *this_ptr,uint flags)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_005624f0(CShovel *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CShovelTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CShovel *)pCVar1;
  }
  FUN_005c0344(pCVar1);
  return (CShovel *)pCVar1;
}
