// Name: core_keyactor.cpp_CKeyActor_dtor_FUN_004c3710
// Address: 004c3710
// Address Range: [[004c3710, 004c375d]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004c3710(CKeyActor *this_ptr,uint flags)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004c3710(CKeyActor *this_ptr,uint flags)

{
  CKeyActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CKeyActorTypeInfo_0059f900);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CKeyActor *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
