// Name: core_ground.cpp_CGround_render_FUN_004b2110
// Address: 004b2110
// Address Range: [[004b2110, 004b21a1]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_render_FUN_004b2110(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_render_FUN_004b2110(CGround *this_ptr)

{
  CVector3i local_18;
  
  engine_matrix_c_getCameraOrigin_FUN_004ce760(&local_18);
  this_ptr->camera_x = 0x4b2121 / (this_ptr->vertical_scale << 8);
  this_ptr->camera_y = local_18.y / (this_ptr->vertical_scale << 8);
  if (this_ptr->camera_x < 0) {
    this_ptr->camera_x = this_ptr->camera_x + -1;
  }
  if (this_ptr->camera_y < 0) {
    this_ptr->camera_y = this_ptr->camera_y + -1;
  }
  core_ground_cpp_CGround_transformAndStoreVertices_FUN_004b1910(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,1);
  core_ground_cpp_CGround_renderVisibleTerrain_FUN_004b1ff0(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(g_CDemonRenderer_PTR_005ae704,0);
  return;
}
