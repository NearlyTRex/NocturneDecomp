// Name: core_water.cpp_CWater_captureTextures_FUN_00585de0
// Address: 00585de0
// Address Range: [[00585de0, 00585e06]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_captureTextures_FUN_00585de0(CWater *this_ptr)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_captureTextures_FUN_00585de0(CWater *this_ptr)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&DAT_0061e52c;
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
    texture = texture + 0x18;
  } while (texture != (SMRGLTextureBasic *)&DAT_0061e6ac);
  return;
}
