// Name: core_keyactor.cpp_CKeyActor_dtor_FUN_004dead0
// Address: 004dead0
// Address Range: [[004dead0, 004deb1d]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004dead0(CKeyActor *this_ptr,uint flags)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004dead0(CKeyActor *this_ptr,uint flags)

{
  CKeyActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CKeyActorTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CKeyActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
