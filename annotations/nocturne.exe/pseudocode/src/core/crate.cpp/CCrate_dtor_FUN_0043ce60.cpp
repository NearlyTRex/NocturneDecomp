// Name: core_crate.cpp_CCrate_dtor_FUN_0043ce60
// Address: 0043ce60
// Address Range: [[0043ce60, 0043cead]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_0043ce60(CCrate *this_ptr,uint flags)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_0043ce60(CCrate *this_ptr,uint flags)

{
  CCrate *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCrateTypeInfo_0059bb10);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CCrate *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
