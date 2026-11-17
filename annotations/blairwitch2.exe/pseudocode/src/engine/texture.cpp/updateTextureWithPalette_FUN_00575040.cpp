// Name: engine_texture.cpp_updateTextureWithPalette_FUN_00575040
// Address: 00575040
// Address Range: [[00575040, 00575063]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_00575040(SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_00575040(SMRGLTextureBasic *texture)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_00574e00(texture);
  engine_texture_cpp_CTextureCache_uploadTexture_FUN_00574a80(g_TextureCacheInstance,texture);
  return;
}
