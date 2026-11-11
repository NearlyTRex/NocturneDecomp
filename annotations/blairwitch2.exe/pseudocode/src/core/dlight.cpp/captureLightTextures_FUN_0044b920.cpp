// Name: core_dlight.cpp_captureLightTextures_FUN_0044b920
// Address: 0044b920
// Address Range: [[0044b920, 0044b95a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_captureLightTextures_FUN_0044b920(void)

#include "nocturne.h"

void __cdecl core_dlight_cpp_captureLightTextures_FUN_0044b920(void)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&DAT_0060aff8;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0060afe0);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
    texture = texture + 2;
  } while (texture != (SMRGLTextureBasic *)&DAT_0060b1a8);
  return;
}
