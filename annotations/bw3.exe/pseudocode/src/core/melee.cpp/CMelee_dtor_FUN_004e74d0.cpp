// Name: core_melee.cpp_CMelee_dtor_FUN_004e74d0
// Address: 004e74d0
// Address Range: [[004e74d0, 004e751d]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004e74d0(CMelee *this_ptr,uint flags)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004e74d0(CMelee *this_ptr,uint flags)

{
  CMelee *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMeleeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CMelee *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
