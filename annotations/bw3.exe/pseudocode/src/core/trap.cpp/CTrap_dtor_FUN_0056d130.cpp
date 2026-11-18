// Name: core_trap.cpp_CTrap_dtor_FUN_0056d130
// Address: 0056d130
// Address Range: [[0056d130, 0056d17d]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_0056d130(CTrap *this_ptr,uint flags)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_0056d130(CTrap *this_ptr,uint flags)

{
  CTrap *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTrapTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CTrap *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
