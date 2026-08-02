// Name: core_door.cpp_CDoor_dtor_FUN_004566b0
// Address: 004566b0
// Address Range: [[004566b0, 004566fd]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_004566b0(CDoor *this_ptr,uint flags)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_004566b0(CDoor *this_ptr,uint flags)

{
  CDoor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDoorTypeInfo_0059c360);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CDoor *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
