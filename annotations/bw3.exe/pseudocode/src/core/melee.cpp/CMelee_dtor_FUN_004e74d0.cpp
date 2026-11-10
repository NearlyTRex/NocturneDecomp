// Name: core_melee.cpp_CMelee_dtor_FUN_004e74d0
// Address: 004e74d0
// Address Range: [[004e74d0, 004e751d]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004e74d0(CMelee *this_ptr,uint flags)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004e74d0(CMelee *this_ptr,uint flags)

{
  CMelee *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CMeleeTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CMelee *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
