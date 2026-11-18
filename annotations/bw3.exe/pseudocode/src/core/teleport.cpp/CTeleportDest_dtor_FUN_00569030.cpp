// Name: core_teleport.cpp_CTeleportDest_dtor_FUN_00569030
// Address: 00569030
// Address Range: [[00569030, 0056907d]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00569030(CTeleportDest *this_ptr,uint flags)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00569030(CTeleportDest *this_ptr,uint flags)

{
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTeleportDestTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CTeleportDest *)ptr;
  }
  debugFreeChecked(ptr);
  return (CTeleportDest *)ptr;
}
