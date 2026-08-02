// Name: core_melee.cpp_CMelee_dtor_FUN_004cf1a0
// Address: 004cf1a0
// Address Range: [[004cf1a0, 004cf1ed]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004cf1a0(CMelee *this_ptr,uint flags)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004cf1a0(CMelee *this_ptr,uint flags)

{
  CMelee *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMeleeTypeInfo_005a04f0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CMelee *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
