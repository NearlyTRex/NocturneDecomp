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
  
  engine_matrix_c_FUN_00509050();
  *(int *)&this_ptr->field_0x2c = local_18 / (*(int *)&this_ptr->field_0x1c << 8);
  *(int *)&this_ptr->field_0x30 = local_10 / (*(int *)&this_ptr->field_0x1c << 8);
  if (*(int *)&this_ptr->field_0x2c < 0) {
    *(int *)&this_ptr->field_0x2c = *(int *)&this_ptr->field_0x2c + -1;
  }
  if (*(int *)&this_ptr->field_0x30 < 0) {
    *(int *)&this_ptr->field_0x30 = *(int *)&this_ptr->field_0x30 + -1;
  }
  core_ground_cpp_CGround_transformAndStoreVertices_FUN_004e7780(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  core_ground_cpp_CGround_renderVisibleTerrain_FUN_004e7e60(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  return;
}
