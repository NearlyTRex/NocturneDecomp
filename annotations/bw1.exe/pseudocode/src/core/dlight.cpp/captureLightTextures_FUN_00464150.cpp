// Name: core_dlight.cpp_captureLightTextures_FUN_00464150
// Address: 00464150
// Address Range: [[00464150, 0046418a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_captureLightTextures_FUN_00464150(void)

#include "nocturne.h"

void __cdecl core_dlight_cpp_captureLightTextures_FUN_00464150(void)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&DAT_006122d8;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_006122c0);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
    texture = texture + 2;
  } while (texture != (SMRGLTextureBasic *)&DAT_00612488);
  return;
}
