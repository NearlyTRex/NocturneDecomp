// Name: core_dlight.cpp_captureLightTextures_FUN_0045de60
// Address: 0045de60
// Address Range: [[0045de60, 0045de9a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_captureLightTextures_FUN_0045de60(void)

#include "nocturne.h"

void __cdecl core_dlight_cpp_captureLightTextures_FUN_0045de60(void)

{
  SMRGLTextureBasic *texture;
  
  texture = (SMRGLTextureBasic *)&g_SLightGlowTable_005f2828.sprites[0].params;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,&g_SLightGlowTable_005f2828.headlight);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (g_CDemonRenderer_PTR_005f2afc,texture);
    texture = texture + 2;
  } while (texture != (SMRGLTextureBasic *)&DAT_005f2a20);
  return;
}
