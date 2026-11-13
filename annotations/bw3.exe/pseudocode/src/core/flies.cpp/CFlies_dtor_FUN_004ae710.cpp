// Name: core_flies.cpp_CFlies_dtor_FUN_004ae710
// Address: 004ae710
// Address Range: [[004ae710, 004ae75d]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004ae710(CFlies *this_ptr,uint flags)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_004ae710(CFlies *this_ptr,uint flags)

{
  CFlies *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CFliesTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CFlies *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
