// Name: core_water.cpp_CWater_captureTextures_FUN_005a9a10
// Address: 005a9a10
// Address Range: [[005a9a10, 005a9a36]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_captureTextures_FUN_005a9a10(CWater *this_ptr)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_captureTextures_FUN_005a9a10(CWater *this_ptr)

{
  SMRGLTextureBasic *texture;
  
  texture = g_WaterTextures;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,texture);
    texture = texture + 1;
  } while (texture != g_WaterTextures + sizeof(g_WaterTextures) / sizeof(g_WaterTextures[0]));
  return;
}
