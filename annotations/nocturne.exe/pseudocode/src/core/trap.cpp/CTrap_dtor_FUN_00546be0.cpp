// Name: core_trap.cpp_CTrap_dtor_FUN_00546be0
// Address: 00546be0
// Address Range: [[00546be0, 00546c2d]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00546be0(CTrap *this_ptr,uint flags)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_dtor_FUN_00546be0(CTrap *this_ptr,uint flags)

{
  CTrap *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTrapTypeInfo_005a3500);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CTrap *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
