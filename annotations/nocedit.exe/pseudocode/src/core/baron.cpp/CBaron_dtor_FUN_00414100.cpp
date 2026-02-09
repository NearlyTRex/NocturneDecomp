// Name: core_baron.cpp_CBaron_dtor_FUN_00414100
// Address: 00414100
// Address Range: [[00414100, 0041414d]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00414100(CBaron *this_ptr,uint flags)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00414100(CBaron *this_ptr,uint flags)

{
  CBaron *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBaronTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CBaron *)core_hero_cpp_CHero_dtor_FUN_004f2470(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
