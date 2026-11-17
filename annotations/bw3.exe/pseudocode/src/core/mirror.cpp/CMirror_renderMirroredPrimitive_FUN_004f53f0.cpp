// Name: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0
// Address: 004f53f0
// Address Range: [[004f53f0, 004f5474]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  g_SMRGLPrimitiveQuadIndex_01d81058.base.base.count = (prim->base).count;
  g_SMRGLPrimitiveQuadIndex_01d81058.base.surface_normal.A = (prim->surface_normal).A;
  g_SMRGLPrimitiveQuadIndex_01d81058.base.surface_normal.B = (prim->surface_normal).B;
  g_SMRGLPrimitiveQuadIndex_01d81058.base.surface_normal.C = (prim->surface_normal).C;
  g_SMRGLPrimitiveQuadIndex_01d81058.base.surface_normal.D = (prim->surface_normal).D;
  g_SMRGLPrimitiveQuadIndex_01d81058.vertices[0] = prim[1].base.type;
  g_SMRGLPrimitiveQuadIndex_01d81058.vertices[1] = prim[1].surface_normal.B.i;
  g_SMRGLPrimitiveQuadIndex_01d81058.vertices[2] = prim[2].base.type;
  g_SMRGLPrimitiveQuadIndex_01d81058.vertices[3] = prim[2].surface_normal.B.i;
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130
                    (this_ptr,&g_SMRGLPrimitiveQuadIndex_01d81058.base);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
            (g_CDemonRenderer_PTR_005f2afc,&(this_ptr->clip_primitive).base);
  return;
}
