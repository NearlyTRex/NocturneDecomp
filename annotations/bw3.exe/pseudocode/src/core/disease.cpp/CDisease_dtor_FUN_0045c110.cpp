// Name: core_disease.cpp_CDisease_dtor_FUN_0045c110
// Address: 0045c110
// Address Range: [[0045c110, 0045c15d]]
// Convention: unknown
// Signature: CDisease * core_disease_cpp_CDisease_dtor_FUN_0045c110(CDisease *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDisease * core_disease_cpp_CDisease_dtor_FUN_0045c110(CDisease *this_ptr,uint flags)

{
  CDisease *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDiseaseTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CDisease *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
