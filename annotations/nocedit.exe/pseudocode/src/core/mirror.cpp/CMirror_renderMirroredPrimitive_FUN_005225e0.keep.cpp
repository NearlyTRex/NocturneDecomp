// Name: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0
// Address: 005225e0
// MANUAL RECONSTRUCTION
// Address Range: [[005225e0, 00522664]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_005225e0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_005225e0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  g_MirrorTempPrimitive.base.base.count = (prim->base).count;
  g_MirrorTempPrimitive.base.surface_normal = prim->surface_normal;
  g_MirrorTempPrimitive.vertices[0] = prim[1].base.type;
  g_MirrorTempPrimitive.vertices[1] = prim[1].surface_normal.B.i;
  g_MirrorTempPrimitive.vertices[2] = prim[2].base.type;
  g_MirrorTempPrimitive.vertices[3] = prim[2].surface_normal.B.i;
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
                    (this_ptr,&g_MirrorTempPrimitive.base);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
            (g_CDemonRendererPtr2,&(this_ptr->clip_primitive).base);
  return;
}
