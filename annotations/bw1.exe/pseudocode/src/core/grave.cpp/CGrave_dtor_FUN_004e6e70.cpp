// Name: core_grave.cpp_CGrave_dtor_FUN_004e6e70
// Address: 004e6e70
// Address Range: [[004e6e70, 004e6ebd]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004e6e70(CGrave *this_ptr,uint flags)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_CGrave_dtor_FUN_004e6e70(CGrave *this_ptr,uint flags)

{
  CGrave *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGraveTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CGrave *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
