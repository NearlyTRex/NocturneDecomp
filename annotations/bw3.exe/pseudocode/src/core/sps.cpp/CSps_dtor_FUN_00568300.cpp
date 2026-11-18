// Name: core_sps.cpp_CSps_dtor_FUN_00568300
// Address: 00568300
// Address Range: [[00568300, 0056834d]]
// Convention: __cdecl
// Signature: CSps * __cdecl core_sps_cpp_CSps_dtor_FUN_00568300(CSps *this_ptr,uint flags)

#include "nocturne.h"

CSps * __cdecl core_sps_cpp_CSps_dtor_FUN_00568300(CSps *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSpsTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CSps *)ptr;
  }
  debugFreeChecked(ptr);
  return (CSps *)ptr;
}
