// Name: core_teleport.cpp_CTeleportDest_dtor_FUN_00569030
// Address: 00569030
// Address Range: [[00569030, 0056907d]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00569030(CTeleportDest *this_ptr,uint flags)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00569030(CTeleportDest *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTeleportDestTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CTeleportDest *)pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return (CTeleportDest *)pCVar1;
}
