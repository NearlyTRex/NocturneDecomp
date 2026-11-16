// Name: core_teleport.cpp_CTeleport_dtor_FUN_00568fe0
// Address: 00568fe0
// Address Range: [[00568fe0, 0056902d]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00568fe0(CTeleport *this_ptr,uint flags)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00568fe0(CTeleport *this_ptr,uint flags)

{
  CTeleport *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTeleportTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CTeleport *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
