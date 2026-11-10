// Name: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004d4b40
// Address: 004d4b40
// Address Range: [[004d4b40, 004d4b97]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004d4b40(CHeroPlaceholder *this_ptr,uint flags)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004d4b40(CHeroPlaceholder *this_ptr,uint flags)

{
  CHeroPlaceholder *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CHeroPlaceholderTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CHeroPlaceholderVTable;
  pCVar1 = (CHeroPlaceholder *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
