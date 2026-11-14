// Name: core_water.cpp_CWater_captureTextures_FUN_00577260
// Address: 00577260
// Address Range: [[00577260, 00577286]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_captureTextures_FUN_00577260(CWater *this_ptr)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_captureTextures_FUN_00577260(CWater *this_ptr)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&DAT_00606cac;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    texture = texture + 1;
  } while (texture != (SMRGLTextureBasic *)&DAT_00606e2c);
  return;
}
