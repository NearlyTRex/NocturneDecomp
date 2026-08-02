// Name: core_teleport.cpp_CTeleportDest_dtor_FUN_00543ab0
// Address: 00543ab0
// Address Range: [[00543ab0, 00543afd]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00543ab0(CTeleportDest *this_ptr,uint flags)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00543ab0(CTeleportDest *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTeleportDestTypeInfo_005a30c0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CTeleportDest *)pCVar1;
  }
  FUN_00564494(pCVar1);
  return (CTeleportDest *)pCVar1;
}
