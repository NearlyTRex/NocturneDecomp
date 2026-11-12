// Name: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
// Address: 0046b160
// Address Range: [[0046b160, 0046b237]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

{
  if (this_ptr->projection_mode != 0) {
    _DAT_01d71de0 = "..\\engine\\drender.cpp";
    _DAT_01d71de4 = 0xad;
    core_main_c_FUN_004e4330("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (this_ptr->face_capture_enabled == 0) {
    if (((this_ptr->shadow_pass_active == 0) || ((DAT_01c6e2b4 & 1) != 0)) &&
       ((DAT_01c6e2b4 & 5) != 0)) {
      core_dpart_cpp_FUN_00466d50(vertex_indices,vertex_count);
    }
    else {
      core_dpart_cpp_FUN_004673d0((CVector3i *)vertex_indices,vertex_count);
    }
  }
  else {
    if (((this_ptr->shadow_pass_active == 0) || ((DAT_01c6e2b4 & 1) != 0)) &&
       ((DAT_01c6e2b4 & 5) != 0)) {
      if ((DAT_01c6e2b5 & 2) == 0) {
        engine_clipper_c_clipAndRasterize_FUN_0043a840(vertex_count,vertex_indices);
        return;
      }
      engine_clipper_c_clipPolygonToViewport_FUN_0043bac0(vertex_count,vertex_indices);
      return;
    }
    core_xform_cpp_transformAndClipGeometry_FUN_00587cd0(vertex_count,vertex_indices);
    if (2 < DAT_007e3e88) {
      core_asgaya_cpp_FUN_005a1ea0(&DAT_007e3e8c,DAT_007e3e88);
      return;
    }
  }
  return;
}
