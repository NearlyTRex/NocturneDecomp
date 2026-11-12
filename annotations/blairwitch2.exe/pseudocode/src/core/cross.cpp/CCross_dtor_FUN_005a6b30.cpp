// Name: core_cross.cpp_CCross_dtor_FUN_005a6b30
// Address: 005a6b30
// Address Range: [[005a6b30, 005a6b87]]
// Convention: unknown
// Signature: CCross * core_cross_cpp_CCross_dtor_FUN_005a6b30(CCross *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCross * core_cross_cpp_CCross_dtor_FUN_005a6b30(CCross *this_ptr,uint flags)

{
  CCross *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCrossTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CCrossVTable._ub;
  pCVar1 = (CCross *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
