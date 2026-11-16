// Name: core_dynamite.cpp_CDynamite_dtor_FUN_0047a3e0
// Address: 0047a3e0
// Address Range: [[0047a3e0, 0047a42d]]
// Convention: __cdecl
// Signature: CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0047a3e0(CDynamite *this_ptr,uint flags)

#include "nocturne.h"

CDynamite * __cdecl core_dynamite_cpp_CDynamite_dtor_FUN_0047a3e0(CDynamite *this_ptr,uint flags)

{
  CDynamite *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDynamiteTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CDynamite *)core_weapon_cpp_CWeapon_dtor_FUN_00589ae0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
