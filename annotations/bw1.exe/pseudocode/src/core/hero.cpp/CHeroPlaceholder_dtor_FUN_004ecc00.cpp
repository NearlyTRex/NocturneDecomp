// Name: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004ecc00
// Address: 004ecc00
// Address Range: [[004ecc00, 004ecc57]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004ecc00(CHeroPlaceholder *this_ptr,uint flags)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_dtor_FUN_004ecc00(CHeroPlaceholder *this_ptr,uint flags)

{
  CHeroPlaceholder *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHeroPlaceholderTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CHeroPlaceholderVTable;
  ptr = (CHeroPlaceholder *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
