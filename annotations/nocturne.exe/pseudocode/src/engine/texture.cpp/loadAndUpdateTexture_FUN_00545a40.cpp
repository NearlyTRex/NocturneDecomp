// Name: engine_texture.cpp_loadAndUpdateTexture_FUN_00545a40
// Address: 00545a40
// Address Range: [[00545a40, 00545a61]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00545a40(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

#include "nocturne.h"

void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_00545a40(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(texture);
  engine_special_cpp_updateTexture_FUN_00532440(texture,palette);
  return;
}
