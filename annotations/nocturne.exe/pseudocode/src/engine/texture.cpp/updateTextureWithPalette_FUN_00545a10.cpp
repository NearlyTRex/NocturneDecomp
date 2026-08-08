// Name: engine_texture.cpp_updateTextureWithPalette_FUN_00545a10
// Address: 00545a10
// Address Range: [[00545a10, 00545a33]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_00545a10(SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_00545a10(SMRGLTextureBasic *texture)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(texture);
  engine_special_cpp_updateTextureFromPalette_FUN_00532440(texture,g_CurrentPalette);
  return;
}
