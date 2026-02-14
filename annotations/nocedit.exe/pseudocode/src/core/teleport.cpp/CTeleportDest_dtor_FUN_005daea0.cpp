// Name: core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0
// Address: 005daea0
// Address Range: [[005daea0, 005daeed]]
// Convention: __cdecl
// Signature: CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_005daea0(CTeleportDest *this_ptr,uint flags)

#include "nocturne.h"

CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_005daea0(CTeleportDest *this_ptr,uint flags)

{
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTeleportDestTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return (CTeleportDest *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CTeleportDest *)ptr;
}
