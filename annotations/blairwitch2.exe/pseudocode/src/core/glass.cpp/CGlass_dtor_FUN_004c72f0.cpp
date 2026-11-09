// Name: core_glass.cpp_CGlass_dtor_FUN_004c72f0
// Address: 004c72f0
// Address Range: [[004c72f0, 004c7354]]
// Convention: unknown
// Signature: CGlass * core_glass_cpp_CGlass_dtor_FUN_004c72f0(CGlass *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGlass * core_glass_cpp_CGlass_dtor_FUN_004c72f0(CGlass *this_ptr,uint flags)

{
  CMirror *pCVar1;
  CGlass *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CGlassTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_mirror_cpp_FUN_004f98c0((CMirror *)&this_ptr->field_0x348,0);
  pCVar2 = (CGlass *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)(pCVar1 + -0x348),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
