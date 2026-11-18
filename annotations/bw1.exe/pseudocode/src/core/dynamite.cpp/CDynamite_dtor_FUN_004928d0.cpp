// Name: core_dynamite.cpp_CDynamite_dtor_FUN_004928d0
// Address: 004928d0
// Address Range: [[004928d0, 0049291d]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_004928d0(CDynamite *this_ptr,uint flags)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_004928d0(CDynamite *this_ptr,uint flags)

{
  CDynamite *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDynamiteTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CDynamite *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
