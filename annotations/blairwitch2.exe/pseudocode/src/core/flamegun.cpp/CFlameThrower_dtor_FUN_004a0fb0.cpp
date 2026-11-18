// Name: core_flamegun.cpp_CFlameThrower_dtor_FUN_004a0fb0
// Address: 004a0fb0
// Address Range: [[004a0fb0, 004a0ffd]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_004a0fb0(CFlameThrower *this_ptr,uint flags)

#include "nocturne.h"

CFlameThrower * __cdecl core_flamegun_cpp_CFlameThrower_dtor_FUN_004a0fb0(CFlameThrower *this_ptr,uint flags)

{
  CFlameThrower *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CFlameThrowerTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CFlameThrower *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
