// Name: core_goggles.cpp_CGoggles_dtor_FUN_004cc880
// Address: 004cc880
// Address Range: [[004cc880, 004cc8cd]]
// Convention: __cdecl
// Signature: CGoggles * __cdecl core_goggles_cpp_CGoggles_dtor_FUN_004cc880(CGoggles *this_ptr,uint flags)

#include "nocturne.h"

CGoggles * __cdecl core_goggles_cpp_CGoggles_dtor_FUN_004cc880(CGoggles *this_ptr,uint flags)

{
  CGoggles *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGogglesTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CGoggles *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
