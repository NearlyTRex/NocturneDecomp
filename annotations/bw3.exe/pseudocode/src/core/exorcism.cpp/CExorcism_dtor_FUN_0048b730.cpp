// Name: core_exorcism.cpp_CExorcism_dtor_FUN_0048b730
// Address: 0048b730
// Address Range: [[0048b730, 0048b77d]]
// Convention: unknown
// Signature: CExorcism * core_exorcism_cpp_CExorcism_dtor_FUN_0048b730(CExorcism *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CExorcism * core_exorcism_cpp_CExorcism_dtor_FUN_0048b730(CExorcism *this_ptr,uint flags)

{
  CExorcism *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CExorcismTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CExorcism *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
