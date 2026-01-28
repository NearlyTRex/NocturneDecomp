// Name: engine_texture.cpp_updateTextureWithPalette_FUN_005dd900
// Address: 005dd900
// Address Range: [[005dd900, 005dd923]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_005dd900 (SMRGLTextureBasic *texture_to_load,SMRGLTextureBasic *texture_to_update)

#include "nocturne.h"

void __cdecl
engine_texture_cpp_updateTextureWithPalette_FUN_005dd900
          (SMRGLTextureBasic *texture_to_load,SMRGLTextureBasic *texture_to_update)

{
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture_to_load);
  wincore_windll_cpp_updateTexture_FUN_005b7380
            (texture_to_load,(SRGBColorPalette *)g_CurrentPalette);
  return;
}
