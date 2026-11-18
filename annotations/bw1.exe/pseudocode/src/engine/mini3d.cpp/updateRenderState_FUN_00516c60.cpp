// Name: engine_mini3d.cpp_updateRenderState_FUN_00516c60
// Address: 00516c60
// Address Range: [[00516c60, 00516cb0]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_updateRenderState_FUN_00516c60(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_updateRenderState_FUN_00516c60(void)

{
  g_RenderStateFlags.dword = g_INT_01d224b8 | (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_COLOR_FROM_VERTEX);
  g_VertexPreprocessMode = 0;
  if (g_INT_01d224c8 != 0) {
    g_RenderStateFlags.dword = g_INT_01d224b8 | (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_SOLID_ALPHA_BLEND | RENDER_COLOR_FROM_VERTEX);
  }
  if (g_INT_01d224c4 == 0) {
    g_BlendMode = g_INT_01d224bc;
    return;
  }
  g_RenderStateFlags.dword = g_RenderStateFlags.dword | (RENDER_FORCE_SOLID_LOOP | RENDER_BLEND_READ_DEST | RENDER_ALPHA_FROM_VERTEX);
  g_BlendMode = g_INT_01d224bc;
  return;
}
