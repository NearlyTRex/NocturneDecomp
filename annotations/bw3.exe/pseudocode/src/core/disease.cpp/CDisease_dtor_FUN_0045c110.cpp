// Name: core_disease.cpp_CDisease_dtor_FUN_0045c110
// Address: 0045c110
// Address Range: [[0045c110, 0045c15d]]
// Convention: __cdecl
// Signature: CDisease * __cdecl core_disease_cpp_CDisease_dtor_FUN_0045c110(CDisease *this_ptr,uint flags)

#include "nocturne.h"

CDisease * __cdecl core_disease_cpp_CDisease_dtor_FUN_0045c110(CDisease *this_ptr,uint flags)

{
  CDisease *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDiseaseTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CDisease *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
