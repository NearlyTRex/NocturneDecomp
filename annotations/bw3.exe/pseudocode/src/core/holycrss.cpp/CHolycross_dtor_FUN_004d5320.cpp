// Name: core_holycrss.cpp_CHolycross_dtor_FUN_004d5320
// Address: 004d5320
// Address Range: [[004d5320, 004d536d]]
// Convention: __cdecl
// Signature: CHolycross * __cdecl core_holycrss_cpp_CHolycross_dtor_FUN_004d5320(CHolycross *this_ptr,uint flags)

#include "nocturne.h"

CHolycross * __cdecl core_holycrss_cpp_CHolycross_dtor_FUN_004d5320(CHolycross *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHolycrossTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CHolycross *)ptr;
  }
  debugFreeChecked(ptr);
  return (CHolycross *)ptr;
}
