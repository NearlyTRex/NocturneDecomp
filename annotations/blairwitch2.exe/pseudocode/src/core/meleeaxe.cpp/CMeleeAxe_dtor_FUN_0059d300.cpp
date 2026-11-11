// Name: core_meleeaxe.cpp_CMeleeAxe_dtor_FUN_0059d300
// Address: 0059d300
// Address Range: [[0059d300, 0059d34d]]
// Convention: unknown
// Signature: CMeleeAxe * core_meleeaxe_cpp_CMeleeAxe_dtor_FUN_0059d300(CMeleeAxe *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMeleeAxe * core_meleeaxe_cpp_CMeleeAxe_dtor_FUN_0059d300(CMeleeAxe *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CMeleeAxeTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_00589ae0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CMeleeAxe *)pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return (CMeleeAxe *)pCVar1;
}
