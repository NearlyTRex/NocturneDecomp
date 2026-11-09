// Name: core_ground.cpp_CGround_render_FUN_004cb700
// Address: 004cb700
// Address Range: [[004cb700, 004cb791]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_render_FUN_004cb700(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_render_FUN_004cb700(CGround *this_ptr)

{
  int local_18;
  int local_10;
  
  engine_matrix_c_FUN_004ea3b0();
  *(int *)&this_ptr->field_0x2c = local_18 / (*(int *)&this_ptr->field_0x1c << 8);
  *(int *)&this_ptr->field_0x30 = local_10 / (*(int *)&this_ptr->field_0x1c << 8);
  if (*(int *)&this_ptr->field_0x2c < 0) {
    *(int *)&this_ptr->field_0x2c = *(int *)&this_ptr->field_0x2c + -1;
  }
  if (*(int *)&this_ptr->field_0x30 < 0) {
    *(int *)&this_ptr->field_0x30 = *(int *)&this_ptr->field_0x30 + -1;
  }
  core_ground_cpp_CGround_transformAndStoreVertices_FUN_004caf00(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  core_ground_cpp_CGround_renderVisibleTerrain_FUN_004cb5e0(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  return;
}
