// Name: engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580
// Address: 005dd580
// Address Range: [[005dd580, 005dd684]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_renderAllTextures_FUN_005dd580(CTextureCache *this_ptr)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_renderAllTextures_FUN_005dd580(CTextureCache *this_ptr)

{
  int texture_index;
  SRenderVertex local_cc;
  
  texture_index = 0;
  if (0 < this_ptr->current_texture_count) {
    do {
      engine_texture_cpp_CTextureCache_setupTexture_FUN_005dd200(this_ptr,texture_index);
      texture_index = texture_index + 1;
      local_cc.projected_vertex.transformed_x = 1000;
      local_cc.projected_vertex.transformed_y = 1000;
      local_cc.projected_vertex.transformed_z = 2000;
      local_cc.u = 0;
      local_cc.v = 0;
      local_cc.projected_vertex.screen_x = 0x4fffb;
      local_cc.projected_vertex.screen_y = 0x4fffb;
      wincore_windll_cpp_drawPolygon_FUN_005b75e0(&local_cc,4,1);
    } while (texture_index < this_ptr->current_texture_count);
  }
  return;
}
