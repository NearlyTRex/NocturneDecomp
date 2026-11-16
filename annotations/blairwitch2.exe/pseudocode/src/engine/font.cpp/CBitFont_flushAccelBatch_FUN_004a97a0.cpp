// Name: engine_font.cpp_CBitFont_flushAccelBatch_FUN_004a97a0
// Address: 004a97a0
// Address Range: [[004a97a0, 004a986e]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_flushAccelBatch_FUN_004a97a0(CBitFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_flushAccelBatch_FUN_004a97a0(CBitFont *this_ptr)

{
  if (this_ptr->win_font_enabled == 0) {
    if ((0 < this_ptr->accel_vertex_count) && (0 < this_ptr->accel_index_count)) {
      engine_mini3d_cpp_useTexture_FUN_004f3380((int)&this_ptr->accel_texture);
      engine_mini3d_cpp_setRenderFlags_FUN_004f3550(0);
      engine_mini3d_cpp_setRendererOption_FUN_004f3470(0);
      engine_mini3d_cpp_disableClipping_FUN_004f5d90();
      engine_mini3d_cpp_disableFog_FUN_004f3710();
      engine_mini3d_cpp_enableExtraRenderState_FUN_004f3720();
      engine_mini3d_cpp_polyListD3DTL_FUN_004f40a0
                (this_ptr->accel_vertices,this_ptr->accel_vertex_count,this_ptr->accel_indices,
                 this_ptr->accel_index_count / 3);
      engine_mini3d_cpp_disableExtraRenderState_FUN_004f3730();
      engine_mini3d_cpp_setRendererOption_FUN_004f3470(1);
      engine_mini3d_cpp_setRenderFlags_FUN_004f3550(0xc0);
    }
    this_ptr->accel_index_count = 0;
    this_ptr->accel_vertex_count = 0;
    return;
  }
  engine_palette_cpp_CFont_flushTextQueue_FUN_00510d50(&this_ptr->win_font_helper->base);
  return;
}
