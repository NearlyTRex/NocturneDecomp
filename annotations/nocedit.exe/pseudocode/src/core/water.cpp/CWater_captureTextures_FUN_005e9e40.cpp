// Name: core_water.cpp_CWater_captureTextures_FUN_005e9e40
// Address: 005e9e40
// Address Range: [[005e9e40, 005e9e66]]
// Convention: __cdecl
// Signature: void core_water.cpp_CWater_captureTextures_FUN_005e9e40(CWater * this_ptr)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_captureTextures_FUN_005e9e40(CWater *this_ptr)

{
  SMRGLTextureBasic *texture;
  
  texture = g_WaterTextures;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
    texture = texture + 1;
  } while (texture != (SMRGLTextureBasic *)&g_WaterTexturesEnd);
  return;
}
