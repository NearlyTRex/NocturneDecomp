// Name: core_actor.cpp_CDemonActor_dtor_FUN_00408a30
// Address: 00408a30
// Address Range: [[00408a30, 00408a7d]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor *this_ptr,uint d1)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor *this_ptr,uint d1)

{
  void *ptr;
  
  if ((d1 & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDemonActorTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->validation_magic = 0x495fd67;
  (this_ptr->vtable)._ub = &g_CDemonActorVTable;
  if ((d1 & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}
