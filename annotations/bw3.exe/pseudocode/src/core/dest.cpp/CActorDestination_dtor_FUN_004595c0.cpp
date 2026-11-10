// Name: core_dest.cpp_CActorDestination_dtor_FUN_004595c0
// Address: 004595c0
// Address Range: [[004595c0, 0045960d]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_004595c0(CActorDestination *this_ptr,uint flags)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_004595c0(CActorDestination *this_ptr,uint flags)

{
  CActorDestination *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CActorDestinationTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CActorDestination *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
