// Name: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30
// Address: 004f3c30
// Address Range: [[004f3c30, 004f3c87]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004f3c30(CHeroPlaceholder *this_ptr,uint flags)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004f3c30(CHeroPlaceholder *this_ptr,uint flags)

{
  CHeroPlaceholder *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHeroPlaceholderTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CHeroPlaceholderVTable;
  ptr = (CHeroPlaceholder *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
