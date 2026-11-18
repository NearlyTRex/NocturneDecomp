// Name: engine_mini3d.cpp_updateRenderState_FUN_004f7da0
// Address: 004f7da0
// Address Range: [[004f7da0, 004f7df0]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_updateRenderState_FUN_004f7da0(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_updateRenderState_FUN_004f7da0(void)

{
  g_RenderStateFlags.dword = g_INT_01d09858 | (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_COLOR_FROM_VERTEX);
  g_VertexPreprocessMode = 0;
  if (g_INT_01d09868 != 0) {
    g_RenderStateFlags.dword = g_INT_01d09858 | (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_SOLID_ALPHA_BLEND | RENDER_COLOR_FROM_VERTEX);
  }
  if (g_INT_01d09864 == 0) {
    g_BlendMode = g_INT_01d0985c;
    return;
  }
  g_RenderStateFlags.dword = g_RenderStateFlags.dword | (RENDER_FORCE_SOLID_LOOP | RENDER_BLEND_READ_DEST | RENDER_ALPHA_FROM_VERTEX);
  g_BlendMode = g_INT_01d0985c;
  return;
}
