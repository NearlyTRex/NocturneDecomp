// Name: core_bindevil.cpp_CBindEvil_dtor_FUN_0040f940
// Address: 0040f940
// Address Range: [[0040f940, 0040f98d]]
// Convention: __cdecl
// Signature: CBindEvil * __cdecl core_bindevil_cpp_CBindEvil_dtor_FUN_0040f940(CBindEvil *this_ptr,uint flags)

#include "nocturne.h"

CBindEvil * __cdecl core_bindevil_cpp_CBindEvil_dtor_FUN_0040f940(CBindEvil *this_ptr,uint flags)

{
  CBindEvil *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBindEvilTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CBindEvil *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
