// Name: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
// Address: 00469590
// Address Range: [[00469590, 00469667]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)

{
  if (this_ptr->projection_mode != 0) {
    _DAT_01d046a0 = "..\\engine\\drender.cpp";
    _DAT_01d046a4 = 0xad;
    core_main_c_FUN_004e4500("CDemonRenderer::clipAndFillPoly - Bad projection mode");
  }
  if (this_ptr->face_capture_enabled == 0) {
    if (((this_ptr->shadow_pass_active == 0) || ((DAT_01c38b54 & 1) != 0)) &&
       ((DAT_01c38b54 & 5) != 0)) {
      core_dpart_cpp_FUN_00461f70(vertex_indices,vertex_count);
    }
    else {
      core_dpart_cpp_FUN_004625f0((CVector3i *)vertex_indices,vertex_count);
    }
  }
  else {
    if (((this_ptr->shadow_pass_active == 0) || ((DAT_01c38b54 & 1) != 0)) &&
       ((DAT_01c38b54 & 5) != 0)) {
      if ((DAT_01c38b55 & 2) == 0) {
        engine_clipper_c_clipAndRasterize_FUN_00431d90(vertex_count,vertex_indices);
        return;
      }
      engine_clipper_c_clipPolygonToViewport_FUN_00433000(vertex_count,vertex_indices);
      return;
    }
    core_xform_cpp_transformAndClipGeometry_FUN_00594f40(vertex_count,vertex_indices);
    if (2 < DAT_007bee30) {
      unkafter_zombie_cpp_FUN_0059a0b0((SRenderVertex *)&DAT_007bee34,DAT_007bee30);
      return;
    }
  }
  return;
}
