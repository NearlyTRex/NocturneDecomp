// Name: engine_texture.cpp_storePalettedTexture_FUN_00574ea0
// Address: 00574ea0
// Address Range: [[00574ea0, 00574f55]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_storePalettedTexture_FUN_00574ea0(SMRGLTextureBasic *texture,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

#include "nocturne.h"

void __cdecl engine_texture_cpp_storePalettedTexture_FUN_00574ea0(SMRGLTextureBasic *texture,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

{
  int iVar1;
  
  if ((g_TexturesDisabled == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_00574490
                      (g_TextureCacheInstance,(texture->base).count & 0xffff,texture->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_CTextureCache_addPalettedTexture_FUN_00574240
                        (g_TextureCacheInstance,texture->texture_name,dimension,texture_data,
                         palette_data,opacity_data);
      (texture->base).count = iVar1;
    }
    else {
      (texture->base).count = iVar1;
      engine_texture_cpp_CTextureCache_replacePalettedTexture_FUN_00574310
                (g_TextureCacheInstance,texture,dimension,texture_data,palette_data,opacity_data);
    }
    g_INT_02652eac = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520(g_TextureCacheInstance,texture,1);
    return;
  }
  return;
}
