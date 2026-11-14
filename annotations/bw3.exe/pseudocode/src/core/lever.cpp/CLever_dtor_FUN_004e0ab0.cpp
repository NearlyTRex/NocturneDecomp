// Name: core_lever.cpp_CLever_dtor_FUN_004e0ab0
// Address: 004e0ab0
// Address Range: [[004e0ab0, 004e0afd]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004e0ab0(CLever *this_ptr,uint flags)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004e0ab0(CLever *this_ptr,uint flags)

{
  CLever *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLeverTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CLever *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
