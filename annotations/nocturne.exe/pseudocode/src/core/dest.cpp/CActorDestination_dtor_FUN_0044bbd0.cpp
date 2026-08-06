// Name: core_dest.cpp_CActorDestination_dtor_FUN_0044bbd0
// Address: 0044bbd0
// Address Range: [[0044bbd0, 0044bc1d]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0044bbd0(CActorDestination *this_ptr,uint flags)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0044bbd0(CActorDestination *this_ptr,uint flags)

{
  CActorDestination *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CActorDestinationTypeInfo_0059bf40);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CActorDestination *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
