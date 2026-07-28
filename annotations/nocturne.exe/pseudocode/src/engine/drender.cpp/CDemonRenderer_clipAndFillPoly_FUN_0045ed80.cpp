// Name: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
// Address: 0045ed80
// Address Range: [[0045ed80, 0045ee57]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

{
  if (this_ptr->projection_mode != 0) {
    PTR_01cc4800 = "..\\engine\\drender.cpp";
    INT_01cc4804 = 0xac;
    core_main_c_FUN_004c8440("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (this_ptr->face_capture_enabled == 0) {
    if (((this_ptr->face_count == 0) || ((DAT_01c039a0 & 1) != 0)) && ((DAT_01c039a0 & 5) != 0)) {
      engine_drender_cpp_renderTriangleTextured_FUN_00457a00(vertex_indices,vertex_count);
    }
    else {
      engine_drender_cpp_renderTriangleSimple_FUN_00458080((CVector3i *)vertex_indices,vertex_count)
      ;
    }
  }
  else {
    if (((this_ptr->face_count == 0) || ((DAT_01c039a0 & 1) != 0)) && ((DAT_01c039a0 & 5) != 0)) {
      if ((DAT_01c039a1 & 2) == 0) {
        engine_clipper_c_FUN_00432cd0(vertex_count,vertex_indices);
        return;
      }
      engine_clipper_c_clipPolygonToViewport_FUN_004349a0(vertex_count,vertex_indices);
      return;
    }
    core_xform_cpp_transformAndClipGeometry_FUN_0055e040(vertex_count,vertex_indices);
    if (2 < DAT_00766c70) {
      engine_3d_c_rasterizeTriangle_FUN_005628c0((SRenderVertex *)&DAT_00766c74,DAT_00766c70);
      return;
    }
  }
  return;
}
