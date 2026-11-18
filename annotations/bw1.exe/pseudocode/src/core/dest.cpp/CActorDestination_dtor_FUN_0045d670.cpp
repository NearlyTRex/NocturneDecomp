// Name: core_dest.cpp_CActorDestination_dtor_FUN_0045d670
// Address: 0045d670
// Address Range: [[0045d670, 0045d6bd]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0045d670(CActorDestination *this_ptr,uint flags)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_CActorDestination_dtor_FUN_0045d670(CActorDestination *this_ptr,uint flags)

{
  CActorDestination *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CActorDestinationTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CActorDestination *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
