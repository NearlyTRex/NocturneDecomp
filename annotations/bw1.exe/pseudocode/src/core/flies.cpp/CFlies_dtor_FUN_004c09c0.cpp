// Name: core_flies.cpp_CFlies_dtor_FUN_004c09c0
// Address: 004c09c0
// Address Range: [[004c09c0, 004c0a0d]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004c09c0(CFlies *this_ptr,uint flags)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004c09c0(CFlies *this_ptr,uint flags)

{
  CFlies *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFliesTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CFlies *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
