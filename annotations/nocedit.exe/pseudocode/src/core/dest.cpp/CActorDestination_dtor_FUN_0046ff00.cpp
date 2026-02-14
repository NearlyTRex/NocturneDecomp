// Name: core_dest.cpp_CActorDestination_dtor_FUN_0046ff00
// Address: 0046ff00
// Address Range: [[0046ff00, 0046ff4d]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0046ff00(CActorDestination *this_ptr,uint flags)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0046ff00(CActorDestination *this_ptr,uint flags)

{
  CActorDestination *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CActorDestination);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CActorDestination *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
