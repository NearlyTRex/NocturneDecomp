// Name: core_flies.cpp_CFlies_dtor_FUN_004a79f0
// Address: 004a79f0
// Address Range: [[004a79f0, 004a7a3d]]
// Convention: unknown
// Signature: CFlies * core_flies_cpp_CFlies_dtor_FUN_004a79f0(CFlies *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CFlies * core_flies_cpp_CFlies_dtor_FUN_004a79f0(CFlies *this_ptr,uint flags)

{
  CFlies *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CFliesTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CFlies *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
