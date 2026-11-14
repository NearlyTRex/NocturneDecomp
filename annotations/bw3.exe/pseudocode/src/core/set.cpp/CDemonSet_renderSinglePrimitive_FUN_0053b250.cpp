// Name: core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250
// Address: 0053b250
// Address Range: [[0053b250, 0053b27f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_0053b250(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  if (DAT_005f2afc->advanced_culling_enabled != 0) {
    iVar1 = core_mirror_cpp_CMirror_renderReflectedPrimitive_FUN_004f53b0
                      (this_ptr->active_mirror,prim);
    return iVar1;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                    (DAT_005f2afc,prim);
  return iVar1;
}
