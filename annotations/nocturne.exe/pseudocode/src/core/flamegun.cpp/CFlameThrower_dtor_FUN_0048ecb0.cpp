// Name: core_flamegun.cpp_CFlameThrower_dtor_FUN_0048ecb0
// Address: 0048ecb0
// Address Range: [[0048ecb0, 0048ecfd]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_0048ecb0(CFlameThrower *this_ptr,uint flags)

#include "nocturne.h"

CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_0048ecb0(CFlameThrower *this_ptr,uint flags)

{
  CFlameThrower *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFlameThrowerTypeInfo_0059d8b0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CFlameThrower *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
