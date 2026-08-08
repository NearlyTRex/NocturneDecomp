// Name: engine_texture.cpp_updateTextureWithPalette_FUN_00545a10
// Address: 00545a10
// Address Range: [[00545a10, 00545a33]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_00545a10(SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_00545a10(SMRGLTextureBasic *texture)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(texture);
  engine_special_cpp_updateTextureFromPalette_FUN_00532440(texture,_DAT_01c00020);
  return;
}
