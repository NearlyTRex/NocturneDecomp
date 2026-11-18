// Name: core_storm.cpp_CStorm_dtor_FUN_00568c80
// Address: 00568c80
// Address Range: [[00568c80, 00568ccd]]
// Convention: __cdecl
// Signature: CStorm * __cdecl core_storm_cpp_CStorm_dtor_FUN_00568c80(CStorm *this_ptr,uint flags)

#include "nocturne.h"

CStorm * __cdecl core_storm_cpp_CStorm_dtor_FUN_00568c80(CStorm *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CStormTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CStorm *)ptr;
  }
  debugFreeChecked(ptr);
  return (CStorm *)ptr;
}
