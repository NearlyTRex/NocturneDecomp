// Name: core_teleport.cpp_CTeleportDest_dtor_FUN_00595150
// Address: 00595150
// Address Range: [[00595150, 0059519d]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00595150(CTeleportDest *this_ptr,uint flags)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00595150(CTeleportDest *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CTeleportDestTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CTeleportDest *)pCVar1;
  }
  FUN_005c0344(pCVar1);
  return (CTeleportDest *)pCVar1;
}
