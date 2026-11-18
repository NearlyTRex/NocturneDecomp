// Name: core_melee.cpp_CMelee_dtor_FUN_00509a90
// Address: 00509a90
// Address Range: [[00509a90, 00509add]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_00509a90(CMelee *this_ptr,uint flags)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_00509a90(CMelee *this_ptr,uint flags)

{
  CMelee *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMeleeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CMelee *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
