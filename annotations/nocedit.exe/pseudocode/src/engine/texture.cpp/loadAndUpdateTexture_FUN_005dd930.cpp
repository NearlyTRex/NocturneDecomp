// Name: engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930
// Address: 005dd930
// Address Range: [[005dd930, 005dd951]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_005dd930(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

#include "nocturne.h"

void __cdecl engine_texture_cpp_loadAndUpdateTexture_FUN_005dd930(SMRGLTextureBasic *texture,SRGBColorPalette *palette)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
  wincore_windll_cpp_updateTexture_FUN_005b7380(texture,palette);
  return;
}
