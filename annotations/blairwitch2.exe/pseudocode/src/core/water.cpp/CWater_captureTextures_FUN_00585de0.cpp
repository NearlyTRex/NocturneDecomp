// Name: core_water.cpp_CWater_captureTextures_FUN_00585de0
// Address: 00585de0
// Address Range: [[00585de0, 00585e06]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_captureTextures_FUN_00585de0(CWater *this_ptr)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_captureTextures_FUN_00585de0(CWater *this_ptr)

{
  SMRGLTextureBasic *texture;
  
  texture = g_WaterTextures;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (g_CDemonRenderer_PTR_0060b280,texture);
    texture = texture + 1;
  } while (texture != g_WaterTextures + sizeof(g_WaterTextures) / sizeof(g_WaterTextures[0]));
  return;
}
