// Name: core_dlight.cpp_captureLightTextures_FUN_0045de60
// Address: 0045de60
// Address Range: [[0045de60, 0045de9a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_captureLightTextures_FUN_0045de60(void)

#include "nocturne.h"

void __cdecl core_dlight_cpp_captureLightTextures_FUN_0045de60(void)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&DAT_005f2870;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005f2840);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    texture = texture + 2;
  } while (texture != (SMRGLTextureBasic *)&DAT_005f2a20);
  return;
}
