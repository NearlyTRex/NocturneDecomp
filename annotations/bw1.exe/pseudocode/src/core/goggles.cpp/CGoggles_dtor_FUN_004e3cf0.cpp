// Name: core_goggles.cpp_CGoggles_dtor_FUN_004e3cf0
// Address: 004e3cf0
// Address Range: [[004e3cf0, 004e3d3d]]
// Convention: unknown
// Signature: CGoggles * core_goggles_cpp_CGoggles_dtor_FUN_004e3cf0(CGoggles *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGoggles * core_goggles_cpp_CGoggles_dtor_FUN_004e3cf0(CGoggles *this_ptr,uint flags)

{
  CGoggles *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CGogglesTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CGoggles *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
