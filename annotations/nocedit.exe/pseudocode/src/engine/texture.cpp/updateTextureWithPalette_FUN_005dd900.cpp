// Name: engine_texture.cpp_updateTextureWithPalette_FUN_005dd900
// Address: 005dd900
// Address Range: [[005dd900, 005dd923]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_005dd900(SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_005dd900(SMRGLTextureBasic *texture)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
  engine_special_cpp_updateTextureFromPalette_FUN_005b7380(texture,g_CurrentPalette);
  return;
}
