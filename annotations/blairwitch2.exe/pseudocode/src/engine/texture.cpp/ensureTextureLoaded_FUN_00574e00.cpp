// Name: engine_texture.cpp_ensureTextureLoaded_FUN_00574e00
// Address: 00574e00
// Address Range: [[00574e00, 00574e76]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00574e00(SMRGLTextureBasic *texture)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_00574e00(SMRGLTextureBasic *texture)

{
  int iVar1;
  bool bVar2;
  
  if ((g_TexturesDisabled == 0) && (texture->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_00574490
                      (g_TextureCacheInstance,(texture->base).count & 0xffff,texture->texture_name);
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = engine_texture_cpp_CTextureCache_loadTexture_FUN_00573b80
                        (g_TextureCacheInstance,texture->texture_name);
    }
    (texture->base).count = iVar1;
    g_INT_02652eac = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520
              (g_TextureCacheInstance,texture,(uint)bVar2);
    return (SMRGLHeaderExtended *)(texture + 1);
  }
  return (SMRGLHeaderExtended *)(texture + 1);
}
