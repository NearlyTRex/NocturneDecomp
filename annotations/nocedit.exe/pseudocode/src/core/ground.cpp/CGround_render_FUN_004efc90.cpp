// Name: core_ground.cpp_CGround_render_FUN_004efc90
// Address: 004efc90
// Address Range: [[004efc90, 004efd21]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_render_FUN_004efc90(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_render_FUN_004efc90(CGround *this_ptr)

{
  CGround *this_ptr_00;
  CVector3i local_18;
  
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&local_18);
  this_ptr_00->camera_x = 0x4efca1 / (this_ptr_00->vertical_scale << 8);
  this_ptr_00->camera_y = local_18.y / (this_ptr_00->vertical_scale << 8);
  if (this_ptr_00->camera_x < 0) {
    this_ptr_00->camera_x = this_ptr_00->camera_x + -1;
  }
  if (this_ptr_00->camera_y < 0) {
    this_ptr_00->camera_y = this_ptr_00->camera_y + -1;
  }
  core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(this_ptr_00);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  core_ground_cpp_CGround_renderVisibleTerrain_FUN_004efb70(this_ptr_00);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return;
}
