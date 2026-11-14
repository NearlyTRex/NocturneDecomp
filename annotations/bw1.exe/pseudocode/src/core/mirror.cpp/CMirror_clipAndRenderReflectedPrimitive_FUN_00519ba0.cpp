// Name: core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00519ba0
// Address: 00519ba0
// Address Range: [[00519ba0, 00519bd2]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00519ba0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00519ba0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00519960(this_ptr,prim);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
            (DAT_00612560,&(this_ptr->clip_primitive).base);
  return;
}
