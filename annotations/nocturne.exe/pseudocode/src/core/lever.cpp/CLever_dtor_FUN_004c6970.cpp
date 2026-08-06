// Name: core_lever.cpp_CLever_dtor_FUN_004c6970
// Address: 004c6970
// Address Range: [[004c6970, 004c69bd]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004c6970(CLever *this_ptr,uint flags)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004c6970(CLever *this_ptr,uint flags)

{
  CLever *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLeverTypeInfo_0059fd20);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CLever *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
