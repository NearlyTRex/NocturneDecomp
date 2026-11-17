// Name: engine_texture.cpp_updateTextureWithPalette_FUN_0056ac50
// Address: 0056ac50
// Address Range: [[0056ac50, 0056ac73]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_0056ac50(SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_0056ac50(SMRGLTextureBasic *texture)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10(texture);
  engine_texture_cpp_CTextureCache_uploadTexture_FUN_0056a690(g_CTextureCache_PTR_02cfd0d0,texture);
  return;
}
