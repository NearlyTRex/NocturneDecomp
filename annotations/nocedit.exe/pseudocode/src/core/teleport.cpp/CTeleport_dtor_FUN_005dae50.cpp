// Name: core_teleport.cpp_CTeleport_dtor_FUN_005dae50
// Address: 005dae50
// Address Range: [[005dae50, 005dae9d]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_005dae50(CTeleport *this_ptr,uint flags)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_005dae50(CTeleport *this_ptr,uint flags)

{
  CTeleport *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTeleportTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTeleport *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
