// Name: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
// Address: 00469590
// Address Range: [[00469590, 00469667]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

{
  if (this_ptr->projection_mode != 0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\drender.cpp";
    g_INT_01d046a4 = 0xad;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (this_ptr->face_capture_enabled == 0) {
    if (((this_ptr->shadow_pass_active == 0) || ((g_BIT_INTEGER32_01c38b54.bytes[0] & 1) != 0)) &&
       ((g_BIT_INTEGER32_01c38b54.bytes[0] & 5) != 0)) {
      engine_drender_cpp_renderTriangleTextured_FUN_00461f70(vertex_indices,vertex_count);
    }
    else {
      engine_drender_cpp_renderTriangleSimple_FUN_004625f0((CVector3i *)vertex_indices,vertex_count)
      ;
    }
  }
  else {
    if (((this_ptr->shadow_pass_active == 0) || ((g_BIT_INTEGER32_01c38b54.bytes[0] & 1) != 0)) &&
       ((g_BIT_INTEGER32_01c38b54.bytes[0] & 5) != 0)) {
      if ((g_BIT_INTEGER32_01c38b54.bytes[1] & 2) == 0) {
        engine_clipper_c_clipAndRasterize_FUN_00431d90(vertex_count,vertex_indices);
        return;
      }
      engine_clipper_c_clipPolygonToViewport_FUN_00433000(vertex_count,vertex_indices);
      return;
    }
    core_xform_cpp_transformAndClipGeometry_FUN_00594f40(vertex_count,vertex_indices);
    if (2 < g_INT_007bee30) {
      engine_zraster_c_rasterizeTriangle_FUN_0059a0b0(g_SRenderVertex_ARRAY_007bee34,g_INT_007bee30)
      ;
      return;
    }
  }
  return;
}
