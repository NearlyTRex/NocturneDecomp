// Name: core_dlight.cpp_captureLightTextures_FUN_00474a90
// Address: 00474a90
// Address Range: [[00474a90, 00474aca]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_captureLightTextures_FUN_00474a90(void)

#include "nocturne.h"

void __cdecl core_dlight_cpp_captureLightTextures_FUN_00474a90(void)

{
  SMRGLTextureBasic *texture;
  
  texture = g_LightTextures + 2;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_LightTextures + 1);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
    texture = texture + 2;
  } while (texture != (SMRGLTextureBasic *)&g_LightTexturesEnd);
  return;
}
