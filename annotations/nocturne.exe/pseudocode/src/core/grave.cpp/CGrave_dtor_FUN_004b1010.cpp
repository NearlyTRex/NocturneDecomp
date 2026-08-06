// Name: core_grave.cpp_CGrave_dtor_FUN_004b1010
// Address: 004b1010
// Address Range: [[004b1010, 004b105d]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004b1010(CGrave *this_ptr,uint flags)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004b1010(CGrave *this_ptr,uint flags)

{
  CGrave *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGraveTypeInfo_0059e6b0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CGrave *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
