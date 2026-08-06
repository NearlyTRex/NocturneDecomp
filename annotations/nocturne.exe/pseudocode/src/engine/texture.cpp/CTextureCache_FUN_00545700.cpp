// Name: engine_texture.cpp_CTextureCache_FUN_00545700
// Address: 00545700
// Address Range: [[00545700, 00545804]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_FUN_00545700(CTextureCache *this_ptr)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_FUN_00545700(CTextureCache *this_ptr)

{
  int texture_index;
  SRenderVertex local_cc;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  texture_index = 0;
  if (0 < *(int *)(this_ptr[10].texture_names[0x1fe] + 8)) {
    do {
      engine_texture_cpp_CTextureCache_setupTexture_FUN_00545410(this_ptr,texture_index);
      texture_index = texture_index + 1;
      local_cc.projected_vertex.transformed_x = 1000;
      local_cc.projected_vertex.transformed_y = 1000;
      local_cc.projected_vertex.transformed_z = 2000;
      local_94 = 2000;
      local_64 = 2000;
      local_34 = 2000;
      local_8c = 0x5fffa;
      local_5c = 0x5fffa;
      local_58 = 0x5fffa;
      local_28 = 0x5fffa;
      local_cc.u = 0;
      local_cc.v = 0;
      local_84 = 0;
      local_80 = 0;
      local_54 = 0;
      local_50 = 0;
      local_24 = 0;
      local_20 = 0;
      local_98 = 1000;
      local_9c = 0xfffffc18;
      local_6c = 0xfffffc18;
      local_68 = 0xfffffc18;
      local_38 = 0xfffffc18;
      local_3c = 1000;
      local_cc.projected_vertex.screen_x = 0x4fffb;
      local_cc.projected_vertex.screen_y = 0x4fffb;
      local_88 = 0x4fffb;
      local_2c = 0x4fffb;
      engine_special_cpp_drawPolygon_FUN_00532620(&local_cc,4,1);
    } while (texture_index < *(int *)(this_ptr[10].texture_names[0x1fe] + 8));
  }
  return;
}
