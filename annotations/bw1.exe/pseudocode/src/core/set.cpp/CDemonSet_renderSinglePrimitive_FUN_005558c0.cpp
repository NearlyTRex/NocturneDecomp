// Name: core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0
// Address: 005558c0
// Address Range: [[005558c0, 005558ef]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if (DAT_00612560->advanced_culling_enabled != 0) {
    iVar1 = core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_00519be0
                      (this_ptr->active_mirror,prim);
    return iVar1;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                    (DAT_00612560,prim);
  return iVar1;
}
