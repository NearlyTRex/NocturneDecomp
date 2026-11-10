// Name: core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004f5370
// Address: 004f5370
// Address Range: [[004f5370, 004f53a2]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004f5370(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004f5370(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130(this_ptr,prim);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
            (DAT_005f2afc,&(this_ptr->clip_primitive).base);
  return;
}
