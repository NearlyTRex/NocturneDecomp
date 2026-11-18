// Name: core_heal.cpp_CHeal_dtor_FUN_004d1cb0
// Address: 004d1cb0
// Address Range: [[004d1cb0, 004d1cfd]]
// Convention: __cdecl
// Signature: CHeal * __cdecl core_heal_cpp_CHeal_dtor_FUN_004d1cb0(CHeal *this_ptr,uint flags)

#include "nocturne.h"

CHeal * __cdecl core_heal_cpp_CHeal_dtor_FUN_004d1cb0(CHeal *this_ptr,uint flags)

{
  CHeal *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHealTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CHeal *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
