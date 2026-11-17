// Name: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004d7760
// Address: 004d7760
// Address Range: [[004d7760, 004d77e4]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  
  g_SMRGLPrimitiveQuadIndex_01cc9428.base.base.count = (prim->base).count;
  g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.A = (prim->surface_normal).A;
  g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.B = (prim->surface_normal).B;
  g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.C = (prim->surface_normal).C;
  g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.D = (prim->surface_normal).D;
  g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[0] = prim[1].base.type;
  g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[1] = prim[1].surface_normal.B.i;
  g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[2] = prim[2].base.type;
  g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[3] = prim[2].surface_normal.B.i;
  uVar1 = core_mirror_cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
                    (this_ptr,&g_SMRGLPrimitiveQuadIndex_01cc9428.base);
  if (uVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->clip_primitive).base);
  return;
}
