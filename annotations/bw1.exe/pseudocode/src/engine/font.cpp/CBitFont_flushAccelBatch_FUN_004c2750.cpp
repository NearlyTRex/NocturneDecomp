// Name: engine_font.cpp_CBitFont_flushAccelBatch_FUN_004c2750
// Address: 004c2750
// Address Range: [[004c2750, 004c280a]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_flushAccelBatch_FUN_004c2750(CBitFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_flushAccelBatch_FUN_004c2750(CBitFont *this_ptr)

{
  if (this_ptr->win_font_enabled == 0) {
    if ((0 < this_ptr->accel_vertex_count) && (0 < this_ptr->accel_index_count)) {
      engine_mini3d_cpp_useTexture_FUN_005121b0((int)&this_ptr->accel_texture);
      engine_mini3d_cpp_setRenderFlags_FUN_00512300(0);
      engine_mini3d_cpp_disableClipping_FUN_00514ae0();
      engine_mini3d_cpp_disableFog_FUN_005124c0();
      engine_mini3d_cpp_enableExtraRenderState_FUN_005124d0();
      engine_mini3d_cpp_polyListD3DTL_FUN_00512de0
                (this_ptr->accel_vertices,this_ptr->accel_vertex_count,this_ptr->accel_indices,
                 this_ptr->accel_index_count / 3);
      engine_mini3d_cpp_disableExtraRenderState_FUN_005124e0();
      engine_mini3d_cpp_setRenderFlags_FUN_00512300(0xc0);
    }
    this_ptr->accel_index_count = 0;
    this_ptr->accel_vertex_count = 0;
    return;
  }
  engine_palette_cpp_CFont_flushTextQueue_FUN_005320b0(&this_ptr->win_font_helper->base);
  return;
}
