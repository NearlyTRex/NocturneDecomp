// Name: core_trap.cpp_CTrap_dtor_FUN_00576880
// Address: 00576880
// Address Range: [[00576880, 005768cd]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00576880(CTrap *this_ptr,uint flags)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00576880(CTrap *this_ptr,uint flags)

{
  CTrap *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTrapTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CTrap *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
