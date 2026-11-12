// Name: core_haystack.cpp_CHaystack_dtor_FUN_004ea280
// Address: 004ea280
// Address Range: [[004ea280, 004ea2cd]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004ea280(CHaystack *this_ptr,uint flags)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_CHaystack_dtor_FUN_004ea280(CHaystack *this_ptr,uint flags)

{
  CHaystack *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CHaystackTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CHaystack *)core_hero_cpp_FUN_004ea980(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
