// Name: core_goggles.cpp_CGoggles_dtor_FUN_0059c220
// Address: 0059c220
// Address Range: [[0059c220, 0059c26d]]
// Convention: __cdecl
// Signature: CGoggles * __cdecl core_goggles_cpp_CGoggles_dtor_FUN_0059c220(CGoggles *this_ptr,uint flags)

#include "nocturne.h"

CGoggles * __cdecl core_goggles_cpp_CGoggles_dtor_FUN_0059c220(CGoggles *this_ptr,uint flags)

{
  CGoggles *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGogglesTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CGoggles *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
