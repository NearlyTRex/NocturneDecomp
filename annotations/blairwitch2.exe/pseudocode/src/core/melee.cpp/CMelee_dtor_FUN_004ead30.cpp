// Name: core_melee.cpp_CMelee_dtor_FUN_004ead30
// Address: 004ead30
// Address Range: [[004ead30, 004ead7d]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004ead30(CMelee *this_ptr,uint flags)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_004ead30(CMelee *this_ptr,uint flags)

{
  CMelee *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMeleeTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CMelee *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
