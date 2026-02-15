// Name: core_gore.cpp_CBloodPool_FUN_004ecc40
// Address: 004ecc40
// Address Range: [[004ecc40, 004eccdf]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_FUN_004ecc40(CBloodPool *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_FUN_004ecc40(CBloodPool *this_ptr)

{
  SMRGLPrimitiveQuadIndex_02d83368.base.base.count = 4;
  SMRGLPrimitiveQuadIndex_02d83368.vertices[0] = 0;
  SMRGLPrimitiveQuadIndex_02d83368.vertices[1] = 1;
  SMRGLPrimitiveQuadIndex_02d83368.vertices[2] = 2;
  SMRGLPrimitiveQuadIndex_02d83368.vertices[3] = 3;
  g_RenderVertexBuffer[0].u = 0x80000;
  g_RenderVertexBuffer[0].v = 0xf80000;
  g_RenderVertexBuffer[1].u = 0xf80000;
  g_RenderVertexBuffer[1].v = 0xf80000;
  g_RenderVertexBuffer[2].u = 0xf80000;
  g_RenderVertexBuffer[2].v = 0x80000;
  g_RenderVertexBuffer[3].u = 0x80000;
  g_RenderVertexBuffer[3].v = 0x80000;
  SMRGLPrimitiveQuadIndex_02d83368.base.surface_normal.A = 0;
  SMRGLPrimitiveQuadIndex_02d83368.base.surface_normal.C = 0;
  SMRGLPrimitiveQuadIndex_02d83368.base.surface_normal.D = 0;
  SMRGLPrimitiveQuadIndex_02d83368.base.surface_normal.B = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  return;
}
