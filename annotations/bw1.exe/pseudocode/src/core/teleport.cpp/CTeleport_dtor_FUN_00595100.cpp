// Name: core_teleport.cpp_CTeleport_dtor_FUN_00595100
// Address: 00595100
// Address Range: [[00595100, 0059514d]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00595100(CTeleport *this_ptr,uint flags)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00595100(CTeleport *this_ptr,uint flags)

{
  CTeleport *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTeleportTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CTeleport *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
