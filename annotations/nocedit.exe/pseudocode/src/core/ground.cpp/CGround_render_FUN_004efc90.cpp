// Name: core_ground.cpp_CGround_render_FUN_004efc90
// Address: 004efc90
// Address Range: [[004efc90, 004efd21]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_render_FUN_004efc90(CGround * this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_render_FUN_004efc90(CGround *this_ptr)

{
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int in_stack_ffffffec;
  
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0((CVector3i *)&stack0xffffffe8);
  this_ptr->camera_x = in_stack_ffffffec / (this_ptr->vertical_scale << 8);
  this_ptr->camera_y = unaff_EBP / (this_ptr->vertical_scale << 8);
  if (this_ptr->camera_x < 0) {
    this_ptr->camera_x = this_ptr->camera_x + -1;
  }
  if (this_ptr->camera_y < 0) {
    this_ptr->camera_y = this_ptr->camera_y + -1;
  }
  core_ground_cpp_CGround_transformAndStoreVertices_FUN_004ef490(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  core_ground_cpp_CGround_renderVisibleTerrain_FUN_004efb70(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}
