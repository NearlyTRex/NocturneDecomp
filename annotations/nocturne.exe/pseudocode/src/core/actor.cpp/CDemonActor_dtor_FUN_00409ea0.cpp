// Name: core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
// Address: 00409ea0
// Address Range: [[00409ea0, 00409ecf] [00409ed1, 00409ef8]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor *this_ptr,uint flags)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDemonActorTypeInfo_005993d0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  this_ptr->validation_magic = 0x495fd67;
  (this_ptr->vtable)._ub = &g_CDemonActorVTable;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_00564494(this_ptr);
  return this_ptr;
}
