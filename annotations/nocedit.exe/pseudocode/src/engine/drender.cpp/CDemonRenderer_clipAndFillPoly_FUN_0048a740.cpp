// Name: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
// Address: 0048a740
// Address Range: [[0048a740, 0048a817]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
          (CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

{
  int unaff_EBP;
  
  if (this_ptr->projection_mode != 0) {
    g_CurrentFilename = "..\\engine\\drender.cpp";
    g_CurrentLineNumber = 0xad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (this_ptr->face_capture_enabled == 0) {
    if (((this_ptr->face_count == 0) || (((byte)g_RenderStateFlags & 1) != 0)) &&
       (((byte)g_RenderStateFlags & 5) != 0)) {
      engine_drender_cpp_renderTriangleTextured_FUN_00483370(vertex_indices,vertex_count);
    }
    else {
      engine_drender_cpp_renderTriangleSimple_FUN_004839f0((CVector3i *)vertex_indices,vertex_count)
      ;
    }
  }
  else {
    if (((this_ptr->face_count == 0) || (((byte)g_RenderStateFlags & 1) != 0)) &&
       (((byte)g_RenderStateFlags & 5) != 0)) {
      if ((g_RenderStateFlags._1_1_ & 2) == 0) {
        engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,vertex_indices);
        return;
      }
      engine_clipper_c_clipPolygonToViewport_FUN_00438420(vertex_count,vertex_indices);
      return;
    }
    core_xform_cpp_transformAndClipGeometry_FUN_005f8550(vertex_count,vertex_indices);
    if (2 < g_ClippedVertexCount) {
      engine_3d_c_rasterizeTriangle_FUN_005fcfc0
                (g_ClippedVertexBuffer,g_ClippedVertexCount,unaff_EBP);
      return;
    }
  }
  return;
}
