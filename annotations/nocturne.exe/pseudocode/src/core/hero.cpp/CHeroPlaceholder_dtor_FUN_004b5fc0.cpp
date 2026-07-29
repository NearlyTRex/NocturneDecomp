// Name: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004b5fc0
// Address: 004b5fc0
// Address Range: [[004b5fc0, 004b6017]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0(CHeroPlaceholder *this_ptr,uint flags)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0(CHeroPlaceholder *this_ptr,uint flags)

{
  CHeroPlaceholder *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CHeroPlaceholderTypeInfo_0059ed60);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CHeroPlaceholderVTable;
  pCVar1 = (CHeroPlaceholder *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
