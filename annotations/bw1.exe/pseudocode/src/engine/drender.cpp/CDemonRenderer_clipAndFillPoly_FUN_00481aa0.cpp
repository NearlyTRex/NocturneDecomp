// Name: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
// Address: 00481aa0
// Address Range: [[00481aa0, 00481b77]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

{
  if (this_ptr->projection_mode != 0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\drender.cpp";
    g_INT_01d1d404 = 0xad;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (this_ptr->face_capture_enabled == 0) {
    if (((this_ptr->shadow_pass_active == 0) || ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) != 0)) &&
       ((g_RenderStateFlags.dword & (RENDER_TEX_ENABLE | RENDER_FOG_COLOR)) != 0)) {
      engine_drender_cpp_renderTriangleTextured_FUN_0047a480(vertex_indices,vertex_count);
    }
    else {
      engine_drender_cpp_renderTriangleSimple_FUN_0047ab00((CVector3i *)vertex_indices,vertex_count)
      ;
    }
  }
  else {
    if (((this_ptr->shadow_pass_active == 0) || ((g_RenderStateFlags.dword & RENDER_TEX_ENABLE) != 0)) &&
       ((g_RenderStateFlags.dword & (RENDER_TEX_ENABLE | RENDER_FOG_COLOR)) != 0)) {
      if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
        engine_clipper_c_clipAndRasterize_FUN_0043cbf0(vertex_count,vertex_indices);
        return;
      }
      engine_clipper_c_clipPolygonToViewport_FUN_0043de60(vertex_count,vertex_indices);
      return;
    }
    core_xform_cpp_transformAndClipGeometry_FUN_005b9fc0(vertex_count,vertex_indices);
    if (2 < g_INT_007c7554) {
      engine_zraster_c_rasterizeTriangle_FUN_005bf120(g_SRenderVertex_ARRAY_007c7558,g_INT_007c7554)
      ;
      return;
    }
  }
  return;
}
