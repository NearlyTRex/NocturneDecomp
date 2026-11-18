// Name: core_rifle.cpp_CRifle_dtor_FUN_005409c0
// Address: 005409c0
// Address Range: [[005409c0, 00540a0d]]
// Convention: __cdecl
// Signature: CRifle * __cdecl core_rifle_cpp_CRifle_dtor_FUN_005409c0(CRifle *this_ptr,uint flags)

#include "nocturne.h"

CRifle * __cdecl core_rifle_cpp_CRifle_dtor_FUN_005409c0(CRifle *this_ptr,uint flags)

{
  CRifle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CRifleTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CRifle *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
