// Name: core_glass.cpp_CGlass_dtor_FUN_004e3a60
// Address: 004e3a60
// Address Range: [[004e3a60, 004e3ac4]]
// Convention: unknown
// Signature: CGlass * core_glass_cpp_CGlass_dtor_FUN_004e3a60(CGlass *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGlass * core_glass_cpp_CGlass_dtor_FUN_004e3a60(CGlass *this_ptr,uint flags)

{
  CMirror *pCVar1;
  CGlass *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGlassTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = core_mirror_cpp_FUN_00518810(&this_ptr->mirror,0);
  pCVar2 = (CGlass *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)&pCVar1[-2].reflection.mirror_transform_matrix.m[2].x,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
