// Name: engine_texture.cpp_loadAndUpdateTexture_FUN_0056ac80
// Address: 0056ac80
// Address Range: [[0056ac80, 0056aca3]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_0056ac80(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

#include "nocturne.h"

void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_0056ac80(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10(texture);
  engine_texture_cpp_CTextureCache_uploadTexture_FUN_0056a690(g_CTextureCache_PTR_02cfd0d0,texture);
  return;
}
