// Name: engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580
// Address: 005dd580
// Address Range: [[005dd580, 005dd684]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580(CTextureCache * this_ptr)

#include "nocturne.h"

void __cdecl
engine_texture_cpp_CTextureCache_renderAllTextures_FUN_005dd580(CTextureCache *this_ptr)

{
  int texture_index;
  BADSPACEBASE *in_ESP;
  SRenderVertex local_c8;
  uint local_98;
  uint local_94;
  uint uStack_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_68;
  uint local_64;
  uint uStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint local_28;
  uint local_24;
  uint local_20;
  uint uStack_1c;
  
  texture_index = 0;
  if (0 < this_ptr->current_texture_count) {
    do {
      engine_texture_cpp_CTextureCache_setupTexture_FUN_005dd200(this_ptr,texture_index);
      texture_index = texture_index + 1;
      local_c8.projected_vertex.transformed_x = 1000;
      local_c8.projected_vertex.transformed_y = 1000;
      local_c8.projected_vertex.transformed_z = 2000;
      uStack_90 = 2000;
      uStack_60 = 2000;
      uStack_30 = 2000;
      local_88 = 0x5fffa;
      local_58 = 0x5fffa;
      local_54 = 0x5fffa;
      local_24 = 0x5fffa;
      local_c8.u = 0.0;
      local_c8.v = 0.0;
      local_80 = 0;
      uStack_7c = 0;
      local_50 = 0;
      uStack_4c = 0;
      local_20 = 0;
      uStack_1c = 0;
      local_94 = 1000;
      local_98 = 0xfffffc18;
      local_68 = 0xfffffc18;
      local_64 = 0xfffffc18;
      local_34 = 0xfffffc18;
      local_38 = 1000;
      local_c8.projected_vertex.screen_x = 0x4fffb;
      local_c8.projected_vertex.screen_y = 0x4fffb;
      local_84 = 0x4fffb;
      local_28 = 0x4fffb;
      wincore_windll_cpp_drawPolygon_FUN_005b75e0(&local_c8,4,1);
    } while (texture_index < this_ptr->current_texture_count);
  }
  return;
}
