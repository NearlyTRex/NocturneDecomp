// Name: core_haystack.cpp_CHaystack_dtor_FUN_004b4140
// Address: 004b4140
// Address Range: [[004b4140, 004b418d]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004b4140(CHaystack *this_ptr,uint flags)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004b4140(CHaystack *this_ptr,uint flags)

{
  CHaystack *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CHaystackTypeInfo_0059e9d0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CHaystack *)core_hero_cpp_CHero_dtor_FUN_004b4800(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
