// Name: core_crate.cpp_CCrate_dtor_FUN_00446280
// Address: 00446280
// Address Range: [[00446280, 004462cd]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_00446280(CCrate *this_ptr,uint flags)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_00446280(CCrate *this_ptr,uint flags)

{
  CCrate *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCrateTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CCrate *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
