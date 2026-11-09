// Name: core_melee.cpp_CMelee_dtor_FUN_00509a90
// Address: 00509a90
// Address Range: [[00509a90, 00509add]]
// Convention: __cdecl
// Signature: CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_00509a90(CMelee *this_ptr,uint flags)

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_CMelee_dtor_FUN_00509a90(CMelee *this_ptr,uint flags)

{
  CMelee *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CMeleeTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CMelee *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
