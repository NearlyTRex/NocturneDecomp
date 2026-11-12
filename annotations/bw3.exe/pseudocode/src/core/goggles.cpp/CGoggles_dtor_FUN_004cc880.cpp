// Name: core_goggles.cpp_CGoggles_dtor_FUN_004cc880
// Address: 004cc880
// Address Range: [[004cc880, 004cc8cd]]
// Convention: unknown
// Signature: CGoggles * core_goggles_cpp_CGoggles_dtor_FUN_004cc880(CGoggles *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGoggles * core_goggles_cpp_CGoggles_dtor_FUN_004cc880(CGoggles *this_ptr,uint flags)

{
  CGoggles *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGogglesTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CGoggles *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
