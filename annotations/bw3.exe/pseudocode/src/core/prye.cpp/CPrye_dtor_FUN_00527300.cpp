// Name: core_prye.cpp_CPrye_dtor_FUN_00527300
// Address: 00527300
// Address Range: [[00527300, 0052734d]]
// Convention: __cdecl
// Signature: CPrye * __cdecl core_prye_cpp_CPrye_dtor_FUN_00527300(CPrye *this_ptr,uint flags)

#include "nocturne.h"

CPrye * __cdecl core_prye_cpp_CPrye_dtor_FUN_00527300(CPrye *this_ptr,uint flags)

{
  CPrye *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPryeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CPrye *)core_hero_cpp_CHero_dtor_FUN_004d2620(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
