// Name: engine_texture.cpp_storePalettedTexture_FUN_0056aab0
// Address: 0056aab0
// Address Range: [[0056aab0, 0056ab65]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_storePalettedTexture_FUN_0056aab0(SMRGLTextureBasic *texture,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

#include "nocturne.h"

void __cdecl engine_texture_cpp_storePalettedTexture_FUN_0056aab0(SMRGLTextureBasic *texture,int dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data)

{
  int iVar1;
  
  if ((g_TexturesDisabled == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_0056a0a0
                      (g_TextureCacheInstance,(texture->base).count & 0xffff,texture->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_CTextureCache_addPalettedTexture_FUN_00569e50
                        (g_TextureCacheInstance,texture->texture_name,dimension,texture_data,
                         palette_data,opacity_data);
      (texture->base).count = iVar1;
    }
    else {
      (texture->base).count = iVar1;
      engine_texture_cpp_CTextureCache_replacePalettedTexture_FUN_00569f20
                (g_TextureCacheInstance,texture,dimension,texture_data,palette_data,opacity_data);
    }
    g_INT_02cfd0cc = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_0056a130(g_TextureCacheInstance,texture,1);
    return;
  }
  return;
}
