// Name: core_goggles.cpp_CGoggles_dtor_FUN_0059c220
// Address: 0059c220
// Address Range: [[0059c220, 0059c26d]]
// Convention: unknown
// Signature: CGoggles * core_goggles_cpp_CGoggles_dtor_FUN_0059c220(CGoggles *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGoggles * core_goggles_cpp_CGoggles_dtor_FUN_0059c220(CGoggles *this_ptr,uint flags)

{
  CGoggles *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGogglesTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CGoggles *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
