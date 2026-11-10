// Name: core_ground.cpp_CGround_render_FUN_004e7f80
// Address: 004e7f80
// Address Range: [[004e7f80, 004e8011]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_render_FUN_004e7f80(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_render_FUN_004e7f80(CGround *this_ptr)

{
  int local_18;
  int local_10;
  
  engine_matrix_c_getCameraOrigin_FUN_00509050();
  this_ptr->camera_x = local_18 / (this_ptr->vertical_scale << 8);
  this_ptr->camera_y = local_10 / (this_ptr->vertical_scale << 8);
  if (this_ptr->camera_x < 0) {
    this_ptr->camera_x = this_ptr->camera_x + -1;
  }
  if (this_ptr->camera_y < 0) {
    this_ptr->camera_y = this_ptr->camera_y + -1;
  }
  core_ground_cpp_CGround_transformAndStoreVertices_FUN_004e7780(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  core_ground_cpp_CGround_renderVisibleTerrain_FUN_004e7e60(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  return;
}
