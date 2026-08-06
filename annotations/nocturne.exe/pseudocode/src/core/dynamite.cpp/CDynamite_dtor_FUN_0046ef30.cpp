// Name: core_dynamite.cpp_CDynamite_dtor_FUN_0046ef30
// Address: 0046ef30
// Address Range: [[0046ef30, 0046ef7d]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0046ef30(CDynamite *this_ptr,uint flags)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0046ef30(CDynamite *this_ptr,uint flags)

{
  CDynamite *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDynamiteTypeInfo_0059ca20);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CDynamite *)core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
