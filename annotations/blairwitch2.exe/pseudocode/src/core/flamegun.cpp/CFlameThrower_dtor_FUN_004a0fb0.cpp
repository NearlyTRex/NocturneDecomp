// Name: core_flamegun.cpp_CFlameThrower_dtor_FUN_004a0fb0
// Address: 004a0fb0
// Address Range: [[004a0fb0, 004a0ffd]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_004a0fb0(CFlameThrower *this_ptr,uint flags)

#include "nocturne.h"

CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_004a0fb0(CFlameThrower *this_ptr,uint flags)

{
  CFlameThrower *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFlameThrowerTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CFlameThrower *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
