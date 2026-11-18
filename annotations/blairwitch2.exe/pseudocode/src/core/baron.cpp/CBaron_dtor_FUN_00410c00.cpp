// Name: core_baron.cpp_CBaron_dtor_FUN_00410c00
// Address: 00410c00
// Address Range: [[00410c00, 00410c4d]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00410c00(CBaron *this_ptr,uint flags)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00410c00(CBaron *this_ptr,uint flags)

{
  CBaron *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBaronTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CBaron *)core_hero_cpp_CHero_dtor_FUN_004ce3d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
