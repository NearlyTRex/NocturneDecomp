// Name: core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004d76e0
// Address: 004d76e0
// Address Range: [[004d76e0, 004d7712]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004d76e0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004d76e0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(this_ptr,prim);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->clip_primitive).base);
  return;
}
