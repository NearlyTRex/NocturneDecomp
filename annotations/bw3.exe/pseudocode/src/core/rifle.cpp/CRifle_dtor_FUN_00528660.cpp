// Name: core_rifle.cpp_CRifle_dtor_FUN_00528660
// Address: 00528660
// Address Range: [[00528660, 005286ad]]
// Convention: __cdecl
// Signature: CRifle * __cdecl core_rifle_cpp_CRifle_dtor_FUN_00528660(CRifle *this_ptr,uint flags)

#include "nocturne.h"

CRifle * __cdecl core_rifle_cpp_CRifle_dtor_FUN_00528660(CRifle *this_ptr,uint flags)

{
  CRifle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CRifleTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CRifle *)core_weapon_cpp_CWeapon_dtor_FUN_0057aed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
