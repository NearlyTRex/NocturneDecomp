// Name: core_shovel.cpp_CShovel_dtor_FUN_00547110
// Address: 00547110
// Address Range: [[00547110, 0054715d]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00547110(CShovel *this_ptr,uint flags)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_CShovel_dtor_FUN_00547110(CShovel *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CShovelTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CShovel *)pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return (CShovel *)pCVar1;
}
