// Name: core_dest.cpp_CActorDestination_dtor_FUN_0044bbd0
// Address: 0044bbd0
// Address Range: [[0044bbd0, 0044bc1d]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0044bbd0(CActorDestination *this_ptr,uint flags)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0044bbd0(CActorDestination *this_ptr,uint flags)

{
  CActorDestination *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CActorDestinationTypeInfo_0059bf40);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CActorDestination *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
