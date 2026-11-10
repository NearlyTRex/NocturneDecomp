// Name: core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004fac50
// Address: 004fac50
// Address Range: [[004fac50, 004fac82]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004fac50(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004fac50(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10(this_ptr,prim);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
            (DAT_0060b280,&(this_ptr->clip_primitive).base);
  return;
}
