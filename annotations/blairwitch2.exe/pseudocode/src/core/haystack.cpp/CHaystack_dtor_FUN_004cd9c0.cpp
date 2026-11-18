// Name: core_haystack.cpp_CHaystack_dtor_FUN_004cd9c0
// Address: 004cd9c0
// Address Range: [[004cd9c0, 004cda0d]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004cd9c0(CHaystack *this_ptr,uint flags)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004cd9c0(CHaystack *this_ptr,uint flags)

{
  CHaystack *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHaystackTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CHaystack *)core_hero_cpp_CHero_dtor_FUN_004ce3d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
