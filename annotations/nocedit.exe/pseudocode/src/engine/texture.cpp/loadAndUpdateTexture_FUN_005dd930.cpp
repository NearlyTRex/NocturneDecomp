// Name: engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930
// Address: 005dd930
// Address Range: [[005dd930, 005dd951]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930(SMRGLTextureBasic * tex_to_load, SMRGLTextureBasic * tex_to_update, SRGBColorPalette * palette_data)

#include "nocturne.h"

void __cdecl
engine_texture_cpp_loadAndUpdateTexture_FUN_005dd930
          (SMRGLTextureBasic *tex_to_load,SMRGLTextureBasic *tex_to_update,
          SRGBColorPalette *palette_data)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(tex_to_load);
  wincore_windll_cpp_updateTexture_FUN_005b7380(tex_to_load,(SRGBColorPalette *)tex_to_update);
  return;
}
