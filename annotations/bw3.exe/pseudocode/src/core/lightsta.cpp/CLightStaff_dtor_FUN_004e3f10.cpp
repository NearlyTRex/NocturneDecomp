// Name: core_lightsta.cpp_CLightStaff_dtor_FUN_004e3f10
// Address: 004e3f10
// Address Range: [[004e3f10, 004e3f5d]]
// Convention: unknown
// Signature: CLightStaff * core_lightsta_cpp_CLightStaff_dtor_FUN_004e3f10(CLightStaff *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLightStaff * core_lightsta_cpp_CLightStaff_dtor_FUN_004e3f10(CLightStaff *this_ptr,uint flags)

{
  CLightStaff *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLightStaffTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CLightStaff *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
