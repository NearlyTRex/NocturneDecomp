// Name: core_blundrbs.cpp_CBlunderbus_dtor_FUN_00411890
// Address: 00411890
// Address Range: [[00411890, 004118dd]]
// Convention: __cdecl
// Signature: CBlunderbus * __cdecl core_blundrbs_cpp_CBlunderbus_dtor_FUN_00411890(CBlunderbus *this_ptr,uint flags)

#include "nocturne.h"

CBlunderbus * __cdecl core_blundrbs_cpp_CBlunderbus_dtor_FUN_00411890(CBlunderbus *this_ptr,uint flags)

{
  CBlunderbus *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBlunderbusTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CBlunderbus *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
