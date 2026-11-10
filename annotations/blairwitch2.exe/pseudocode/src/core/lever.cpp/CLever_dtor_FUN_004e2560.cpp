// Name: core_lever.cpp_CLever_dtor_FUN_004e2560
// Address: 004e2560
// Address Range: [[004e2560, 004e25ad]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004e2560(CLever *this_ptr,uint flags)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004e2560(CLever *this_ptr,uint flags)

{
  CLever *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLeverTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CLever *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
