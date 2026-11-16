// Name: core_lightsta.cpp_CLightStaff_dtor_FUN_004e3f10
// Address: 004e3f10
// Address Range: [[004e3f10, 004e3f5d]]
// Convention: __cdecl
// Signature: CLightStaff * __cdecl core_lightsta_cpp_CLightStaff_dtor_FUN_004e3f10(CLightStaff *this_ptr,uint flags)

#include "nocturne.h"

CLightStaff * __cdecl core_lightsta_cpp_CLightStaff_dtor_FUN_004e3f10(CLightStaff *this_ptr,uint flags)

{
  CLightStaff *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightStaffTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CLightStaff *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
