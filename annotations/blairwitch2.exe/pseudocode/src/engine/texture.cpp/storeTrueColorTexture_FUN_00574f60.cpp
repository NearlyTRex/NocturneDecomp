// Name: engine_texture.cpp_storeTrueColorTexture_FUN_00574f60
// Address: 00574f60
// Address Range: [[00574f60, 00575000]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_storeTrueColorTexture_FUN_00574f60(SMRGLTextureBasic *texture,int dimension,uchar *true_color_data)

#include "nocturne.h"

void __cdecl engine_texture_cpp_storeTrueColorTexture_FUN_00574f60(SMRGLTextureBasic *texture,int dimension,uchar *true_color_data)

{
  int iVar1;
  
  if ((g_TexturesDisabled == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_00574490
                      (g_TextureCacheInstance,(texture->base).count & 0xffff,texture->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_CTextureCache_addTrueColorTexture_FUN_005742b0
                        (g_TextureCacheInstance,texture->texture_name,dimension,true_color_data);
      (texture->base).count = iVar1;
    }
    else {
      (texture->base).count = iVar1;
      engine_texture_cpp_CTextureCache_replaceTrueColorTexture_FUN_005743e0
                (g_TextureCacheInstance,texture,dimension,true_color_data);
    }
    g_INT_02652eac = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520(g_TextureCacheInstance,texture,2);
    return;
  }
  return;
}
