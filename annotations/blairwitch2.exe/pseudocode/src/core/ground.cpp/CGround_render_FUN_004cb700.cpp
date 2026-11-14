// Name: core_ground.cpp_CGround_render_FUN_004cb700
// Address: 004cb700
// Address Range: [[004cb700, 004cb791]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_render_FUN_004cb700(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_render_FUN_004cb700(CGround *this_ptr)

{
  CVector3i local_18;
  
  engine_matrix_c_getCameraOrigin_FUN_004ea3b0(&local_18);
  this_ptr->camera_x = local_18.x / (this_ptr->vertical_scale << 8);
  this_ptr->camera_y = local_18.z / (this_ptr->vertical_scale << 8);
  if (this_ptr->camera_x < 0) {
    this_ptr->camera_x = this_ptr->camera_x + -1;
  }
  if (this_ptr->camera_y < 0) {
    this_ptr->camera_y = this_ptr->camera_y + -1;
  }
  core_ground_cpp_CGround_transformAndStoreVertices_FUN_004caf00(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  core_ground_cpp_CGround_renderVisibleTerrain_FUN_004cb5e0(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  return;
}
