// Name: core_keyactor.cpp_CKeyActor_dtor_FUN_004c3710
// Address: 004c3710
// Address Range: [[004c3710, 004c375d]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004c3710(CKeyActor *this_ptr,uint flags)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004c3710(CKeyActor *this_ptr,uint flags)

{
  CKeyActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CKeyActorTypeInfo_0059f900);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CKeyActor *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
