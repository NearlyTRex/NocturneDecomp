// Name: engine_texture.cpp_loadAndUpdateTexture_FUN_00575070
// Address: 00575070
// Address Range: [[00575070, 00575093]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00575070(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

#include "nocturne.h"

void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00575070(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_00574e00(texture);
  engine_texture_cpp_CTextureCache_uploadTexture_FUN_00574a80(g_TextureCacheInstance,texture);
  return;
}
