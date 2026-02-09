// Name: core_haystack.cpp_CHaystack_dtor_FUN_004f1d10
// Address: 004f1d10
// Address Range: [[004f1d10, 004f1d5d]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004f1d10(CHaystack *this_ptr,uint flags)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004f1d10(CHaystack *this_ptr,uint flags)

{
  CHaystack *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHaystackTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CHaystack *)core_hero_cpp_CHero_dtor_FUN_004f2470(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
