// Name: core_teleport.cpp_CTeleport_dtor_FUN_00543a60
// Address: 00543a60
// Address Range: [[00543a60, 00543aad]]
// Convention: __cdecl
// Signature: CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00543a60(CTeleport *this_ptr,uint flags)

#include "nocturne.h"

CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00543a60(CTeleport *this_ptr,uint flags)

{
  CTeleport *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CTeleportTypeInfo_005a30a0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CTeleport *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
