// Name: engine_font.cpp_CBitFont_flushAccelBatch_FUN_004b13a0
// Address: 004b13a0
// Address Range: [[004b13a0, 004b145a]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_flushAccelBatch_FUN_004b13a0(CBitFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_flushAccelBatch_FUN_004b13a0(CBitFont *this_ptr)

{
  if (this_ptr->win_font_enabled == 0) {
    if ((0 < this_ptr->accel_vertex_count) && (0 < this_ptr->accel_index_count)) {
      engine_mini3d_cpp_useTexture_FUN_004ed980((int)&this_ptr->accel_texture);
      engine_mini3d_cpp_setRenderFlags_FUN_004edad0(0);
      engine_mini3d_cpp_disableClipping_FUN_004f02b0();
      engine_mini3d_cpp_disableFog_FUN_004edc90();
      engine_mini3d_cpp_enableExtraRenderState_FUN_004edca0();
      engine_mini3d_cpp_polyListD3DTL_FUN_004ee5b0
                (this_ptr->accel_vertices,this_ptr->accel_vertex_count,this_ptr->accel_indices,
                 this_ptr->accel_index_count / 3);
      engine_mini3d_cpp_disableExtraRenderState_FUN_004edcb0();
      engine_mini3d_cpp_setRenderFlags_FUN_004edad0(0xc0);
    }
    this_ptr->accel_index_count = 0;
    this_ptr->accel_vertex_count = 0;
    return;
  }
  engine_palette_cpp_CFont_flushTextQueue_FUN_00509d90(&this_ptr->win_font_helper->base);
  return;
}
