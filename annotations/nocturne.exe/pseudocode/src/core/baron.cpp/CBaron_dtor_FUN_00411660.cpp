// Name: core_baron.cpp_CBaron_dtor_FUN_00411660
// Address: 00411660
// Address Range: [[00411660, 004116ad]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00411660(CBaron *this_ptr,uint flags)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00411660(CBaron *this_ptr,uint flags)

{
  CBaron *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBaronTypeInfo_00599d30);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CBaron *)core_hero_cpp_CHero_dtor_FUN_004b4800(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
