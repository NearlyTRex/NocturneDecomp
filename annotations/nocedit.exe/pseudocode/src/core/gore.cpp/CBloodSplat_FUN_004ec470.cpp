// Name: core_gore.cpp_CBloodSplat_FUN_004ec470
// Address: 004ec470
// Address Range: [[004ec470, 004ec4f5]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_FUN_004ec470(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_FUN_004ec470(CBloodSplat *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  return;
}
