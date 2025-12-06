// Name: core_gore.cpp_FUN_004ecc40
// Address: 004ecc40
// Address Range: [[004ecc40, 004eccdf]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecc40()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_gore.cpp_FUN_004ecc40() */

void core_gore_cpp_FUN_004ecc40(void)

{
  DAT_02d83368.base.count = 4;
  _DAT_02d83380 = 0;
  _DAT_02d83384 = 1;
  _DAT_02d83388 = 2;
  _DAT_02d8338c = 3;
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  g_RenderVertexBuffer[3].v = 7.34684e-40;
  DAT_02d83368.surface_normal.A = 0;
  DAT_02d83368.surface_normal.C = 0;
  DAT_02d83368.surface_normal.D = 0;
  DAT_02d83368.surface_normal.B = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}
