// Name: engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
// Address: 005dd800
// Address Range: [[005dd800, 005dd8be]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic *texture)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic *texture)

{
  int texture_index;
  bool bVar1;
  
  if ((g_TexturesDisabled == 0) && (texture->texture_name[0] != '\0')) {
    texture_index =
         engine_texture_cpp_CTextureCache_findTexture_FUN_005dd180
                   (g_TextureCacheInstance,(texture->base).count & 0xffff,texture->texture_name);
    bVar1 = texture_index == -1;
    if (bVar1) {
      texture_index =
           engine_texture_cpp_CTextureCache_loadTexture_FUN_005dcc00
                     (g_TextureCacheInstance,texture->texture_name);
    }
    (texture->base).count = texture_index;
    g_CurrentTextureIndex = texture_index;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_005dd200(g_TextureCacheInstance,texture_index)
    ;
    if (g_UseExternalRenderer != 0) {
      if (bVar1) {
        wincore_windll_cpp_updateTexture_FUN_005b7380(texture,g_CurrentPalette);
        return (SMRGLHeaderExtended *)(texture + 1);
      }
      wincore_windll_cpp_selectTexture_FUN_005b7340(texture,g_CurrentPalette);
    }
    return (SMRGLHeaderExtended *)(texture + 1);
  }
  return (SMRGLHeaderExtended *)(texture + 1);
}
