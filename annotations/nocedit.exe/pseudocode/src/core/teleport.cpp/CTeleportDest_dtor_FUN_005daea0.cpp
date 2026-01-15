// Name: core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0
// Address: 005daea0
// Address Range: [[005daea0, 005daeed]]
// Convention: __cdecl
// Signature: CTeleportDest * core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0(CTeleportDest * this_ptr, uint d1, uint d2)

#include "nocturne.h"

CTeleportDest * __cdecl
core_teleport_cpp_CTeleportDest_dtor_FUN_005daea0(CTeleportDest *this_ptr,uint d1,uint d2)

{
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTeleportDestTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d1 & 2) == 0) {
    return (CTeleportDest *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CTeleportDest *)ptr;
}
