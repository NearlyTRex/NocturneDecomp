// Name: core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610
// Address: 00534610
// Address Range: [[00534610, 0053463f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if (DAT_0060b280->advanced_culling_enabled != 0) {
    iVar1 = core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_004fac90
                      (this_ptr->active_mirror,prim);
    return iVar1;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
                    (DAT_0060b280,prim);
  return iVar1;
}
