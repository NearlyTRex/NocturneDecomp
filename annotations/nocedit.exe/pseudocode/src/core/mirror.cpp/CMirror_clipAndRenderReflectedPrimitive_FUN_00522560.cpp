// Name: core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560
// Address: 00522560
// Address Range: [[00522560, 00522592]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(this_ptr,prim);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
            (g_CDemonRendererPtr2,&(this_ptr->clip_primitive).base);
  return;
}
