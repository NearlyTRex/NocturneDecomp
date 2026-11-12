// Name: core_keyactor.cpp_CKeyActor_dtor_FUN_004dead0
// Address: 004dead0
// Address Range: [[004dead0, 004deb1d]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004dead0(CKeyActor *this_ptr,uint flags)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004dead0(CKeyActor *this_ptr,uint flags)

{
  CKeyActor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CKeyActorTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CKeyActor *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
