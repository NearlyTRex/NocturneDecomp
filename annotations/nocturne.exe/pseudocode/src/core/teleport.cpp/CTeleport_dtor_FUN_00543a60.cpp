// Name: core_teleport.cpp_CTeleport_dtor_FUN_00543a60
// Address: 00543a60
// Address Range: [[00543a60, 00543aad]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00543a60(CTeleport *this_ptr,uint flags)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00543a60(CTeleport *this_ptr,uint flags)

{
  CTeleport *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTeleportTypeInfo_005a30a0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  ptr = (CTeleport *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
