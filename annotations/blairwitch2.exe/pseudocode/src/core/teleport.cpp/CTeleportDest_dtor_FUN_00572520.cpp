// Name: core_teleport.cpp_CTeleportDest_dtor_FUN_00572520
// Address: 00572520
// Address Range: [[00572520, 0057256d]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00572520(CTeleportDest *this_ptr,uint flags)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00572520(CTeleportDest *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTeleportDestTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CTeleportDest *)pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return (CTeleportDest *)pCVar1;
}
