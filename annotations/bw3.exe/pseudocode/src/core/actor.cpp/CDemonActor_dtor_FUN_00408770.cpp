// Name: core_actor.cpp_CDemonActor_dtor_FUN_00408770
// Address: 00408770
// Address Range: [[00408770, 0040879f] [004087a1, 004087c8]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408770(CDemonActor *this_ptr,uint flags)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408770(CDemonActor *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDemonActorTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->validation_magic = 0x495fd67;
  (this_ptr->vtable)._ub = &g_CDemonActorVTable;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005a30c4(this_ptr);
  return this_ptr;
}
