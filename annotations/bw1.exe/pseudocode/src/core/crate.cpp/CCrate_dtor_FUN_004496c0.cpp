// Name: core_crate.cpp_CCrate_dtor_FUN_004496c0
// Address: 004496c0
// Address Range: [[004496c0, 0044970d]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_004496c0(CCrate *this_ptr,uint flags)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_004496c0(CCrate *this_ptr,uint flags)

{
  CCrate *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCrateTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CCrate *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
