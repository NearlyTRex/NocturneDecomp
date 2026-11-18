// Name: core_grave.cpp_CGrave_dtor_FUN_004cf800
// Address: 004cf800
// Address Range: [[004cf800, 004cf84d]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004cf800(CGrave *this_ptr,uint flags)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004cf800(CGrave *this_ptr,uint flags)

{
  CGrave *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGraveTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CGrave *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
