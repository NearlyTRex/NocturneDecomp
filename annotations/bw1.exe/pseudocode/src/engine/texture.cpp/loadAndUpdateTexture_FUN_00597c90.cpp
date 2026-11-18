// Name: engine_texture.cpp_loadAndUpdateTexture_FUN_00597c90
// Address: 00597c90
// Address Range: [[00597c90, 00597cb3]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00597c90(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

#include "nocturne.h"

void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00597c90(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_00597a20(texture);
  engine_texture_cpp_CTextureCache_uploadTexture_FUN_005976a0(g_TextureCacheInstance,texture);
  return;
}
