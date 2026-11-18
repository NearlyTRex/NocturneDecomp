// Name: engine_mini3d.cpp_updateRenderState_FUN_004f2430
// Address: 004f2430
// Address Range: [[004f2430, 004f2480]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_updateRenderState_FUN_004f2430(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_updateRenderState_FUN_004f2430(void)

{
  g_RenderStateFlags.dword = g_INT_01d76c38 | (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_COLOR_FROM_VERTEX);
  g_VertexPreprocessMode = 0;
  if (g_INT_01d76c48 != 0) {
    g_RenderStateFlags.dword = g_INT_01d76c38 | (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_SOLID_ALPHA_BLEND | RENDER_COLOR_FROM_VERTEX);
  }
  if (g_INT_01d76c44 == 0) {
    g_INT_01c6e2ac = g_INT_01d76c3c;
    return;
  }
  g_RenderStateFlags.dword = g_RenderStateFlags.dword | (RENDER_FORCE_SOLID_LOOP | RENDER_BLEND_READ_DEST | RENDER_ALPHA_FROM_VERTEX);
  g_INT_01c6e2ac = g_INT_01d76c3c;
  return;
}
